// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Adaptor3d_OffsetCurve_HeaderFile
#define _Adaptor3d_OffsetCurve_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Geometry/Adaptor2d/Handle_Adaptor2d_HCurve2d.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Geometry/Adaptor2d/Adaptor2d_Curve2d.hxx>
#include <Geometry/GeomAbs/GeomAbs_Shape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Geometry/GeomAbs/GeomAbs_CurveType.hxx>
#include <Geometry/Geom2d/Handle_Geom2d_BezierCurve.hxx>
#include <Geometry/Geom2d/Handle_Geom2d_BSplineCurve.hxx>
class Adaptor2d_HCurve2d;
class Standard_NoSuchObject;
class Standard_DomainError;
class Standard_OutOfRange;
class Standard_TypeMismatch;
class TColStd_Array1OfReal;
class gp_Pnt2d;
class gp_Vec2d;
class gp_Lin2d;
class gp_Circ2d;
class gp_Elips2d;
class gp_Hypr2d;
class gp_Parab2d;
class Geom2d_BezierCurve;
class Geom2d_BSplineCurve;


//! Defines an Offset curve (algorithmic 2d curve).
class Adaptor3d_OffsetCurve  : public Adaptor2d_Curve2d
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! The Offset is set to 0.
  Standard_EXPORT Adaptor3d_OffsetCurve();
  
  //! The curve is loaded. The Offset is set to 0.
  Standard_EXPORT Adaptor3d_OffsetCurve(const Handle(Adaptor2d_HCurve2d)& C);
  
  //! Creates  an  OffsetCurve curve.
  //! The Offset is set to Offset.
  Standard_EXPORT Adaptor3d_OffsetCurve(const Handle(Adaptor2d_HCurve2d)& C, const Standard_Real Offset);
  
  //! Create an Offset curve.
  //! WFirst,WLast define the bounds of the Offset curve.
  Standard_EXPORT Adaptor3d_OffsetCurve(const Handle(Adaptor2d_HCurve2d)& C, const Standard_Real Offset, const Standard_Real WFirst, const Standard_Real WLast);
  
  //! Changes  the curve.  The Offset is reset to 0.
  Standard_EXPORT   void Load (const Handle(Adaptor2d_HCurve2d)& S) ;
  
  //! Changes the Offset on the current Curve.
  Standard_EXPORT   void Load (const Standard_Real Offset) ;
  
  //! Changes the Offset Curve on the current Curve.
  Standard_EXPORT   void Load (const Standard_Real Offset, const Standard_Real WFirst, const Standard_Real WLast) ;
  
     const  Handle(Adaptor2d_HCurve2d)& Curve()  const;
  
      Standard_Real Offset()  const;
  
      Standard_Real FirstParameter()  const;
  
      Standard_Real LastParameter()  const;
  
  Standard_EXPORT   GeomAbs_Shape Continuity()  const;
  
  //! If necessary,  breaks the  curve in  intervals  of
  //! continuity  <S>.    And  returns   the number   of
  //! intervals.
  Standard_EXPORT   Standard_Integer NbIntervals (const GeomAbs_Shape S)  const;
  
  //! Stores in <T> the  parameters bounding the intervals
  //! of continuity <S>.
  //!
  //! The array must provide  enough room to  accomodate
  //! for the parameters. i.e. T.Length() > NbIntervals()
  Standard_EXPORT   void Intervals (TColStd_Array1OfReal& T, const GeomAbs_Shape S)  const;
  
  //! Returns    a  curve equivalent   of  <me>  between
  //! parameters <First>  and <Last>. <Tol>  is used  to
  //! test for 3d points confusion.
  //! If <First> >= <Last>
  Standard_EXPORT   Handle(Adaptor2d_HCurve2d) Trim (const Standard_Real First, const Standard_Real Last, const Standard_Real Tol)  const;
  
  Standard_EXPORT   Standard_Boolean IsClosed()  const;
  
  Standard_EXPORT   Standard_Boolean IsPeriodic()  const;
  
  Standard_EXPORT   Standard_Real Period()  const;
  
  //! Computes the point of parameter U on the curve.
  Standard_EXPORT   gp_Pnt2d Value (const Standard_Real U)  const;
  
  //! Computes the point of parameter U on the curve.
  Standard_EXPORT   void D0 (const Standard_Real U, gp_Pnt2d& P)  const;
  
  //! Computes the point of parameter U on the curve with its
  //! first derivative.
  //! Raised if the continuity of the current interval
  //! is not C1.
  Standard_EXPORT   void D1 (const Standard_Real U, gp_Pnt2d& P, gp_Vec2d& V)  const;
  

  //! Returns the point P of parameter U, the first and second
  //! derivatives V1 and V2.
  //! Raised if the continuity of the current interval
  //! is not C2.
  Standard_EXPORT   void D2 (const Standard_Real U, gp_Pnt2d& P, gp_Vec2d& V1, gp_Vec2d& V2)  const;
  

  //! Returns the point P of parameter U, the first, the second
  //! and the third derivative.
  //! Raised if the continuity of the current interval
  //! is not C3.
  Standard_EXPORT   void D3 (const Standard_Real U, gp_Pnt2d& P, gp_Vec2d& V1, gp_Vec2d& V2, gp_Vec2d& V3)  const;
  

  //! The returned vector gives the value of the derivative for the
  //! order of derivation N.
  //! Raised if the continuity of the current interval
  //! is not CN.
  //! Raised if N < 1.
  Standard_EXPORT   gp_Vec2d DN (const Standard_Real U, const Standard_Integer N)  const;
  
  //! Returns the parametric  resolution corresponding
  //! to the real space resolution <R3d>.
  Standard_EXPORT   Standard_Real Resolution (const Standard_Real R3d)  const;
  
  //! Returns  the  type of the   curve  in the  current
  //! interval :   Line,   Circle,   Ellipse, Hyperbola,
  //! Parabola, BezierCurve, BSplineCurve, OtherCurve.
  Standard_EXPORT   GeomAbs_CurveType GetType()  const;
  
  Standard_EXPORT   gp_Lin2d Line()  const;
  
  Standard_EXPORT   gp_Circ2d Circle()  const;
  
  Standard_EXPORT   gp_Elips2d Ellipse()  const;
  
  Standard_EXPORT   gp_Hypr2d Hyperbola()  const;
  
  Standard_EXPORT   gp_Parab2d Parabola()  const;
  
  Standard_EXPORT   Standard_Integer Degree()  const;
  
  Standard_EXPORT   Standard_Boolean IsRational()  const;
  
  Standard_EXPORT   Standard_Integer NbPoles()  const;
  
  Standard_EXPORT   Standard_Integer NbKnots()  const;
  
  Standard_EXPORT   Handle(Geom2d_BezierCurve) Bezier()  const;
  
  Standard_EXPORT   Handle(Geom2d_BSplineCurve) BSpline()  const;




protected:





private:



  Handle(Adaptor2d_HCurve2d) myCurve;
  Standard_Real myOffset;
  Standard_Real myFirst;
  Standard_Real myLast;


};


#include <Geometry/Adaptor3d/Adaptor3d_OffsetCurve.lxx>





#endif // _Adaptor3d_OffsetCurve_HeaderFile
