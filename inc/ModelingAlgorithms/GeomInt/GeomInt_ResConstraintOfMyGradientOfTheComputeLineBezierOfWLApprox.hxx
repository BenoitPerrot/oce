// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox_HeaderFile
#define _GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Mathematics/Optimization/math_Matrix.hxx>
#include <Mathematics/Optimization/math_Vector.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/TColStd/TColStd_Array1OfInteger.hxx>
#include <Geometry/AppParCurves/Handle_AppParCurves_HArray1OfConstraintCouple.hxx>
class Standard_OutOfRange;
class GeomInt_TheMultiLineOfWLApprox;
class GeomInt_TheMultiLineToolOfWLApprox;
class AppParCurves_MultiCurve;
class AppParCurves_HArray1OfConstraintCouple;
class math_Matrix;



class GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox(const GeomInt_TheMultiLineOfWLApprox& SSP, AppParCurves_MultiCurve& SCurv, const Standard_Integer FirstPoint, const Standard_Integer LastPoint, const Handle(AppParCurves_HArray1OfConstraintCouple)& Constraints, const math_Matrix& Bern, const math_Matrix& DerivativeBern, const Standard_Real Tolerance = 1.0e-10);
  
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  Standard_EXPORT   Standard_Real Error()  const;
  
  Standard_EXPORT  const  math_Matrix& ConstraintMatrix()  const;
  
  Standard_EXPORT  const  math_Vector& Duale()  const;
  
  Standard_EXPORT  const  math_Matrix& ConstraintDerivative (const GeomInt_TheMultiLineOfWLApprox& SSP, const math_Vector& Parameters, const Standard_Integer Deg, const math_Matrix& DA) ;
  
  Standard_EXPORT  const  math_Matrix& InverseMatrix()  const;




protected:

  
  Standard_EXPORT   Standard_Integer NbConstraints (const GeomInt_TheMultiLineOfWLApprox& SSP, const Standard_Integer FirstPoint, const Standard_Integer LastPoint, const Handle(AppParCurves_HArray1OfConstraintCouple)& TheConstraints)  const;
  
  Standard_EXPORT   Standard_Integer NbColumns (const GeomInt_TheMultiLineOfWLApprox& SSP, const Standard_Integer Deg)  const;




private:



  Standard_Boolean Done;
  Standard_Real Err;
  math_Matrix Cont;
  math_Matrix DeCont;
  math_Vector Secont;
  math_Matrix CTCinv;
  math_Vector Vardua;
  Standard_Integer IncPass;
  Standard_Integer IncTan;
  Standard_Integer IncCurv;
  TColStd_Array1OfInteger IPas;
  TColStd_Array1OfInteger ITan;
  TColStd_Array1OfInteger ICurv;


};







#endif // _GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox_HeaderFile
