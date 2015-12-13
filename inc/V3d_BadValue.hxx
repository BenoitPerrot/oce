// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _V3d_BadValue_HeaderFile
#define _V3d_BadValue_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard_DefineException.hxx>
#include <Foundation/Standard/Standard_SStream.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Handle_V3d_BadValue.hxx>

#if !defined No_Exception && !defined No_V3d_BadValue
  #define V3d_BadValue_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) V3d_BadValue::Raise(MESSAGE);
#else
  #define V3d_BadValue_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(V3d_BadValue, Standard_OutOfRange)

#endif // _V3d_BadValue_HeaderFile
