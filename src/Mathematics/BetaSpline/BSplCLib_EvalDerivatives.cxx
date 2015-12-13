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
#include <math_Matrix.hxx>
#include <Foundation/NCollection/NCollection_LocalArray.hxx>

//

static void NullifyPoint(gp_Pnt2d &p) {
  p.SetCoord(0, 0);
}
static void NullifyPoint(gp_Pnt &p) {
  p.SetCoord(0, 0, 0);
}
static void NullifyPoint(gp_Vec2d &v) {
  v.SetCoord(0, 0);
}
static void NullifyPoint(gp_Vec &v) {
  v.SetCoord(0, 0, 0);
}

static void PointToCoords(Standard_Real *coords, const gp_Pnt2d &p) {
  coords[0] = p.X();
  coords[1] = p.Y();
}
static void PointToCoords(Standard_Real *coords, const gp_Pnt &p) {
  coords[0] = p.X();
  coords[1] = p.Y();
  coords[2] = p.Z();
}

static void MultipliedPointToCoords(Standard_Real *coords, const gp_Pnt2d &p, Standard_Real m) {
  coords[0] = p.X() * m;
  coords[1] = p.Y() * m;
}
static void MultipliedPointToCoords(Standard_Real *coords, const gp_Pnt &p, Standard_Real m) {
  coords[0] = p.X() * m;
  coords[1] = p.Y() * m;
  coords[2] = p.Z() * m;
}

static void DividedCoordsToPoint(gp_Pnt2d &p, Standard_Real *coords, Standard_Real d) {
  p.SetX(coords[0] / d);
  p.SetY(coords[1] / d);
}
static void DividedCoordsToPoint(gp_Pnt &p, Standard_Real *coords, Standard_Real d) {
  p.SetX(coords[0] / d);
  p.SetY(coords[1] / d);
  p.SetZ(coords[2] / d);
}

static void CoordsToPoint(gp_Pnt2d &p, Standard_Real *coords) {
  p.SetX(coords[0]);
  p.SetY(coords[1]);
}
static void CoordsToPoint(gp_Pnt &p, Standard_Real *coords) {
  p.SetX(coords[0]);
  p.SetY(coords[1]);
  p.SetZ(coords[2]);
}

static void CoordsToPoint(gp_Vec2d &v, Standard_Real *coords) {
  v.SetX(coords[0]);
  v.SetY(coords[1]);
}
static void CoordsToPoint(gp_Vec &v, Standard_Real *coords) {
  v.SetX(coords[0]);
  v.SetY(coords[1]);
  v.SetZ(coords[2]);
}

static void MultipliedCoordsToPoint(gp_Pnt2d &p, Standard_Real *coords, Standard_Real m) {
  p.SetX(coords[0] * m);
  p.SetY(coords[1] * m);
}
static void MultipliedCoordsToPoint(gp_Pnt &p, Standard_Real *coords, Standard_Real m) {
  p.SetX(coords[0] * m);
  p.SetY(coords[1] * m);
  p.SetZ(coords[2] * m);
}

static void NullifyCoords(Standard_Real *coords, int d) {
  for (int i = 0; i < d; ++i)
    coords[i] = 0;
}

static void CopyCoords(Standard_Real *dst, Standard_Real *src, int d) {
  for (int i = 0; i < d; ++i)
    dst[i] = src[i];
}

static void MultiplyCoords(Standard_Real *coords, int d, Standard_Real m) {
  for (int i = 0; i < d; ++i)
    coords[i] *= m;
}

static void DivideCoords(Standard_Real *coords, int d, Standard_Real w) {
  for (int i = 0; i < d; ++i)
    coords[i] /= w;
}

//=======================================================================
//struct : BSplCLib_DataContainer
//purpose: Auxiliary structure providing buffers for poles and knots used in
//         evaluation of bspline (allocated in the stack)
//=======================================================================

template <unsigned int Dimension>
struct BSplCLib_DataContainer
{
  BSplCLib_DataContainer(Standard_Integer Degree)
  {
    (void)Degree; // avoid compiler warning
    Standard_OutOfRange_Raise_if (Degree > BSplCLib::MaxDegree() ||
        BSplCLib::MaxDegree() > 25,
        "BSplCLib: bspline degree is greater than maximum supported");
  }

  Standard_Real poles[(25+1)*(Dimension+1)];
  Standard_Real knots[2*25];
  Standard_Real ders[Dimension*4];
};

//--------------------------------------------------------------------------
//ELEMENTARY COMPUTATIONS
//--------------------------------------------------------------------------
//
// All the following methods are methods of low level used in BSplCLib
// but also in BSplSLib (but not in Geom)
// At the creation time of this package there is no possibility
// to declare private methods of package and to declare friend
// methods of package.  It could interesting to declare that BSplSLib
// is a package friend to BSplCLib because it uses all the basis methods
// of BSplCLib.
//--------------------------------------------------------------------------

//=======================================================================
//function : BuildEval
//purpose  : builds the local array for evaluation
//=======================================================================

template <typename Array1OfPoints>
static void BuildEval(const Standard_Integer Degree,
		      const Standard_Integer Index,
		      const Array1OfPoints& Poles,
		      Standard_Real& LP) {
  Standard_Integer PLower = Poles.Lower();
  Standard_Integer PUpper = Poles.Upper();

  Standard_Integer ip = PLower + Index - 1;
  Standard_Real* pole = &LP;

  for (auto i = 0; i <= Degree; i++) {
    ip++;
    if (ip > PUpper) ip = PLower;
    const typename DimensionTrait<Array1OfPoints>::Point& P = Poles(ip);
    PointToCoords(pole,P);
    pole += DimensionTrait<Array1OfPoints>::d;
  }
}

template <typename Array1OfPoints>
static void BuildEval(const Standard_Integer Degree,
		      const Standard_Integer Index,
		      const Array1OfPoints& Poles,
		      const TColStd_Array1OfReal& Weights,
		      Standard_Real& LP) {
  Standard_Integer PLower = Poles.Lower();
  Standard_Integer PUpper = Poles.Upper();

  Standard_Integer ip = PLower + Index - 1;
  Standard_Real* pole = &LP;

  for (auto i = 0; i <= Degree; i++) {
    ip++;
    if (ip > PUpper) ip = PLower;
    const typename DimensionTrait<Array1OfPoints>::Point& P = Poles(ip);
    Standard_Real w = Weights(ip);
    pole[DimensionTrait<Array1OfPoints>::d] = w;
    MultipliedPointToCoords(pole, P, w);
    pole += DimensionTrait<Array1OfPoints>::d + 1;
  }
}

//=======================================================================
//function : PrepareEval
//purpose  : stores data for Eval in the local arrays
//           dc.poles and dc.knots
//=======================================================================

template <typename Array1OfPoints>
static void PrepareEval
(Standard_Real&                 u,
 Standard_Integer&              index,
 Standard_Integer&              dim,
 Standard_Boolean&              rational,
 const Standard_Integer         Degree,
 const Standard_Boolean         Periodic,
 const Array1OfPoints&          Poles,
 const TColStd_Array1OfReal*    Weights,
 const TColStd_Array1OfReal&    Knots,
 const TColStd_Array1OfInteger* Mults,
 BSplCLib_DataContainer<DimensionTrait<Array1OfPoints>::d>& dc)
{
  // Set the Index
  BSplCLib::LocateParameter(Degree,Knots,Mults,u,Periodic,index,u);

  // make the knots
  BSplCLib::BuildKnots(Degree,index,Periodic,Knots,Mults,*dc.knots);
  if (Mults == nullptr)
    index -= Knots.Lower() + Degree;
  else
    index = BSplCLib::PoleIndex(Degree,index,Periodic,*Mults);

  // check truly rational
  rational = (Weights != nullptr);
  if (rational) {
    Standard_Integer WLower = Weights->Lower() + index;
    rational = BSplCLib::IsRational(*Weights, WLower, WLower + Degree);
  }

  // make the poles
  if (rational) {
    dim = DimensionTrait<Array1OfPoints>::d + 1;
    BuildEval(Degree, index, Poles, *Weights, *dc.poles);
  }
  else {
    dim = DimensionTrait<Array1OfPoints>::d;
    BuildEval(Degree, index, Poles, *dc.poles);
  }
}

//=======================================================================
//function : D0
//purpose  :
//=======================================================================

template <typename Point>
static void D0
(const Standard_Real            U,
 const Standard_Integer         Index,
 const Standard_Integer         Degree,
 const Standard_Boolean         Periodic,
 const typename DimensionTrait<Point>::Array&          Poles,
 const TColStd_Array1OfReal*    Weights,
 const TColStd_Array1OfReal&    Knots,
 const TColStd_Array1OfInteger* Mults,
 Point&                         P)
{
//  Standard_Integer k,dim,index = Index;
  Standard_Integer dim,index = Index;
  Standard_Real    u = U;
  Standard_Boolean rational;
  BSplCLib_DataContainer<DimensionTrait<Point>::d> dc(Degree);
  PrepareEval(u,index,dim,rational,Degree,Periodic,Poles,Weights,Knots,Mults,dc);
  BSplCLib::Eval(u,Degree,*dc.knots,dim,*dc.poles);

  if (rational) {
    Standard_Real w = dc.poles[DimensionTrait<Point>::d];
    DividedCoordsToPoint(P, dc.poles, w);
  }
  else
    CoordsToPoint(P, dc.poles);
}

template <typename Point>
static void D1
(const Standard_Real            U,
 const Standard_Integer         Index,
 const Standard_Integer         Degree,
 const Standard_Boolean         Periodic,
 const typename DimensionTrait<Point>::Array&          Poles,
 const TColStd_Array1OfReal*    Weights,
 const TColStd_Array1OfReal&    Knots,
 const TColStd_Array1OfInteger* Mults,
 Point&                         P,
 typename DimensionTrait<Point>::Vector&                        V)
{
  Standard_Integer dim,index = Index;
  Standard_Real    u = U;
  Standard_Boolean rational;
  BSplCLib_DataContainer<DimensionTrait<Point>::d> dc(Degree);
  PrepareEval(u,index,dim,rational,Degree,Periodic,Poles,Weights,Knots,Mults,dc);
  BSplCLib::Bohm(u,Degree,1,*dc.knots,dim,*dc.poles);
  Standard_Real *result = dc.poles;
  if (rational) {
    PLib::RationalDerivative(Degree,1,DimensionTrait<Point>::d,*dc.poles,*dc.ders);
    result = dc.ders;
  }

  CoordsToPoint(P, result);
  CoordsToPoint(V, result + DimensionTrait<Point>::d);
}

template <typename Point>
static void D2
(const Standard_Real            U,
 const Standard_Integer         Index,
 const Standard_Integer         Degree,
 const Standard_Boolean         Periodic,
 const typename DimensionTrait<Point>::Array&          Poles,
 const TColStd_Array1OfReal*    Weights,
 const TColStd_Array1OfReal&    Knots,
 const TColStd_Array1OfInteger* Mults,
 Point&                         P,
 typename DimensionTrait<Point>::Vector&                        V1,
 typename DimensionTrait<Point>::Vector&                        V2)
{
  Standard_Integer dim,index = Index;
  Standard_Real    u = U;
  Standard_Boolean rational;
  BSplCLib_DataContainer<DimensionTrait<Point>::d> dc(Degree);
  PrepareEval(u,index,dim,rational,Degree,Periodic,Poles,Weights,Knots,Mults,dc);
  BSplCLib::Bohm(u,Degree,2,*dc.knots,dim,*dc.poles);
  Standard_Real *result = dc.poles;
  if (rational) {
    PLib::RationalDerivative(Degree,2,DimensionTrait<Point>::d,*dc.poles,*dc.ders);
    result = dc.ders;
  }

  CoordsToPoint (P,  result);
  CoordsToPoint (V1, result + DimensionTrait<Point>::d);
  if (!rational && (Degree < 2))
    NullifyPoint (V2);
  else
    CoordsToPoint (V2, result + 2 * DimensionTrait<Point>::d);
}

template <typename Point>
static void D3
(const Standard_Real            U,
 const Standard_Integer         Index,
 const Standard_Integer         Degree,
 const Standard_Boolean         Periodic,
 const typename DimensionTrait<Point>::Array&          Poles,
 const TColStd_Array1OfReal*    Weights,
 const TColStd_Array1OfReal&    Knots,
 const TColStd_Array1OfInteger* Mults,
 Point&                         P,
 typename DimensionTrait<Point>::Vector&                        V1,
 typename DimensionTrait<Point>::Vector&                        V2,
 typename DimensionTrait<Point>::Vector&                        V3)
{
  Standard_Integer dim,index = Index;
  Standard_Real    u = U;
  Standard_Boolean rational;
  BSplCLib_DataContainer<DimensionTrait<Point>::d> dc(Degree);
  PrepareEval(u,index,dim,rational,Degree,Periodic,Poles,Weights,Knots,Mults,dc);
  BSplCLib::Bohm(u,Degree,3,*dc.knots,dim,*dc.poles);
  Standard_Real *result = dc.poles;
  if (rational) {
    PLib::RationalDerivative(Degree,3,DimensionTrait<Point>::d,*dc.poles,*dc.ders);
    result = dc.ders;
  }

  CoordsToPoint (P,  result);
  CoordsToPoint (V1, result + DimensionTrait<Point>::d);
  if (!rational && (Degree < 2))
    NullifyPoint (V2);
  else
    CoordsToPoint (V2, result + 2 * DimensionTrait<Point>::d);
  if (!rational && (Degree < 3))
    NullifyPoint (V3);
  else
    CoordsToPoint (V3, result + 3 * DimensionTrait<Point>::d);
}

template <typename Point>
static void DN
(const Standard_Real            U,
 const Standard_Integer         N,
 const Standard_Integer         Index,
 const Standard_Integer         Degree,
 const Standard_Boolean         Periodic,
 const typename DimensionTrait<Point>::Array&          Poles,
 const TColStd_Array1OfReal*    Weights,
 const TColStd_Array1OfReal&    Knots,
 const TColStd_Array1OfInteger* Mults,
 typename DimensionTrait<Point>::Vector&                        VN)
{
  Standard_Integer dim,index = Index;
  Standard_Real    u = U;
  Standard_Boolean rational;
  BSplCLib_DataContainer<DimensionTrait<Point>::d> dc(Degree);
  PrepareEval(u,index,dim,rational,Degree,Periodic,Poles,Weights,Knots,Mults,dc);
  BSplCLib::Bohm(u,Degree,N,*dc.knots,dim,*dc.poles);

  if (rational) {
    Standard_Real v[DimensionTrait<Point>::d];
    PLib::RationalDerivative(Degree,N,DimensionTrait<Point>::d,*dc.poles,v[0],Standard_False);
    CoordsToPoint (VN, v);
  }
  else {
    if (N > Degree)
      NullifyPoint (VN);
    else {
      Standard_Real *DN = dc.poles + N * DimensionTrait<Point>::d;
      CoordsToPoint (VN, DN);
    }
  }
}

template <typename Point>
static void CacheD0(const Standard_Real                  Parameter,
			const  Standard_Integer               Degree,
			const  Standard_Real                  CacheParameter,
			const  Standard_Real                  SpanLenght,
			const  typename DimensionTrait<Point>::Array&                PolesArray,
			const  TColStd_Array1OfReal*          WeightsArray,
			Point&                                aPoint)
{
  //
  // the CacheParameter is where the cache polynomial was evaluated in homogeneous
  // form
  // the SpanLenght     is the normalizing factor so that the polynomial is between
  // 0 and 1
  Standard_Real NewParameter, Inverse;
  Standard_Real * PArray  = (Standard_Real *) &(PolesArray(PolesArray.Lower())) ;
  Standard_Real * myPoint = (Standard_Real *) &aPoint  ;
  NewParameter = (Parameter - CacheParameter) / SpanLenght ;
  PLib::NoDerivativeEvalPolynomial(NewParameter,
		       Degree,
		       DimensionTrait<Point>::d,
		       Degree * DimensionTrait<Point>::d,
		       PArray[0],
		       myPoint[0]) ;
  if (WeightsArray != nullptr) {
    Standard_Real *
      WArray = (Standard_Real *) &(*WeightsArray)(WeightsArray->Lower()) ;
    PLib::NoDerivativeEvalPolynomial(NewParameter,
			 Degree,
			 1,
			 Degree,
			 WArray[0],
			 Inverse) ;

    Inverse = 1.0e0 / Inverse;
    MultiplyCoords(myPoint, DimensionTrait<Point>::d, Inverse);
  }
}

template <typename Point>
static void CacheD1(const Standard_Real                  Parameter,
		        const Standard_Integer                Degree,
                        const  Standard_Real                  CacheParameter,
                        const  Standard_Real                  SpanLenght,
			const  typename DimensionTrait<Point>::Array&                PolesArray,
			const  TColStd_Array1OfReal*          WeightsArray,
			Point&                                aPoint,
		    typename DimensionTrait<Point>::Vector&                               aVector)
{
  //
  // the CacheParameter is where the cache polynomial was evaluated in homogeneous
  // form
  // the SpanLenght     is the normalizing factor so that the polynomial is between
  // 0 and 1
  Standard_Real LocalPDerivatives[DimensionTrait<Point>::d << 1] ;
//  Standard_Real LocalWDerivatives[2], NewParameter, Inverse ;
  Standard_Real LocalWDerivatives[2], NewParameter ;

  Standard_Real *
    PArray = (Standard_Real *) &(PolesArray(PolesArray.Lower())) ;
  Standard_Real *
    myPoint = (Standard_Real *) &aPoint  ;
  Standard_Real *
    myVector = (Standard_Real *) &aVector ;
  NewParameter = (Parameter - CacheParameter) / SpanLenght ;
  PLib::EvalPolynomial(NewParameter,
		       1,
		       Degree,
		       DimensionTrait<Point>::d,
		       PArray[0],
		       LocalPDerivatives[0]) ;
  //
  // unormalize derivatives since those are computed normalized
  //

  DivideCoords(LocalPDerivatives + DimensionTrait<Point>::d, DimensionTrait<Point>::d, SpanLenght);

  if (WeightsArray != nullptr) {
    Standard_Real *
      WArray = (Standard_Real *) &(*WeightsArray)(WeightsArray->Lower()) ;
    PLib::EvalPolynomial(NewParameter,
			 1,
			 Degree,
			 1,
			 WArray[0],
			 LocalWDerivatives[0]) ;
    //
    // unormalize the result since the polynomial stored in the cache
    // is normalized between 0 and 1
    //
    LocalWDerivatives[1] /= SpanLenght ;

    PLib::RationalDerivatives(1,
			      DimensionTrait<Point>::d,
			      LocalPDerivatives[0],
			      LocalWDerivatives[0],
			      LocalPDerivatives[0]) ;
  }

  CopyCoords (myPoint,  LocalPDerivatives, DimensionTrait<Point>::d);
  CopyCoords (myVector, LocalPDerivatives + DimensionTrait<Point>::d, DimensionTrait<Point>::d);
}

template <typename Point>
static void CacheD2(const Standard_Real                  Parameter,
			const Standard_Integer                Degree,
			const  Standard_Real                  CacheParameter,
			const  Standard_Real                  SpanLenght,
			const  typename DimensionTrait<Point>::Array&                PolesArray,
			const  TColStd_Array1OfReal*          WeightsArray,
			Point&                                aPoint,
			typename DimensionTrait<Point>::Vector&                               aVector1,
		    typename DimensionTrait<Point>::Vector&                               aVector2)
{
  //
  // the CacheParameter is where the cache polynomial was evaluated in homogeneous
  // form
  // the SpanLenght     is the normalizing factor so that the polynomial is between
  // 0 and 1
  Standard_Integer ii,Index,EndIndex;
  Standard_Real LocalPDerivatives[(DimensionTrait<Point>::d << 1) + DimensionTrait<Point>::d] ;
//  Standard_Real LocalWDerivatives[3], NewParameter, Factor, Inverse ;
  Standard_Real LocalWDerivatives[3], NewParameter, Factor ;
  Standard_Real * PArray    = (Standard_Real *) &(PolesArray(PolesArray.Lower())) ;
  Standard_Real * myPoint   = (Standard_Real *) &aPoint  ;
  Standard_Real * myVector1 = (Standard_Real *) &aVector1 ;
  Standard_Real * myVector2 = (Standard_Real *) &aVector2 ;
  NewParameter = (Parameter - CacheParameter) / SpanLenght ;
  PLib::EvalPolynomial(NewParameter,
		       2,
		       Degree,
		       DimensionTrait<Point>::d,
		       PArray[0],
		       LocalPDerivatives[0]) ;
  //
  // unormalize derivatives since those are computed normalized
  //
  Factor = 1.0e0/ SpanLenght ;
  Index = DimensionTrait<Point>::d ;
  EndIndex = Min (2, Degree) ;

  for (ii = 1 ; ii <= EndIndex ; ii++) {
    MultiplyCoords(LocalPDerivatives + Index, DimensionTrait<Point>::d, Factor);
    Factor /= SpanLenght ;
    Index  += DimensionTrait<Point>::d;
  }

  Index = (Degree + 1) * DimensionTrait<Point>::d;
  for (ii = Degree ; ii < 2 ; ii++) {
    NullifyCoords (LocalPDerivatives + Index, DimensionTrait<Point>::d);
    Index += DimensionTrait<Point>::d;
  }

  if (WeightsArray != nullptr) {
    Standard_Real *
      WArray = (Standard_Real *) &(*WeightsArray)(WeightsArray->Lower()) ;

    PLib::EvalPolynomial(NewParameter,
			 2,
			 Degree,
			 1,
			 WArray[0],
			 LocalWDerivatives[0]) ;

    for (ii = Degree + 1  ; ii <= 2 ; ii++) {
      LocalWDerivatives[ii] = 0.0e0 ;
    }
    //
    // unormalize the result since the polynomial stored in the cache
    // is normalized between 0 and 1
    //
    Factor = 1.0e0 / SpanLenght ;

    for (ii = 1 ; ii <= EndIndex ; ii++) {
      LocalWDerivatives[ii] *= Factor ;
      Factor /= SpanLenght ;
    }
    PLib::RationalDerivatives(2,
			      DimensionTrait<Point>::d,
			      LocalPDerivatives[0],
			      LocalWDerivatives[0],
			      LocalPDerivatives[0]) ;
  }

  CopyCoords (myPoint,   LocalPDerivatives, DimensionTrait<Point>::d);
  CopyCoords (myVector1, LocalPDerivatives + DimensionTrait<Point>::d, DimensionTrait<Point>::d);
  CopyCoords (myVector2, LocalPDerivatives + DimensionTrait<Point>::d * 2, DimensionTrait<Point>::d);
}

template <typename Point>
static void CacheD3(const Standard_Real                  Parameter,
			const Standard_Integer                Degree,
			const  Standard_Real                  CacheParameter,
			const  Standard_Real                  SpanLenght,
			const  typename DimensionTrait<Point>::Array&                PolesArray,
			const  TColStd_Array1OfReal*          WeightsArray,
			Point&                                aPoint,
			typename DimensionTrait<Point>::Vector&                               aVector1,
			typename DimensionTrait<Point>::Vector&                               aVector2,
		    typename DimensionTrait<Point>::Vector&                               aVector3)
{
  //
  // the CacheParameter is where the cache polynomial was evaluated in homogeneous
  // form
  // the SpanLenght     is the normalizing factor so that the polynomial is between
  // 0 and 1
  Standard_Integer ii, Index, EndIndex;
  Standard_Real LocalPDerivatives[DimensionTrait<Point>::d << 2] ;
//  Standard_Real LocalWDerivatives[4], Factor, NewParameter, Inverse ;
  Standard_Real LocalWDerivatives[4], Factor, NewParameter ;
  Standard_Real * PArray    = (Standard_Real *) &(PolesArray(PolesArray.Lower())) ;
  Standard_Real * myPoint   = (Standard_Real *) &aPoint  ;
  Standard_Real * myVector1 = (Standard_Real *) &aVector1 ;
  Standard_Real * myVector2 = (Standard_Real *) &aVector2 ;
  Standard_Real * myVector3 = (Standard_Real *) &aVector3 ;
  NewParameter = (Parameter - CacheParameter) / SpanLenght ;
  PLib::EvalPolynomial(NewParameter,
		       3,
		       Degree,
		       DimensionTrait<Point>::d,
		       PArray[0],
		       LocalPDerivatives[0]) ;

  Index = (Degree + 1) * DimensionTrait<Point>::d;
  for (ii = Degree ; ii < 3 ; ii++) {
    NullifyCoords(LocalPDerivatives + Index, DimensionTrait<Point>::d);
    Index += DimensionTrait<Point>::d;
  }

  //
  // unormalize derivatives since those are computed normalized
  //
  Factor = 1.0e0 / SpanLenght ;
  Index = DimensionTrait<Point>::d ;
  EndIndex = Min(3,Degree) ;

  for (ii = 1 ; ii <= EndIndex ; ii++) {
    MultiplyCoords(LocalPDerivatives + Index, DimensionTrait<Point>::d, Factor);
    Factor /= SpanLenght;
    Index  += DimensionTrait<Point>::d;
  }

  if (WeightsArray != nullptr) {
    Standard_Real *
      WArray = (Standard_Real *) &(*WeightsArray)(WeightsArray->Lower()) ;

    PLib::EvalPolynomial(NewParameter,
			 3,
			 Degree,
			 1,
			 WArray[0],
			 LocalWDerivatives[0]) ;
    //
    // unormalize the result since the polynomial stored in the cache
    // is normalized between 0 and 1
    //
    Factor = 1.0e0 / SpanLenght ;

    for (ii = 1 ; ii <= EndIndex ; ii++) {
      LocalWDerivatives[ii] *= Factor ;
      Factor /= SpanLenght ;
    }

    for (ii = (Degree + 1)  ; ii <= 3 ; ii++) {
      LocalWDerivatives[ii] = 0.0e0 ;
    }
    PLib::RationalDerivatives(3,
			      DimensionTrait<Point>::d,
			      LocalPDerivatives[0],
			      LocalWDerivatives[0],
			      LocalPDerivatives[0]) ;
  }

  CopyCoords (myPoint,   LocalPDerivatives, DimensionTrait<Point>::d);
  CopyCoords (myVector1, LocalPDerivatives + DimensionTrait<Point>::d, DimensionTrait<Point>::d);
  CopyCoords (myVector2, LocalPDerivatives + DimensionTrait<Point>::d * 2, DimensionTrait<Point>::d);
  CopyCoords (myVector3, LocalPDerivatives + DimensionTrait<Point>::d * 3, DimensionTrait<Point>::d);
}

//=======================================================================
//function : BuildCache
//purpose  : Stores theTaylor expansion normalized between 0,1 in the
//           Cache : in case of  a rational function the Poles are
//           stored in homogeneous form
//=======================================================================

template <typename Point>
static void BuildCache
(const Standard_Real            U,
 const Standard_Real            SpanDomain,
 const Standard_Boolean         Periodic,
 const Standard_Integer         Degree,
 const TColStd_Array1OfReal&    FlatKnots,
 const typename DimensionTrait<Point>::Array&          Poles,
 const TColStd_Array1OfReal*    Weights,
 typename DimensionTrait<Point>::Array&                CachePoles,
 TColStd_Array1OfReal*          CacheWeights)
{
  Standard_Integer ii,
  Dimension,
  LocalIndex,
  index = 0 ;
  Standard_Real    u = U,
  LocalValue ;
  Standard_Boolean rational;

  BSplCLib_DataContainer<DimensionTrait<Point>::d> dc(Degree);
  PrepareEval(u,
              index,
              Dimension,
              rational,
              Degree,
              Periodic,
              Poles,
              Weights,
              FlatKnots,
              nullptr,
              dc);
  //
  // Watch out : PrepareEval checks if locally the Bspline is polynomial
  // therefore rational flag could be set to False even if there are
  // Weights. The Dimension is set accordingly.
  //

  BSplCLib::Bohm(u,Degree,Degree,*dc.knots,Dimension,*dc.poles);

  LocalValue = 1.0e0 ;
  LocalIndex = 0 ;

  if (rational) {

    for (ii = 1 ; ii <= Degree + 1 ; ii++) {
      MultipliedCoordsToPoint(CachePoles(ii), dc.poles + LocalIndex, LocalValue);
      LocalIndex += DimensionTrait<Point>::d + 1;
      LocalValue *= SpanDomain / (Standard_Real) ii ;
    }

    LocalIndex = DimensionTrait<Point>::d;
    LocalValue = 1.0e0 ;
    for (ii = 1 ; ii <= Degree + 1 ; ii++) {
#warning FIXME: dereferencing CacheWeights without prior checking
      (*CacheWeights)(ii) = dc.poles[LocalIndex] * LocalValue ;
      LocalIndex += DimensionTrait<Point>::d + 1;
      LocalValue *= SpanDomain / (Standard_Real) ii ;
    }
  }
  else {

    for (ii = 1 ; ii <= Degree + 1 ; ii++) {
      MultipliedCoordsToPoint(CachePoles(ii), dc.poles + LocalIndex, LocalValue);
      LocalIndex += DimensionTrait<Point>::d;
      LocalValue *= SpanDomain / (Standard_Real) ii ;
    }

    if (CacheWeights != nullptr) {
      for (ii = 1 ; ii <= Degree + 1 ; ii++)
	(*CacheWeights)(ii) = 0.0e0 ;
      (*CacheWeights)(1) = 1.0e0 ;
    }
  }
}

// Instantiating for 2D curves

void BSplCLib::D0(const Standard_Real U,
                  const Standard_Integer Index,
                  const Standard_Integer Degree,
                  const Standard_Boolean Periodic,
                  const TColgp_Array1OfPnt2d& Poles,
                  const TColStd_Array1OfReal* Weights,
                  const TColStd_Array1OfReal& Knots,
                  const TColStd_Array1OfInteger* Mults,
                  gp_Pnt2d& P) {
  ::D0(U, Index, Degree, Periodic, Poles, Weights, Knots, Mults, P);
}

void BSplCLib::D1(const Standard_Real U,
                  const Standard_Integer Index,
                  const Standard_Integer Degree,
                  const Standard_Boolean Periodic,
                  const TColgp_Array1OfPnt2d& Poles,
                  const TColStd_Array1OfReal* Weights,
                  const TColStd_Array1OfReal& Knots,
                  const TColStd_Array1OfInteger* Mults,
                  gp_Pnt2d& P,
                  gp_Vec2d& V) {
  ::D1(U, Index, Degree, Periodic, Poles, Weights, Knots, Mults, P, V);
}

void BSplCLib::D2(const Standard_Real U,
                  const Standard_Integer Index,
                  const Standard_Integer Degree,
                  const Standard_Boolean Periodic,
                  const TColgp_Array1OfPnt2d& Poles,
                  const TColStd_Array1OfReal* Weights,
                  const TColStd_Array1OfReal& Knots,
                  const TColStd_Array1OfInteger* Mults,
                  gp_Pnt2d& P,
                  gp_Vec2d& V1,
                  gp_Vec2d& V2) {
  ::D2(U, Index, Degree, Periodic, Poles, Weights, Knots, Mults, P, V1, V2);
}

void BSplCLib::D3(const Standard_Real U,
                  const Standard_Integer Index,
                  const Standard_Integer Degree,
                  const Standard_Boolean Periodic,
                  const TColgp_Array1OfPnt2d& Poles,
                  const TColStd_Array1OfReal* Weights,
                  const TColStd_Array1OfReal& Knots,
                  const TColStd_Array1OfInteger* Mults,
                  gp_Pnt2d& P,
                  gp_Vec2d& V1,
                  gp_Vec2d& V2,
                  gp_Vec2d& V3) {
  ::D3(U, Index, Degree, Periodic, Poles, Weights, Knots, Mults, P, V1, V2, V3);
}

void BSplCLib::DN(const Standard_Real U,
                  const Standard_Integer N,
                  const Standard_Integer Index,
                  const Standard_Integer Degree,
                  const Standard_Boolean Periodic,
                  const TColgp_Array1OfPnt2d& Poles,
                  const TColStd_Array1OfReal* Weights,
                  const TColStd_Array1OfReal& Knots,
                  const TColStd_Array1OfInteger* Mults,
                  gp_Vec2d& VN) {
  ::DN<gp_Pnt2d>(U, N, Index, Degree, Periodic, Poles, Weights, Knots, Mults, VN);
}

void BSplCLib::CacheD0(const Standard_Real Parameter,
                       const Standard_Integer Degree,
                       const Standard_Real CacheParameter,
                       const Standard_Real SpanLength,
                       const TColgp_Array1OfPnt2d& PolesArray,
                       const TColStd_Array1OfReal* WeightsArray,
                       gp_Pnt2d& aPoint) {
  ::CacheD0(Parameter, Degree, CacheParameter, SpanLength, PolesArray,
            WeightsArray, aPoint);
}

void BSplCLib::CacheD1(const Standard_Real Parameter,
                       const Standard_Integer Degree,
                       const Standard_Real CacheParameter,
                       const Standard_Real SpanLength,
                       const TColgp_Array1OfPnt2d& PolesArray,
                       const TColStd_Array1OfReal* WeightsArray,
                       gp_Pnt2d& aPoint,
                       gp_Vec2d& aVector) {
  ::CacheD1(Parameter, Degree, CacheParameter, SpanLength, PolesArray,
            WeightsArray, aPoint, aVector);
}

void BSplCLib::CacheD2(const Standard_Real Parameter,
                       const Standard_Integer Degree,
                       const Standard_Real CacheParameter,
                       const Standard_Real SpanLength,
                       const TColgp_Array1OfPnt2d& PolesArray,
                       const TColStd_Array1OfReal* WeightsArray,
                       gp_Pnt2d& aPoint,
                       gp_Vec2d& aVector1,
                       gp_Vec2d& aVector2) {
  ::CacheD2(Parameter, Degree, CacheParameter, SpanLength, PolesArray,
            WeightsArray, aPoint, aVector1, aVector2);
}

void BSplCLib::CacheD3(const Standard_Real Parameter,
                       const Standard_Integer Degree,
                       const Standard_Real CacheParameter,
                       const Standard_Real SpanLength,
                       const TColgp_Array1OfPnt2d& PolesArray,
                       const TColStd_Array1OfReal* WeightsArray,
                       gp_Pnt2d& aPoint,
                       gp_Vec2d& aVector1,
                       gp_Vec2d& aVector2,
                       gp_Vec2d& aVector3) {
  ::CacheD3(Parameter, Degree, CacheParameter, SpanLength, PolesArray,
            WeightsArray, aPoint, aVector1, aVector2, aVector3);
}

void BSplCLib::BuildCache(const Standard_Real U,
                          const Standard_Real SpanDomain,
                          const Standard_Boolean Periodic,
                          const Standard_Integer Degree,
                          const TColStd_Array1OfReal& FlatKnots,
                          const TColgp_Array1OfPnt2d& Poles,
                          const TColStd_Array1OfReal* Weights,
                          TColgp_Array1OfPnt2d& CachePoles,
                          TColStd_Array1OfReal* CacheWeights) {
  ::BuildCache<gp_Pnt2d>(U, SpanDomain, Periodic, Degree, FlatKnots, Poles, Weights,
			 CachePoles, CacheWeights);
}

// Instantiating for 3D curves

void BSplCLib::D0(const Standard_Real U,
                  const Standard_Integer Index,
                  const Standard_Integer Degree,
                  const Standard_Boolean Periodic,
                  const TColgp_Array1OfPnt& Poles,
                  const TColStd_Array1OfReal* Weights,
                  const TColStd_Array1OfReal& Knots,
                  const TColStd_Array1OfInteger* Mults,
                  gp_Pnt& P) {
  ::D0(U, Index, Degree, Periodic, Poles, Weights, Knots, Mults, P);
}

void BSplCLib::D1(const Standard_Real U,
                  const Standard_Integer Index,
                  const Standard_Integer Degree,
                  const Standard_Boolean Periodic,
                  const TColgp_Array1OfPnt& Poles,
                  const TColStd_Array1OfReal* Weights,
                  const TColStd_Array1OfReal& Knots,
                  const TColStd_Array1OfInteger* Mults,
                  gp_Pnt& P,
                  gp_Vec& V) {
  ::D1(U, Index, Degree, Periodic, Poles, Weights, Knots, Mults, P, V);
}

void BSplCLib::D2(const Standard_Real U,
                  const Standard_Integer Index,
                  const Standard_Integer Degree,
                  const Standard_Boolean Periodic,
                  const TColgp_Array1OfPnt& Poles,
                  const TColStd_Array1OfReal* Weights,
                  const TColStd_Array1OfReal& Knots,
                  const TColStd_Array1OfInteger* Mults,
                  gp_Pnt& P,
                  gp_Vec& V1,
                  gp_Vec& V2) {
  ::D2(U, Index, Degree, Periodic, Poles, Weights, Knots, Mults, P, V1, V2);
}

void BSplCLib::D3(const Standard_Real U,
                  const Standard_Integer Index,
                  const Standard_Integer Degree,
                  const Standard_Boolean Periodic,
                  const TColgp_Array1OfPnt& Poles,
                  const TColStd_Array1OfReal* Weights,
                  const TColStd_Array1OfReal& Knots,
                  const TColStd_Array1OfInteger* Mults,
                  gp_Pnt& P,
                  gp_Vec& V1,
                  gp_Vec& V2,
                  gp_Vec& V3) {
  ::D3(U, Index, Degree, Periodic, Poles, Weights, Knots, Mults, P, V1, V2, V3);
}

void BSplCLib::DN(const Standard_Real U,
                  const Standard_Integer N,
                  const Standard_Integer Index,
                  const Standard_Integer Degree,
                  const Standard_Boolean Periodic,
                  const TColgp_Array1OfPnt& Poles,
                  const TColStd_Array1OfReal* Weights,
                  const TColStd_Array1OfReal& Knots,
                  const TColStd_Array1OfInteger* Mults,
                  gp_Vec& VN) {
  ::DN<gp_Pnt>(U, N, Index, Degree, Periodic, Poles, Weights, Knots, Mults, VN);
}

void BSplCLib::CacheD0(const Standard_Real Parameter,
                       const Standard_Integer Degree,
                       const Standard_Real CacheParameter,
                       const Standard_Real SpanLength,
                       const TColgp_Array1OfPnt& PolesArray,
                       const TColStd_Array1OfReal* WeightsArray,
                       gp_Pnt& aPoint) {
  ::CacheD0(Parameter, Degree, CacheParameter, SpanLength, PolesArray,
            WeightsArray, aPoint);
}

void BSplCLib::CacheD1(const Standard_Real Parameter,
                       const Standard_Integer Degree,
                       const Standard_Real CacheParameter,
                       const Standard_Real SpanLength,
                       const TColgp_Array1OfPnt& PolesArray,
                       const TColStd_Array1OfReal* WeightsArray,
                       gp_Pnt& aPoint,
                       gp_Vec& aVector) {
  ::CacheD1(Parameter, Degree, CacheParameter, SpanLength, PolesArray,
            WeightsArray, aPoint, aVector);
}

void BSplCLib::CacheD2(const Standard_Real Parameter,
                       const Standard_Integer Degree,
                       const Standard_Real CacheParameter,
                       const Standard_Real SpanLength,
                       const TColgp_Array1OfPnt& PolesArray,
                       const TColStd_Array1OfReal* WeightsArray,
                       gp_Pnt& aPoint,
                       gp_Vec& aVector1,
                       gp_Vec& aVector2) {
  ::CacheD2(Parameter, Degree, CacheParameter, SpanLength, PolesArray,
            WeightsArray, aPoint, aVector1, aVector2);
}

void BSplCLib::CacheD3(const Standard_Real Parameter,
                       const Standard_Integer Degree,
                       const Standard_Real CacheParameter,
                       const Standard_Real SpanLength,
                       const TColgp_Array1OfPnt& PolesArray,
                       const TColStd_Array1OfReal* WeightsArray,
                       gp_Pnt& aPoint,
                       gp_Vec& aVector1,
                       gp_Vec& aVector2,
                       gp_Vec& aVector3) {
  ::CacheD3(Parameter, Degree, CacheParameter, SpanLength, PolesArray,
            WeightsArray, aPoint, aVector1, aVector2, aVector3);
}

void BSplCLib::BuildCache(const Standard_Real U,
                          const Standard_Real SpanDomain,
                          const Standard_Boolean Periodic,
                          const Standard_Integer Degree,
                          const TColStd_Array1OfReal& FlatKnots,
                          const TColgp_Array1OfPnt& Poles,
                          const TColStd_Array1OfReal* Weights,
                          TColgp_Array1OfPnt& CachePoles,
                          TColStd_Array1OfReal* CacheWeights) {
  ::BuildCache<gp_Pnt>(U, SpanDomain, Periodic, Degree, FlatKnots, Poles, Weights,
		       CachePoles, CacheWeights);
}
