// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_SingularMatrix_HeaderFile
#define _math_SingularMatrix_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard_DefineException.hxx>
#include <Foundation/Standard/Standard_SStream.hxx>
#include <Foundation/Standard/Standard_Failure.hxx>
#include <Mathematics/Optimization/Handle_math_SingularMatrix.hxx>

#if !defined No_Exception && !defined No_math_SingularMatrix
  #define math_SingularMatrix_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) math_SingularMatrix::Raise(MESSAGE);
#else
  #define math_SingularMatrix_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(math_SingularMatrix, Standard_Failure)

#endif // _math_SingularMatrix_HeaderFile
