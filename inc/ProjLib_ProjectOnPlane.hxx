// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ProjLib_ProjectOnPlane_HeaderFile
#define _ProjLib_ProjectOnPlane_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_Adaptor3d_HCurve.hxx>
#include <gp_Ax3.hxx>
#include <gp_Dir.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <GeomAbs_CurveType.hxx>
#include <Handle_GeomAdaptor_HCurve.hxx>
#include <Adaptor3d_Curve.hxx>
#include <GeomAbs_Shape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Geom_BezierCurve.hxx>
#include <Handle_Geom_BSplineCurve.hxx>
class Adaptor3d_HCurve;
class GeomAdaptor_HCurve;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DomainError;
class Standard_ConstructionError;
class Standard_NotImplemented;
class gp_Ax3;
class gp_Dir;
class TColStd_Array1OfReal;
class gp_Pnt;
class gp_Vec;
class gp_Lin;
class gp_Circ;
class gp_Elips;
class gp_Hypr;
class gp_Parab;
class Geom_BezierCurve;
class Geom_BSplineCurve;


//! Class  used  to project  a 3d curve   on a plane.  The
//! result will be a 3d curve.
//!
//! You  can ask   the projected curve  to  have  the same
//! parametrization as the original curve.
//!
//! The projection can be done  along every direction  not
//! parallel to the plane.
class ProjLib_ProjectOnPlane  : public Adaptor3d_Curve
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor.
  Standard_EXPORT ProjLib_ProjectOnPlane();
  
  //! The projection will be normal to the Plane defined
  //! by the Ax3 <Pl>.
  Standard_EXPORT ProjLib_ProjectOnPlane(const gp_Ax3& Pl);
  
  //! The projection will be  along the direction <D> on
  //! the plane defined by the Ax3 <Pl>.
  //! raises  if the direction  <D>  is parallel  to the
  //! plane <Pl>.
  Standard_EXPORT ProjLib_ProjectOnPlane(const gp_Ax3& Pl, const gp_Dir& D);
  
  //! Sets the  Curve  and perform  the projection.   if
  //! <KeepParametrization> is true, the parametrization
  //! of the Projected Curve <PC>  will  be the same  as
  //! the parametrization of the initial  curve <C>.  It
  //! meens: proj(C(u)) = PC(u) for  each u.  Otherwize,
  //! the parametrization may change.
  Standard_EXPORT   void Load (const Handle(Adaptor3d_HCurve)& C, const Standard_Real Tolerance, const Standard_Boolean KeepParametrization = Standard_True) ;
  
  Standard_EXPORT  const  gp_Ax3& GetPlane()  const;
  
  Standard_EXPORT  const  gp_Dir& GetDirection()  const;
  
  Standard_EXPORT  const  Handle(Adaptor3d_HCurve)& GetCurve()  const;
  
  Standard_EXPORT   Standard_Real FirstParameter()  const;
  
  Standard_EXPORT   Standard_Real LastParameter()  const;
  
  Standard_EXPORT   GeomAbs_Shape Continuity()  const;
  
  //! If necessary,  breaks the  curve in  intervals  of
  //! continuity  <S>.    And  returns   the number   of
  //! intervals.
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
  
  //! Warning ! this will NOT make a copy of the
  //! Bezier Curve : If you want to modify
  //! the Curve please make a copy yourself
  //! Also it will NOT trim the surface to
  //! myFirst/Last.
  Standard_EXPORT   Handle(Geom_BezierCurve) Bezier()  const;
  
  //! Warning ! this will NOT make a copy of the
  //! BSpline Curve : If you want to modify
  //! the Curve please make a copy yourself
  //! Also it will NOT trim the surface to
  //! myFirst/Last.
  Standard_EXPORT   Handle(Geom_BSplineCurve) BSpline()  const;




protected:





private:



  Handle(Adaptor3d_HCurve) myCurve;
  gp_Ax3 myPlane;
  gp_Dir myDirection;
  Standard_Boolean myKeepParam;
  Standard_Real myFirstPar;
  Standard_Real myLastPar;
  Standard_Real myTolerance;
  GeomAbs_CurveType myType;
  Handle(GeomAdaptor_HCurve) myResult;
  Standard_Boolean myIsApprox;


};







#endif // _ProjLib_ProjectOnPlane_HeaderFile
