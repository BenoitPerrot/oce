// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GccEnt_BadQualifier_HeaderFile
#define _GccEnt_BadQualifier_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard_DefineException.hxx>
#include <Foundation/Standard/Standard_SStream.hxx>
#include <Foundation/Standard/Standard_DomainError.hxx>
#include <Handle_GccEnt_BadQualifier.hxx>

#if !defined No_Exception && !defined No_GccEnt_BadQualifier
  #define GccEnt_BadQualifier_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) GccEnt_BadQualifier::Raise(MESSAGE);
#else
  #define GccEnt_BadQualifier_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(GccEnt_BadQualifier, Standard_DomainError)

#endif // _GccEnt_BadQualifier_HeaderFile
