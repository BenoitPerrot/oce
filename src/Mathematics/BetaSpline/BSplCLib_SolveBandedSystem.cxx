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
#include <Mathematics/Optimization/math_Matrix.hxx>
#include <Mathematics/BetaSpline/BSplCLib_Helpers.hxx>

//=======================================================================
// function : Solves a LU factored Matrix
// purpose  :
//=======================================================================

Standard_Integer BSplCLib::SolveBandedSystem(const math_Matrix& Matrix,
					     const Standard_Integer UpperBandWidth,
					     const Standard_Integer LowerBandWidth,
					     const Standard_Integer ArrayDimension,
					     Standard_Real& Array) {
  Standard_Integer ii, jj, kk, MinIndex, MaxIndex, ReturnCode = 0;

  Standard_Real* PolesArray = &Array;
  Standard_Real Inverse;

  if (Matrix.LowerCol() != 1 ||
      Matrix.UpperCol() != UpperBandWidth + LowerBandWidth + 1) {
    ReturnCode = 1;
    goto FINISH;
  }

  for (ii = Matrix.LowerRow() + 1; ii <= Matrix.UpperRow(); ii++) {
    MinIndex = (ii - LowerBandWidth >= Matrix.LowerRow() ? ii - LowerBandWidth
                                                         : Matrix.LowerRow());

    for (jj = MinIndex; jj < ii; jj++) {
      for (kk = 0; kk < ArrayDimension; kk++) {
        PolesArray[(ii - 1) * ArrayDimension + kk] +=
            PolesArray[(jj - 1) * ArrayDimension + kk] *
            Matrix(ii, jj - ii + LowerBandWidth + 1);
      }
    }
  }

  for (ii = Matrix.UpperRow(); ii >= Matrix.LowerRow(); ii--) {
    MaxIndex = (ii + UpperBandWidth <= Matrix.UpperRow() ? ii + UpperBandWidth
                                                         : Matrix.UpperRow());

    for (jj = MaxIndex; jj > ii; jj--) {
      for (kk = 0; kk < ArrayDimension; kk++) {
        PolesArray[(ii - 1) * ArrayDimension + kk] -=
            PolesArray[(jj - 1) * ArrayDimension + kk] *
            Matrix(ii, jj - ii + LowerBandWidth + 1);
      }
    }

    // fixing a bug PRO18577 to avoid divizion by zero

    Standard_Real divizor = Matrix(ii, LowerBandWidth + 1);
    Standard_Real Toler = 1.0e-16;
    if (Abs(divizor) > Toler)
      Inverse = 1.0e0 / divizor;
    else {
      Inverse = 1.0e0;
      //      cout << "  BSplCLib::SolveBandedSystem() : zero determinant " <<
      //      endl;
      ReturnCode = 1;
      goto FINISH;
    }

    for (kk = 0; kk < ArrayDimension; kk++) {
      PolesArray[(ii - 1) * ArrayDimension + kk] *= Inverse;
    }
  }
FINISH:
  return (ReturnCode);
}

//=======================================================================
// function : Solves a LU factored Matrix
// purpose  : if HomogeneousFlag is 1 then the input and the output
//           will be homogeneous that is no division or multiplication
//           by weigths will happen. On the contrary if HomogeneousFlag
//           is 0 then the poles will be multiplied first by the weights
//           and after interpolation they will be devided by the weights
//=======================================================================

Standard_Integer BSplCLib::SolveBandedSystem(const math_Matrix& Matrix,
					     const Standard_Integer UpperBandWidth,
					     const Standard_Integer LowerBandWidth,
					     const Standard_Boolean HomogeneousFlag,
					     const Standard_Integer ArrayDimension,
					     Standard_Real& Poles,
					     Standard_Real& Weights) {
  Standard_Integer ii, kk, ErrorCode = 0, ReturnCode = 0;

  Standard_Real Inverse, *PolesArray = &Poles, *WeightsArray = &Weights;

  if (Matrix.LowerCol() != 1 ||
      Matrix.UpperCol() != UpperBandWidth + LowerBandWidth + 1) {
    ReturnCode = 1;
    goto FINISH;
  }
  if (HomogeneousFlag == Standard_False) {
    for (ii = 0; ii < Matrix.UpperRow() - Matrix.LowerRow() + 1; ii++) {
      for (kk = 0; kk < ArrayDimension; kk++) {
        PolesArray[ii * ArrayDimension + kk] *= WeightsArray[ii];
      }
    }
  }
  ErrorCode = BSplCLib::SolveBandedSystem(
      Matrix, UpperBandWidth, LowerBandWidth, ArrayDimension, Poles);
  if (ErrorCode != 0) {
    ReturnCode = 2;
    goto FINISH;
  }
  ErrorCode = BSplCLib::SolveBandedSystem(Matrix, UpperBandWidth,
                                          LowerBandWidth, 1, Weights);
  if (ErrorCode != 0) {
    ReturnCode = 3;
    goto FINISH;
  }
  if (HomogeneousFlag == Standard_False) {
    for (ii = 0; ii < Matrix.UpperRow() - Matrix.LowerRow() + 1; ii++) {
      Inverse = 1.0e0 / WeightsArray[ii];

      for (kk = 0; kk < ArrayDimension; kk++) {
        PolesArray[ii * ArrayDimension + kk] *= Inverse;
      }
    }
  }
FINISH:
  return (ReturnCode);
}

//

template <typename Array1OfPoints>
static Standard_Integer SolveBandedSystem(const math_Matrix& Matrix,
                                          const Standard_Integer UpperBandWidth,
                                          const Standard_Integer LowerBandWidth,
                                          Array1OfPoints& PolesArray) {
  Standard_Real *PArray = (Standard_Real*)&PolesArray(PolesArray.Lower());
  return BSplCLib::SolveBandedSystem(Matrix, UpperBandWidth, LowerBandWidth,
                                     DimensionTrait<Array1OfPoints>::d, PArray[0]);
}

template <typename Array1OfPoints>
static Standard_Integer SolveBandedSystem(const math_Matrix& Matrix,
					  const Standard_Integer UpperBandWidth,
					  const Standard_Integer LowerBandWidth,
					  const Standard_Boolean HomogeneousFlag,
					  Array1OfPoints& PolesArray,
					  TColStd_Array1OfReal& WeightsArray) {
  Standard_Real *PArray = (Standard_Real*)&PolesArray(PolesArray.Lower());
  Standard_Real *WArray = (Standard_Real*)&WeightsArray(WeightsArray.Lower());
  return BSplCLib::SolveBandedSystem(Matrix, UpperBandWidth, LowerBandWidth,
                                     HomogeneousFlag, DimensionTrait<Array1OfPoints>::d,
				     PArray[0],
                                     WArray[0]);
}

// Instantiating for 2D curves

Standard_Integer BSplCLib::SolveBandedSystem(const math_Matrix& Matrix,
					     const Standard_Integer UpperBandWidth,
					     const Standard_Integer LowerBandWidth,
					     TColgp_Array1OfPnt2d& PolesArray) {
  return ::SolveBandedSystem(Matrix, UpperBandWidth, LowerBandWidth,
                             PolesArray);
}

Standard_Integer BSplCLib::SolveBandedSystem(const math_Matrix& Matrix,
					     const Standard_Integer UpperBandWidth,
					     const Standard_Integer LowerBandWidth,
					     const Standard_Boolean HomogeneousFlag,
					     TColgp_Array1OfPnt2d& PolesArray,
					     TColStd_Array1OfReal& WeightsArray) {
  return ::SolveBandedSystem(Matrix, UpperBandWidth, LowerBandWidth,
                             HomogeneousFlag, PolesArray, WeightsArray);
}

// Instantiating for 3D curves

Standard_Integer BSplCLib::SolveBandedSystem(const math_Matrix& Matrix,
					     const Standard_Integer UpperBandWidth,
					     const Standard_Integer LowerBandWidth,
					     TColgp_Array1OfPnt& PolesArray) {
  return ::SolveBandedSystem(Matrix, UpperBandWidth, LowerBandWidth,
                             PolesArray);
}

Standard_Integer BSplCLib::SolveBandedSystem(const math_Matrix& Matrix,
					     const Standard_Integer UpperBandWidth,
					     const Standard_Integer LowerBandWidth,
					     const Standard_Boolean HomogeneousFlag,
					     TColgp_Array1OfPnt& PolesArray,
					     TColStd_Array1OfReal& WeightsArray) {
  return ::SolveBandedSystem(Matrix, UpperBandWidth, LowerBandWidth,
                             HomogeneousFlag, PolesArray, WeightsArray);
}
