// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Adaptor3d_InterFunc_HeaderFile
#define _Adaptor3d_InterFunc_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_Adaptor2d_HCurve2d.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <math_FunctionWithDerivative.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Adaptor2d_HCurve2d;
class Standard_ConstructionError;


//! Used to find the points U(t) = U0 or V(t) = V0 in
//! order to determine the  Cn discontinuities of  an
//! Adpator_CurveOnSurface  relativly  to    the
//! discontinuities of the surface. Used to
//! find the roots of the functions
class Adaptor3d_InterFunc  : public math_FunctionWithDerivative
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! build the function  U(t)=FixVal   if Fix =1 or
  //! V(t)=FixVal if Fix=2
  Standard_EXPORT Adaptor3d_InterFunc(const Handle(Adaptor2d_HCurve2d)& C, const Standard_Real FixVal, const Standard_Integer Fix);
  
  //! computes the value <F>of the function for the variable <X>.
  //! Returns True if the calculation were successfully done,
  //! False otherwise.
  Standard_EXPORT   Standard_Boolean Value (const Standard_Real X, Standard_Real& F) ;
  
  //! computes the derivative <D> of the function
  //! for the variable <X>.
  //! Returns True if the calculation were successfully done,
  //! False otherwise.
  Standard_EXPORT   Standard_Boolean Derivative (const Standard_Real X, Standard_Real& D) ;
  
  //! computes the value <F> and the derivative <D> of the
  //! function for the variable <X>.
  //! Returns True if the calculation were successfully done,
  //! False otherwise.
  Standard_EXPORT   Standard_Boolean Values (const Standard_Real X, Standard_Real& F, Standard_Real& D) ;




protected:





private:



  Handle(Adaptor2d_HCurve2d) myCurve2d;
  Standard_Real myFixVal;
  Standard_Integer myFix;


};







#endif // _Adaptor3d_InterFunc_HeaderFile
