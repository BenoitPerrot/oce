// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdFail_UndefinedValue_HeaderFile
#define _StdFail_UndefinedValue_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard_DefineException.hxx>
#include <Foundation/Standard/Standard_SStream.hxx>
#include <Foundation/Standard/Standard_DomainError.hxx>
#include <Handle_StdFail_UndefinedValue.hxx>

#if !defined No_Exception && !defined No_StdFail_UndefinedValue
  #define StdFail_UndefinedValue_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) StdFail_UndefinedValue::Raise(MESSAGE);
#else
  #define StdFail_UndefinedValue_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(StdFail_UndefinedValue, Standard_DomainError)

#endif // _StdFail_UndefinedValue_HeaderFile
