// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAdaptor_Surface_HeaderFile
#define _BRepAdaptor_Surface_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Geometry/GeomAdaptor/GeomAdaptor_Surface.hxx>
#include <Mathematics/Primitives/gp_Trsf.hxx>
#include <TopoDS_Face.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_Surface.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <GeomAbs_Shape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Adaptor3d_HSurface.hxx>
#include <GeomAbs_SurfaceType.hxx>
#include <Handle_Geom_BezierSurface.hxx>
#include <Handle_Geom_BSplineSurface.hxx>
#include <Handle_Adaptor3d_HCurve.hxx>
class Standard_OutOfRange;
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Face;
class GeomAdaptor_Surface;
class gp_Trsf;
class TColStd_Array1OfReal;
class Adaptor3d_HSurface;
class gp_Pnt;
class gp_Vec;
class gp_Pln;
class gp_Cylinder;
class gp_Cone;
class gp_Sphere;
class gp_Torus;
class Geom_BezierSurface;
class Geom_BSplineSurface;
class gp_Ax1;
class gp_Dir;
class Adaptor3d_HCurve;


//! The Surface from BRepAdaptor allows to  use a Face
//! of the BRep topology look like a 3D surface.
//!
//! It  has  the methods  of  the class   Surface from
//! Adaptor3d.
//!
//! It is created or initialized with a Face. It takes
//! into account the local coordinates system.
//!
//! The  u,v parameter range is   the minmax value for
//! the  restriction,  unless  the flag restriction is
//! set to false.
class BRepAdaptor_Surface  : public Adaptor3d_Surface
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates an undefined surface with no face loaded.
  Standard_EXPORT BRepAdaptor_Surface();
  
  //! Creates a surface to  access the geometry  of <F>.
  //! If  <Restriction> is  true  the parameter range is
  //! the  parameter  range  in   the  UV space  of  the
  //! restriction.
  Standard_EXPORT BRepAdaptor_Surface(const TopoDS_Face& F, const Standard_Boolean R = Standard_True);
  
  //! Sets the surface to the geometry of <F>.
  Standard_EXPORT   void Initialize (const TopoDS_Face& F, const Standard_Boolean Restriction = Standard_True) ;
  
  //! Returns the surface.
  Standard_EXPORT  const  GeomAdaptor_Surface& Surface()  const;
  
  //! Returns the surface.
  Standard_EXPORT   GeomAdaptor_Surface& ChangeSurface() ;
  
  //! Returns the surface coordinate system.
  Standard_EXPORT  const  gp_Trsf& Trsf()  const;
  
  //! Returns the face.
  Standard_EXPORT  const  TopoDS_Face& Face()  const;
  
  //! Returns the face tolerance.
  Standard_EXPORT   Standard_Real Tolerance()  const;
  
      Standard_Real FirstUParameter()  const;
  
      Standard_Real LastUParameter()  const;
  
      Standard_Real FirstVParameter()  const;
  
      Standard_Real LastVParameter()  const;
  
      GeomAbs_Shape UContinuity()  const;
  
      GeomAbs_Shape VContinuity()  const;
  
  //! If necessary, breaks the surface in U intervals of
  //! continuity    <S>.  And   returns  the  number  of
  //! intervals.
      Standard_Integer NbUIntervals (const GeomAbs_Shape S)  const;
  
  //! If necessary, breaks the surface in V intervals of
  //! continuity    <S>.  And   returns  the  number  of
  //! intervals.
      Standard_Integer NbVIntervals (const GeomAbs_Shape S)  const;
  
  //! Returns the  intervals with the requested continuity
  //! in the U direction.
  Standard_EXPORT   void UIntervals (TColStd_Array1OfReal& T, const GeomAbs_Shape S)  const;
  
  //! Returns the  intervals with the requested continuity
  //! in the V direction.
  Standard_EXPORT   void VIntervals (TColStd_Array1OfReal& T, const GeomAbs_Shape S)  const;
  
  //! Returns    a  surface trimmed in the U direction
  //! equivalent   of  <me>  between
  //! parameters <First>  and <Last>. <Tol>  is used  to
  //! test for 3d points confusion.
  //! If <First> >= <Last>
  Standard_EXPORT   Handle(Adaptor3d_HSurface) UTrim (const Standard_Real First, const Standard_Real Last, const Standard_Real Tol)  const;
  
  //! Returns    a  surface trimmed in the V direction  between
  //! parameters <First>  and <Last>. <Tol>  is used  to
  //! test for 3d points confusion.
  //! If <First> >= <Last>
  Standard_EXPORT   Handle(Adaptor3d_HSurface) VTrim (const Standard_Real First, const Standard_Real Last, const Standard_Real Tol)  const;
  
      Standard_Boolean IsUClosed()  const;
  
      Standard_Boolean IsVClosed()  const;
  
      Standard_Boolean IsUPeriodic()  const;
  
      Standard_Real UPeriod()  const;
  
      Standard_Boolean IsVPeriodic()  const;
  
      Standard_Real VPeriod()  const;
  
  //! Computes the point of parameters U,V on the surface.
  Standard_EXPORT   gp_Pnt Value (const Standard_Real U, const Standard_Real V)  const;
  
  //! Computes the point of parameters U,V on the surface.
  Standard_EXPORT   void D0 (const Standard_Real U, const Standard_Real V, gp_Pnt& P)  const;
  
  //! Computes the point  and the first derivatives on
  //! the surface.
  //! Raised   if  the continuity  of   the  current
  //! intervals is not C1.
  Standard_EXPORT   void D1 (const Standard_Real U, const Standard_Real V, gp_Pnt& P, gp_Vec& D1U, gp_Vec& D1V)  const;
  
  //! Computes   the point,  the  first  and  second
  //! derivatives on the surface.
  //! Raised  if   the   continuity   of the current
  //! intervals is not C2.
  Standard_EXPORT   void D2 (const Standard_Real U, const Standard_Real V, gp_Pnt& P, gp_Vec& D1U, gp_Vec& D1V, gp_Vec& D2U, gp_Vec& D2V, gp_Vec& D2UV)  const;
  
  //! Computes the point,  the first, second and third
  //! derivatives on the surface.
  //! Raised  if   the   continuity   of the current
  //! intervals is not C3.
  Standard_EXPORT   void D3 (const Standard_Real U, const Standard_Real V, gp_Pnt& P, gp_Vec& D1U, gp_Vec& D1V, gp_Vec& D2U, gp_Vec& D2V, gp_Vec& D2UV, gp_Vec& D3U, gp_Vec& D3V, gp_Vec& D3UUV, gp_Vec& D3UVV)  const;
  
  //! Computes the derivative of order Nu in the direction
  //! U and Nv in the direction V at the point P(U, V).
  //! Raised if the current U  interval is not not CNu
  //! and the current V interval is not CNv.
  //! Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.
  Standard_EXPORT   gp_Vec DN (const Standard_Real U, const Standard_Real V, const Standard_Integer Nu, const Standard_Integer Nv)  const;
  
  //! Returns the parametric U  resolution corresponding
  //! to the real space resolution <R3d>.
      Standard_Real UResolution (const Standard_Real R3d)  const;
  
  //! Returns the parametric V  resolution corresponding
  //! to the real space resolution <R3d>.
      Standard_Real VResolution (const Standard_Real R3d)  const;
  
  //! Returns the type of the surface : Plane, Cylinder,
  //! Cone,      Sphere,        Torus,    BezierSurface,
  //! BSplineSurface,               SurfaceOfRevolution,
  //! SurfaceOfExtrusion, OtherSurface
      GeomAbs_SurfaceType GetType()  const;
  
  Standard_EXPORT   gp_Pln Plane()  const;
  
  Standard_EXPORT   gp_Cylinder Cylinder()  const;
  
  Standard_EXPORT   gp_Cone Cone()  const;
  
  Standard_EXPORT   gp_Sphere Sphere()  const;
  
  Standard_EXPORT   gp_Torus Torus()  const;
  
      Standard_Integer UDegree()  const;
  
      Standard_Integer NbUPoles()  const;
  
      Standard_Integer VDegree()  const;
  
      Standard_Integer NbVPoles()  const;
  
      Standard_Integer NbUKnots()  const;
  
      Standard_Integer NbVKnots()  const;
  
      Standard_Boolean IsURational()  const;
  
      Standard_Boolean IsVRational()  const;
  
  Standard_EXPORT   Handle(Geom_BezierSurface) Bezier()  const;
  

  //! Warning : this will make a copy of the
  //! BSpline Surface since it applies
  //! to it the myTsrf transformation
  //! Be Carefull when using this method
  Standard_EXPORT   Handle(Geom_BSplineSurface) BSpline()  const;
  
  Standard_EXPORT   gp_Ax1 AxeOfRevolution()  const;
  
  Standard_EXPORT   gp_Dir Direction()  const;
  
  //! only for SurfaceOfExtrusion and SurfaceOfRevolution
  //! Warning: this will make a copy of the underlying curve
  //! since it applies to it the transformation
  //! myTrsf. Be carefull when using this method.
  Standard_EXPORT   Handle(Adaptor3d_HCurve) BasisCurve()  const;
  
  Standard_EXPORT   Handle(Adaptor3d_HSurface) BasisSurface()  const;
  
  Standard_EXPORT   Standard_Real OffsetValue()  const;




protected:





private:



  GeomAdaptor_Surface mySurf;
  gp_Trsf myTrsf;
  TopoDS_Face myFace;


};


#include <BRepAdaptor_Surface.lxx>





#endif // _BRepAdaptor_Surface_HeaderFile
