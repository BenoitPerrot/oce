// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Standard_NullValue_HeaderFile
#define _Standard_NullValue_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard_DefineException.hxx>
#include <Foundation/Standard/Standard_SStream.hxx>
#include <Foundation/Standard/Standard_RangeError.hxx>
#include <Foundation/Standard/Handle_Standard_NullValue.hxx>

#if !defined No_Exception && !defined No_Standard_NullValue
  #define Standard_NullValue_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) Standard_NullValue::Raise(MESSAGE);
#else
  #define Standard_NullValue_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Standard_NullValue, Standard_RangeError)

#endif // _Standard_NullValue_HeaderFile
