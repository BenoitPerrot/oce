// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Adaptor3d_CurveOnSurface_HeaderFile
#define _Adaptor3d_CurveOnSurface_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_Adaptor3d_HSurface.hxx>
#include <Handle_Adaptor2d_HCurve2d.hxx>
#include <GeomAbs_CurveType.hxx>
#include <gp_Circ.hxx>
#include <gp_Lin.hxx>
#include <Handle_TColStd_HSequenceOfReal.hxx>
#include <GeomAbs_Shape.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Adaptor3d_HCurve.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Geom_BezierCurve.hxx>
#include <Handle_Geom_BSplineCurve.hxx>
class Adaptor3d_HSurface;
class Adaptor2d_HCurve2d;
class TColStd_HSequenceOfReal;
class Standard_NoSuchObject;
class Standard_DomainError;
class Standard_OutOfRange;
class TColStd_Array1OfReal;
class Adaptor3d_HCurve;
class gp_Pnt;
class gp_Vec;
class gp_Lin;
class gp_Circ;
class gp_Elips;
class gp_Hypr;
class gp_Parab;
class Geom_BezierCurve;
class Geom_BSplineCurve;
class gp_Pnt2d;
class gp_Vec2d;


//! An interface between the services provided by a curve
//! lying on a surface from the package Geom and those
//! required of the curve by algorithms which use it. The
//! curve is defined as a 2D curve from the Geom2d
//! package, in the parametric space of the surface.
class Adaptor3d_CurveOnSurface  : public Adaptor3d_Curve
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Adaptor3d_CurveOnSurface();
  
  Standard_EXPORT Adaptor3d_CurveOnSurface(const Handle(Adaptor3d_HSurface)& S);
  
  //! Creates a CurveOnSurface from the 2d curve <C> and
  //! the surface <S>.
  Standard_EXPORT Adaptor3d_CurveOnSurface(const Handle(Adaptor2d_HCurve2d)& C, const Handle(Adaptor3d_HSurface)& S);
  
  //! Changes the surface.
  Standard_EXPORT   void Load (const Handle(Adaptor3d_HSurface)& S) ;
  
  //! Changes the 2d curve.
  Standard_EXPORT   void Load (const Handle(Adaptor2d_HCurve2d)& C) ;
  
  Standard_EXPORT  const  Handle(Adaptor2d_HCurve2d)& GetCurve()  const;
  
  Standard_EXPORT  const  Handle(Adaptor3d_HSurface)& GetSurface()  const;
  
  Standard_EXPORT   Handle(Adaptor2d_HCurve2d)& ChangeCurve() ;
  
  Standard_EXPORT   Handle(Adaptor3d_HSurface)& ChangeSurface() ;
  
  Standard_EXPORT   Standard_Real FirstParameter()  const;
  
  Standard_EXPORT   Standard_Real LastParameter()  const;
  
  Standard_EXPORT   GeomAbs_Shape Continuity()  const;
  
  //! Returns  the number  of  intervals for  continuity
  //! <S>. May be one if Continuity(me) >= <S>
  Standard_EXPORT   Standard_Integer NbIntervals (const GeomAbs_Shape S) ;
  
  //! Stores in <T> the  parameters bounding the intervals
  //! of continuity <S>.
  //!
  //! The array must provide  enough room to  accomodate
  //! for the parameters. i.e. T.Length() > NbIntervals()
  Standard_EXPORT   void Intervals (TColStd_Array1OfReal& T, const GeomAbs_Shape S) ;
  
  //! Returns    a  curve equivalent   of  <me>  between
  //! parameters <First>  and <Last>. <Tol>  is used  to
  //! test for 3d points confusion.
  //! If <First> >= <Last>
  Standard_EXPORT   Handle(Adaptor3d_HCurve) Trim (const Standard_Real First, const Standard_Real Last, const Standard_Real Tol)  const;
  
  Standard_EXPORT   Standard_Boolean IsClosed()  const;
  
  Standard_EXPORT   Standard_Boolean IsPeriodic()  const;
  
  Standard_EXPORT   Standard_Real Period()  const;
  
  //! Computes the point of parameter U on the curve.
  Standard_EXPORT   gp_Pnt Value (const Standard_Real U)  const;
  
  //! Computes the point of parameter U on the curve.
  Standard_EXPORT   void D0 (const Standard_Real U, gp_Pnt& P)  const;
  
  //! Computes the point of parameter U on the curve with its
  //! first derivative.
  //! Raised if the continuity of the current interval
  //! is not C1.
  Standard_EXPORT   void D1 (const Standard_Real U, gp_Pnt& P, gp_Vec& V)  const;
  

  //! Returns the point P of parameter U, the first and second
  //! derivatives V1 and V2.
  //! Raised if the continuity of the current interval
  //! is not C2.
  Standard_EXPORT   void D2 (const Standard_Real U, gp_Pnt& P, gp_Vec& V1, gp_Vec& V2)  const;
  

  //! Returns the point P of parameter U, the first, the second
  //! and the third derivative.
  //! Raised if the continuity of the current interval
  //! is not C3.
  Standard_EXPORT   void D3 (const Standard_Real U, gp_Pnt& P, gp_Vec& V1, gp_Vec& V2, gp_Vec& V3)  const;
  

  //! The returned vector gives the value of the derivative for the
  //! order of derivation N.
  //! Raised if the continuity of the current interval
  //! is not CN.
  //! Raised if N < 1.
  Standard_EXPORT   gp_Vec DN (const Standard_Real U, const Standard_Integer N)  const;
  
  //! Returns the parametric  resolution corresponding
  //! to the real space resolution <R3d>.
  Standard_EXPORT   Standard_Real Resolution (const Standard_Real R3d)  const;
  
  //! Returns  the  type of the   curve  in the  current
  //! interval :   Line,   Circle,   Ellipse, Hyperbola,
  //! Parabola, BezierCurve, BSplineCurve, OtherCurve.
  Standard_EXPORT   GeomAbs_CurveType GetType()  const;
  
  Standard_EXPORT   gp_Lin Line()  const;
  
  Standard_EXPORT   gp_Circ Circle()  const;
  
  Standard_EXPORT   gp_Elips Ellipse()  const;
  
  Standard_EXPORT   gp_Hypr Hyperbola()  const;
  
  Standard_EXPORT   gp_Parab Parabola()  const;
  
  Standard_EXPORT   Standard_Integer Degree()  const;
  
  Standard_EXPORT   Standard_Boolean IsRational()  const;
  
  Standard_EXPORT   Standard_Integer NbPoles()  const;
  
  Standard_EXPORT   Standard_Integer NbKnots()  const;
  
  Standard_EXPORT   Handle(Geom_BezierCurve) Bezier()  const;
  
  Standard_EXPORT   Handle(Geom_BSplineCurve) BSpline()  const;




protected:





private:

  
  Standard_EXPORT   void EvalKPart() ;
  
  //! Evaluates  myFirstSurf and myLastSurf
  //! for trimming the curve on surface.
  //! Following  methods  output left-bottom and right-top points
  //! of located part on surface
  //! for trimming the curve on surface.
  Standard_EXPORT   void EvalFirstLastSurf() ;
  
  Standard_EXPORT   void LocatePart (const gp_Pnt2d& UV, const gp_Vec2d& DUV, const Handle(Adaptor3d_HSurface)& S, gp_Pnt2d& LeftBot, gp_Pnt2d& RightTop)  const;
  
  Standard_EXPORT   Standard_Boolean LocatePart_RevExt (const gp_Pnt2d& UV, const gp_Vec2d& DUV, const Handle(Adaptor3d_HSurface)& S, gp_Pnt2d& LeftBot, gp_Pnt2d& RightTop)  const;
  
  Standard_EXPORT   Standard_Boolean LocatePart_Offset (const gp_Pnt2d& UV, const gp_Vec2d& DUV, const Handle(Adaptor3d_HSurface)& S, gp_Pnt2d& LeftBot, gp_Pnt2d& RightTop)  const;
  
  //! Extracts the numbers of knots which equal
  //! the point and checks derivative components
  //! by  zero equivalence.
  Standard_EXPORT   void FindBounds (const TColStd_Array1OfReal& Arr, const Standard_Real XYComp, const Standard_Real DUVComp, Standard_Integer& Bnd1, Standard_Integer& Bnd2, Standard_Boolean& DerIsNull)  const;


  Handle(Adaptor3d_HSurface) mySurface;
  Handle(Adaptor2d_HCurve2d) myCurve;
  GeomAbs_CurveType myType;
  gp_Circ myCirc;
  gp_Lin myLin;
  Handle(Adaptor3d_HSurface) myFirstSurf;
  Handle(Adaptor3d_HSurface) myLastSurf;
  Handle(TColStd_HSequenceOfReal) myIntervals;
  GeomAbs_Shape myIntCont;


};







#endif // _Adaptor3d_CurveOnSurface_HeaderFile
