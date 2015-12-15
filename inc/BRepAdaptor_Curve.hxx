// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAdaptor_Curve_HeaderFile
#define _BRepAdaptor_Curve_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Mathematics/Primitives/gp_Trsf.hxx>
#include <GeomAdaptor_Curve.hxx>
#include <Handle_Adaptor3d_HCurveOnSurface.hxx>
#include <TopoDS_Edge.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_Curve.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <GeomAbs_Shape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Adaptor3d_HCurve.hxx>
#include <GeomAbs_CurveType.hxx>
#include <Handle_Geom_BezierCurve.hxx>
#include <Handle_Geom_BSplineCurve.hxx>
class Adaptor3d_HCurveOnSurface;
class Standard_NullObject;
class Standard_DomainError;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class TopoDS_Edge;
class TopoDS_Face;
class gp_Trsf;
class GeomAdaptor_Curve;
class Adaptor3d_CurveOnSurface;
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


//! The Curve from BRepAdaptor  allows to use  an Edge
//! of the BRep topology like a 3D curve.
//!
//! It has the methods the class Curve from Adaptor3d.
//!
//! It  is created or  Initialized  with  an Edge.  It
//! takes  into account local  coordinate systems.  If
//! the Edge has a 3D curve it is  use  with priority.
//! If the edge  has no 3D curve one  of the curves on
//! surface is used. It is possible to enforce using a
//! curve on surface by creating  or initialising with
//! an Edge and a Face.
class BRepAdaptor_Curve  : public Adaptor3d_Curve
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates an undefined Curve with no Edge loaded.
  Standard_EXPORT BRepAdaptor_Curve();
  
  //! Creates a Curve  to  acces to the geometry of edge
  //! <E>.
  Standard_EXPORT BRepAdaptor_Curve(const TopoDS_Edge& E);
  
  //! Creates a Curve to acces to  the geometry  of edge
  //! <E>.   The geometry  will   be  computed using the
  //! parametric curve of <E> on the face  <F>. An Error
  //! is  raised if  the edge does  not have a pcurve on
  //! the face.
  Standard_EXPORT BRepAdaptor_Curve(const TopoDS_Edge& E, const TopoDS_Face& F);
  
  //! Sets  the Curve <me>  to acces to the  geometry of
  //! edge <E>.
  Standard_EXPORT   void Initialize (const TopoDS_Edge& E) ;
  
  //! Sets the Curve <me>  to acces to  the  geometry of
  //! edge <E>.  The geometry will be computed using the
  //! parametric curve of <E>  on the face <F>. An Error
  //! is raised if the edge  does not  have a pcurve  on
  //! the face.
  Standard_EXPORT   void Initialize (const TopoDS_Edge& E, const TopoDS_Face& F) ;
  
  //! Returns the coordinate system of the curve.
  Standard_EXPORT  const  gp_Trsf& Trsf()  const;
  
  //! Returns True if the edge geometry is computed from
  //! a 3D curve.
  Standard_EXPORT   Standard_Boolean Is3DCurve()  const;
  
  //! Returns True if the edge geometry is computed from
  //! a pcurve on a surface.
  Standard_EXPORT   Standard_Boolean IsCurveOnSurface()  const;
  
  //! Returns the Curve of  the  edge.
  Standard_EXPORT  const  GeomAdaptor_Curve& Curve()  const;
  
  //! Returns the CurveOnSurface of the edge.
  Standard_EXPORT  const  Adaptor3d_CurveOnSurface& CurveOnSurface()  const;
  
  //! Returns the edge.
  Standard_EXPORT  const  TopoDS_Edge& Edge()  const;
  
  //! Returns the edge tolerance.
  Standard_EXPORT   Standard_Real Tolerance()  const;
  
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
  
  //! Computes the point of parameter U on the curve
  Standard_EXPORT   gp_Pnt Value (const Standard_Real U)  const;
  
  //! Computes the point of parameter U.
  Standard_EXPORT   void D0 (const Standard_Real U, gp_Pnt& P)  const;
  
  //! Computes the point of parameter U on the curve
  //! with its first derivative.
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
  
  //! returns the parametric resolution
  Standard_EXPORT   Standard_Real Resolution (const Standard_Real R3d)  const;
  
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
  

  //! Warning :
  //! This  will    make a copy of the Bezier Curve
  //! since it applies to it myTsrf . Be carefull when
  //! using this method
  Standard_EXPORT   Handle(Geom_BezierCurve) Bezier()  const;
  

  //! Warning :
  //! This will   make a copy of the BSpline Curve
  //! since it applies to it myTsrf . Be carefull when
  //! using this method
  Standard_EXPORT   Handle(Geom_BSplineCurve) BSpline()  const;




protected:





private:



  gp_Trsf myTrsf;
  GeomAdaptor_Curve myCurve;
  Handle(Adaptor3d_HCurveOnSurface) myConSurf;
  TopoDS_Edge myEdge;


};







#endif // _BRepAdaptor_Curve_HeaderFile
