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
#include <Mathematics/Optimization/math_Matrix.hxx>
#include <Foundation/NCollection/NCollection_LocalArray.hxx>

//=======================================================================
//class : BSplCLib_LocalMatrix
//purpose: Auxiliary class optimizing creation of matrix buffer for
//         evaluation of bspline (using stack allocation for main matrix)
//=======================================================================

class BSplCLib_LocalMatrix : public math_Matrix 
{
public:
  BSplCLib_LocalMatrix (Standard_Integer DerivativeRequest, Standard_Integer Order)
    : math_Matrix (myBuffer, 1, DerivativeRequest + 1, 1, Order)
  {
    Standard_OutOfRange_Raise_if (DerivativeRequest > BSplCLib::MaxDegree() ||
        Order > BSplCLib::MaxDegree()+1 || BSplCLib::MaxDegree() > 25,
        "BSplCLib: bspline degree is greater than maximum supported");
  }

 private:
  // local buffer, to be sufficient for addressing by index [Degree+1][Degree+1]
  // (see math_Matrix implementation)
  Standard_Real myBuffer[27*27];
};

//=======================================================================
//function : Evaluates a Bspline function : uses the ExtrapMode 
//purpose  : the function is extrapolated using the Taylor expansion
//           of degree ExtrapMode[0] to the left and the Taylor
//           expansion of degree ExtrapMode[1] to the right 
//  this evaluates the numerator by multiplying by the weights
//  and evaluating it but does not call RationalDerivatives after 
//=======================================================================

void  BSplCLib::Eval
(const Standard_Real                   Parameter,
 const Standard_Boolean                PeriodicFlag,
 const Standard_Integer                DerivativeRequest,
 Standard_Integer&                     ExtrapMode,
 const Standard_Integer                Degree,
 const  TColStd_Array1OfReal&          FlatKnots, 
 const Standard_Integer                ArrayDimension,
 Standard_Real&                        Poles,
 Standard_Real&                        Weights,
 Standard_Real&                        PolesResults,
 Standard_Real&                        WeightsResults)
{
  Standard_Integer ii,
  jj,
  kk=0,
  Index,
  Index1,
  Index2,
  *ExtrapModeArray,
  Modulus,
  NewRequest,
  ExtrapolatingFlag[2],
  ErrorCode,
  Order = Degree + 1,
  FirstNonZeroBsplineIndex,
  LocalRequest = DerivativeRequest ;
  Standard_Real  *PResultArray,
  *WResultArray,
  *PolesArray,
  *WeightsArray,
  LocalParameter,
  Period,
  Inverse,
  Delta ;
  PolesArray = &Poles     ;
  WeightsArray = &Weights ;
  ExtrapModeArray = &ExtrapMode ;
  PResultArray = &PolesResults ;
  WResultArray = &WeightsResults ;
  LocalParameter = Parameter ;
  ExtrapolatingFlag[0] = 
    ExtrapolatingFlag[1] = 0 ;
  //
  // check if we are extrapolating to a degree which is smaller than
  // the degree of the Bspline
  //
  if (PeriodicFlag) {
    Period = FlatKnots(FlatKnots.Upper() - 1) - FlatKnots(2) ;

    while (LocalParameter > FlatKnots(FlatKnots.Upper() - 1)) {
      LocalParameter -= Period ;
    }
    
    while (LocalParameter < FlatKnots(2)) {
      LocalParameter +=  Period ;
    }
  }
  if (Parameter < FlatKnots(2) && 
      LocalRequest < ExtrapModeArray[0] &&
      ExtrapModeArray[0] < Degree) {
    LocalRequest = ExtrapModeArray[0] ;
    LocalParameter = FlatKnots(2) ;
    ExtrapolatingFlag[0] = 1 ;
  }
  if (Parameter > FlatKnots(FlatKnots.Upper()-1) &&
      LocalRequest < ExtrapModeArray[1]  &&
      ExtrapModeArray[1] < Degree) {
    LocalRequest = ExtrapModeArray[1] ;
    LocalParameter = FlatKnots(FlatKnots.Upper()-1) ;
    ExtrapolatingFlag[1] = 1 ;
  }
  Delta = Parameter - LocalParameter ;
  if (LocalRequest >= Order) {
    LocalRequest = Degree ;
  }
  if (PeriodicFlag) {
    Modulus = FlatKnots.Length() - Degree -1 ;
  }
  else {
    Modulus = FlatKnots.Length() - Degree ;
  }

  BSplCLib_LocalMatrix BsplineBasis (LocalRequest, Order);
  ErrorCode =
    BSplCLib::EvalBsplineBasis(1,
			       LocalRequest,
			       Order,
			       FlatKnots,
			       LocalParameter,
			       FirstNonZeroBsplineIndex,
			       BsplineBasis) ;
  if (ErrorCode != 0) {
    goto FINISH ;
  }
  if (ExtrapolatingFlag[0] == 0 && ExtrapolatingFlag[1] == 0) {
    Index = 0 ;
    Index2 = 0 ;

    for (ii = 1 ; ii <= LocalRequest + 1 ; ii++) {
      Index1 = FirstNonZeroBsplineIndex ;

      for (kk = 0 ; kk < ArrayDimension ; kk++) {
	PResultArray[Index + kk] = 0.0e0 ;
      }
      WResultArray[Index] = 0.0e0 ;

      for (jj = 1  ; jj <= Order ; jj++) {
	
	for (kk = 0 ; kk < ArrayDimension ; kk++) {
	  PResultArray[Index + kk] += 
	    PolesArray[(Index1-1) * ArrayDimension + kk] 
	      * WeightsArray[Index1-1] * BsplineBasis(ii,jj) ;
	}
	WResultArray[Index2]  += WeightsArray[Index1-1] * BsplineBasis(ii,jj) ;
	
	Index1 = Index1 % Modulus ;
	Index1 += 1 ;
      }
      Index += ArrayDimension ;
      Index2 += 1 ;
    }
  }
  else {
    // 
    //  store Taylor expansion in LocalRealArray
    //
    NewRequest = DerivativeRequest ;
    if (NewRequest > Degree) {
      NewRequest = Degree ;
    }
    NCollection_LocalArray<Standard_Real> LocalRealArray((LocalRequest + 1)*ArrayDimension);
    Index = 0 ;
    Inverse = 1.0e0 ;

    for (ii = 1 ; ii <= LocalRequest + 1 ; ii++) {
      Index1 = FirstNonZeroBsplineIndex ;
      
      for (kk = 0 ; kk < ArrayDimension ; kk++) {
	LocalRealArray[Index + kk] = 0.0e0 ;
      }

      for (jj = 1  ; jj <= Order ; jj++) {

	for (kk = 0 ; kk < ArrayDimension ; kk++) {
	  LocalRealArray[Index + kk] += 
	    PolesArray[(Index1-1)*ArrayDimension + kk] * 
	      WeightsArray[Index1-1] * BsplineBasis(ii,jj) ;
	}
	Index1 = Index1 % Modulus ;
	Index1 += 1 ;
      }

      for (kk = 0 ; kk < ArrayDimension ; kk++) {
	LocalRealArray[Index + kk] *= Inverse ;
      }
      Index += ArrayDimension ;
      Inverse /= (Standard_Real) ii ;
    }
    PLib::EvalPolynomial(Delta,
			 NewRequest,
			 Degree,
			 ArrayDimension,
			 LocalRealArray[0],
			 PolesResults) ;
    Index = 0 ;
    Inverse = 1.0e0 ;

    for (ii = 1 ; ii <= LocalRequest + 1 ; ii++) {
      Index1 = FirstNonZeroBsplineIndex ;
      LocalRealArray[Index] = 0.0e0 ;

      for (jj = 1  ; jj <= Order ; jj++) {
	LocalRealArray[Index] += 
	  WeightsArray[Index1-1] * BsplineBasis(ii,jj) ;
	Index1 = Index1 % Modulus ;
	Index1 += 1 ;
      }
      LocalRealArray[Index + kk] *= Inverse ;
      Index += 1 ;
      Inverse /= (Standard_Real) ii ;
    }
    PLib::EvalPolynomial(Delta,
			 NewRequest,
			 Degree,
			 1,
			 LocalRealArray[0],
			 WeightsResults) ;
  }
  FINISH : ;
}

//=======================================================================
//function : Evaluates a Bspline function : uses the ExtrapMode 
//purpose  : the function is extrapolated using the Taylor expansion
//           of degree ExtrapMode[0] to the left and the Taylor
//           expansion of degree ExtrapMode[1] to the right 
// WARNING : the array Results is supposed to have at least 
// (DerivativeRequest + 1) * ArrayDimension slots and the 
// 
//=======================================================================

void  BSplCLib::Eval
(const Standard_Real                   Parameter,
 const Standard_Boolean                PeriodicFlag,
 const Standard_Integer                DerivativeRequest,
 Standard_Integer&                     ExtrapMode,
 const Standard_Integer                Degree,
 const  TColStd_Array1OfReal&          FlatKnots, 
 const Standard_Integer                ArrayDimension,
 Standard_Real&                        Poles,
 Standard_Real&                        Results) 
{
  Standard_Integer ii,
  jj,
  kk,
  Index,
  Index1,
  *ExtrapModeArray,
  Modulus,
  NewRequest,
  ExtrapolatingFlag[2],
  ErrorCode,
  Order = Degree + 1,
  FirstNonZeroBsplineIndex,
  LocalRequest = DerivativeRequest ;

  Standard_Real  *ResultArray,
  *PolesArray,
  LocalParameter,
  Period,
  Inverse,
  Delta ;
         
  PolesArray = &Poles ;
  ExtrapModeArray = &ExtrapMode ;
  ResultArray = &Results ;  
  LocalParameter = Parameter ;
  ExtrapolatingFlag[0] = 
    ExtrapolatingFlag[1] = 0 ;
  //
  // check if we are extrapolating to a degree which is smaller than
  // the degree of the Bspline
  //
  if (PeriodicFlag) {
    Period = FlatKnots(FlatKnots.Upper() - 1) - FlatKnots(2) ;

    while (LocalParameter > FlatKnots(FlatKnots.Upper() - 1)) {
      LocalParameter -= Period ;
    }

    while (LocalParameter < FlatKnots(2)) {
      LocalParameter +=  Period ;
    }
  }
  if (Parameter < FlatKnots(2) && 
      LocalRequest < ExtrapModeArray[0] &&
      ExtrapModeArray[0] < Degree) {
    LocalRequest = ExtrapModeArray[0] ;
    LocalParameter = FlatKnots(2) ;
    ExtrapolatingFlag[0] = 1 ;
  }
  if (Parameter > FlatKnots(FlatKnots.Upper()-1) &&
      LocalRequest < ExtrapModeArray[1]  &&
      ExtrapModeArray[1] < Degree) {
    LocalRequest = ExtrapModeArray[1] ;
    LocalParameter = FlatKnots(FlatKnots.Upper()-1) ;
    ExtrapolatingFlag[1] = 1 ;
  }
  Delta = Parameter - LocalParameter ;
  if (LocalRequest >= Order) {
    LocalRequest = Degree ;
  }
  
  if (PeriodicFlag) {
    Modulus = FlatKnots.Length() - Degree -1 ;
  }
  else {
    Modulus = FlatKnots.Length() - Degree ;
  }
  
  BSplCLib_LocalMatrix BsplineBasis (LocalRequest, Order);
  
  ErrorCode =
    BSplCLib::EvalBsplineBasis(1,
			       LocalRequest,
			       Order,
			       FlatKnots,
			       LocalParameter,
			       FirstNonZeroBsplineIndex,
			       BsplineBasis);
  if (ErrorCode != 0) {
    goto FINISH ;
  }
  if (ExtrapolatingFlag[0] == 0 && ExtrapolatingFlag[1] == 0) {
    Index = 0 ;
    
    for (ii = 1 ; ii <= LocalRequest + 1 ; ii++) {
      Index1 = FirstNonZeroBsplineIndex ;
      
      for (kk = 0 ; kk < ArrayDimension ; kk++) {
	ResultArray[Index + kk] = 0.0e0 ;
      }

      for (jj = 1  ; jj <= Order ; jj++) {
	
	for (kk = 0 ; kk < ArrayDimension ; kk++) {
	  ResultArray[Index + kk] += 
	    PolesArray[(Index1-1) * ArrayDimension + kk] * BsplineBasis(ii,jj) ;
	}
	Index1 = Index1 % Modulus ;
	Index1 += 1 ;
      }
      Index += ArrayDimension ;
    }
  }
  else {
    // 
    //  store Taylor expansion in LocalRealArray
    //
    NewRequest = DerivativeRequest ;
    if (NewRequest > Degree) {
      NewRequest = Degree ;
    }
    NCollection_LocalArray<Standard_Real> LocalRealArray((LocalRequest + 1)*ArrayDimension);

    Index = 0 ;
    Inverse = 1.0e0 ;

    for (ii = 1 ; ii <= LocalRequest + 1 ; ii++) {
      Index1 = FirstNonZeroBsplineIndex ;
      
      for (kk = 0 ; kk < ArrayDimension ; kk++) {
	LocalRealArray[Index + kk] = 0.0e0 ;
      }

      for (jj = 1  ; jj <= Order ; jj++) {

	for (kk = 0 ; kk < ArrayDimension ; kk++) {
	  LocalRealArray[Index + kk] += 
	    PolesArray[(Index1-1)*ArrayDimension + kk] * BsplineBasis(ii,jj) ;
	}
	Index1 = Index1 % Modulus ;
	Index1 += 1 ;
      }

      for (kk = 0 ; kk < ArrayDimension ; kk++) {
	LocalRealArray[Index + kk] *= Inverse ;
      }
      Index += ArrayDimension ;
      Inverse /= (Standard_Real) ii ;
    }
    PLib::EvalPolynomial(Delta,
			 NewRequest,
			 Degree,
			 ArrayDimension,
			 LocalRealArray[0],
			 Results) ;
  }
  FINISH : ;
}

//=======================================================================
//function : Evaluates a Bspline function : uses the ExtrapMode 
//purpose  : the function is extrapolated using the Taylor expansion
//           of degree ExtrapMode[0] to the left and the Taylor
//           expansion of degree ExtrapMode[1] to the right 
//   if the HomogeneousFlag == True than the Poles are supposed
//   to be stored homogeneously and the result will also be homogeneous
//   Valid only if Weights 
//=======================================================================

template <typename Array1OfPoints, typename Point>
static void Eval(const Standard_Real                   Parameter,
                     const Standard_Boolean                PeriodicFlag,
		     const Standard_Boolean                HomogeneousFlag,
                     Standard_Integer&                     ExtrapMode,
		     const Standard_Integer                Degree,
                     const  TColStd_Array1OfReal&          FlatKnots, 
                     const  Array1OfPoints&                PolesArray,
                     const  TColStd_Array1OfReal&          WeightsArray,
                     Point&                                aPoint,
		     Standard_Real&                        aWeight)
{
  Standard_Real P[DimensionTrait<Array1OfPoints>::d];
  Standard_Integer kk ;
  Standard_Real *PArray = (Standard_Real *) &PolesArray(PolesArray.Lower()) ;
  Standard_Real *WArray = (Standard_Real *) &WeightsArray(WeightsArray.Lower()) ;
  if (HomogeneousFlag) {
    BSplCLib::Eval(Parameter,
		   PeriodicFlag,
		   0,
		   ExtrapMode,
		   Degree,
		   FlatKnots,
		   DimensionTrait<Array1OfPoints>::d,
		   PArray[0],
		   P[0]) ;
    BSplCLib::Eval(Parameter,
		   PeriodicFlag,
		   0,
		   ExtrapMode,
		   Degree,
		   FlatKnots,
		   1,
		   WArray[0],
		   aWeight) ;
  }
  else {
    BSplCLib::Eval(Parameter,
		   PeriodicFlag,
		   0,
		   ExtrapMode,
		   Degree,
		   FlatKnots,
		   DimensionTrait<Array1OfPoints>::d,
		   PArray[0],
		   WArray[0],
		   P[0],
		   aWeight) ;
    Standard_Real Inverse = 1.0e0 / aWeight ;

    for (kk = 0 ; kk < DimensionTrait<Array1OfPoints>::d ; kk++) {
      P[kk] *= Inverse ;
    } 
  }
  
  for (kk = 0 ; kk < DimensionTrait<Array1OfPoints>::d ; kk++) 
    aPoint.SetCoord(kk + 1, P[kk]) ;
}

// Instantiating for 2D curves

void BSplCLib::Eval(const Standard_Real                   Parameter,
                     const Standard_Boolean                PeriodicFlag,
		     const Standard_Boolean                HomogeneousFlag,
                     Standard_Integer&                     ExtrapMode,
		     const Standard_Integer                Degree,
                     const  TColStd_Array1OfReal&          FlatKnots, 
                     const  TColgp_Array1OfPnt2d&                PolesArray,
                     const  TColStd_Array1OfReal&          WeightsArray,
		    gp_Pnt2d&                                aPoint,
		     Standard_Real&                        aWeight)
{
  return ::Eval(Parameter, PeriodicFlag, HomogeneousFlag, ExtrapMode,
	      Degree, FlatKnots, PolesArray, WeightsArray, aPoint, aWeight);
}

// Instantiating for 3D curves

void BSplCLib::Eval(const Standard_Real                   Parameter,
                     const Standard_Boolean                PeriodicFlag,
		     const Standard_Boolean                HomogeneousFlag,
                     Standard_Integer&                     ExtrapMode,
		     const Standard_Integer                Degree,
                     const  TColStd_Array1OfReal&          FlatKnots, 
                     const  TColgp_Array1OfPnt&                PolesArray,
                     const  TColStd_Array1OfReal&          WeightsArray,
                     gp_Pnt&                                aPoint,
		     Standard_Real&                        aWeight)
{
  return ::Eval(Parameter, PeriodicFlag, HomogeneousFlag, ExtrapMode,
		Degree, FlatKnots, PolesArray, WeightsArray, aPoint, aWeight);

}
