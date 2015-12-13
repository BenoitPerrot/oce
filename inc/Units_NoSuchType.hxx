// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Units_NoSuchType_HeaderFile
#define _Units_NoSuchType_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard_DefineException.hxx>
#include <Foundation/Standard/Standard_SStream.hxx>
#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <Handle_Units_NoSuchType.hxx>

#if !defined No_Exception && !defined No_Units_NoSuchType
  #define Units_NoSuchType_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) Units_NoSuchType::Raise(MESSAGE);
#else
  #define Units_NoSuchType_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Units_NoSuchType, Standard_NoSuchObject)

#endif // _Units_NoSuchType_HeaderFile
