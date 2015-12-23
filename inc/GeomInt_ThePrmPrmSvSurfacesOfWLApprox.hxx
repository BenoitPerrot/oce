// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomInt_ThePrmPrmSvSurfacesOfWLApprox_HeaderFile
#define _GeomInt_ThePrmPrmSvSurfacesOfWLApprox_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Primitives/gp_Vec2d.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox.hxx>
#include <ModelingAlgorithms/ApproxInt/ApproxInt_SvSurfaces.hxx>
#include <Handle_Adaptor3d_HSurface.hxx>
#include <Handle_IntPatch_WLine.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class Adaptor3d_HSurface;
class Adaptor3d_HSurfaceTool;
class IntPatch_WLine;
class GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox;
class GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox;
class gp_Pnt;
class gp_Vec;
class gp_Vec2d;



class GeomInt_ThePrmPrmSvSurfacesOfWLApprox  : public ApproxInt_SvSurfaces
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomInt_ThePrmPrmSvSurfacesOfWLApprox(const Handle(Adaptor3d_HSurface)& Surf1, const Handle(Adaptor3d_HSurface)& Surf2);
  
  Standard_EXPORT   Standard_Boolean Compute (Standard_Real& u1, Standard_Real& v1, Standard_Real& u2, Standard_Real& v2, gp_Pnt& Pt, gp_Vec& Tg, gp_Vec2d& Tguv1, gp_Vec2d& Tguv2) ;
  
  Standard_EXPORT   void Pnt (const Standard_Real u1, const Standard_Real v1, const Standard_Real u2, const Standard_Real v2, gp_Pnt& P) ;
  
  Standard_EXPORT   Standard_Boolean Tangency (const Standard_Real u1, const Standard_Real v1, const Standard_Real u2, const Standard_Real v2, gp_Vec& Tg) ;
  
  Standard_EXPORT   Standard_Boolean TangencyOnSurf1 (const Standard_Real u1, const Standard_Real v1, const Standard_Real u2, const Standard_Real v2, gp_Vec2d& Tg) ;
  
  Standard_EXPORT   Standard_Boolean TangencyOnSurf2 (const Standard_Real u1, const Standard_Real v1, const Standard_Real u2, const Standard_Real v2, gp_Vec2d& Tg) ;




protected:





private:



  gp_Pnt2d MyParOnS1;
  gp_Pnt2d MyParOnS2;
  gp_Pnt MyPnt;
  gp_Vec2d MyTguv1;
  gp_Vec2d MyTguv2;
  gp_Vec MyTg;
  Standard_Boolean MyIsTangent;
  Standard_Boolean MyHasBeenComputed;
  gp_Pnt2d MyParOnS1bis;
  gp_Pnt2d MyParOnS2bis;
  gp_Pnt MyPntbis;
  gp_Vec2d MyTguv1bis;
  gp_Vec2d MyTguv2bis;
  gp_Vec MyTgbis;
  Standard_Boolean MyIsTangentbis;
  Standard_Boolean MyHasBeenComputedbis;
  GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox MyIntersectionOn2S;


};







#endif // _GeomInt_ThePrmPrmSvSurfacesOfWLApprox_HeaderFile
