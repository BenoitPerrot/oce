// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _OSD_SIGKILL_HeaderFile
#define _OSD_SIGKILL_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard_DefineException.hxx>
#include <Foundation/Standard/Standard_SStream.hxx>
#include <Foundation/OSD/OSD_Signal.hxx>
#include <Handle_OSD_SIGKILL.hxx>

#if !defined No_Exception && !defined No_OSD_SIGKILL
  #define OSD_SIGKILL_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) OSD_SIGKILL::Raise(MESSAGE);
#else
  #define OSD_SIGKILL_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(OSD_SIGKILL, OSD_Signal)

#endif // _OSD_SIGKILL_HeaderFile
