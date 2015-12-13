// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter_HeaderFile
#define _HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <math_FunctionSetWithDerivatives.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <math_Vector.hxx>
class HLRBRep_CurveTool;
class math_Matrix;



class HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter  : public math_FunctionSetWithDerivatives
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter(const Standard_Address& curve1, const Standard_Address& curve2);
  
  Standard_EXPORT   Standard_Integer NbVariables()  const;
  
  Standard_EXPORT   Standard_Integer NbEquations()  const;
  
  Standard_EXPORT   Standard_Boolean Value (const math_Vector& X, math_Vector& F) ;
  
  Standard_EXPORT   Standard_Boolean Derivatives (const math_Vector& X, math_Matrix& D) ;
  
  Standard_EXPORT   Standard_Boolean Values (const math_Vector& X, math_Vector& F, math_Matrix& D) ;




protected:





private:



  Standard_Address thecurve1;
  Standard_Address thecurve2;


};







#endif // _HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter_HeaderFile
