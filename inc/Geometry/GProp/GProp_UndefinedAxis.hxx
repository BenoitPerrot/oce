// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GProp_UndefinedAxis_HeaderFile
#define _GProp_UndefinedAxis_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard_DefineException.hxx>
#include <Foundation/Standard/Standard_SStream.hxx>
#include <Foundation/Standard/Standard_DomainError.hxx>
#include <Geometry/GProp/Handle_GProp_UndefinedAxis.hxx>

#if !defined No_Exception && !defined No_GProp_UndefinedAxis
  #define GProp_UndefinedAxis_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) GProp_UndefinedAxis::Raise(MESSAGE);
#else
  #define GProp_UndefinedAxis_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(GProp_UndefinedAxis, Standard_DomainError)

#endif // _GProp_UndefinedAxis_HeaderFile
