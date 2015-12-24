// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _OSD_OSDError_HeaderFile
#define _OSD_OSDError_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard_DefineException.hxx>
#include <Foundation/Standard/Standard_SStream.hxx>
#include <Foundation/Standard/Standard_Failure.hxx>
#include <Foundation/OSD/Handle_OSD_OSDError.hxx>

#if !defined No_Exception && !defined No_OSD_OSDError
  #define OSD_OSDError_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) OSD_OSDError::Raise(MESSAGE);
#else
  #define OSD_OSDError_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(OSD_OSDError, Standard_Failure)

#endif // _OSD_OSDError_HeaderFile
