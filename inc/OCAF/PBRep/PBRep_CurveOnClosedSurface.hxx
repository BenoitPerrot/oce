// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PBRep_CurveOnClosedSurface_HeaderFile
#define _PBRep_CurveOnClosedSurface_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <OCAF/PBRep/Handle_PBRep_CurveOnClosedSurface.hxx>

#include <OCAF/PGeom2d/Handle_PGeom2d_Curve.hxx>
#include <Geometry/GeomAbs/GeomAbs_Shape.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <OCAF/PBRep/PBRep_CurveOnSurface.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <OCAF/PGeom/Handle_PGeom_Surface.hxx>
class PGeom2d_Curve;
class PGeom_Surface;
class PTopLoc_Location;
class gp_Pnt2d;


class PBRep_CurveOnClosedSurface : public PBRep_CurveOnSurface
{

public:

  
  //! CF is curve first parameter
  //! CL is curve last parameter
  //! The two curves are SameParameter.
  //! As far as they can't be computed from a Persistent Curve
  //! they are given in the CurveOnClosedSurface constructor
  Standard_EXPORT PBRep_CurveOnClosedSurface(const Handle(PGeom2d_Curve)& PC1, const Handle(PGeom2d_Curve)& PC2, const Standard_Real CF, const Standard_Real CL, const Handle(PGeom_Surface)& S, const PTopLoc_Location& L, const GeomAbs_Shape C);
  
  Standard_EXPORT   Handle(PGeom2d_Curve) PCurve2()  const;
  
  Standard_EXPORT   GeomAbs_Shape Continuity()  const;
  
  //! Returns True.
  Standard_EXPORT virtual   Standard_Boolean IsCurveOnClosedSurface()  const;
  
  //! Returns True
  Standard_EXPORT virtual   Standard_Boolean IsRegularity()  const;
  
  Standard_EXPORT   void SetUVPoints2 (const gp_Pnt2d& Pnt1, const gp_Pnt2d& Pnt2) ;
  
  Standard_EXPORT   gp_Pnt2d FirstUV2()  const;
  
  Standard_EXPORT   gp_Pnt2d LastUV2()  const;

PBRep_CurveOnClosedSurface( )
{
  
}
PBRep_CurveOnClosedSurface(const Storage_stCONSTclCOM& a) : PBRep_CurveOnSurface(a)
{
  
}
    Handle(PGeom2d_Curve) _CSFDB_GetPBRep_CurveOnClosedSurfacemyPCurve2() const { return myPCurve2; }
    void _CSFDB_SetPBRep_CurveOnClosedSurfacemyPCurve2(const Handle(PGeom2d_Curve)& p) { myPCurve2 = p; }
    GeomAbs_Shape _CSFDB_GetPBRep_CurveOnClosedSurfacemyContinuity() const { return myContinuity; }
    void _CSFDB_SetPBRep_CurveOnClosedSurfacemyContinuity(const GeomAbs_Shape p) { myContinuity = p; }
    const gp_Pnt2d& _CSFDB_GetPBRep_CurveOnClosedSurfacemyUV21() const { return myUV21; }
    const gp_Pnt2d& _CSFDB_GetPBRep_CurveOnClosedSurfacemyUV22() const { return myUV22; }



  DEFINE_STANDARD_RTTI(PBRep_CurveOnClosedSurface)

protected:




private: 


  Handle(PGeom2d_Curve) myPCurve2;
  GeomAbs_Shape myContinuity;
  gp_Pnt2d myUV21;
  gp_Pnt2d myUV22;


};







#endif // _PBRep_CurveOnClosedSurface_HeaderFile
