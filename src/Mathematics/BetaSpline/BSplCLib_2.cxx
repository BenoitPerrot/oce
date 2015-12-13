// Created on: 1995-01-17
// Created by: Laurent BOURESCHE
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

// xab : modified 15-Mar-95 : added BuildBSplMatrix,FactorBandedMatrix,
//                            EvalBsplineBasis,
//                            EvalPolynomial : Horners method

#include <Foundation/Standard/Standard_Stream.hxx>

#include <Mathematics/BetaSpline/BSplCLib.hxx>
#include <gp_Mat2d.hxx>
#include <PLib.hxx>
#include <Foundation/Standard/Standard_ConstructionError.hxx>
#include <Foundation/TColStd/TColStd_Array1OfReal.hxx>
#include <Foundation/TColStd/TColStd_Array1OfInteger.hxx>
#include <Foundation/TColStd/TColStd_HArray1OfReal.hxx>
#include <Foundation/TColStd/TColStd_HArray1OfInteger.hxx>

#include <math_Matrix.hxx>

//=======================================================================
// struct : BSplCLib_DataContainer
// purpose: Auxiliary structure providing buffers for poles and knots used in
//         evaluation of bspline (allocated in the stack)
//=======================================================================

struct BSplCLib_DataContainer {
  BSplCLib_DataContainer(Standard_Integer Degree) {
    (void)Degree;  // avoid compiler warning
    Standard_OutOfRange_Raise_if(
        Degree > BSplCLib::MaxDegree() || BSplCLib::MaxDegree() > 25,
        "BSplCLib: bspline degree is greater than maximum supported");
  }

  Standard_Real poles[2 * (25 + 1)];
  Standard_Real knots[2 * 25];
  Standard_Real ders[4];
};

// methods for 1 dimensional BSplines

//=======================================================================
// function : BuildEval
// purpose  : builds the local array for evaluation
//=======================================================================

static void BuildEval(const Standard_Integer Degree,
		      const Standard_Integer Index,
		      const TColStd_Array1OfReal& Poles,
		      Standard_Real& LP) {
  Standard_Integer PLower = Poles.Lower();
  Standard_Integer PUpper = Poles.Upper();

  Standard_Integer ip = PLower + Index - 1;
  Standard_Real* pole = &LP;

  for (auto i = 0; i <= Degree; i++) {
    ip++;
    if (ip > PUpper) ip = PLower;
    pole[0] = Poles(ip);
    pole += 1;
  }
}

static void BuildEval(const Standard_Integer Degree,
		      const Standard_Integer Index,
		      const TColStd_Array1OfReal& Poles,
		      const TColStd_Array1OfReal& Weights,
		      Standard_Real& LP) {
  Standard_Integer PLower = Poles.Lower();
  Standard_Integer PUpper = Poles.Upper();

  Standard_Integer ip = PLower + Index - 1;
  Standard_Real* pole = &LP;

  for (auto i = 0; i <= Degree; i++) {
    ip++;
    if (ip > PUpper) ip = PLower;
    Standard_Real w = Weights(ip);
    pole[1] = w;
    pole[0] = Poles(ip) * w;
    pole += 2;
  }
}

//=======================================================================
// function : PrepareEval
// purpose  : stores data for Eval in the local arrays
//           dc.poles and dc.knots
//=======================================================================

static void PrepareEval(
    Standard_Real& u, Standard_Integer& index, Standard_Integer& dim,
    Standard_Boolean& rational, const Standard_Integer Degree,
    const Standard_Boolean Periodic, const TColStd_Array1OfReal& Poles,
    const TColStd_Array1OfReal* Weights, const TColStd_Array1OfReal& Knots,
    const TColStd_Array1OfInteger* Mults, BSplCLib_DataContainer& dc) {
  // Set the Index
  BSplCLib::LocateParameter(Degree, Knots, Mults, u, Periodic, index, u);

  // make the knots
  BSplCLib::BuildKnots(Degree, index, Periodic, Knots, Mults, *dc.knots);
  if (Mults == nullptr)
    index -= Knots.Lower() + Degree;
  else
    index = BSplCLib::PoleIndex(Degree, index, Periodic, *Mults);

  // check truly rational
  rational = (Weights != nullptr);
  if (rational) {  // FIXME: unclear condition
    Standard_Integer WLower = Weights->Lower() + index;
    rational = BSplCLib::IsRational(*Weights, WLower, WLower + Degree);
  }

  // make the poles
  if (rational) {
    dim = 2;
    BuildEval(Degree, index, Poles, *Weights, *dc.poles);
  } else {
    dim = 1;
    BuildEval(Degree, index, Poles, *dc.poles);
  }
}

//=======================================================================
// function : D0
// purpose  :
//=======================================================================

void BSplCLib::D0(const Standard_Real U, const Standard_Integer Index,
                  const Standard_Integer Degree,
                  const Standard_Boolean Periodic,
                  const TColStd_Array1OfReal& Poles,
                  const TColStd_Array1OfReal* Weights,
                  const TColStd_Array1OfReal& Knots,
                  const TColStd_Array1OfInteger* Mults, Standard_Real& P) {
  Standard_Integer dim, index = Index;
  Standard_Real u = U;
  Standard_Boolean rational;
  BSplCLib_DataContainer dc(Degree);
  PrepareEval(u, index, dim, rational, Degree, Periodic, Poles, Weights, Knots,
              Mults, dc);
  BSplCLib::Eval(u, Degree, *dc.knots, dim, *dc.poles);
  if (rational)
    P = dc.poles[0] / dc.poles[1];
  else
    P = dc.poles[0];
}

//=======================================================================
// function : D1
// purpose  :
//=======================================================================

void BSplCLib::D1(const Standard_Real U, const Standard_Integer Index,
                  const Standard_Integer Degree,
                  const Standard_Boolean Periodic,
                  const TColStd_Array1OfReal& Poles,
                  const TColStd_Array1OfReal* Weights,
                  const TColStd_Array1OfReal& Knots,
                  const TColStd_Array1OfInteger* Mults, Standard_Real& P,
                  Standard_Real& V) {
  Standard_Integer dim, index = Index;
  Standard_Real u = U;
  Standard_Boolean rational;
  BSplCLib_DataContainer dc(Degree);
  PrepareEval(u, index, dim, rational, Degree, Periodic, Poles, Weights, Knots,
              Mults, dc);
  BSplCLib::Bohm(u, Degree, 1, *dc.knots, dim, *dc.poles);
  Standard_Real* result = dc.poles;
  if (rational) {
    PLib::RationalDerivative(Degree, 1, 1, *dc.poles, *dc.ders);
    result = dc.ders;
  }
  P = result[0];
  V = result[1];
}

//=======================================================================
// function : D2
// purpose  :
//=======================================================================

void BSplCLib::D2(const Standard_Real U, const Standard_Integer Index,
                  const Standard_Integer Degree,
                  const Standard_Boolean Periodic,
                  const TColStd_Array1OfReal& Poles,
                  const TColStd_Array1OfReal* Weights,
                  const TColStd_Array1OfReal& Knots,
                  const TColStd_Array1OfInteger* Mults, Standard_Real& P,
                  Standard_Real& V1, Standard_Real& V2) {
  Standard_Integer dim, index = Index;
  Standard_Real u = U;
  Standard_Boolean rational;
  BSplCLib_DataContainer dc(Degree);
  PrepareEval(u, index, dim, rational, Degree, Periodic, Poles, Weights, Knots,
              Mults, dc);
  BSplCLib::Bohm(u, Degree, 2, *dc.knots, dim, *dc.poles);
  Standard_Real* result = dc.poles;
  if (rational) {
    PLib::RationalDerivative(Degree, 2, 1, *dc.poles, *dc.ders);
    result = dc.ders;
  }
  P = result[0];
  V1 = result[1];
  if (!rational && (Degree < 2))
    V2 = 0.;
  else
    V2 = result[2];
}

//=======================================================================
// function : D3
// purpose  :
//=======================================================================

void BSplCLib::D3(const Standard_Real U, const Standard_Integer Index,
                  const Standard_Integer Degree,
                  const Standard_Boolean Periodic,
                  const TColStd_Array1OfReal& Poles,
                  const TColStd_Array1OfReal* Weights,
                  const TColStd_Array1OfReal& Knots,
                  const TColStd_Array1OfInteger* Mults, Standard_Real& P,
                  Standard_Real& V1, Standard_Real& V2, Standard_Real& V3) {
  Standard_Integer dim, index = Index;
  Standard_Real u = U;
  Standard_Boolean rational;
  BSplCLib_DataContainer dc(Degree);
  PrepareEval(u, index, dim, rational, Degree, Periodic, Poles, Weights, Knots,
              Mults, dc);
  BSplCLib::Bohm(u, Degree, 3, *dc.knots, dim, *dc.poles);
  Standard_Real* result = dc.poles;
  if (rational) {
    PLib::RationalDerivative(Degree, 3, 1, *dc.poles, *dc.ders);
    result = dc.ders;
  }
  P = result[0];
  V1 = result[1];
  if (!rational && (Degree < 2))
    V2 = 0.;
  else
    V2 = result[2];
  if (!rational && (Degree < 3))
    V3 = 0.;
  else
    V3 = result[3];
}

//=======================================================================
// function : DN
// purpose  :
//=======================================================================

void BSplCLib::DN(const Standard_Real U, const Standard_Integer N,
                  const Standard_Integer Index, const Standard_Integer Degree,
                  const Standard_Boolean Periodic,
                  const TColStd_Array1OfReal& Poles,
                  const TColStd_Array1OfReal* Weights,
                  const TColStd_Array1OfReal& Knots,
                  const TColStd_Array1OfInteger* Mults, Standard_Real& VN) {
  Standard_Integer dim, index = Index;
  Standard_Real u = U;
  Standard_Boolean rational;
  BSplCLib_DataContainer dc(Degree);
  PrepareEval(u, index, dim, rational, Degree, Periodic, Poles, Weights, Knots,
              Mults, dc);
  BSplCLib::Bohm(u, Degree, N, *dc.knots, dim, *dc.poles);
  if (rational) {
    Standard_Real v;
    PLib::RationalDerivative(Degree, N, 1, *dc.poles, v, Standard_False);
    VN = v;
  } else {
    if (N > Degree)
      VN = 0.;
    else
      VN = dc.poles[N];
  }
}

//=======================================================================
// function : Build BSpline Matrix
// purpose  : Builds the Bspline Matrix
//=======================================================================

Standard_Integer BSplCLib::BuildBSpMatrix(
    const TColStd_Array1OfReal& Parameters,
    const TColStd_Array1OfInteger& ContactOrderArray,
    const TColStd_Array1OfReal& FlatKnots, const Standard_Integer Degree,
    math_Matrix& Matrix, Standard_Integer& UpperBandWidth,
    Standard_Integer& LowerBandWidth) {
  Standard_Integer ii, jj, Index, ErrorCode,
      ReturnCode = 0, FirstNonZeroBsplineIndex, BandWidth, MaxOrder = 21, Order;

  math_Matrix BSplineBasis(1, MaxOrder, 1, MaxOrder);

  Order = Degree + 1;
  UpperBandWidth = Degree;
  LowerBandWidth = Degree;
  BandWidth = UpperBandWidth + LowerBandWidth + 1;
  if (Matrix.LowerRow() != Parameters.Lower() ||
      Matrix.UpperRow() != Parameters.Upper() || Matrix.LowerCol() != 1 ||
      Matrix.UpperCol() != BandWidth) {
    ReturnCode = 1;
    goto FINISH;
  }

  for (ii = Parameters.Lower(); ii <= Parameters.Upper(); ii++) {
    ErrorCode = BSplCLib::EvalBsplineBasis(
        1, ContactOrderArray(ii), Order, FlatKnots, Parameters(ii),

        FirstNonZeroBsplineIndex, BSplineBasis);
    if (ErrorCode != 0) {
      ReturnCode = 2;
      goto FINISH;
    }
    Index = LowerBandWidth + 1 + FirstNonZeroBsplineIndex - ii;

    for (jj = 1; jj < Index; jj++) {
      Matrix.Value(ii, jj) = 0.0e0;
    }

    for (jj = 1; jj <= Order; jj++) {
      Matrix.Value(ii, Index) = BSplineBasis(ContactOrderArray(ii) + 1, jj);
      Index += 1;
    }

    for (jj = Index; jj <= BandWidth; jj++) {
      Matrix.Value(ii, jj) = 0.0e0;
    }
  }
FINISH:
  ;
  return (ReturnCode);
}

//=======================================================================
// function : Makes LU decompositiomn without Pivoting
// purpose  : Builds the Bspline Matrix
//=======================================================================

Standard_Integer BSplCLib::FactorBandedMatrix(
    math_Matrix& Matrix, const Standard_Integer UpperBandWidth,
    const Standard_Integer LowerBandWidth,
    Standard_Integer& PivotIndexProblem) {
  Standard_Integer ii, jj, kk, Index, MinIndex, MaxIndex,
      ReturnCode = 0, BandWidth = UpperBandWidth + LowerBandWidth + 1;

  Standard_Real Inverse;
  PivotIndexProblem = 0;

  for (ii = Matrix.LowerRow() + 1; ii <= Matrix.UpperRow(); ii++) {
    MinIndex = (LowerBandWidth - ii + 2 >= 1 ? LowerBandWidth - ii + 2 : 1);

    for (jj = MinIndex; jj <= LowerBandWidth; jj++) {
      Index = ii - LowerBandWidth + jj - 1;
      Inverse = Matrix(Index, LowerBandWidth + 1);
      if (Abs(Inverse) > RealSmall()) {
        Inverse = -1.0e0 / Inverse;
      } else {
        ReturnCode = 1;
        PivotIndexProblem = Index;
        goto FINISH;
      }
      Matrix(ii, jj) = Matrix(ii, jj) * Inverse;
      MaxIndex = BandWidth + Index - ii;

      for (kk = jj + 1; kk <= MaxIndex; kk++) {
        Matrix(ii, kk) += Matrix(ii, jj) * Matrix(Index, kk + ii - Index);
      }
    }
  }
FINISH:
  return (ReturnCode);
}

//=======================================================================
// function : Build BSpline Matrix
// purpose  : Builds the Bspline Matrix
//=======================================================================

Standard_Integer BSplCLib::EvalBsplineBasis
    //(const Standard_Integer              Side, // = 1 rigth side, -1 left side
    (const Standard_Integer,  // = 1 rigth side, -1 left side
     const Standard_Integer DerivativeRequest, const Standard_Integer Order,
     const TColStd_Array1OfReal& FlatKnots, const Standard_Real Parameter,
     Standard_Integer& FirstNonZeroBsplineIndex, math_Matrix& BsplineBasis) {
  // the matrix must have at least DerivativeRequest + 1
  //   row and Order columns
  // the result are stored in the following way in
  // the Bspline matrix
  // Let i be the FirstNonZeroBsplineIndex and
  // t be the parameter value, k the order of the
  // knot vector, r the DerivativeRequest :
  //
  //   B (t)   B (t)                     B (t)
  //    i       i+1                       i+k-1
  //
  //    (1)     (1)                       (1)
  //   B (t)   B (t)                     B (t)
  //    i       i+1                       i+k-1
  //
  //
  //
  //
  //    (r)     (r)                       (r)
  //   B (t)   B (t)                     B (t)
  //    i       i+1                       i+k-1
  //
  Standard_Integer ReturnCode, ii, pp, qq, ss, NumPoles, LocalRequest;
  //  ,Index ;

  Standard_Real NewParameter, Inverse, Factor, LocalInverse, Saved;
  // , *FlatKnotsArray ;

  ReturnCode = 0;
  FirstNonZeroBsplineIndex = 0;
  LocalRequest = DerivativeRequest;
  if (DerivativeRequest >= Order) {
    LocalRequest = Order - 1;
  }

  if (BsplineBasis.LowerCol() != 1 || BsplineBasis.UpperCol() < Order ||
      BsplineBasis.LowerRow() != 1 || BsplineBasis.UpperRow() <= LocalRequest) {
    ReturnCode = 1;
    goto FINISH;
  }
  NumPoles = FlatKnots.Upper() - FlatKnots.Lower() + 1 - Order;
  BSplCLib::LocateParameter(Order - 1, FlatKnots, Parameter, Standard_False,
                            Order, NumPoles + 1, ii, NewParameter);

  FirstNonZeroBsplineIndex = ii - Order + 1;

  BsplineBasis(1, 1) = 1.0e0;
  LocalRequest = DerivativeRequest;
  if (DerivativeRequest >= Order) {
    LocalRequest = Order - 1;
  }

  for (qq = 2; qq <= Order - LocalRequest; qq++) {
    BsplineBasis(1, qq) = 0.0e0;

    for (pp = 1; pp <= qq - 1; pp++) {
      //
      // this should be always invertible if ii is correctly computed
      //
      Factor = (Parameter - FlatKnots(ii - qq + pp + 1)) /
               (FlatKnots(ii + pp) - FlatKnots(ii - qq + pp + 1));
      Saved = Factor * BsplineBasis(1, pp);
      BsplineBasis(1, pp) *= (1.0e0 - Factor);
      BsplineBasis(1, pp) += BsplineBasis(1, qq);
      BsplineBasis(1, qq) = Saved;
    }
  }

  for (qq = Order - LocalRequest + 1; qq <= Order; qq++) {
    for (pp = 1; pp <= qq - 1; pp++) {
      BsplineBasis(Order - qq + 2, pp) = BsplineBasis(1, pp);
    }
    BsplineBasis(1, qq) = 0.0e0;

    for (ss = Order - LocalRequest + 1; ss <= qq; ss++) {
      BsplineBasis(Order - ss + 2, qq) = 0.0e0;
    }

    for (pp = 1; pp <= qq - 1; pp++) {
      Inverse = 1.0e0 / (FlatKnots(ii + pp) - FlatKnots(ii - qq + pp + 1));
      Factor = (Parameter - FlatKnots(ii - qq + pp + 1)) * Inverse;
      Saved = Factor * BsplineBasis(1, pp);
      BsplineBasis(1, pp) *= (1.0e0 - Factor);
      BsplineBasis(1, pp) += BsplineBasis(1, qq);
      BsplineBasis(1, qq) = Saved;
      LocalInverse = (Standard_Real)(qq - 1) * Inverse;

      for (ss = Order - LocalRequest + 1; ss <= qq; ss++) {
        Saved = LocalInverse * BsplineBasis(Order - ss + 2, pp);
        BsplineBasis(Order - ss + 2, pp) *= -LocalInverse;
        BsplineBasis(Order - ss + 2, pp) += BsplineBasis(Order - ss + 2, qq);
        BsplineBasis(Order - ss + 2, qq) = Saved;
      }
    }
  }
FINISH:
  return (ReturnCode);
}

//=======================================================================
// function : MergeBSplineKnots
// purpose  :
//=======================================================================
void BSplCLib::MergeBSplineKnots(
    const Standard_Real Tolerance, const Standard_Real StartValue,
    const Standard_Real EndValue, const Standard_Integer Degree1,
    const TColStd_Array1OfReal& Knots1, const TColStd_Array1OfInteger& Mults1,
    const Standard_Integer Degree2, const TColStd_Array1OfReal& Knots2,
    const TColStd_Array1OfInteger& Mults2, Standard_Integer& NumPoles,
    Handle(TColStd_HArray1OfReal) & NewKnots,
    Handle(TColStd_HArray1OfInteger) & NewMults) {
  Standard_Integer ii, jj, continuity, set_mults_flag, degree, index, num_knots;
  if (StartValue < EndValue - Tolerance) {
    TColStd_Array1OfReal knots1(1, Knots1.Length());
    TColStd_Array1OfReal knots2(1, Knots2.Length());
    degree = Degree1 + Degree2;
    index = 1;

    for (ii = Knots1.Lower(); ii <= Knots1.Upper(); ii++) {
      knots1(index) = Knots1(ii);
      index += 1;
    }
    index = 1;

    for (ii = Knots2.Lower(); ii <= Knots2.Upper(); ii++) {
      knots2(index) = Knots2(ii);
      index += 1;
    }
    BSplCLib::Reparametrize(StartValue, EndValue, knots1);

    BSplCLib::Reparametrize(StartValue, EndValue, knots2);
    num_knots = 0;
    jj = 1;

    for (ii = 1; ii <= knots1.Length(); ii++) {
      while (jj <= knots2.Length() && knots2(jj) <= knots1(ii) - Tolerance) {
        jj += 1;
        num_knots += 1;
      }

      while (jj <= knots2.Length() && knots2(jj) <= knots1(ii) + Tolerance) {
        jj += 1;
      }
      num_knots += 1;
    }
    NewKnots = new TColStd_HArray1OfReal(1, num_knots);
    NewMults = new TColStd_HArray1OfInteger(1, num_knots);
    num_knots = 1;
    jj = 1;

    for (ii = 1; ii <= knots1.Length(); ii++) {
      while (jj <= knots2.Length() && knots2(jj) <= knots1(ii) - Tolerance) {
        NewKnots->ChangeArray1()(num_knots) = knots2(jj);
        NewMults->ChangeArray1()(num_knots) = Mults2(jj) + Degree1;
        jj += 1;
        num_knots += 1;
      }
      set_mults_flag = 0;

      while (jj <= knots2.Length() && knots2(jj) <= knots1(ii) + Tolerance) {
        continuity = Min(Degree1 - Mults1(ii), Degree2 - Mults2(jj));
        set_mults_flag = 1;
        NewMults->ChangeArray1()(num_knots) = degree - continuity;
        jj += 1;
      }

      NewKnots->ChangeArray1()(num_knots) = knots1(ii);
      if (!set_mults_flag) {
        NewMults->ChangeArray1()(num_knots) = Mults1(ii) + Degree2;
      }
      num_knots += 1;
    }
    num_knots -= 1;
    NewMults->ChangeArray1()(1) = degree + 1;
    NewMults->ChangeArray1()(num_knots) = degree + 1;
    index = 0;

    for (ii = 1; ii <= num_knots; ii++) {
      index += NewMults->Value(ii);
    }
    NumPoles = index - degree - 1;
  }
}
