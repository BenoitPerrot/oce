// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Visual3d_ClipDefinitionError_HeaderFile
#define _Visual3d_ClipDefinitionError_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard_DefineException.hxx>
#include <Foundation/Standard/Standard_SStream.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Visualization/Visual3d/Handle_Visual3d_ClipDefinitionError.hxx>

#if !defined No_Exception && !defined No_Visual3d_ClipDefinitionError
  #define Visual3d_ClipDefinitionError_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) Visual3d_ClipDefinitionError::Raise(MESSAGE);
#else
  #define Visual3d_ClipDefinitionError_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Visual3d_ClipDefinitionError, Standard_OutOfRange)

#endif // _Visual3d_ClipDefinitionError_HeaderFile
