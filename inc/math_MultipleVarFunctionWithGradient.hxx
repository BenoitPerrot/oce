// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_MultipleVarFunctionWithGradient_HeaderFile
#define _math_MultipleVarFunctionWithGradient_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <math_MultipleVarFunction.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <math_Vector.hxx>
#include <Foundation/Standard/Standard_Real.hxx>



//! The abstract class MultipleVarFunctionWithGradient
//! describes the virtual functions associated with a multiple variable function.
class math_MultipleVarFunctionWithGradient  : public math_MultipleVarFunction
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT virtual   void Delete() ;
Standard_EXPORT virtual ~math_MultipleVarFunctionWithGradient(){Delete();}
  
  //! Returns the number of variables of the function.
  Standard_EXPORT virtual   Standard_Integer NbVariables()  const = 0;
  
  //! Computes the values of the Functions <F> for the   variable <X>.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT virtual   Standard_Boolean Value (const math_Vector& X, Standard_Real& F)  = 0;
  
  //! Computes the gradient <G> of the functions for the   variable <X>.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT virtual   Standard_Boolean Gradient (const math_Vector& X, math_Vector& G)  = 0;
  
  //! computes the value <F> and the gradient <G> of the
  //! functions for the variable <X>.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT virtual   Standard_Boolean Values (const math_Vector& X, Standard_Real& F, math_Vector& G)  = 0;




protected:





private:





};







#endif // _math_MultipleVarFunctionWithGradient_HeaderFile
