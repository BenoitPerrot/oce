// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_GroupDefinitionError_HeaderFile
#define _Graphic3d_GroupDefinitionError_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard_DefineException.hxx>
#include <Foundation/Standard/Standard_SStream.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Handle_Graphic3d_GroupDefinitionError.hxx>

#if !defined No_Exception && !defined No_Graphic3d_GroupDefinitionError
  #define Graphic3d_GroupDefinitionError_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) Graphic3d_GroupDefinitionError::Raise(MESSAGE);
#else
  #define Graphic3d_GroupDefinitionError_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Graphic3d_GroupDefinitionError, Standard_OutOfRange)

#endif // _Graphic3d_GroupDefinitionError_HeaderFile
