// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppDef_ParFunctionOfMyGradientbisOfBSplineCompute_HeaderFile
#define _AppDef_ParFunctionOfMyGradientbisOfBSplineCompute_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Geometry/AppDef/AppDef_MultiLine.hxx>
#include <Geometry/AppParCurves/AppParCurves_MultiCurve.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Mathematics/Optimization/math_Vector.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Mathematics/Optimization/math_Matrix.hxx>
#include <Geometry/AppDef/AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute.hxx>
#include <Handle_TColStd_HArray1OfInteger.hxx>
#include <Handle_AppParCurves_HArray1OfConstraintCouple.hxx>
#include <Mathematics/Optimization/math_MultipleVarFunctionWithGradient.hxx>
#include <Geometry/AppParCurves/AppParCurves_Constraint.hxx>
class TColStd_HArray1OfInteger;
class AppParCurves_HArray1OfConstraintCouple;
class AppDef_MultiLine;
class AppDef_MyLineTool;
class AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute;
class AppDef_ResConstraintOfMyGradientbisOfBSplineCompute;
class AppParCurves_MultiCurve;



class AppDef_ParFunctionOfMyGradientbisOfBSplineCompute  : public math_MultipleVarFunctionWithGradient
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT AppDef_ParFunctionOfMyGradientbisOfBSplineCompute(const AppDef_MultiLine& SSP, const Standard_Integer FirstPoint, const Standard_Integer LastPoint, const Handle(AppParCurves_HArray1OfConstraintCouple)& TheConstraints, const math_Vector& Parameters, const Standard_Integer Deg);
  
  Standard_EXPORT   Standard_Integer NbVariables()  const;
  
  Standard_EXPORT   Standard_Boolean Value (const math_Vector& X, Standard_Real& F) ;
  
  Standard_EXPORT   Standard_Boolean Gradient (const math_Vector& X, math_Vector& G) ;
  
  Standard_EXPORT   Standard_Boolean Values (const math_Vector& X, Standard_Real& F, math_Vector& G) ;
  
  Standard_EXPORT  const  math_Vector& NewParameters()  const;
  
  Standard_EXPORT  const  AppParCurves_MultiCurve& CurveValue() ;
  
  Standard_EXPORT   Standard_Real Error (const Standard_Integer IPoint, const Standard_Integer CurveIndex)  const;
  
  Standard_EXPORT   Standard_Real MaxError3d()  const;
  
  Standard_EXPORT   Standard_Real MaxError2d()  const;
  
  Standard_EXPORT   AppParCurves_Constraint FirstConstraint (const Handle(AppParCurves_HArray1OfConstraintCouple)& TheConstraints, const Standard_Integer FirstPoint)  const;
  
  Standard_EXPORT   AppParCurves_Constraint LastConstraint (const Handle(AppParCurves_HArray1OfConstraintCouple)& TheConstraints, const Standard_Integer LastPoint)  const;




protected:

  
  Standard_EXPORT   void Perform (const math_Vector& X) ;




private:



  Standard_Boolean Done;
  AppDef_MultiLine MyMultiLine;
  AppParCurves_MultiCurve MyMultiCurve;
  Standard_Integer Degre;
  math_Vector myParameters;
  Standard_Real FVal;
  math_Vector ValGrad_F;
  math_Matrix MyF;
  math_Matrix PTLX;
  math_Matrix PTLY;
  math_Matrix PTLZ;
  math_Matrix A;
  math_Matrix DA;
  AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute MyLeastSquare;
  Standard_Boolean Contraintes;
  Standard_Integer NbP;
  Standard_Integer NbCu;
  Standard_Integer Adeb;
  Standard_Integer Afin;
  Handle(TColStd_HArray1OfInteger) tabdim;
  Standard_Real ERR3d;
  Standard_Real ERR2d;
  Standard_Integer FirstP;
  Standard_Integer LastP;
  Handle(AppParCurves_HArray1OfConstraintCouple) myConstraints;


};







#endif // _AppDef_ParFunctionOfMyGradientbisOfBSplineCompute_HeaderFile
