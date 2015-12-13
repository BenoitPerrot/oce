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
// function : IncreaseDegreeCountKnots
// purpose  :
//=======================================================================

Standard_Integer BSplCLib::IncreaseDegreeCountKnots(
    const Standard_Integer Degree,
    const Standard_Integer NewDegree,
    const Standard_Boolean Periodic,
    const TColStd_Array1OfInteger& Mults) {
  if (Periodic)
    return Mults.Length();
  Standard_Integer f = FirstUKnotIndex(Degree, Mults);
  Standard_Integer l = LastUKnotIndex(Degree, Mults);
  Standard_Integer m, i, removed = 0, step = NewDegree - Degree;

  i = Mults.Lower();
  m = Degree + (f - i + 1) * step + 1;

  while (m > NewDegree + 1) {
    removed++;
    m -= Mults(i) + step;
    i++;
  }
  if (m < NewDegree + 1)
    removed--;

  i = Mults.Upper();
  m = Degree + (i - l + 1) * step + 1;

  while (m > NewDegree + 1) {
    removed++;
    m -= Mults(i) + step;
    i--;
  }
  if (m < NewDegree + 1)
    removed--;

  return Mults.Length() - removed;
}

//=======================================================================
// function : IncreaseDegree
// purpose  :
//=======================================================================

void BSplCLib::IncreaseDegree(const Standard_Integer Degree,
                              const Standard_Integer NewDegree,
                              const Standard_Boolean Periodic,
                              const Standard_Integer Dimension,
                              const TColStd_Array1OfReal& Poles,
                              const TColStd_Array1OfReal& Knots,
                              const TColStd_Array1OfInteger& Mults,
                              TColStd_Array1OfReal& NewPoles,
                              TColStd_Array1OfReal& NewKnots,
                              TColStd_Array1OfInteger& NewMults) {
  // Degree elevation of a BSpline Curve

  // This algorithms loops on degree incrementation from Degree to NewDegree.
  // The variable curDeg is the current degree to increment.

  // Before degree incrementations a "working curve" is created.
  // It has the same knot, poles and multiplicities.

  // If the curve is periodic knots are added on the working curve before
  // and after the existing knots to make it a non-periodic curves.
  // The poles are also copied.

  // The first and last multiplicity of the working curve are set to Degree+1,
  // null poles are  added if necessary.

  // Then the degree is incremented on the working curve.
  // The knots are unchanged but all multiplicities will be incremented.

  // Each degree incrementation is achieved by averaging curDeg+1 curves.

  // See : Degree elevation of B-spline curves
  //       Hartmut PRAUTZSCH
  //       CAGD 1 (1984)

  //-------------------------
  // create the working curve
  //-------------------------

  Standard_Integer i, k, f, l, m, pf, pl, firstknot;

  pf = 0;  // number of null poles added at beginning
  pl = 0;  // number of null poles added at end

  Standard_Integer nbwknots = Knots.Length();
  f = FirstUKnotIndex(Degree, Mults);
  l = LastUKnotIndex(Degree, Mults);

  if (Periodic) {
    // Periodic curves are transformed in non-periodic curves

    nbwknots += f - Mults.Lower();

    pf = -Degree - 1;

    for (i = Mults.Lower(); i <= f; i++)
      pf += Mults(i);

    nbwknots += Mults.Upper() - l;

    pl = -Degree - 1;

    for (i = l; i <= Mults.Upper(); i++)
      pl += Mults(i);
  }

  // copy the knots and multiplicities
  TColStd_Array1OfReal wknots(1, nbwknots);
  TColStd_Array1OfInteger wmults(1, nbwknots);
  if (!Periodic) {
    wknots = Knots;
    wmults = Mults;
  } else {
    // copy the knots for a periodic curve
    Standard_Real period = Knots(Knots.Upper()) - Knots(Knots.Lower());
    i = 0;

    for (k = l; k < Knots.Upper(); k++) {
      i++;
      wknots(i) = Knots(k) - period;
      wmults(i) = Mults(k);
    }

    for (k = Knots.Lower(); k <= Knots.Upper(); k++) {
      i++;
      wknots(i) = Knots(k);
      wmults(i) = Mults(k);
    }

    for (k = Knots.Lower() + 1; k <= f; k++) {
      i++;
      wknots(i) = Knots(k) + period;
      wmults(i) = Mults(k);
    }
  }

  // set the first and last mults to Degree+1
  // and add null poles

  pf += Degree + 1 - wmults(1);
  wmults(1) = Degree + 1;
  pl += Degree + 1 - wmults(nbwknots);
  wmults(nbwknots) = Degree + 1;

  //---------------------------
  // poles of the working curve
  //---------------------------

  Standard_Integer nbwpoles = 0;

  for (i = 1; i <= nbwknots; i++)
    nbwpoles += wmults(i);
  nbwpoles -= Degree + 1;

  // we provide space for degree elevation
  TColStd_Array1OfReal wpoles(
      1, (nbwpoles + (nbwknots - 1) * (NewDegree - Degree)) * Dimension);

  for (i = 1; i <= pf * Dimension; i++)
    wpoles(i) = 0;

  k = Poles.Lower();

  for (i = pf * Dimension + 1; i <= (nbwpoles - pl) * Dimension; i++) {
    wpoles(i) = Poles(k);
    k++;
    if (k > Poles.Upper())
      k = Poles.Lower();
  }

  for (i = (nbwpoles - pl) * Dimension + 1; i <= nbwpoles * Dimension; i++)
    wpoles(i) = 0;

  //-----------------------------------------------------------
  // Declare the temporary arrays used in degree incrementation
  //-----------------------------------------------------------

  Standard_Integer nbwp = nbwpoles + (nbwknots - 1) * (NewDegree - Degree);
  // Arrays for storing the temporary curves
  TColStd_Array1OfReal tempc1(1, nbwp * Dimension);
  TColStd_Array1OfReal tempc2(1, nbwp * Dimension);

  // Array for storing the knots to insert
  TColStd_Array1OfReal iknots(1, nbwknots);

  // Arrays for receiving the knots after insertion
  TColStd_Array1OfReal nknots(1, nbwknots);

  //------------------------------
  // Loop on degree incrementation
  //------------------------------

  Standard_Integer step, curDeg;
  Standard_Integer nbp = nbwpoles;
  nbwp = nbp;

  for (curDeg = Degree; curDeg < NewDegree; curDeg++) {
    nbp = nbwp;                 // current number of poles
    nbwp = nbp + nbwknots - 1;  // new number of poles

    // For the averaging
    TColStd_Array1OfReal nwpoles(1, nbwp * Dimension);
    nwpoles.Init(0.0e0);

    for (step = 0; step <= curDeg; step++) {
      // Compute the bspline of rank step.

      // if not the first time, decrement the multiplicities back
      if (step != 0) {
        for (i = 1; i <= nbwknots; i++)
          wmults(i)--;
      }

      // Poles are the current poles
      // but the poles congruent to step are duplicated.

      Standard_Integer offset = 0;

      for (i = 0; i < nbp; i++) {
        offset++;

        for (k = 0; k < Dimension; k++) {
          tempc1((offset - 1) * Dimension + k + 1) =
              wpoles(NewPoles.Lower() + i * Dimension + k);
        }
        if (i % (curDeg + 1) == step) {
          offset++;

          for (k = 0; k < Dimension; k++) {
            tempc1((offset - 1) * Dimension + k + 1) =
                wpoles(NewPoles.Lower() + i * Dimension + k);
          }
        }
      }

      // Knots multiplicities are increased
      // For each knot where the sum of multiplicities is congruent to step

      Standard_Integer stepmult = step + 1;
      Standard_Integer nbknots = 0;
      Standard_Integer smult = 0;

      for (k = 1; k <= nbwknots; k++) {
        smult += wmults(k);
        if (smult >= stepmult) {
          // this knot is increased
          stepmult += curDeg + 1;
          wmults(k)++;
        } else {
          // this knot is inserted
          nbknots++;
          iknots(nbknots) = wknots(k);
        }
      }

      // the curve is obtained by inserting the knots
      // to raise the multiplicities

      // we build "slices" of the arrays to set the correct size
      if (nbknots > 0) {
        TColStd_Array1OfReal aknots(iknots(1), 1, nbknots);
        TColStd_Array1OfReal curve(tempc1(1), 1, offset * Dimension);
        TColStd_Array1OfReal ncurve(tempc2(1), 1, nbwp * Dimension);
        //	InsertKnots(curDeg+1,Standard_False,Dimension,curve,wknots,wmults,
        //		    aknots,NoMults(),ncurve,nknots,wmults,Epsilon(1.));

        InsertKnots(curDeg + 1, Standard_False, Dimension, curve, wknots,
                    wmults, aknots, nullptr, ncurve, nknots, wmults, 0.0);

        // add to the average

        for (i = 1; i <= nbwp * Dimension; i++)
          nwpoles(i) += ncurve(i);
      } else {
        // add to the average

        for (i = 1; i <= nbwp * Dimension; i++)
          nwpoles(i) += tempc1(i);
      }
    }

    // The result is the average

    for (i = 1; i <= nbwp * Dimension; i++) {
      wpoles(i) = nwpoles(i) / (curDeg + 1);
    }
  }

  //-----------------
  // Copy the results
  //-----------------

  // index in new knots of the first knot of the curve
  if (Periodic)
    firstknot = Mults.Upper() - l + 1;
  else
    firstknot = f;

  // the new curve starts at index firstknot
  // so we must remove knots until the sum of multiplicities
  // from the first to the start is NewDegree+1

  // m is the current sum of multiplicities
  m = 0;

  for (k = 1; k <= firstknot; k++)
    m += wmults(k);

  // compute the new first knot (k), pf will be the index of the first pole
  k = 1;
  pf = 0;

  while (m > NewDegree + 1) {
    k++;
    m -= wmults(k);
    pf += wmults(k);
  }
  if (m < NewDegree + 1) {
    k--;
    wmults(k) += m - NewDegree - 1;
    pf += m - NewDegree - 1;
  }

  // on a periodic curve the knots start with firstknot
  if (Periodic)
    k = firstknot;

  // copy knots

  for (i = NewKnots.Lower(); i <= NewKnots.Upper(); i++) {
    NewKnots(i) = wknots(k);
    NewMults(i) = wmults(k);
    k++;
  }

  // copy poles
  pf *= Dimension;

  for (i = NewPoles.Lower(); i <= NewPoles.Upper(); i++) {
    pf++;
    NewPoles(i) = wpoles(pf);
  }
}

//

template <typename Array1OfPoints>
static void IncreaseDegree(const Standard_Integer Degree,
                           const Standard_Integer NewDegree,
                           const Standard_Boolean Periodic,
                           const Array1OfPoints& Poles,
                           const TColStd_Array1OfReal& Knots,
                           const TColStd_Array1OfInteger& Mults,
                           Array1OfPoints& NewPoles,
                           TColStd_Array1OfReal& NewKnots,
                           TColStd_Array1OfInteger& NewMults) {
  Standard_Integer dim = DimensionTrait<Array1OfPoints>::d;

  TColStd_Array1OfReal poles(1, dim * Poles.Length());
  TColStd_Array1OfReal newpoles(1, dim * NewPoles.Length());

  PLib::SetPoles(Poles, poles);

  BSplCLib::IncreaseDegree(Degree, NewDegree, Periodic, dim, poles, Knots,
                           Mults, newpoles, NewKnots, NewMults);

  PLib::GetPoles(newpoles, NewPoles);
}

template <typename Array1OfPoints>
static void IncreaseDegree(const Standard_Integer Degree,
                           const Standard_Integer NewDegree,
                           const Standard_Boolean Periodic,
                           const Array1OfPoints& Poles,
                           const TColStd_Array1OfReal& Weights,
                           const TColStd_Array1OfReal& Knots,
                           const TColStd_Array1OfInteger& Mults,
                           Array1OfPoints& NewPoles,
                           TColStd_Array1OfReal& NewWeights,
                           TColStd_Array1OfReal& NewKnots,
                           TColStd_Array1OfInteger& NewMults) {
  Standard_Integer dim = DimensionTrait<Array1OfPoints>::d + 1;

  TColStd_Array1OfReal poles(1, dim * Poles.Length());
  TColStd_Array1OfReal newpoles(1, dim * NewPoles.Length());

  PLib::SetPoles(Poles, Weights, poles);

  BSplCLib::IncreaseDegree(Degree, NewDegree, Periodic, dim, poles, Knots,
                           Mults, newpoles, NewKnots, NewMults);

  PLib::GetPoles(newpoles, NewPoles, NewWeights);
}

// Instantiating for 2D curves

void BSplCLib::IncreaseDegree(const Standard_Integer Degree,
                              const Standard_Integer NewDegree,
                              const Standard_Boolean Periodic,
                              const TColgp_Array1OfPnt2d& Poles,
                              const TColStd_Array1OfReal& Knots,
                              const TColStd_Array1OfInteger& Mults,
                              TColgp_Array1OfPnt2d& NewPoles,
                              TColStd_Array1OfReal& NewKnots,
                              TColStd_Array1OfInteger& NewMults) {
  ::IncreaseDegree(Degree, NewDegree, Periodic, Poles, Knots, Mults, NewPoles,
                   NewKnots, NewMults);
}

void BSplCLib::IncreaseDegree(const Standard_Integer Degree,
                              const Standard_Integer NewDegree,
                              const Standard_Boolean Periodic,
                              const TColgp_Array1OfPnt2d& Poles,
                              const TColStd_Array1OfReal& Weights,
                              const TColStd_Array1OfReal& Knots,
                              const TColStd_Array1OfInteger& Mults,
                              TColgp_Array1OfPnt2d& NewPoles,
                              TColStd_Array1OfReal& NewWeights,
                              TColStd_Array1OfReal& NewKnots,
                              TColStd_Array1OfInteger& NewMults) {
  ::IncreaseDegree(Degree, NewDegree, Periodic, Poles, Weights, Knots, Mults,
                   NewPoles, NewWeights, NewKnots, NewMults);
}

// Instantiating for 3D curves

void BSplCLib::IncreaseDegree(const Standard_Integer Degree,
                              const Standard_Integer NewDegree,
                              const Standard_Boolean Periodic,
                              const TColgp_Array1OfPnt& Poles,
                              const TColStd_Array1OfReal& Knots,
                              const TColStd_Array1OfInteger& Mults,
                              TColgp_Array1OfPnt& NewPoles,
                              TColStd_Array1OfReal& NewKnots,
                              TColStd_Array1OfInteger& NewMults) {
  ::IncreaseDegree(Degree, NewDegree, Periodic, Poles, Knots, Mults, NewPoles,
                   NewKnots, NewMults);
}

void BSplCLib::IncreaseDegree(const Standard_Integer Degree,
                              const Standard_Integer NewDegree,
                              const Standard_Boolean Periodic,
                              const TColgp_Array1OfPnt& Poles,
                              const TColStd_Array1OfReal& Weights,
                              const TColStd_Array1OfReal& Knots,
                              const TColStd_Array1OfInteger& Mults,
                              TColgp_Array1OfPnt& NewPoles,
                              TColStd_Array1OfReal& NewWeights,
                              TColStd_Array1OfReal& NewKnots,
                              TColStd_Array1OfInteger& NewMults) {
  ::IncreaseDegree(Degree, NewDegree, Periodic, Poles, Weights, Knots, Mults,
                   NewPoles, NewWeights, NewKnots, NewMults);
}
