// Copyright (c) 1995-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in
// OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <Mathematics/BetaSpline/BSplCLib.hxx>
#include <Foundation/TColStd/TColStd_Array1OfInteger.hxx>
#include <Foundation/TColStd/TColStd_Array1OfReal.hxx>
#include <Mathematics/Polynomial/PLib.hxx>
#include <Mathematics/BetaSpline/BSplCLib_Helpers.hxx>

//=======================================================================
// function : InsertKnots
// purpose  : insert an array of knots and multiplicities
//=======================================================================

void BSplCLib::InsertKnots(const Standard_Integer Degree,
                           const Standard_Boolean Periodic,
                           const Standard_Integer Dimension,
                           const TColStd_Array1OfReal& Poles,
                           const TColStd_Array1OfReal& Knots,
                           const TColStd_Array1OfInteger& Mults,
                           const TColStd_Array1OfReal& AddKnots,
                           const TColStd_Array1OfInteger* AddMults,
                           TColStd_Array1OfReal& NewPoles,
                           TColStd_Array1OfReal& NewKnots,
                           TColStd_Array1OfInteger& NewMults,
                           const Standard_Real Tolerance,
                           const Standard_Boolean Add) {
  Standard_Boolean addflat = AddMults == nullptr;

  Standard_Integer i, k, mult, firstmult;
  Standard_Integer index, kn, curnk, curk;
  Standard_Integer p, np, curp, curnp, length, depth;
  Standard_Real u;
  Standard_Integer need;
  Standard_Real Eps;

  // -------------------
  // create local arrays
  // -------------------

  Standard_Real* knots = new Standard_Real[2 * Degree];
  Standard_Real* poles = new Standard_Real[(2 * Degree + 1) * Dimension];

  //----------------------------
  // loop on the knots to insert
  //----------------------------

  curk = Knots.Lower() - 1;      // current position in Knots
  curnk = NewKnots.Lower() - 1;  // current position in NewKnots
  curp = Poles.Lower();          // current position in Poles
  curnp = NewPoles.Lower();      // current position in NewPoles

  // NewKnots, NewMults, NewPoles contains the current state of the curve

  // index is the first pole of the current curve for insertion schema

  if (Periodic)
    index = -Mults(Mults.Lower());
  else
    index = -Degree - 1;

  // on Periodic curves the first knot and the last knot are inserted later
  // (they are the same knot)
  firstmult = 0;  // multiplicity of the first-last knot for periodic

  // kn current knot to insert in AddKnots

  for (kn = AddKnots.Lower(); kn <= AddKnots.Upper(); kn++) {
    u = AddKnots(kn);
    Eps = Max(Tolerance, Epsilon(u));

    //-----------------------------------
    // find the position in the old knots
    // and copy to the new knots
    //-----------------------------------

    while (curk < Knots.Upper() && Knots(curk + 1) - u <= Eps) {
      curk++;
      curnk++;
      NewKnots(curnk) = Knots(curk);
      index += NewMults(curnk) = Mults(curk);
    }

    //-----------------------------------
    // Slice the knots and the mults
    // to the current size of the new curve
    //-----------------------------------

    i = curnk + Knots.Upper() - curk;
    TColStd_Array1OfReal nknots(NewKnots(NewKnots.Lower()), NewKnots.Lower(),
                                i);
    TColStd_Array1OfInteger nmults(NewMults(NewMults.Lower()), NewMults.Lower(),
                                   i);

    //-----------------------------------
    // copy enough knots
    // to compute the insertion schema
    //-----------------------------------

    k = curk;
    i = curnk;
    mult = 0;

    while (mult < Degree && k < Knots.Upper()) {
      k++;
      i++;
      nknots(i) = Knots(k);
      mult += nmults(i) = Mults(k);
    }

    // copy knots at the end for periodic curve
    if (Periodic) {
      mult = 0;
      k = Knots.Upper();
      i = nknots.Upper();

      while (mult < Degree && i > curnk) {
        nknots(i) = Knots(k);
        mult += nmults(i) = Mults(k);
        k--;
        i--;
      }
      nmults(nmults.Upper()) = nmults(nmults.Lower());
    }

    //------------------------------------
    // do the boor scheme on the new curve
    // to insert the new knot
    //------------------------------------

    Standard_Boolean sameknot = (Abs(u - NewKnots(curnk)) <= Eps);

    if (sameknot)
      length = Max(0, Degree - NewMults(curnk));
    else
      length = Degree;

    if (addflat)
      depth = 1;
    else
      depth = Min(Degree, (*AddMults)(kn));  // FIXME: inelegant

    if (sameknot) {
      if (Add) {
        if ((NewMults(curnk) + depth) > Degree)
          depth = Degree - NewMults(curnk);
      } else {
        depth = Max(0, depth - NewMults(curnk));
      }

      if (Periodic) {
        // on periodic curve the first and last knot are delayed to the end
        if (curk == Knots.Lower() || (curk == Knots.Upper())) {
          if (firstmult == 0)  // do that only once
            firstmult += depth;
          depth = 0;
        }
      }
    }
    if (depth <= 0)
      continue;

    BuildKnots(Degree, curnk, Periodic, nknots, &nmults, *knots);

    // copy the poles

    need = NewPoles.Lower() + (index + length + 1) * Dimension - curnp;
    need = Min(need, Poles.Upper() - curp + 1);

    p = curp;
    np = curnp;
    BSplCLib_Copy(need, p, Poles, np, NewPoles);
    curp += need;
    curnp += need;

    // slice the poles to the current number of poles in case of periodic
    TColStd_Array1OfReal npoles(NewPoles(NewPoles.Lower()), NewPoles.Lower(),
                                curnp - 1);

    BuildBoor(index, length, Dimension, npoles, *poles);
    BoorScheme(u, Degree, *knots, Dimension, *poles, depth, length);

    //-------------------
    // copy the new poles
    //-------------------

    curnp += depth * Dimension;  // number of poles is increased by depth
    TColStd_Array1OfReal ThePoles(NewPoles(NewPoles.Lower()), NewPoles.Lower(),
                                  curnp - 1);
    np = NewKnots.Lower() + (index + 1) * Dimension;

    for (i = 1; i <= length + depth; i++)
      GetPole(i, length, depth, Dimension, *poles, np, ThePoles);

    //-------------------
    // insert the knot
    //-------------------

    index += depth;
    if (sameknot) {
      NewMults(curnk) += depth;
    } else {
      curnk++;
      NewKnots(curnk) = u;
      NewMults(curnk) = depth;
    }
  }

  //------------------------------
  // copy the last poles and knots
  //------------------------------

  BSplCLib_Copy(Poles.Upper() - curp + 1, curp, Poles, curnp, NewPoles);

  while (curk < Knots.Upper()) {
    curk++;
    curnk++;
    NewKnots(curnk) = Knots(curk);
    NewMults(curnk) = Mults(curk);
  }

  //------------------------------
  // process the first-last knot
  // on periodic curves
  //------------------------------

  if (firstmult > 0) {
    curnk = NewKnots.Lower();
    if (NewMults(curnk) + firstmult > Degree) {
      firstmult = Degree - NewMults(curnk);
    }
    if (firstmult > 0) {
      length = Degree - NewMults(curnk);
      depth = firstmult;

      BuildKnots(Degree, curnk, Periodic, NewKnots, &NewMults,
                 *knots);  // FIXME: NO: &NewMults
      TColStd_Array1OfReal npoles(NewPoles(NewPoles.Lower()), NewPoles.Lower(),
                                  NewPoles.Upper() - depth * Dimension);
      BuildBoor(0, length, Dimension, npoles, *poles);
      BoorScheme(NewKnots(curnk), Degree, *knots, Dimension, *poles, depth,
                 length);

      //---------------------------
      // copy the new poles
      // but rotate them with depth
      //---------------------------

      np = NewPoles.Lower();

      for (i = depth; i < length + depth; i++)
        GetPole(i, length, depth, Dimension, *poles, np, NewPoles);

      np = NewPoles.Upper() - depth * Dimension + 1;

      for (i = 0; i < depth; i++)
        GetPole(i, length, depth, Dimension, *poles, np, NewPoles);

      NewMults(NewMults.Lower()) += depth;
      NewMults(NewMults.Upper()) += depth;
    }
  }
  // free local arrays
  delete[] knots;
  delete[] poles;
}

// Insert several knots

template <typename Array1OfPoints>
static void InsertKnots(const Standard_Integer Degree,
                        const Standard_Boolean Periodic,
                        const Array1OfPoints& Poles,
                        const TColStd_Array1OfReal& Knots,
                        const TColStd_Array1OfInteger& Mults,
                        const TColStd_Array1OfReal& AddKnots,
                        const TColStd_Array1OfInteger* AddMults,
                        Array1OfPoints& NewPoles,
                        TColStd_Array1OfReal& NewKnots,
                        TColStd_Array1OfInteger& NewMults,
                        const Standard_Real Epsilon,
                        const Standard_Boolean Add) {
  Standard_Integer dim = DimensionTrait<Array1OfPoints>::d;

  TColStd_Array1OfReal poles(1, dim * Poles.Length());
  TColStd_Array1OfReal newpoles(1, dim * NewPoles.Length());

  PLib::SetPoles(Poles, poles);

  BSplCLib::InsertKnots(Degree, Periodic, dim, poles, Knots, Mults, AddKnots,
                        AddMults, newpoles, NewKnots, NewMults, Epsilon, Add);

  PLib::GetPoles(newpoles, NewPoles);
}

template <typename Array1OfPoints>
static void InsertKnots(const Standard_Integer Degree,
                        const Standard_Boolean Periodic,
                        const Array1OfPoints& Poles,
                        const TColStd_Array1OfReal& Weights,
                        const TColStd_Array1OfReal& Knots,
                        const TColStd_Array1OfInteger& Mults,
                        const TColStd_Array1OfReal& AddKnots,
                        const TColStd_Array1OfInteger* AddMults,
                        Array1OfPoints& NewPoles,
                        TColStd_Array1OfReal& NewWeights,
                        TColStd_Array1OfReal& NewKnots,
                        TColStd_Array1OfInteger& NewMults,
                        const Standard_Real Epsilon,
                        const Standard_Boolean Add) {
  Standard_Integer dim = DimensionTrait<Array1OfPoints>::d + 1;

  TColStd_Array1OfReal poles(1, dim * Poles.Length());
  TColStd_Array1OfReal newpoles(1, dim * NewPoles.Length());

  PLib::SetPoles(Poles, Weights, poles);

  BSplCLib::InsertKnots(Degree, Periodic, dim, poles, Knots, Mults, AddKnots,
                        AddMults, newpoles, NewKnots, NewMults, Epsilon, Add);

  PLib::GetPoles(newpoles, NewPoles, NewWeights);
}

// Insert a single knot

template <typename Array1OfPoints>
static void InsertKnot(const Standard_Real U,
                       const Standard_Integer UMult,
                       const Standard_Integer Degree,
                       const Standard_Boolean Periodic,
                       const Array1OfPoints& Poles,
                       const TColStd_Array1OfReal& Knots,
                       const TColStd_Array1OfInteger& Mults,
                       Array1OfPoints& NewPoles) {
  TColStd_Array1OfReal k(1, 1);
  k(1) = U;
  TColStd_Array1OfInteger m(1, 1);
  m(1) = UMult;
  TColStd_Array1OfReal nk(1, Knots.Length() + 1);
  TColStd_Array1OfInteger nm(1, Knots.Length() + 1);
  BSplCLib::InsertKnots(Degree, Periodic, Poles, Knots, Mults, k, &m, NewPoles,
                        nk, nm, Epsilon(U));
}

template <typename Array1OfPoints>
static void InsertKnot(const Standard_Real U,
                       const Standard_Integer UMult,
                       const Standard_Integer Degree,
                       const Standard_Boolean Periodic,
                       const Array1OfPoints& Poles,
                       const TColStd_Array1OfReal& Weights,
                       const TColStd_Array1OfReal& Knots,
                       const TColStd_Array1OfInteger& Mults,
                       Array1OfPoints& NewPoles,
                       TColStd_Array1OfReal& NewWeights) {
  TColStd_Array1OfReal k(1, 1);
  k(1) = U;
  TColStd_Array1OfInteger m(1, 1);
  m(1) = UMult;
  TColStd_Array1OfReal nk(1, Knots.Length() + 1);
  TColStd_Array1OfInteger nm(1, Knots.Length() + 1);
  BSplCLib::InsertKnots(Degree, Periodic, Poles, Weights, Knots, Mults, k, &m,
                        NewPoles, NewWeights, nk, nm, Epsilon(U));
}

// Instantiating for 2D curves

void BSplCLib::InsertKnots(const Standard_Integer Degree,
                           const Standard_Boolean Periodic,
                           const TColgp_Array1OfPnt2d& Poles,
                           const TColStd_Array1OfReal& Knots,
                           const TColStd_Array1OfInteger& Mults,
                           const TColStd_Array1OfReal& AddKnots,
                           const TColStd_Array1OfInteger* AddMults,
                           TColgp_Array1OfPnt2d& NewPoles,
                           TColStd_Array1OfReal& NewKnots,
                           TColStd_Array1OfInteger& NewMults,
                           const Standard_Real Epsilon,
                           const Standard_Boolean Add) {
  ::InsertKnots(Degree, Periodic, Poles, Knots, Mults, AddKnots, AddMults,
                NewPoles, NewKnots, NewMults, Epsilon, Add);
}

void BSplCLib::InsertKnots(const Standard_Integer Degree,
                           const Standard_Boolean Periodic,
                           const TColgp_Array1OfPnt2d& Poles,
                           const TColStd_Array1OfReal& Weights,
                           const TColStd_Array1OfReal& Knots,
                           const TColStd_Array1OfInteger& Mults,
                           const TColStd_Array1OfReal& AddKnots,
                           const TColStd_Array1OfInteger* AddMults,
                           TColgp_Array1OfPnt2d& NewPoles,
                           TColStd_Array1OfReal& NewWeights,
                           TColStd_Array1OfReal& NewKnots,
                           TColStd_Array1OfInteger& NewMults,
                           const Standard_Real Epsilon,
                           const Standard_Boolean Add) {
  ::InsertKnots(Degree, Periodic, Poles, Weights, Knots, Mults, AddKnots,
                AddMults, NewPoles, NewWeights, NewKnots, NewMults, Epsilon,
                Add);
}

void BSplCLib::InsertKnot(const Standard_Integer,
                          const Standard_Real U,
                          const Standard_Integer UMult,
                          const Standard_Integer Degree,
                          const Standard_Boolean Periodic,
                          const TColgp_Array1OfPnt2d& Poles,
                          const TColStd_Array1OfReal& Knots,
                          const TColStd_Array1OfInteger& Mults,
                          TColgp_Array1OfPnt2d& NewPoles) {
  ::InsertKnot(U, UMult, Degree, Periodic, Poles, Knots, Mults, NewPoles);
}

void BSplCLib::InsertKnot(const Standard_Integer,
                          const Standard_Real U,
                          const Standard_Integer UMult,
                          const Standard_Integer Degree,
                          const Standard_Boolean Periodic,
                          const TColgp_Array1OfPnt2d& Poles,
                          const TColStd_Array1OfReal& Weights,
                          const TColStd_Array1OfReal& Knots,
                          const TColStd_Array1OfInteger& Mults,
                          TColgp_Array1OfPnt2d& NewPoles,
                          TColStd_Array1OfReal& NewWeights) {
  ::InsertKnot(U, UMult, Degree, Periodic, Poles, Weights, Knots, Mults,
               NewPoles, NewWeights);
}

// Instantiating for 3D curves

void BSplCLib::InsertKnots(const Standard_Integer Degree,
                           const Standard_Boolean Periodic,
                           const TColgp_Array1OfPnt& Poles,
                           const TColStd_Array1OfReal& Knots,
                           const TColStd_Array1OfInteger& Mults,
                           const TColStd_Array1OfReal& AddKnots,
                           const TColStd_Array1OfInteger* AddMults,
                           TColgp_Array1OfPnt& NewPoles,
                           TColStd_Array1OfReal& NewKnots,
                           TColStd_Array1OfInteger& NewMults,
                           const Standard_Real Epsilon,
                           const Standard_Boolean Add) {
  ::InsertKnots(Degree, Periodic, Poles, Knots, Mults, AddKnots, AddMults,
                NewPoles, NewKnots, NewMults, Epsilon, Add);
}

void BSplCLib::InsertKnots(const Standard_Integer Degree,
                           const Standard_Boolean Periodic,
                           const TColgp_Array1OfPnt& Poles,
                           const TColStd_Array1OfReal& Weights,
                           const TColStd_Array1OfReal& Knots,
                           const TColStd_Array1OfInteger& Mults,
                           const TColStd_Array1OfReal& AddKnots,
                           const TColStd_Array1OfInteger* AddMults,
                           TColgp_Array1OfPnt& NewPoles,
                           TColStd_Array1OfReal& NewWeights,
                           TColStd_Array1OfReal& NewKnots,
                           TColStd_Array1OfInteger& NewMults,
                           const Standard_Real Epsilon,
                           const Standard_Boolean Add) {
  ::InsertKnots(Degree, Periodic, Poles, Weights, Knots, Mults, AddKnots,
                AddMults, NewPoles, NewWeights, NewKnots, NewMults, Epsilon,
                Add);
}

void BSplCLib::InsertKnot(const Standard_Integer,
                          const Standard_Real U,
                          const Standard_Integer UMult,
                          const Standard_Integer Degree,
                          const Standard_Boolean Periodic,
                          const TColgp_Array1OfPnt& Poles,
                          const TColStd_Array1OfReal& Knots,
                          const TColStd_Array1OfInteger& Mults,
                          TColgp_Array1OfPnt& NewPoles) {
  ::InsertKnot(U, UMult, Degree, Periodic, Poles, Knots, Mults, NewPoles);
}

void BSplCLib::InsertKnot(const Standard_Integer,
                          const Standard_Real U,
                          const Standard_Integer UMult,
                          const Standard_Integer Degree,
                          const Standard_Boolean Periodic,
                          const TColgp_Array1OfPnt& Poles,
                          const TColStd_Array1OfReal& Weights,
                          const TColStd_Array1OfReal& Knots,
                          const TColStd_Array1OfInteger& Mults,
                          TColgp_Array1OfPnt& NewPoles,
                          TColStd_Array1OfReal& NewWeights) {
  ::InsertKnot(U, UMult, Degree, Periodic, Poles, Weights, Knots, Mults,
               NewPoles, NewWeights);
}
