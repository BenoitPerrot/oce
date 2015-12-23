// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter_HeaderFile
#define _IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingAlgorithms/IntSurf/IntSurf_Quadric.hxx>
#include <Handle_Adaptor3d_HCurve.hxx>
#include <Mathematics/Optimization/math_FunctionWithDerivative.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class Adaptor3d_HCurve;
class IntSurf_Quadric;
class IntCurveSurface_TheHCurveTool;



class IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter  : public math_FunctionWithDerivative
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter(const IntSurf_Quadric& Q, const Handle(Adaptor3d_HCurve)& C);
  
  Standard_EXPORT   Standard_Boolean Value (const Standard_Real Param, Standard_Real& F) ;
  
  Standard_EXPORT   Standard_Boolean Derivative (const Standard_Real Param, Standard_Real& D) ;
  
  Standard_EXPORT   Standard_Boolean Values (const Standard_Real Param, Standard_Real& F, Standard_Real& D) ;




protected:





private:



  IntSurf_Quadric myQuadric;
  Handle(Adaptor3d_HCurve) myCurve;


};







#endif // _IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter_HeaderFile
