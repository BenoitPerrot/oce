// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dGcc_FunctionTanObl_HeaderFile
#define _Geom2dGcc_FunctionTanObl_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Geom2dAdaptor_Curve.hxx>
#include <gp_Dir2d.hxx>
#include <Mathematics/Optimization/math_FunctionWithDerivative.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class Geom2dAdaptor_Curve;
class gp_Dir2d;


//! This class describe a function of a single variable.
class Geom2dGcc_FunctionTanObl  : public math_FunctionWithDerivative
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Geom2dGcc_FunctionTanObl(const Geom2dAdaptor_Curve& Curve, const gp_Dir2d& Dir);
  
  //! Computes the value of the function F for the variable X.
  //! It returns True if the computation is successfully done,
  //! False otherwise.
  Standard_EXPORT   Standard_Boolean Value (const Standard_Real X, Standard_Real& F) ;
  
  //! Computes the derivative of the function F for the variable X.
  //! It returns True if the computation is successfully done,
  //! False otherwise.
  Standard_EXPORT   Standard_Boolean Derivative (const Standard_Real X, Standard_Real& Deriv) ;
  
  //! Computes the value and the derivative of the function F
  //! for the variable X.
  //! It returns True if the computation is successfully done,
  //! False otherwise.
  Standard_EXPORT   Standard_Boolean Values (const Standard_Real X, Standard_Real& F, Standard_Real& Deriv) ;




protected:





private:



  Geom2dAdaptor_Curve TheCurv;
  gp_Dir2d TheDirection;


};







#endif // _Geom2dGcc_FunctionTanObl_HeaderFile
