// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_Function_HeaderFile
#define _math_Function_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>


//! This abstract class describes the virtual functions
//! associated with a Function of a single variable.
class math_Function 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Computes the value of the function <F> for a given value of
  //! variable <X>.
  //! returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT virtual   Standard_Boolean Value (const Standard_Real X, Standard_Real& F)  = 0;
  
  //! returns the state of the function corresponding to the
  //! latest call of any methods associated with the function.
  //! This function is called by each of the algorithms
  //! described later which defined the function Integer
  //! Algorithm::StateNumber(). The algorithm has the
  //! responsibility to call this function when it has found
  //! a solution (i.e. a root or a minimum) and has to maintain
  //! the association between the solution found and this
  //! StateNumber.
  //! Byu default, this method returns 0 (which means for the
  //! algorithm: no state has been saved). It is the
  //! responsibility of the programmer to decide if he needs
  //! to save the current state of the function and to return
  //! an Integer that allows retrieval of the state.
  Standard_EXPORT virtual   Standard_Integer GetStateNumber() ;




protected:





private:





};







#endif // _math_Function_HeaderFile
