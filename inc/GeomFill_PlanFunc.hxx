// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_PlanFunc_HeaderFile
#define _GeomFill_PlanFunc_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <gp_XYZ.hxx>
#include <gp_Pnt.hxx>
#include <Handle_Adaptor3d_HCurve.hxx>
#include <math_FunctionWithDerivative.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class Adaptor3d_HCurve;
class gp_Pnt;
class gp_Vec;



class GeomFill_PlanFunc  : public math_FunctionWithDerivative
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomFill_PlanFunc(const gp_Pnt& P, const gp_Vec& V, const Handle(Adaptor3d_HCurve)& C);
  
  //! computes the value <F>of the function for the variable <X>.
  //! Returns True if the calculation were successfully done,
  //! False otherwise.
  Standard_EXPORT virtual   Standard_Boolean Value (const Standard_Real X, Standard_Real& F) ;
  
  //! computes the derivative <D> of the function
  //! for the variable <X>.
  //! Returns True if the calculation were successfully done,
  //! False otherwise.
  Standard_EXPORT virtual   Standard_Boolean Derivative (const Standard_Real X, Standard_Real& D) ;
  
  //! computes the value <F> and the derivative <D> of the
  //! function for the variable <X>.
  //! Returns True if the calculation were successfully done,
  //! False otherwise.
  Standard_EXPORT virtual   Standard_Boolean Values (const Standard_Real X, Standard_Real& F, Standard_Real& D) ;
  
  Standard_EXPORT   void D2 (const Standard_Real X, Standard_Real& F, Standard_Real& D1, Standard_Real& D2) ;
  
  Standard_EXPORT   void DEDT (const Standard_Real X, const gp_Vec& DP, const gp_Vec& DV, Standard_Real& DF) ;
  
  Standard_EXPORT   void D2E (const Standard_Real X, const gp_Vec& DP, const gp_Vec& D2P, const gp_Vec& DV, const gp_Vec& D2V, Standard_Real& DFDT, Standard_Real& D2FDT2, Standard_Real& D2FDTDX) ;




protected:





private:



  gp_XYZ myPnt;
  gp_XYZ myVec;
  gp_XYZ V;
  gp_Pnt G;
  Handle(Adaptor3d_HCurve) myCurve;


};







#endif // _GeomFill_PlanFunc_HeaderFile
