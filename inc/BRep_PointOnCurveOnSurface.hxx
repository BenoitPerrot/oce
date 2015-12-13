// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRep_PointOnCurveOnSurface_HeaderFile
#define _BRep_PointOnCurveOnSurface_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_BRep_PointOnCurveOnSurface.hxx>

#include <Handle_Geom2d_Curve.hxx>
#include <BRep_PointsOnSurface.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_Geom_Surface.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Geom2d_Curve;
class Geom_Surface;
class TopLoc_Location;


//! Representation by   a parameter on  a curve   on a
//! surface.
class BRep_PointOnCurveOnSurface : public BRep_PointsOnSurface
{

public:

  
  Standard_EXPORT BRep_PointOnCurveOnSurface(const Standard_Real P, const Handle(Geom2d_Curve)& C, const Handle(Geom_Surface)& S, const TopLoc_Location& L);
  
  //! Returns True
  Standard_EXPORT virtual   Standard_Boolean IsPointOnCurveOnSurface()  const;
  
  Standard_EXPORT virtual   Standard_Boolean IsPointOnCurveOnSurface (const Handle(Geom2d_Curve)& PC, const Handle(Geom_Surface)& S, const TopLoc_Location& L)  const;
  
  Standard_EXPORT virtual  const  Handle(Geom2d_Curve)& PCurve()  const;
  
  Standard_EXPORT virtual   void PCurve (const Handle(Geom2d_Curve)& C) ;




  DEFINE_STANDARD_RTTI(BRep_PointOnCurveOnSurface)

protected:




private: 


  Handle(Geom2d_Curve) myPCurve;


};







#endif // _BRep_PointOnCurveOnSurface_HeaderFile
