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
#include <Mathematics/Optimization/math_Matrix.hxx>

//=======================================================================
// function : MovePoint
// purpose  : Find the new poles which allows  an old point (with a
//           given  u as parameter) to reach a new position
//=======================================================================

template <typename Array1OfPoints, typename Vector>
static void MovePoint(const Standard_Real U,
                      const Vector& Displ,
                      const Standard_Integer Index1,
                      const Standard_Integer Index2,
                      const Standard_Integer Degree,
                      const Standard_Boolean Rational,
                      const Array1OfPoints& Poles,
                      const TColStd_Array1OfReal& Weights,
                      const TColStd_Array1OfReal& FlatKnots,
                      Standard_Integer& FirstIndex,
                      Standard_Integer& LastIndex,
                      Array1OfPoints& NewPoles) {
  // calculate the BSplineBasis in the parameter U
  Standard_Integer FirstNonZeroBsplineIndex;
  math_Matrix BSplineBasis(1, 1, 1, Degree + 1);
  Standard_Integer ErrorCode = BSplCLib::EvalBsplineBasis(
      1, 0, Degree + 1, FlatKnots, U, FirstNonZeroBsplineIndex, BSplineBasis);
  if (ErrorCode != 0) {
    FirstIndex = 0;
    LastIndex = 0;

    for (Standard_Integer i = Poles.Lower(); i <= Poles.Upper(); i++) {
      NewPoles(i) = Poles(i);
    }
    return;
  }

  // find the span which is predominant for parameter U
  FirstIndex = FirstNonZeroBsplineIndex;
  LastIndex = FirstNonZeroBsplineIndex + Degree;
  if (FirstIndex < Index1)
    FirstIndex = Index1;
  if (LastIndex > Index2)
    LastIndex = Index2;

  Standard_Real maxValue = 0.0;
  Standard_Integer i, kk1 = 0, kk2, ii;

  for (i = FirstIndex - FirstNonZeroBsplineIndex + 1;
       i <= LastIndex - FirstNonZeroBsplineIndex + 1; i++) {
    if (BSplineBasis(1, i) > maxValue) {
      kk1 = i + FirstNonZeroBsplineIndex - 1;
      maxValue = BSplineBasis(1, i);
    }
  }

  // find a kk2 if symetriy
  kk2 = kk1;
  i = kk1 - FirstNonZeroBsplineIndex + 2;
  if ((kk1 + 1) <= LastIndex) {
    if (Abs(BSplineBasis(1, kk1 - FirstNonZeroBsplineIndex + 2) - maxValue) <
        1.e-10) {
      kk2 = kk1 + 1;
    }
  }

  // compute the vector of displacement
  Standard_Real D1 = 0.0;
  Standard_Real D2 = 0.0;
  Standard_Real hN, Coef, Dval;

  for (i = 1; i <= Degree + 1; i++) {
    ii = i + FirstNonZeroBsplineIndex - 1;
    if (Rational) {
      hN = Weights(ii) * BSplineBasis(1, i);
      D2 += hN;
    } else {
      hN = BSplineBasis(1, i);
    }
    if (ii >= FirstIndex && ii <= LastIndex) {
      if (ii < kk1) {
        Dval = kk1 - ii;
      } else if (ii > kk2) {
        Dval = ii - kk2;
      } else {
        Dval = 0.0;
      }
      D1 += 1. / (Dval + 1.) * hN;
    }
  }

  if (Rational) {
    Coef = D2 / D1;
  } else {
    Coef = 1. / D1;
  }

  // compute the new poles

  for (i = Poles.Lower(); i <= Poles.Upper(); i++) {
    if (i >= FirstIndex && i <= LastIndex) {
      if (i < kk1) {
        Dval = kk1 - i;
      } else if (i > kk2) {
        Dval = i - kk2;
      } else {
        Dval = 0.0;
      }
      NewPoles(i) = Poles(i).Translated((Coef / (Dval + 1.)) * Displ);
    } else {
      NewPoles(i) = Poles(i);
    }
  }
}

// Instantiating for 2D curves

void BSplCLib::MovePoint(const Standard_Real U,
                         const gp_Vec2d& Displ,
                         const Standard_Integer Index1,
                         const Standard_Integer Index2,
                         const Standard_Integer Degree,
                         const Standard_Boolean Rational,
                         const TColgp_Array1OfPnt2d& Poles,
                         const TColStd_Array1OfReal& Weights,
                         const TColStd_Array1OfReal& FlatKnots,
                         Standard_Integer& FirstIndex,
                         Standard_Integer& LastIndex,
                         TColgp_Array1OfPnt2d& NewPoles) {
  ::MovePoint(U, Displ, Index1, Index2, Degree, Rational, Poles, Weights,
              FlatKnots, FirstIndex, LastIndex, NewPoles);
}

// Instantiating for 3D curves

void BSplCLib::MovePoint(const Standard_Real U,
                         const gp_Vec& Displ,
                         const Standard_Integer Index1,
                         const Standard_Integer Index2,
                         const Standard_Integer Degree,
                         const Standard_Boolean Rational,
                         const TColgp_Array1OfPnt& Poles,
                         const TColStd_Array1OfReal& Weights,
                         const TColStd_Array1OfReal& FlatKnots,
                         Standard_Integer& FirstIndex,
                         Standard_Integer& LastIndex,
                         TColgp_Array1OfPnt& NewPoles) {
  ::MovePoint(U, Displ, Index1, Index2, Degree, Rational, Poles, Weights,
              FlatKnots, FirstIndex, LastIndex, NewPoles);
}
