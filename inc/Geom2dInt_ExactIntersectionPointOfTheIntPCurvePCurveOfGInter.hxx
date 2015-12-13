// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter_HeaderFile
#define _Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter.hxx>
#include <Mathematics/Optimization/math_Vector.hxx>
class Adaptor2d_Curve2d;
class Geom2dInt_Geom2dCurveTool;
class Geom2dInt_TheProjPCurOfGInter;
class Geom2dInt_TheIntPCurvePCurveOfGInter;
class Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter;
class Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter;



class Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter(const Adaptor2d_Curve2d& C1, const Adaptor2d_Curve2d& C2, const Standard_Real Tol);
  
  Standard_EXPORT   void Perform (const Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter& Poly1, const Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter& Poly2, Standard_Integer& NumSegOn1, Standard_Integer& NumSegOn2, Standard_Real& ParamOnSeg1, Standard_Real& ParamOnSeg2) ;
  
  Standard_EXPORT   void Perform (const Standard_Real Uo, const Standard_Real Vo, const Standard_Real UInf, const Standard_Real VInf, const Standard_Real USup, const Standard_Real VSup) ;
  
  Standard_EXPORT   Standard_Integer NbRoots()  const;
  
  Standard_EXPORT   void Roots (Standard_Real& U, Standard_Real& V) ;
  
  Standard_EXPORT   Standard_Boolean AnErrorOccurred()  const;




protected:





private:

  
  Standard_EXPORT   void MathPerform() ;


  Standard_Boolean done;
  Standard_Integer nbroots;
  Standard_Real myTol;
  Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter FctDist;
  math_Vector ToleranceVector;
  math_Vector BInfVector;
  math_Vector BSupVector;
  math_Vector StartingPoint;
  math_Vector Root;
  Standard_Boolean anErrorOccurred;


};







#endif // _Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter_HeaderFile
