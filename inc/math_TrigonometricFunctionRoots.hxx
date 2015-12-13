// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_TrigonometricFunctionRoots_HeaderFile
#define _math_TrigonometricFunctionRoots_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <TColStd_Array1OfReal.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class StdFail_NotDone;
class Standard_OutOfRange;
class Standard_RangeError;


//! This class implements the solutions of the equation
//! a*Cos(x)*Cos(x) + 2*b*Cos(x)*Sin(x) + c*Cos(x) + d*Sin(x) + e
//! The degree of this equation can be 4, 3 or 2.
class math_TrigonometricFunctionRoots 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Given coefficients a, b, c, d , e, this constructor
  //! performs the resolution of the equation above.
  //! The solutions must be contained in [InfBound, SupBound].
  //! InfBound and SupBound can be set by default to 0 and 2*PI.
  Standard_EXPORT math_TrigonometricFunctionRoots(const Standard_Real A, const Standard_Real B, const Standard_Real C, const Standard_Real D, const Standard_Real E, const Standard_Real InfBound, const Standard_Real SupBound);
  
  //! Given the two coefficients d and e, it performs
  //! the resolution of d*sin(x) + e = 0.
  //! The solutions must be contained in [InfBound, SupBound].
  //! InfBound and SupBound can be set by default to 0 and 2*PI.
  Standard_EXPORT math_TrigonometricFunctionRoots(const Standard_Real D, const Standard_Real E, const Standard_Real InfBound, const Standard_Real SupBound);
  
  //! Given the three coefficients c, d and e, it performs
  //! the resolution of 2*b*cos(x)*sin(x) + d*sin(x) + e = 0.
  //! The solutions must be contained in [InfBound, SupBound].
  //! InfBound and SupBound can be set by default to 0 and 2*PI.
  Standard_EXPORT math_TrigonometricFunctionRoots(const Standard_Real C, const Standard_Real D, const Standard_Real E, const Standard_Real InfBound, const Standard_Real SupBound);
  
  //! Returns true if the computations are successful, otherwise returns false.
      Standard_Boolean IsDone()  const;
  
  //! Returns true if there is an infinity of roots, otherwise returns false.
      Standard_Boolean InfiniteRoots()  const;
  
  //! Returns the solution of range Index.
  //! An exception is raised if NotDone.
  //! An exception is raised if Index>NbSolutions.
  //! An exception is raised if there is an infinity of solutions.
      Standard_Real Value (const Standard_Integer Index)  const;
  
  //! Returns the number of solutions found.
  //! An exception is raised if NotDone.
  //! An exception is raised if there is an infinity of solutions.
      Standard_Integer NbSolutions()  const;
  
  //! Prints information on the current state of the object.
  Standard_EXPORT   void Dump (Standard_OStream& o)  const;




protected:

  
  //! is used by the constructors above.
  Standard_EXPORT   void Perform (const Standard_Real A, const Standard_Real B, const Standard_Real C, const Standard_Real D, const Standard_Real E, const Standard_Real InfBound, const Standard_Real SupBound) ;




private:



  Standard_Integer NbSol;
  TColStd_Array1OfReal Sol;
  Standard_Boolean InfiniteStatus;
  Standard_Boolean Done;


};


#include <math_TrigonometricFunctionRoots.lxx>





#endif // _math_TrigonometricFunctionRoots_HeaderFile
