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
#include <math_Matrix.hxx>

void BSplCLib::Interpolate(const Standard_Integer Degree,
                           const TColStd_Array1OfReal& FlatKnots,
                           const TColStd_Array1OfReal& Parameters,
                           const TColStd_Array1OfInteger& ContactOrderArray,
                           const Standard_Integer ArrayDimension,
                           Standard_Real& Poles,
                           Standard_Integer& InversionProblem) {
  Standard_Integer ErrorCode, UpperBandWidth, LowerBandWidth;
  math_Matrix InterpolationMatrix(1, Parameters.Length(), 1, 2 * Degree + 1);
  ErrorCode = BSplCLib::BuildBSpMatrix(Parameters, ContactOrderArray, FlatKnots,
                                       Degree, InterpolationMatrix,
                                       UpperBandWidth, LowerBandWidth);
  Standard_OutOfRange_Raise_if(ErrorCode != 0, "BSplCLib::Interpolate");

  ErrorCode = BSplCLib::FactorBandedMatrix(InterpolationMatrix, UpperBandWidth,
                                           LowerBandWidth, InversionProblem);
  Standard_OutOfRange_Raise_if(ErrorCode != 0, "BSplCLib::Interpolate");

  ErrorCode = BSplCLib::SolveBandedSystem(InterpolationMatrix, UpperBandWidth,
					  LowerBandWidth, ArrayDimension, Poles);

  Standard_OutOfRange_Raise_if(ErrorCode != 0, "BSplCLib::Interpolate");
}

void BSplCLib::Interpolate(const Standard_Integer Degree,
                           const TColStd_Array1OfReal& FlatKnots,
                           const TColStd_Array1OfReal& Parameters,
                           const TColStd_Array1OfInteger& ContactOrderArray,
                           const Standard_Integer ArrayDimension,
                           Standard_Real& Poles,
                           Standard_Real& Weights,
                           Standard_Integer& InversionProblem) {
  Standard_Integer ErrorCode, UpperBandWidth, LowerBandWidth;

  math_Matrix InterpolationMatrix(1, Parameters.Length(), 1, 2 * Degree + 1);
  ErrorCode = BSplCLib::BuildBSpMatrix(Parameters, ContactOrderArray, FlatKnots,
                                       Degree, InterpolationMatrix,
                                       UpperBandWidth, LowerBandWidth);
  Standard_OutOfRange_Raise_if(ErrorCode != 0, "BSplCLib::Interpolate");

  ErrorCode = BSplCLib::FactorBandedMatrix(InterpolationMatrix, UpperBandWidth,
                                           LowerBandWidth, InversionProblem);
  Standard_OutOfRange_Raise_if(ErrorCode != 0, "BSplCLib::Interpolate");

  ErrorCode = BSplCLib::SolveBandedSystem(InterpolationMatrix, UpperBandWidth,
                                          LowerBandWidth, Standard_False,
                                          ArrayDimension, Poles, Weights);

  Standard_OutOfRange_Raise_if(ErrorCode != 0, "BSplCLib::Interpolate");
}

//

template <typename Array1OfPoints>
static void Interpolate(const Standard_Integer Degree,
                        const TColStd_Array1OfReal& FlatKnots,
                        const TColStd_Array1OfReal& Parameters,
                        const TColStd_Array1OfInteger& ContactOrderArray,
                        Array1OfPoints& Poles,
                        Standard_Integer& InversionProblem)

{
  Standard_Real* PArray = (Standard_Real*)&Poles(Poles.Lower());
  BSplCLib::Interpolate(Degree, FlatKnots, Parameters, ContactOrderArray,
                        DimensionTrait<Array1OfPoints>::d, PArray[0],
                        InversionProblem);
}

template <typename Array1OfPoints>
static void Interpolate(const Standard_Integer Degree,
                        const TColStd_Array1OfReal& FlatKnots,
                        const TColStd_Array1OfReal& Parameters,
                        const TColStd_Array1OfInteger& ContactOrderArray,
                        Array1OfPoints& Poles,
                        TColStd_Array1OfReal& Weights,
                        Standard_Integer& InversionProblem) {
  Standard_Real *PArray = (Standard_Real*)&Poles(Poles.Lower());
  Standard_Real *WArray = (Standard_Real*)&Weights(Weights.Lower());
  BSplCLib::Interpolate(Degree, FlatKnots, Parameters, ContactOrderArray,
                        DimensionTrait<Array1OfPoints>::d, PArray[0], WArray[0],
                        InversionProblem);
}

// Instantiating for 2D curves

void BSplCLib::Interpolate(const Standard_Integer Degree,
                           const TColStd_Array1OfReal& FlatKnots,
                           const TColStd_Array1OfReal& Parameters,
                           const TColStd_Array1OfInteger& ContactOrderArray,
                           TColgp_Array1OfPnt2d& Poles,
                           Standard_Integer& InversionProblem)

{
  ::Interpolate(Degree, FlatKnots, Parameters, ContactOrderArray, Poles,
                InversionProblem);
}

void BSplCLib::Interpolate(const Standard_Integer Degree,
                           const TColStd_Array1OfReal& FlatKnots,
                           const TColStd_Array1OfReal& Parameters,
                           const TColStd_Array1OfInteger& ContactOrderArray,
                           TColgp_Array1OfPnt2d& Poles,
                           TColStd_Array1OfReal& Weights,
                           Standard_Integer& InversionProblem) {
  ::Interpolate(Degree, FlatKnots, Parameters, ContactOrderArray, Poles,
                Weights, InversionProblem);
}

// Instantiating for 3D curves

void BSplCLib::Interpolate(const Standard_Integer Degree,
                           const TColStd_Array1OfReal& FlatKnots,
                           const TColStd_Array1OfReal& Parameters,
                           const TColStd_Array1OfInteger& ContactOrderArray,
                           TColgp_Array1OfPnt& Poles,
                           Standard_Integer& InversionProblem)

{
  ::Interpolate(Degree, FlatKnots, Parameters, ContactOrderArray, Poles,
                InversionProblem);
}

void BSplCLib::Interpolate(const Standard_Integer Degree,
                           const TColStd_Array1OfReal& FlatKnots,
                           const TColStd_Array1OfReal& Parameters,
                           const TColStd_Array1OfInteger& ContactOrderArray,
                           TColgp_Array1OfPnt& Poles,
                           TColStd_Array1OfReal& Weights,
                           Standard_Integer& InversionProblem) {
  ::Interpolate(Degree, FlatKnots, Parameters, ContactOrderArray, Poles,
                Weights, InversionProblem);
}
