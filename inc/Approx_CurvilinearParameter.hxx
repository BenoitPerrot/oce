// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Approx_CurvilinearParameter_HeaderFile
#define _Approx_CurvilinearParameter_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Geom_BSplineCurve.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_Geom2d_BSplineCurve.hxx>
#include <Handle_Adaptor3d_HCurve.hxx>
#include <GeomAbs_Shape.hxx>
#include <Handle_Adaptor2d_HCurve2d.hxx>
#include <Handle_Adaptor3d_HSurface.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class Geom_BSplineCurve;
class Geom2d_BSplineCurve;
class Standard_OutOfRange;
class Standard_ConstructionError;
class Adaptor3d_HCurve;
class Adaptor2d_HCurve2d;
class Adaptor3d_HSurface;


//! Approximation of a Curve to make its parameter be its
//! curvilinear  abscissa
//! If the curve is a curve on a surface S, C2D is the corresponding Pcurve,
//! we considere the curve is given by its representation S(C2D(u))
//! If the curve is a curve on 2 surfaces S1 and S2 and C2D1 C2D2 are
//! the two corresponding Pcurve, we considere the curve is given
//! by its representation  1/2(S1(C2D1(u) + S2 (C2D2(u)))
class Approx_CurvilinearParameter 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! case of a free 3D curve
  Standard_EXPORT Approx_CurvilinearParameter(const Handle(Adaptor3d_HCurve)& C3D, const Standard_Real Tol, const GeomAbs_Shape Order, const Standard_Integer MaxDegree, const Standard_Integer MaxSegments);
  
  //! case of a curve on one surface
  Standard_EXPORT Approx_CurvilinearParameter(const Handle(Adaptor2d_HCurve2d)& C2D, const Handle(Adaptor3d_HSurface)& Surf, const Standard_Real Tol, const GeomAbs_Shape Order, const Standard_Integer MaxDegree, const Standard_Integer MaxSegments);
  
  //! case of a curve on two surfaces
  Standard_EXPORT Approx_CurvilinearParameter(const Handle(Adaptor2d_HCurve2d)& C2D1, const Handle(Adaptor3d_HSurface)& Surf1, const Handle(Adaptor2d_HCurve2d)& C2D2, const Handle(Adaptor3d_HSurface)& Surf2, const Standard_Real Tol, const GeomAbs_Shape Order, const Standard_Integer MaxDegree, const Standard_Integer MaxSegments);
  
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  Standard_EXPORT   Standard_Boolean HasResult()  const;
  
  //! returns the Bspline curve corresponding to the reparametrized 3D curve
  Standard_EXPORT   Handle(Geom_BSplineCurve) Curve3d()  const;
  
  //! returns the maximum error on the reparametrized 3D curve
  Standard_EXPORT   Standard_Real MaxError3d()  const;
  
  //! returns the BsplineCurve representing the reparametrized 2D curve on the
  //! first surface (case of a curve on one or two surfaces)
  Standard_EXPORT   Handle(Geom2d_BSplineCurve) Curve2d1()  const;
  
  //! returns the maximum error on the first reparametrized 2D curve
  Standard_EXPORT   Standard_Real MaxError2d1()  const;
  
  //! returns the BsplineCurve representing the reparametrized 2D curve on the
  //! second surface (case of a curve on two surfaces)
  Standard_EXPORT   Handle(Geom2d_BSplineCurve) Curve2d2()  const;
  
  //! returns the maximum error on the second reparametrized 2D curve
  Standard_EXPORT   Standard_Real MaxError2d2()  const;
  
  //! print the maximum errors(s)
  Standard_EXPORT   void Dump (Standard_OStream& o)  const;




protected:





private:

  
  Standard_EXPORT static   void ToleranceComputation (const Handle(Adaptor2d_HCurve2d)& C2D, const Handle(Adaptor3d_HSurface)& S, const Standard_Integer MaxNumber, const Standard_Real Tol, Standard_Real& TolV, Standard_Real& TolW) ;


  Standard_Integer myCase;
  Standard_Boolean myDone;
  Standard_Boolean myHasResult;
  Handle(Geom_BSplineCurve) myCurve3d;
  Standard_Real myMaxError3d;
  Handle(Geom2d_BSplineCurve) myCurve2d1;
  Standard_Real myMaxError2d1;
  Handle(Geom2d_BSplineCurve) myCurve2d2;
  Standard_Real myMaxError2d2;


};







#endif // _Approx_CurvilinearParameter_HeaderFile
