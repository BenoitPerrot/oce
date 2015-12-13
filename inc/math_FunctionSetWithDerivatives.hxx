// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_FunctionSetWithDerivatives_HeaderFile
#define _math_FunctionSetWithDerivatives_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <math_FunctionSet.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <math_Vector.hxx>
class math_Matrix;


//! This abstract class describes the virtual functions associated
//! with a set of N Functions each of M independant variables.
class math_FunctionSetWithDerivatives  : public math_FunctionSet
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns the number of variables of the function.
  Standard_EXPORT virtual   Standard_Integer NbVariables()  const = 0;
  
  //! Returns the number of equations of the function.
  Standard_EXPORT virtual   Standard_Integer NbEquations()  const = 0;
  
  //! Computes the values <F> of the Functions for the
  //! variable <X>.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT virtual   Standard_Boolean Value (const math_Vector& X, math_Vector& F)  = 0;
  
  //! Returns the values <D> of the derivatives for the
  //! variable <X>.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT virtual   Standard_Boolean Derivatives (const math_Vector& X, math_Matrix& D)  = 0;
  
  //! returns the values <F> of the functions and the derivatives
  //! <D> for the variable <X>.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT virtual   Standard_Boolean Values (const math_Vector& X, math_Vector& F, math_Matrix& D)  = 0;




protected:





private:





};







#endif // _math_FunctionSetWithDerivatives_HeaderFile
