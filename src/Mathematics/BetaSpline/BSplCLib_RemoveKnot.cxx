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

#include <BSplCLib.hxx>
#include <TColStd_Array1OfInteger.hxx>
#include <TColStd_Array1OfReal.hxx>
#include <PLib.hxx>
#include <BSplCLib_Helpers.hxx>

Standard_Boolean BSplCLib::RemoveKnot(const Standard_Integer Index,
                                      const Standard_Integer Mult,
                                      const Standard_Integer Degree,
                                      const Standard_Boolean Periodic,
                                      const Standard_Integer Dimension,
                                      const TColStd_Array1OfReal& Poles,
                                      const TColStd_Array1OfReal& Knots,
                                      const TColStd_Array1OfInteger& Mults,
                                      TColStd_Array1OfReal& NewPoles,
                                      TColStd_Array1OfReal& NewKnots,
                                      TColStd_Array1OfInteger& NewMults,
                                      const Standard_Real Tolerance) {
  Standard_Integer index, i, j, k, p, np;

  Standard_Integer TheIndex = Index;

  // protection
  Standard_Integer first, last;
  if (Periodic) {
    first = Knots.Lower();
    last = Knots.Upper();
  } else {
    first = BSplCLib::FirstUKnotIndex(Degree, Mults) + 1;
    last = BSplCLib::LastUKnotIndex(Degree, Mults) - 1;
  }
  if (Index < first)
    return Standard_False;
  if (Index > last)
    return Standard_False;

  if (Periodic && (Index == first))
    TheIndex = last;

  Standard_Integer depth = Mults(TheIndex) - Mult;
  Standard_Integer length = Degree - Mult;

  // -------------------
  // create local arrays
  // -------------------

  Standard_Real* knots = new Standard_Real[4 * Degree];
  Standard_Real* poles = new Standard_Real[(2 * Degree + 1) * Dimension];

  // ------------------------------------
  // build the knots for anti Boor Scheme
  // ------------------------------------

  // the new sequence of knots
  // is obtained from the knots at Index-1 and Index

  BSplCLib::BuildKnots(Degree, TheIndex - 1, Periodic, Knots, &Mults,
                       *knots);  // FIXME: NO &Mults
  index = BSplCLib::PoleIndex(Degree, TheIndex - 1, Periodic, Mults);
  BSplCLib::BuildKnots(Degree, TheIndex, Periodic, Knots, &Mults,
                       knots[2 * Degree]);  // FIXME: NO &Mults

  index += Mult;

  for (i = 0; i < Degree - Mult; i++)
    knots[i] = knots[i + Mult];

  for (i = Degree - Mult; i < 2 * Degree; i++)
    knots[i] = knots[2 * Degree + i];

  // ------------------------------------
  // build the poles for anti Boor Scheme
  // ------------------------------------

  p = Poles.Lower() + index * Dimension;

  for (i = 0; i <= length + depth; i++) {
    j = Dimension * BoorIndex(i, length, depth);

    for (k = 0; k < Dimension; k++) {
      poles[j + k] = Poles(p + k);
    }
    p += Dimension;
    if (p > Poles.Upper())
      p = Poles.Lower();
  }

  // ----------------
  // Anti Boor Scheme
  // ----------------

  Standard_Boolean result =
      BSplCLib::AntiBoorScheme(Knots(TheIndex), Degree, *knots, Dimension,
                               *poles, depth, length, Tolerance);

  // ----------------
  // copy the results
  // ----------------

  if (result) {
    // poles

    p = Poles.Lower();
    np = NewPoles.Lower();

    // unmodified poles before
    BSplCLib_Copy((index + 1) * Dimension, p, Poles, np, NewPoles);

    // modified

    for (i = 1; i <= length; i++)
      BSplCLib::GetPole(i, length, 0, Dimension, *poles, np, NewPoles);
    p += (length + depth) * Dimension;

    // unmodified poles after
    if (p != Poles.Lower()) {
      i = Poles.Upper() - p + 1;
      BSplCLib_Copy(i, p, Poles, np, NewPoles);
    }

    // knots and mults

    if (Mult > 0) {
      NewKnots = Knots;
      NewMults = Mults;
      NewMults(TheIndex) = Mult;
      if (Periodic) {
        if (TheIndex == first)
          NewMults(last) = Mult;
        if (TheIndex == last)
          NewMults(first) = Mult;
      }
    } else {
      if (!Periodic || (TheIndex != first && TheIndex != last)) {
        for (i = Knots.Lower(); i < TheIndex; i++) {
          NewKnots(i) = Knots(i);
          NewMults(i) = Mults(i);
        }

        for (i = TheIndex + 1; i <= Knots.Upper(); i++) {
          NewKnots(i - 1) = Knots(i);
          NewMults(i - 1) = Mults(i);
        }
      } else {
        // The interesting case of a Periodic curve
        // where the first and last knot is removed.

        for (i = first; i < last - 1; i++) {
          NewKnots(i) = Knots(i + 1);
          NewMults(i) = Mults(i + 1);
        }
        NewKnots(last - 1) = NewKnots(first) + Knots(last) - Knots(first);
        NewMults(last - 1) = NewMults(first);
      }
    }
  }

  // free local arrays
  delete[] knots;
  delete[] poles;

  return result;
}

//

template <typename Array1OfPoints>
static Standard_Boolean RemoveKnot(const Standard_Integer Index,
                                   const Standard_Integer Mult,
                                   const Standard_Integer Degree,
                                   const Standard_Boolean Periodic,
                                   const Array1OfPoints& Poles,
                                   const TColStd_Array1OfReal& Knots,
                                   const TColStd_Array1OfInteger& Mults,
                                   Array1OfPoints& NewPoles,
                                   TColStd_Array1OfReal& NewKnots,
                                   TColStd_Array1OfInteger& NewMults,
                                   const Standard_Real Tolerance) {
  Standard_Integer dim = DimensionTrait<Array1OfPoints>::d;

  TColStd_Array1OfReal poles(1, dim * Poles.Length());
  TColStd_Array1OfReal newpoles(1, dim * NewPoles.Length());

  PLib::SetPoles(Poles, poles);

  if (!BSplCLib::RemoveKnot(Index, Mult, Degree, Periodic, dim, poles, Knots,
                            Mults, newpoles, NewKnots, NewMults, Tolerance))
    return Standard_False;

  PLib::GetPoles(newpoles, NewPoles);

  return Standard_True;
}

template <typename Array1OfPoints>
static Standard_Boolean RemoveKnot(const Standard_Integer Index,
                                   const Standard_Integer Mult,
                                   const Standard_Integer Degree,
                                   const Standard_Boolean Periodic,
                                   const Array1OfPoints& Poles,
                                   const TColStd_Array1OfReal& Weights,
                                   const TColStd_Array1OfReal& Knots,
                                   const TColStd_Array1OfInteger& Mults,
                                   Array1OfPoints& NewPoles,
                                   TColStd_Array1OfReal& NewWeights,
                                   TColStd_Array1OfReal& NewKnots,
                                   TColStd_Array1OfInteger& NewMults,
                                   const Standard_Real Tolerance) {
  Standard_Integer dim = DimensionTrait<Array1OfPoints>::d + 1;

  TColStd_Array1OfReal poles(1, dim * Poles.Length());
  TColStd_Array1OfReal newpoles(1, dim * NewPoles.Length());

  PLib::SetPoles(Poles, Weights, poles);

  if (!BSplCLib::RemoveKnot(Index, Mult, Degree, Periodic, dim, poles, Knots,
                            Mults, newpoles, NewKnots, NewMults, Tolerance))
    return Standard_False;

  PLib::GetPoles(newpoles, NewPoles, NewWeights);

  return Standard_True;
}

// Instantiating for 2D curves

Standard_Boolean BSplCLib::RemoveKnot(const Standard_Integer Index,
                                      const Standard_Integer Mult,
                                      const Standard_Integer Degree,
                                      const Standard_Boolean Periodic,
                                      const TColgp_Array1OfPnt2d& Poles,
                                      const TColStd_Array1OfReal& Knots,
                                      const TColStd_Array1OfInteger& Mults,
                                      TColgp_Array1OfPnt2d& NewPoles,
                                      TColStd_Array1OfReal& NewKnots,
                                      TColStd_Array1OfInteger& NewMults,
                                      const Standard_Real Tolerance) {
  return ::RemoveKnot(Index, Mult, Degree, Periodic, Poles, Knots, Mults,
                      NewPoles, NewKnots, NewMults, Tolerance);
}

Standard_Boolean BSplCLib::RemoveKnot(const Standard_Integer Index,
                                      const Standard_Integer Mult,
                                      const Standard_Integer Degree,
                                      const Standard_Boolean Periodic,
                                      const TColgp_Array1OfPnt2d& Poles,
                                      const TColStd_Array1OfReal& Weights,
                                      const TColStd_Array1OfReal& Knots,
                                      const TColStd_Array1OfInteger& Mults,
                                      TColgp_Array1OfPnt2d& NewPoles,
                                      TColStd_Array1OfReal& NewWeights,
                                      TColStd_Array1OfReal& NewKnots,
                                      TColStd_Array1OfInteger& NewMults,
                                      const Standard_Real Tolerance) {
  return ::RemoveKnot(Index, Mult, Degree, Periodic, Poles, Weights, Knots,
                      Mults, NewPoles, NewWeights, NewKnots, NewMults,
                      Tolerance);
}

// Instantiating for 3D curves

Standard_Boolean BSplCLib::RemoveKnot(const Standard_Integer Index,
                                      const Standard_Integer Mult,
                                      const Standard_Integer Degree,
                                      const Standard_Boolean Periodic,
                                      const TColgp_Array1OfPnt& Poles,
                                      const TColStd_Array1OfReal& Knots,
                                      const TColStd_Array1OfInteger& Mults,
                                      TColgp_Array1OfPnt& NewPoles,
                                      TColStd_Array1OfReal& NewKnots,
                                      TColStd_Array1OfInteger& NewMults,
                                      const Standard_Real Tolerance) {
  return ::RemoveKnot(Index, Mult, Degree, Periodic, Poles, Knots, Mults,
                      NewPoles, NewKnots, NewMults, Tolerance);
}

Standard_Boolean BSplCLib::RemoveKnot(const Standard_Integer Index,
                                      const Standard_Integer Mult,
                                      const Standard_Integer Degree,
                                      const Standard_Boolean Periodic,
                                      const TColgp_Array1OfPnt& Poles,
                                      const TColStd_Array1OfReal& Weights,
                                      const TColStd_Array1OfReal& Knots,
                                      const TColStd_Array1OfInteger& Mults,
                                      TColgp_Array1OfPnt& NewPoles,
                                      TColStd_Array1OfReal& NewWeights,
                                      TColStd_Array1OfReal& NewKnots,
                                      TColStd_Array1OfInteger& NewMults,
                                      const Standard_Real Tolerance) {
  return ::RemoveKnot(Index, Mult, Degree, Periodic, Poles, Weights, Knots,
                      Mults, NewPoles, NewWeights, NewKnots, NewMults,
                      Tolerance);
}
