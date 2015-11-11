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

//=======================================================================
// function : PrepareUnperiodize
// purpose  :
//=======================================================================

void BSplCLib::PrepareUnperiodize(const Standard_Integer Degree,
                                  const TColStd_Array1OfInteger& Mults,
                                  Standard_Integer& NbKnots,
                                  Standard_Integer& NbPoles) {
  Standard_Integer i;
  // initialize NbKnots and NbPoles
  NbKnots = Mults.Length();
  NbPoles = -Degree - 1;

  for (i = Mults.Lower(); i <= Mults.Upper(); i++)
    NbPoles += Mults(i);

  Standard_Integer sigma, k;
  // Add knots at the beginning of the curve to raise Multiplicities
  // to Degre + 1;
  sigma = Mults(Mults.Lower());
  k = Mults.Upper() - 1;

  while (sigma < Degree + 1) {
    sigma += Mults(k);
    NbPoles += Mults(k);
    k--;
    NbKnots++;
  }
  // We must add exactly until Degree + 1 ->
  //    Supress the excedent.
  if (sigma > Degree + 1)
    NbPoles -= sigma - Degree - 1;

  // Add knots at the end of the curve to raise Multiplicities
  // to Degre + 1;
  sigma = Mults(Mults.Upper());
  k = Mults.Lower() + 1;

  while (sigma < Degree + 1) {
    sigma += Mults(k);
    NbPoles += Mults(k);
    k++;
    NbKnots++;
  }
  // We must add exactly until Degree + 1 ->
  //    Supress the excedent.
  if (sigma > Degree + 1)
    NbPoles -= sigma - Degree - 1;
}

//=======================================================================
// function : Unperiodize
// purpose  :
//=======================================================================

void BSplCLib::Unperiodize(const Standard_Integer Degree,
                           const Standard_Integer,  // Dimension,
                           const TColStd_Array1OfInteger& Mults,
                           const TColStd_Array1OfReal& Knots,
                           const TColStd_Array1OfReal& Poles,
                           TColStd_Array1OfInteger& NewMults,
                           TColStd_Array1OfReal& NewKnots,
                           TColStd_Array1OfReal& NewPoles) {
  Standard_Integer sigma, k, index = 0;
  // evaluation of index : number of knots to insert before knot(1) to
  // raise sum of multiplicities to <Degree + 1>
  sigma = Mults(Mults.Lower());
  k = Mults.Upper() - 1;

  while (sigma < Degree + 1) {
    sigma += Mults(k);
    k--;
    index++;
  }

  Standard_Real period = Knots(Knots.Upper()) - Knots(Knots.Lower());

  // set the 'interior' knots;

  for (k = 1; k <= Knots.Length(); k++) {
    NewKnots(k + index) = Knots(k);
    NewMults(k + index) = Mults(k);
  }

  // set the 'starting' knots;

  for (k = 1; k <= index; k++) {
    NewKnots(k) = NewKnots(k + Knots.Length() - 1) - period;
    NewMults(k) = NewMults(k + Knots.Length() - 1);
  }
  NewMults(1) -= sigma - Degree - 1;

  // set the 'ending' knots;
  sigma = NewMults(index + Knots.Length());

  for (k = Knots.Length() + index + 1; k <= NewKnots.Length(); k++) {
    NewKnots(k) = NewKnots(k - Knots.Length() + 1) + period;
    NewMults(k) = NewMults(k - Knots.Length() + 1);
    sigma += NewMults(k - Knots.Length() + 1);
  }
  NewMults(NewMults.Length()) -= sigma - Degree - 1;

  for (k = 1; k <= NewPoles.Length(); k++) {
    NewPoles(k) = Poles((k - 1) % Poles.Length() + 1);
  }
}

//

template <typename Array1OfPoints>
static void Unperiodize(const Standard_Integer Degree,
                        const TColStd_Array1OfInteger& Mults,
                        const TColStd_Array1OfReal& Knots,
                        const Array1OfPoints& Poles,
                        TColStd_Array1OfInteger& NewMults,
                        TColStd_Array1OfReal& NewKnots,
                        Array1OfPoints& NewPoles) {
  Standard_Integer dim = DimensionTrait<Array1OfPoints>::d;

  TColStd_Array1OfReal poles(1, dim * Poles.Length());
  TColStd_Array1OfReal newpoles(1, dim * NewPoles.Length());

  PLib::SetPoles(Poles, poles);

  BSplCLib::Unperiodize(Degree, dim, Mults, Knots, poles, NewMults, NewKnots,
                        newpoles);

  PLib::GetPoles(newpoles, NewPoles);
}

template <typename Array1OfPoints>
static void Unperiodize(const Standard_Integer Degree,
                        const TColStd_Array1OfInteger& Mults,
                        const TColStd_Array1OfReal& Knots,
                        const Array1OfPoints& Poles,
                        const TColStd_Array1OfReal& Weights,
                        TColStd_Array1OfInteger& NewMults,
                        TColStd_Array1OfReal& NewKnots,
                        Array1OfPoints& NewPoles,
                        TColStd_Array1OfReal& NewWeights) {
  Standard_Integer dim = DimensionTrait<Array1OfPoints>::d + 1;

  TColStd_Array1OfReal poles(1, dim * Poles.Length());
  TColStd_Array1OfReal newpoles(1, dim * NewPoles.Length());

  PLib::SetPoles(Poles, Weights, poles);

  BSplCLib::Unperiodize(Degree, dim, Mults, Knots, poles, NewMults, NewKnots,
                        newpoles);

  PLib::GetPoles(newpoles, NewPoles, NewWeights);
}

// Instantiating for 2D curves

void BSplCLib::Unperiodize(const Standard_Integer Degree,
                           const TColStd_Array1OfInteger& Mults,
                           const TColStd_Array1OfReal& Knots,
                           const TColgp_Array1OfPnt2d& Poles,
                           TColStd_Array1OfInteger& NewMults,
                           TColStd_Array1OfReal& NewKnots,
                           TColgp_Array1OfPnt2d& NewPoles) {
  ::Unperiodize(Degree, Mults, Knots, Poles, NewMults, NewKnots, NewPoles);
}

void BSplCLib::Unperiodize(const Standard_Integer Degree,
                           const TColStd_Array1OfInteger& Mults,
                           const TColStd_Array1OfReal& Knots,
                           const TColgp_Array1OfPnt2d& Poles,
                           const TColStd_Array1OfReal& Weights,
                           TColStd_Array1OfInteger& NewMults,
                           TColStd_Array1OfReal& NewKnots,
                           TColgp_Array1OfPnt2d& NewPoles,
                           TColStd_Array1OfReal& NewWeights) {
  ::Unperiodize(Degree, Mults, Knots, Poles, Weights, NewMults, NewKnots,
                NewPoles, NewWeights);
}

// Instantiating for 3D curves

void BSplCLib::Unperiodize(const Standard_Integer Degree,
                           const TColStd_Array1OfInteger& Mults,
                           const TColStd_Array1OfReal& Knots,
                           const TColgp_Array1OfPnt& Poles,
                           TColStd_Array1OfInteger& NewMults,
                           TColStd_Array1OfReal& NewKnots,
                           TColgp_Array1OfPnt& NewPoles) {
  ::Unperiodize(Degree, Mults, Knots, Poles, NewMults, NewKnots, NewPoles);
}

void BSplCLib::Unperiodize(const Standard_Integer Degree,
                           const TColStd_Array1OfInteger& Mults,
                           const TColStd_Array1OfReal& Knots,
                           const TColgp_Array1OfPnt& Poles,
                           const TColStd_Array1OfReal& Weights,
                           TColStd_Array1OfInteger& NewMults,
                           TColStd_Array1OfReal& NewKnots,
                           TColgp_Array1OfPnt& NewPoles,
                           TColStd_Array1OfReal& NewWeights) {
  ::Unperiodize(Degree, Mults, Knots, Poles, Weights, NewMults, NewKnots,
                NewPoles, NewWeights);
}
