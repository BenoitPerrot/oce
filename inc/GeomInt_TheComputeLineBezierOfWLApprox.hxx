// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomInt_TheComputeLineBezierOfWLApprox_HeaderFile
#define _GeomInt_TheComputeLineBezierOfWLApprox_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Geometry/AppParCurves/AppParCurves_SequenceOfMultiCurve.hxx>
#include <Geometry/AppParCurves/AppParCurves_MultiCurve.hxx>
#include <Geometry/AppParCurves/AppParCurves_MultiBSpCurve.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Geometry/Approx/Approx_ParametrizationType.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
#include <Geometry/Approx/Approx_SequenceOfHArray1OfReal.hxx>
#include <Foundation/TColStd/TColStd_SequenceOfReal.hxx>
#include <Handle_AppParCurves_HArray1OfConstraintCouple.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Geometry/AppParCurves/AppParCurves_Constraint.hxx>
#include <Mathematics/Optimization/math_Vector.hxx>
class TColStd_HArray1OfReal;
class AppParCurves_HArray1OfConstraintCouple;
class GeomInt_TheMultiLineOfWLApprox;
class GeomInt_TheMultiLineToolOfWLApprox;
class GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox;
class GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox;
class GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox;
class GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox;
class GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox;
class AppParCurves_MultiCurve;
class AppParCurves_MultiBSpCurve;
class TColStd_Array1OfReal;



class GeomInt_TheComputeLineBezierOfWLApprox 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomInt_TheComputeLineBezierOfWLApprox(const GeomInt_TheMultiLineOfWLApprox& Line, const Standard_Integer degreemin = 4, const Standard_Integer degreemax = 8, const Standard_Real Tolerance3d = 1.0e-3, const Standard_Real Tolerance2d = 1.0e-6, const Standard_Integer NbIterations = 5, const Standard_Boolean cutting = Standard_True, const Approx_ParametrizationType parametrization = Approx_ChordLength, const Standard_Boolean Squares = Standard_False);
  
  Standard_EXPORT GeomInt_TheComputeLineBezierOfWLApprox(const GeomInt_TheMultiLineOfWLApprox& Line, const math_Vector& Parameters, const Standard_Integer degreemin = 4, const Standard_Integer degreemax = 8, const Standard_Real Tolerance3d = 1.0e-03, const Standard_Real Tolerance2d = 1.0e-06, const Standard_Integer NbIterations = 5, const Standard_Boolean cutting = Standard_True, const Standard_Boolean Squares = Standard_False);
  
  Standard_EXPORT GeomInt_TheComputeLineBezierOfWLApprox(const math_Vector& Parameters, const Standard_Integer degreemin = 4, const Standard_Integer degreemax = 8, const Standard_Real Tolerance3d = 1.0e-03, const Standard_Real Tolerance2d = 1.0e-06, const Standard_Integer NbIterations = 5, const Standard_Boolean cutting = Standard_True, const Standard_Boolean Squares = Standard_False);
  
  Standard_EXPORT GeomInt_TheComputeLineBezierOfWLApprox(const Standard_Integer degreemin = 4, const Standard_Integer degreemax = 8, const Standard_Real Tolerance3d = 1.0e-03, const Standard_Real Tolerance2d = 1.0e-06, const Standard_Integer NbIterations = 5, const Standard_Boolean cutting = Standard_True, const Approx_ParametrizationType parametrization = Approx_ChordLength, const Standard_Boolean Squares = Standard_False);
  
  Standard_EXPORT   void Init (const Standard_Integer degreemin = 4, const Standard_Integer degreemax = 8, const Standard_Real Tolerance3d = 1.0e-03, const Standard_Real Tolerance2d = 1.0e-06, const Standard_Integer NbIterations = 5, const Standard_Boolean cutting = Standard_True, const Approx_ParametrizationType parametrization = Approx_ChordLength, const Standard_Boolean Squares = Standard_False) ;
  
  Standard_EXPORT   void Perform (const GeomInt_TheMultiLineOfWLApprox& Line) ;
  
  Standard_EXPORT   void SetDegrees (const Standard_Integer degreemin, const Standard_Integer degreemax) ;
  
  Standard_EXPORT   void SetTolerances (const Standard_Real Tolerance3d, const Standard_Real Tolerance2d) ;
  
  Standard_EXPORT   void SetConstraints (const AppParCurves_Constraint firstC, const AppParCurves_Constraint lastC) ;
  
  Standard_EXPORT   Standard_Boolean IsAllApproximated()  const;
  
  Standard_EXPORT   Standard_Boolean IsToleranceReached()  const;
  
  Standard_EXPORT   void Error (const Standard_Integer Index, Standard_Real& tol3d, Standard_Real& tol2d)  const;
  
  Standard_EXPORT   Standard_Integer NbMultiCurves()  const;
  
  Standard_EXPORT  const  AppParCurves_MultiCurve& Value (const Standard_Integer Index = 1)  const;
  
  Standard_EXPORT   AppParCurves_MultiCurve& ChangeValue (const Standard_Integer Index = 1) ;
  
  Standard_EXPORT  const  AppParCurves_MultiBSpCurve& SplineValue() ;
  
  Standard_EXPORT   void Parametrization (Approx_ParametrizationType& partype)  const;
  
  Standard_EXPORT  const  TColStd_Array1OfReal& Parameters (const Standard_Integer Index = 1)  const;




protected:





private:

  
  Standard_EXPORT   Standard_Boolean Compute (const GeomInt_TheMultiLineOfWLApprox& Line, const Standard_Integer fpt, const Standard_Integer lpt, math_Vector& Para, Standard_Real& TheTol3d, Standard_Real& TheTol2d) ;
  
  Standard_EXPORT   Standard_Boolean ComputeCurve (const GeomInt_TheMultiLineOfWLApprox& Line, const Standard_Integer firspt, const Standard_Integer lastpt) ;
  
  Standard_EXPORT   void Parameters (const GeomInt_TheMultiLineOfWLApprox& Line, const Standard_Integer firstP, const Standard_Integer LastP, math_Vector& TheParameters)  const;
  
  Standard_EXPORT   Standard_Real SearchFirstLambda (const GeomInt_TheMultiLineOfWLApprox& Line, const math_Vector& Para, const math_Vector& V, const Standard_Integer index)  const;
  
  Standard_EXPORT   Standard_Real SearchLastLambda (const GeomInt_TheMultiLineOfWLApprox& Line, const math_Vector& Para, const math_Vector& V, const Standard_Integer index)  const;
  
  Standard_EXPORT   void FirstTangencyVector (const GeomInt_TheMultiLineOfWLApprox& Line, const Standard_Integer index, math_Vector& V)  const;
  
  Standard_EXPORT   void LastTangencyVector (const GeomInt_TheMultiLineOfWLApprox& Line, const Standard_Integer index, math_Vector& V)  const;


  AppParCurves_SequenceOfMultiCurve myMultiCurves;
  AppParCurves_MultiCurve TheMultiCurve;
  AppParCurves_MultiBSpCurve myspline;
  Standard_Boolean alldone;
  Standard_Boolean tolreached;
  Approx_ParametrizationType Par;
  Handle(TColStd_HArray1OfReal) myParameters;
  Handle(TColStd_HArray1OfReal) myfirstParam;
  Approx_SequenceOfHArray1OfReal myPar;
  TColStd_SequenceOfReal Tolers3d;
  TColStd_SequenceOfReal Tolers2d;
  Handle(AppParCurves_HArray1OfConstraintCouple) myConstraints;
  Standard_Integer mydegremin;
  Standard_Integer mydegremax;
  Standard_Real mytol3d;
  Standard_Real mytol2d;
  Standard_Real currenttol3d;
  Standard_Real currenttol2d;
  Standard_Boolean mycut;
  Standard_Boolean mysquares;
  Standard_Integer myitermax;
  AppParCurves_Constraint myfirstC;
  AppParCurves_Constraint mylastC;
  Standard_Integer myMultiLineNb;
  Standard_Boolean myIsClear;


};







#endif // _GeomInt_TheComputeLineBezierOfWLApprox_HeaderFile
