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

template <typename Array1OfPoints>
static void RaiseMultiplicity(const Standard_Integer KnotIndex,
                              const Standard_Integer Mult,
                              const Standard_Integer Degree,
                              const Standard_Boolean Periodic,
                              const Array1OfPoints& Poles,
                              const TColStd_Array1OfReal& Knots,
                              const TColStd_Array1OfInteger& Mults,
                              Array1OfPoints& NewPoles) {
  TColStd_Array1OfReal k(1, 1);
  k(1) = Knots(KnotIndex);
  TColStd_Array1OfInteger m(1, 1);
  m(1) = Mult - Mults(KnotIndex);
  TColStd_Array1OfReal nk(1, Knots.Length());
  TColStd_Array1OfInteger nm(1, Knots.Length());
  BSplCLib::InsertKnots(Degree, Periodic, Poles, Knots, Mults, k, &m, NewPoles,
                        nk, nm, Epsilon(k(1)));
}

template <typename Array1OfPoints>
static void RaiseMultiplicity(const Standard_Integer KnotIndex,
                              const Standard_Integer Mult,
                              const Standard_Integer Degree,
                              const Standard_Boolean Periodic,
                              const Array1OfPoints& Poles,
                              const TColStd_Array1OfReal& Weights,
                              const TColStd_Array1OfReal& Knots,
                              const TColStd_Array1OfInteger& Mults,
                              Array1OfPoints& NewPoles,
                              TColStd_Array1OfReal& NewWeights) {
  TColStd_Array1OfReal k(1, 1);
  k(1) = Knots(KnotIndex);
  TColStd_Array1OfInteger m(1, 1);
  m(1) = Mult - Mults(KnotIndex);
  TColStd_Array1OfReal nk(1, Knots.Length());
  TColStd_Array1OfInteger nm(1, Knots.Length());
  BSplCLib::InsertKnots(Degree, Periodic, Poles, Weights, Knots, Mults, k, &m,
                        NewPoles, NewWeights, nk, nm, Epsilon(k(1)));
}

// Instantiating for 2D curves

void BSplCLib::RaiseMultiplicity(const Standard_Integer KnotIndex,
                                 const Standard_Integer Mult,
                                 const Standard_Integer Degree,
                                 const Standard_Boolean Periodic,
                                 const TColgp_Array1OfPnt2d& Poles,
                                 const TColStd_Array1OfReal& Knots,
                                 const TColStd_Array1OfInteger& Mults,
                                 TColgp_Array1OfPnt2d& NewPoles) {
  ::RaiseMultiplicity(KnotIndex, Mult, Degree, Periodic, Poles, Knots, Mults,
                      NewPoles);
}

void BSplCLib::RaiseMultiplicity(const Standard_Integer KnotIndex,
                                 const Standard_Integer Mult,
                                 const Standard_Integer Degree,
                                 const Standard_Boolean Periodic,
                                 const TColgp_Array1OfPnt2d& Poles,
                                 const TColStd_Array1OfReal& Weights,
                                 const TColStd_Array1OfReal& Knots,
                                 const TColStd_Array1OfInteger& Mults,
                                 TColgp_Array1OfPnt2d& NewPoles,
                                 TColStd_Array1OfReal& NewWeights) {
  ::RaiseMultiplicity(KnotIndex, Mult, Degree, Periodic, Poles, Weights, Knots,
                      Mults, NewPoles, NewWeights);
}

// Instantiating for 3D curves

void BSplCLib::RaiseMultiplicity(const Standard_Integer KnotIndex,
                                 const Standard_Integer Mult,
                                 const Standard_Integer Degree,
                                 const Standard_Boolean Periodic,
                                 const TColgp_Array1OfPnt& Poles,
                                 const TColStd_Array1OfReal& Knots,
                                 const TColStd_Array1OfInteger& Mults,
                                 TColgp_Array1OfPnt& NewPoles) {
  ::RaiseMultiplicity(KnotIndex, Mult, Degree, Periodic, Poles, Knots, Mults,
                      NewPoles);
}

void BSplCLib::RaiseMultiplicity(const Standard_Integer KnotIndex,
                                 const Standard_Integer Mult,
                                 const Standard_Integer Degree,
                                 const Standard_Boolean Periodic,
                                 const TColgp_Array1OfPnt& Poles,
                                 const TColStd_Array1OfReal& Weights,
                                 const TColStd_Array1OfReal& Knots,
                                 const TColStd_Array1OfInteger& Mults,
                                 TColgp_Array1OfPnt& NewPoles,
                                 TColStd_Array1OfReal& NewWeights) {
  ::RaiseMultiplicity(KnotIndex, Mult, Degree, Periodic, Poles, Weights, Knots,
                      Mults, NewPoles, NewWeights);
}
