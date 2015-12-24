// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomLProp_CLProps_HeaderFile
#define _GeomLProp_CLProps_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Geometry/Geom/Handle_Geom_Curve.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>
#include <Mathematics/Primitives/gp_Dir.hxx>
#include <Geometry/LProp/LProp_Status.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Geom_Curve;
class LProp_BadContinuity;
class Standard_DomainError;
class Standard_OutOfRange;
class LProp_NotDefined;
class gp_Vec;
class gp_Pnt;
class gp_Dir;
class GeomLProp_CurveTool;



class GeomLProp_CLProps 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomLProp_CLProps(const Handle(Geom_Curve)& C, const Standard_Integer N, const Standard_Real Resolution);
  
  Standard_EXPORT GeomLProp_CLProps(const Handle(Geom_Curve)& C, const Standard_Real U, const Standard_Integer N, const Standard_Real Resolution);
  
  Standard_EXPORT GeomLProp_CLProps(const Standard_Integer N, const Standard_Real Resolution);
  
  Standard_EXPORT   void SetParameter (const Standard_Real U) ;
  
  Standard_EXPORT   void SetCurve (const Handle(Geom_Curve)& C) ;
  
  Standard_EXPORT  const  gp_Pnt& Value()  const;
  
  Standard_EXPORT  const  gp_Vec& D1() ;
  
  Standard_EXPORT  const  gp_Vec& D2() ;
  
  Standard_EXPORT  const  gp_Vec& D3() ;
  
  Standard_EXPORT   Standard_Boolean IsTangentDefined() ;
  
  Standard_EXPORT   void Tangent (gp_Dir& D) ;
  
  Standard_EXPORT   Standard_Real Curvature() ;
  
  Standard_EXPORT   void Normal (gp_Dir& N) ;
  
  Standard_EXPORT   void CentreOfCurvature (gp_Pnt& P) ;




protected:





private:



  Handle(Geom_Curve) myCurve;
  Standard_Real myU;
  Standard_Integer myDerOrder;
  Standard_Real myCN;
  Standard_Real myLinTol;
  gp_Pnt myPnt;
  gp_Vec myDerivArr[3];
  gp_Dir myTangent;
  Standard_Real myCurvature;
  LProp_Status myTangentStatus;
  Standard_Integer mySignificantFirstDerivativeOrder;


};







#endif // _GeomLProp_CLProps_HeaderFile
