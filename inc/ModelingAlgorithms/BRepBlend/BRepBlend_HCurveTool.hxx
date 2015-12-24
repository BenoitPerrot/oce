// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBlend_HCurveTool_HeaderFile
#define _BRepBlend_HCurveTool_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Geometry/Adaptor3d/Handle_Adaptor3d_HCurve.hxx>
#include <Geometry/GeomAbs/GeomAbs_Shape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>
#include <Geometry/GeomAbs/GeomAbs_CurveType.hxx>
#include <Mathematics/Primitives/gp_Lin.hxx>
#include <Mathematics/Primitives/gp_Circ.hxx>
#include <Mathematics/Primitives/gp_Elips.hxx>
#include <Mathematics/Primitives/gp_Hypr.hxx>
#include <Mathematics/Primitives/gp_Parab.hxx>
#include <Geometry/Geom/Handle_Geom_BezierCurve.hxx>
#include <Geometry/Geom/Handle_Geom_BSplineCurve.hxx>
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DomainError;
class Adaptor3d_HCurve;
class TColStd_Array1OfReal;
class gp_Pnt;
class gp_Vec;
class Geom_BezierCurve;
class Geom_BSplineCurve;



class BRepBlend_HCurveTool 
{
public:

  DEFINE_STANDARD_ALLOC

  
    static   Standard_Real FirstParameter (const Handle(Adaptor3d_HCurve)& C) ;
  
    static   Standard_Real LastParameter (const Handle(Adaptor3d_HCurve)& C) ;
  
    static   GeomAbs_Shape Continuity (const Handle(Adaptor3d_HCurve)& C) ;
  
  //! Returns  the number  of  intervals for  continuity
  //! <S>. May be one if Continuity(myclass) >= <S>
    static   Standard_Integer NbIntervals (const Handle(Adaptor3d_HCurve)& C, const GeomAbs_Shape S) ;
  
  //! Stores in <T> the  parameters bounding the intervals
  //! of continuity <S>.
  //!
  //! The array must provide  enough room to  accomodate
  //! for the parameters. i.e. T.Length() > NbIntervals()
    static   void Intervals (const Handle(Adaptor3d_HCurve)& C, TColStd_Array1OfReal& T, const GeomAbs_Shape S) ;
  
    static   Standard_Boolean IsClosed (const Handle(Adaptor3d_HCurve)& C) ;
  
    static   Standard_Boolean IsPeriodic (const Handle(Adaptor3d_HCurve)& C) ;
  
    static   Standard_Real Period (const Handle(Adaptor3d_HCurve)& C) ;
  
  //! Computes the point of parameter U on the curve.
    static   gp_Pnt Value (const Handle(Adaptor3d_HCurve)& C, const Standard_Real U) ;
  
  //! Computes the point of parameter U on the curve.
    static   void D0 (const Handle(Adaptor3d_HCurve)& C, const Standard_Real U, gp_Pnt& P) ;
  
  //! Computes the point of parameter U on the curve with its
  //! first derivative.
  //! Raised if the continuity of the current interval
  //! is not C1.
    static   void D1 (const Handle(Adaptor3d_HCurve)& C, const Standard_Real U, gp_Pnt& P, gp_Vec& V) ;
  

  //! Returns the point P of parameter U, the first and second
  //! derivatives V1 and V2.
  //! Raised if the continuity of the current interval
  //! is not C2.
    static   void D2 (const Handle(Adaptor3d_HCurve)& C, const Standard_Real U, gp_Pnt& P, gp_Vec& V1, gp_Vec& V2) ;
  

  //! Returns the point P of parameter U, the first, the second
  //! and the third derivative.
  //! Raised if the continuity of the current interval
  //! is not C3.
    static   void D3 (const Handle(Adaptor3d_HCurve)& C, const Standard_Real U, gp_Pnt& P, gp_Vec& V1, gp_Vec& V2, gp_Vec& V3) ;
  

  //! The returned vector gives the value of the derivative for the
  //! order of derivation N.
  //! Raised if the continuity of the current interval
  //! is not CN.
  //! Raised if N < 1.
    static   gp_Vec DN (const Handle(Adaptor3d_HCurve)& C, const Standard_Real U, const Standard_Integer N) ;
  
  //! Returns the parametric  resolution corresponding
  //! to the real space resolution <R3d>.
    static   Standard_Real Resolution (const Handle(Adaptor3d_HCurve)& C, const Standard_Real R3d) ;
  
  //! Returns  the  type of the   curve  in the  current
  //! interval :   Line,   Circle,   Ellipse, Hyperbola,
  //! Parabola, BezierCurve, BSplineCurve, OtherCurve.
    static   GeomAbs_CurveType GetType (const Handle(Adaptor3d_HCurve)& C) ;
  
    static   gp_Lin Line (const Handle(Adaptor3d_HCurve)& C) ;
  
    static   gp_Circ Circle (const Handle(Adaptor3d_HCurve)& C) ;
  
    static   gp_Elips Ellipse (const Handle(Adaptor3d_HCurve)& C) ;
  
    static   gp_Hypr Hyperbola (const Handle(Adaptor3d_HCurve)& C) ;
  
    static   gp_Parab Parabola (const Handle(Adaptor3d_HCurve)& C) ;
  
    static   Handle(Geom_BezierCurve) Bezier (const Handle(Adaptor3d_HCurve)& C) ;
  
    static   Handle(Geom_BSplineCurve) BSpline (const Handle(Adaptor3d_HCurve)& C) ;
  
  Standard_EXPORT static   Standard_Integer NbSamples (const Handle(Adaptor3d_HCurve)& C, const Standard_Real U0, const Standard_Real U1) ;




protected:





private:





};


#include <ModelingAlgorithms/BRepBlend/BRepBlend_HCurveTool.lxx>





#endif // _BRepBlend_HCurveTool_HeaderFile
