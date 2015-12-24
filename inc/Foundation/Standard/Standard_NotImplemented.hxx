// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Standard_NotImplemented_HeaderFile
#define _Standard_NotImplemented_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard_DefineException.hxx>
#include <Foundation/Standard/Standard_SStream.hxx>
#include <Foundation/Standard/Standard_ProgramError.hxx>
#include <Foundation/Standard/Handle_Standard_NotImplemented.hxx>

#if !defined No_Exception && !defined No_Standard_NotImplemented
  #define Standard_NotImplemented_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) Standard_NotImplemented::Raise(MESSAGE);
#else
  #define Standard_NotImplemented_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Standard_NotImplemented, Standard_ProgramError)

#endif // _Standard_NotImplemented_HeaderFile
