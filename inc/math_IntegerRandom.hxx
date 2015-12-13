// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_IntegerRandom_HeaderFile
#define _math_IntegerRandom_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>



//! This class implements an integer random number generator.
class math_IntegerRandom 
{
public:

  DEFINE_STANDARD_ALLOC

  

  //! creates a Integer random generator between the values Lower and Upper.
  Standard_EXPORT math_IntegerRandom(const Standard_Integer Lower, const Standard_Integer Upper);
  
  //! reinitializes the random generator
  Standard_EXPORT   void Reset() ;
  
  //! returns the next random number.
  Standard_EXPORT   Standard_Integer Next() ;




protected:





private:



  Standard_Integer Low;
  Standard_Integer Up;
  Standard_Integer Dummy;


};







#endif // _math_IntegerRandom_HeaderFile
