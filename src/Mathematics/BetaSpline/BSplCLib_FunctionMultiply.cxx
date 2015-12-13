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
#include <PLib.hxx>
#include <Mathematics/BetaSpline/BSplCLib_Helpers.hxx>

void BSplCLib::FunctionMultiply(const BSplCLib_EvaluatorFunction& FunctionPtr,
                                const Standard_Integer BSplineDegree,
                                const TColStd_Array1OfReal& BSplineFlatKnots,
                                const Standard_Integer PolesDimension,
                                Standard_Real& Poles,
                                const TColStd_Array1OfReal& FlatKnots,
                                const Standard_Integer NewDegree,
                                Standard_Real& NewPoles,
                                Standard_Integer& Status) {
  Standard_Integer ii, jj, index;
  Standard_Integer extrap_mode[2], error_code, num_new_poles,
    derivative_request = 0;
  Standard_Boolean periodic_flag = Standard_False;
  Standard_Real result, start_end[2], *array_of_poles, *array_of_new_poles;

  array_of_poles = (Standard_Real*)&NewPoles;
  extrap_mode[0] = extrap_mode[1] = BSplineDegree;
  num_new_poles = FlatKnots.Length() - NewDegree - 1;
  start_end[0] = FlatKnots(NewDegree + 1);
  start_end[1] = FlatKnots(num_new_poles + 1);
  TColStd_Array1OfReal parameters(1, num_new_poles);
  TColStd_Array1OfInteger contact_order_array(1, num_new_poles);
  TColStd_Array1OfReal new_poles_array(1, num_new_poles * PolesDimension);

  array_of_new_poles = (Standard_Real*)&new_poles_array(1);
  BuildSchoenbergPoints(NewDegree, FlatKnots, parameters);
  //
  // on recadre sur les bornes
  //
  if (parameters(1) < start_end[0]) {
    parameters(1) = start_end[0];
  }
  if (parameters(num_new_poles) > start_end[1]) {
    parameters(num_new_poles) = start_end[1];
  }
  index = 0;

  for (ii = 1; ii <= num_new_poles; ii++) {
    contact_order_array(ii) = 0;
    FunctionPtr.Evaluate(contact_order_array(ii), start_end, parameters(ii),
                         result, error_code);
    if (error_code) {
      Status = 1;
      goto FINISH;
    }

    Eval(parameters(ii), periodic_flag, derivative_request, extrap_mode[0],
         BSplineDegree, BSplineFlatKnots, PolesDimension, Poles,
         array_of_new_poles[index]);

    for (jj = 0; jj < PolesDimension; jj++) {
      array_of_new_poles[index] *= result;
      index += 1;
    }
  }
  Interpolate(NewDegree, FlatKnots, parameters, contact_order_array,
              PolesDimension, array_of_new_poles[0], Status);

  for (ii = 0; ii < num_new_poles * PolesDimension; ii++) {
    array_of_poles[ii] = array_of_new_poles[ii];
  }
FINISH:;
}

void BSplCLib::FunctionMultiply(const BSplCLib_EvaluatorFunction& FunctionPtr,
                                const Standard_Integer BSplineDegree,
                                const TColStd_Array1OfReal& BSplineFlatKnots,
                                const TColStd_Array1OfReal& Poles,
                                const TColStd_Array1OfReal& FlatKnots,
                                const Standard_Integer NewDegree,
                                TColStd_Array1OfReal& NewPoles,
                                Standard_Integer& Status) {
  Standard_Integer num_bspline_poles = BSplineFlatKnots.Length() - BSplineDegree - 1;
  Standard_Integer num_new_poles = FlatKnots.Length() - NewDegree - 1;

  if (Poles.Length() != num_bspline_poles ||
      NewPoles.Length() != num_new_poles) {
    Standard_ConstructionError::Raise();
  }
  Standard_Real* array_of_poles = (Standard_Real*)&Poles(Poles.Lower());
  Standard_Real* array_of_new_poles = (Standard_Real*)&NewPoles(NewPoles.Lower());
  BSplCLib::FunctionMultiply(FunctionPtr, BSplineDegree, BSplineFlatKnots, 1,
                             array_of_poles[0], FlatKnots, NewDegree,
                             array_of_new_poles[0], Status);
}

//

template <typename Array1OfPoints>
static void FunctionMultiply(const BSplCLib_EvaluatorFunction& FunctionPtr,
                             const Standard_Integer BSplineDegree,
                             const TColStd_Array1OfReal& BSplineFlatKnots,
                             const Array1OfPoints& Poles,
                             const TColStd_Array1OfReal& FlatKnots,
                             const Standard_Integer NewDegree,
                             Array1OfPoints& NewPoles,
                             Standard_Integer& Status) {
  Standard_Integer num_bspline_poles = BSplineFlatKnots.Length() - BSplineDegree - 1;
  Standard_Integer num_new_poles = FlatKnots.Length() - NewDegree - 1;

  if (Poles.Length() != num_bspline_poles ||
      NewPoles.Length() != num_new_poles) {
    Standard_ConstructionError::Raise();
  }
  Standard_Real* array_of_poles = (Standard_Real*)&Poles(Poles.Lower());
  Standard_Real* array_of_new_poles = (Standard_Real*)&NewPoles(NewPoles.Lower());
  BSplCLib::FunctionMultiply(FunctionPtr, BSplineDegree, BSplineFlatKnots,
                             DimensionTrait<Array1OfPoints>::d, array_of_poles[0], FlatKnots,
                             NewDegree, array_of_new_poles[0], Status);
}

// Instantiating for 2D curves

void BSplCLib::FunctionMultiply(const BSplCLib_EvaluatorFunction& FunctionPtr,
                                const Standard_Integer BSplineDegree,
                                const TColStd_Array1OfReal& BSplineFlatKnots,
                                const TColgp_Array1OfPnt2d& Poles,
                                const TColStd_Array1OfReal& FlatKnots,
                                const Standard_Integer NewDegree,
                                TColgp_Array1OfPnt2d& NewPoles,
                                Standard_Integer& Status) {
  ::FunctionMultiply(FunctionPtr, BSplineDegree, BSplineFlatKnots, Poles,
                     FlatKnots, NewDegree, NewPoles, Status);
}

// Instantiating for 3D curves

void BSplCLib::FunctionMultiply(const BSplCLib_EvaluatorFunction& FunctionPtr,
                                const Standard_Integer BSplineDegree,
                                const TColStd_Array1OfReal& BSplineFlatKnots,
                                const TColgp_Array1OfPnt& Poles,
                                const TColStd_Array1OfReal& FlatKnots,
                                const Standard_Integer NewDegree,
                                TColgp_Array1OfPnt& NewPoles,
                                Standard_Integer& Status) {
  ::FunctionMultiply(FunctionPtr, BSplineDegree, BSplineFlatKnots, Poles,
                     FlatKnots, NewDegree, NewPoles, Status);
}
