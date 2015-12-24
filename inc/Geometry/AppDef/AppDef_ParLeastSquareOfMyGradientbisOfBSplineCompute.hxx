// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute_HeaderFile
#define _AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Geometry/AppParCurves/AppParCurves_Constraint.hxx>
#include <Geometry/AppParCurves/AppParCurves_MultiBSpCurve.hxx>
#include <Foundation/TColStd/Handle_TColStd_HArray1OfReal.hxx>
#include <Foundation/TColStd/Handle_TColStd_HArray1OfInteger.hxx>
#include <Mathematics/Optimization/math_Matrix.hxx>
#include <Mathematics/Optimization/math_Vector.hxx>
#include <Mathematics/Optimization/math_IntegerVector.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TColStd_HArray1OfReal;
class TColStd_HArray1OfInteger;
class StdFail_NotDone;
class Standard_OutOfRange;
class Standard_DimensionError;
class Standard_NoSuchObject;
class AppDef_MultiLine;
class AppDef_MyLineTool;
class TColStd_Array1OfReal;
class TColStd_Array1OfInteger;
class AppParCurves_MultiCurve;
class AppParCurves_MultiBSpCurve;
class math_Matrix;



class AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute(const AppDef_MultiLine& SSP, const Standard_Integer FirstPoint, const Standard_Integer LastPoint, const AppParCurves_Constraint FirstCons, const AppParCurves_Constraint LastCons, const math_Vector& Parameters, const Standard_Integer NbPol);
  
  Standard_EXPORT AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute(const AppDef_MultiLine& SSP, const Standard_Integer FirstPoint, const Standard_Integer LastPoint, const AppParCurves_Constraint FirstCons, const AppParCurves_Constraint LastCons, const Standard_Integer NbPol);
  
  Standard_EXPORT AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute(const AppDef_MultiLine& SSP, const TColStd_Array1OfReal& Knots, const TColStd_Array1OfInteger& Mults, const Standard_Integer FirstPoint, const Standard_Integer LastPoint, const AppParCurves_Constraint FirstCons, const AppParCurves_Constraint LastCons, const math_Vector& Parameters, const Standard_Integer NbPol);
  
  Standard_EXPORT AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute(const AppDef_MultiLine& SSP, const TColStd_Array1OfReal& Knots, const TColStd_Array1OfInteger& Mults, const Standard_Integer FirstPoint, const Standard_Integer LastPoint, const AppParCurves_Constraint FirstCons, const AppParCurves_Constraint LastCons, const Standard_Integer NbPol);
  
  Standard_EXPORT   void Perform (const math_Vector& Parameters) ;
  
  Standard_EXPORT   void Perform (const math_Vector& Parameters, const Standard_Real l1, const Standard_Real l2) ;
  
  Standard_EXPORT   void Perform (const math_Vector& Parameters, const math_Vector& V1t, const math_Vector& V2t, const Standard_Real l1, const Standard_Real l2) ;
  
  Standard_EXPORT   void Perform (const math_Vector& Parameters, const math_Vector& V1t, const math_Vector& V2t, const math_Vector& V1c, const math_Vector& V2c, const Standard_Real l1, const Standard_Real l2) ;
  
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  Standard_EXPORT   AppParCurves_MultiCurve BezierValue() ;
  
  Standard_EXPORT  const  AppParCurves_MultiBSpCurve& BSplineValue() ;
  
  Standard_EXPORT  const  math_Matrix& FunctionMatrix()  const;
  
  Standard_EXPORT  const  math_Matrix& DerivativeFunctionMatrix()  const;
  
  Standard_EXPORT   void ErrorGradient (math_Vector& Grad, Standard_Real& F, Standard_Real& MaxE3d, Standard_Real& MaxE2d) ;
  
  Standard_EXPORT  const  math_Matrix& Distance() ;
  
  Standard_EXPORT   void Error (Standard_Real& F, Standard_Real& MaxE3d, Standard_Real& MaxE2d) ;
  
  Standard_EXPORT   Standard_Real FirstLambda()  const;
  
  Standard_EXPORT   Standard_Real LastLambda()  const;
  
  Standard_EXPORT  const  math_Matrix& Points()  const;
  
  Standard_EXPORT  const  math_Matrix& Poles()  const;
  
  Standard_EXPORT  const  math_IntegerVector& KIndex()  const;




protected:

  
  Standard_EXPORT   void Init (const AppDef_MultiLine& SSP, const Standard_Integer FirstPoint, const Standard_Integer LastPoint) ;
  
  Standard_EXPORT   Standard_Integer NbBColumns (const AppDef_MultiLine& SSP)  const;
  
  Standard_EXPORT   Standard_Integer TheFirstPoint (const AppParCurves_Constraint FirstCons, const Standard_Integer FirstPoint)  const;
  
  Standard_EXPORT   Standard_Integer TheLastPoint (const AppParCurves_Constraint LastCons, const Standard_Integer LastPoint)  const;
  
  Standard_EXPORT   void Affect (const AppDef_MultiLine& SSP, const Standard_Integer Index, AppParCurves_Constraint& Cons, math_Vector& Vt, math_Vector& Vc) ;
  
  Standard_EXPORT   void ComputeFunction (const math_Vector& Parameters) ;
  
  Standard_EXPORT   void SearchIndex (math_IntegerVector& Index) ;
  
  Standard_EXPORT   void MakeTAA (math_Vector& TheA, math_Vector& TheB) ;
  
  Standard_EXPORT   void MakeTAA (math_Vector& TheA) ;
  
  Standard_EXPORT   void MakeTAA (math_Vector& TheA, math_Matrix& TheB) ;




private:



  AppParCurves_Constraint FirstConstraint;
  AppParCurves_Constraint LastConstraint;
  AppParCurves_MultiBSpCurve SCU;
  Handle(TColStd_HArray1OfReal) myknots;
  Handle(TColStd_HArray1OfInteger) mymults;
  math_Matrix mypoles;
  math_Matrix A;
  math_Matrix DA;
  math_Matrix B2;
  math_Matrix mypoints;
  math_Vector Vflatknots;
  math_Vector Vec1t;
  math_Vector Vec1c;
  math_Vector Vec2t;
  math_Vector Vec2c;
  math_Matrix theError;
  math_IntegerVector myindex;
  Standard_Real lambda1;
  Standard_Real lambda2;
  Standard_Integer FirstP;
  Standard_Integer LastP;
  Standard_Integer Nlignes;
  Standard_Integer Ninc;
  Standard_Integer NA;
  Standard_Integer myfirstp;
  Standard_Integer mylastp;
  Standard_Integer resinit;
  Standard_Integer resfin;
  Standard_Integer nbP2d;
  Standard_Integer nbP;
  Standard_Integer nbpoles;
  Standard_Integer deg;
  Standard_Boolean done;
  Standard_Boolean iscalculated;
  Standard_Boolean isready;


};







#endif // _AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute_HeaderFile
