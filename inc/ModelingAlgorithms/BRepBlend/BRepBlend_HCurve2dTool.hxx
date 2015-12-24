// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBlend_HCurve2dTool_HeaderFile
#define _BRepBlend_HCurve2dTool_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Geometry/Adaptor2d/Handle_Adaptor2d_HCurve2d.hxx>
#include <Geometry/GeomAbs/GeomAbs_Shape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <Mathematics/Primitives/gp_Vec2d.hxx>
#include <Geometry/GeomAbs/GeomAbs_CurveType.hxx>
#include <Mathematics/Primitives/gp_Lin2d.hxx>
#include <Mathematics/Primitives/gp_Circ2d.hxx>
#include <Mathematics/Primitives/gp_Elips2d.hxx>
#include <Mathematics/Primitives/gp_Hypr2d.hxx>
#include <Mathematics/Primitives/gp_Parab2d.hxx>
#include <Geometry/Geom2d/Handle_Geom2d_BezierCurve.hxx>
#include <Geometry/Geom2d/Handle_Geom2d_BSplineCurve.hxx>
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DomainError;
class Adaptor2d_HCurve2d;
class TColStd_Array1OfReal;
class gp_Pnt2d;
class gp_Vec2d;
class Geom2d_BezierCurve;
class Geom2d_BSplineCurve;



class BRepBlend_HCurve2dTool 
{
public:

  DEFINE_STANDARD_ALLOC

  
    static   Standard_Real FirstParameter (const Handle(Adaptor2d_HCurve2d)& C) ;
  
    static   Standard_Real LastParameter (const Handle(Adaptor2d_HCurve2d)& C) ;
  
    static   GeomAbs_Shape Continuity (const Handle(Adaptor2d_HCurve2d)& C) ;
  
  //! Returns  the number  of  intervals for  continuity
  //! <S>. May be one if Continuity(myclass) >= <S>
    static   Standard_Integer NbIntervals (const Handle(Adaptor2d_HCurve2d)& C, const GeomAbs_Shape S) ;
  
  //! Stores in <T> the  parameters bounding the intervals
  //! of continuity <S>.
  //!
  //! The array must provide  enough room to  accomodate
  //! for the parameters. i.e. T.Length() > NbIntervals()
    static   void Intervals (const Handle(Adaptor2d_HCurve2d)& C, TColStd_Array1OfReal& T, const GeomAbs_Shape S) ;
  
    static   Standard_Boolean IsClosed (const Handle(Adaptor2d_HCurve2d)& C) ;
  
    static   Standard_Boolean IsPeriodic (const Handle(Adaptor2d_HCurve2d)& C) ;
  
    static   Standard_Real Period (const Handle(Adaptor2d_HCurve2d)& C) ;
  
  //! Computes the point of parameter U on the curve.
    static   gp_Pnt2d Value (const Handle(Adaptor2d_HCurve2d)& C, const Standard_Real U) ;
  
  //! Computes the point of parameter U on the curve.
    static   void D0 (const Handle(Adaptor2d_HCurve2d)& C, const Standard_Real U, gp_Pnt2d& P) ;
  
  //! Computes the point of parameter U on the curve with its
  //! first derivative.
  //! Raised if the continuity of the current interval
  //! is not C1.
    static   void D1 (const Handle(Adaptor2d_HCurve2d)& C, const Standard_Real U, gp_Pnt2d& P, gp_Vec2d& V) ;
  

  //! Returns the point P of parameter U, the first and second
  //! derivatives V1 and V2.
  //! Raised if the continuity of the current interval
  //! is not C2.
    static   void D2 (const Handle(Adaptor2d_HCurve2d)& C, const Standard_Real U, gp_Pnt2d& P, gp_Vec2d& V1, gp_Vec2d& V2) ;
  

  //! Returns the point P of parameter U, the first, the second
  //! and the third derivative.
  //! Raised if the continuity of the current interval
  //! is not C3.
    static   void D3 (const Handle(Adaptor2d_HCurve2d)& C, const Standard_Real U, gp_Pnt2d& P, gp_Vec2d& V1, gp_Vec2d& V2, gp_Vec2d& V3) ;
  

  //! The returned vector gives the value of the derivative for the
  //! order of derivation N.
  //! Raised if the continuity of the current interval
  //! is not CN.
  //! Raised if N < 1.
    static   gp_Vec2d DN (const Handle(Adaptor2d_HCurve2d)& C, const Standard_Real U, const Standard_Integer N) ;
  
  //! Returns the parametric  resolution corresponding
  //! to the real space resolution <R3d>.
    static   Standard_Real Resolution (const Handle(Adaptor2d_HCurve2d)& C, const Standard_Real R3d) ;
  
  //! Returns  the  type of the   curve  in the  current
  //! interval :   Line,   Circle,   Ellipse, Hyperbola,
  //! Parabola, BezierCurve, BSplineCurve, OtherCurve.
    static   GeomAbs_CurveType GetType (const Handle(Adaptor2d_HCurve2d)& C) ;
  
    static   gp_Lin2d Line (const Handle(Adaptor2d_HCurve2d)& C) ;
  
    static   gp_Circ2d Circle (const Handle(Adaptor2d_HCurve2d)& C) ;
  
    static   gp_Elips2d Ellipse (const Handle(Adaptor2d_HCurve2d)& C) ;
  
    static   gp_Hypr2d Hyperbola (const Handle(Adaptor2d_HCurve2d)& C) ;
  
    static   gp_Parab2d Parabola (const Handle(Adaptor2d_HCurve2d)& C) ;
  
    static   Handle(Geom2d_BezierCurve) Bezier (const Handle(Adaptor2d_HCurve2d)& C) ;
  
    static   Handle(Geom2d_BSplineCurve) BSpline (const Handle(Adaptor2d_HCurve2d)& C) ;
  
  Standard_EXPORT static   Standard_Integer NbSamples (const Handle(Adaptor2d_HCurve2d)& C, const Standard_Real U0, const Standard_Real U1) ;




protected:





private:





};


#include <ModelingAlgorithms/BRepBlend/BRepBlend_HCurve2dTool.lxx>





#endif // _BRepBlend_HCurve2dTool_HeaderFile
