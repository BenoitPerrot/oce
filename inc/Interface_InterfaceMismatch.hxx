// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_InterfaceMismatch_HeaderFile
#define _Interface_InterfaceMismatch_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard_DefineException.hxx>
#include <Foundation/Standard/Standard_SStream.hxx>
#include <Interface_InterfaceError.hxx>
#include <Handle_Interface_InterfaceMismatch.hxx>

#if !defined No_Exception && !defined No_Interface_InterfaceMismatch
  #define Interface_InterfaceMismatch_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) Interface_InterfaceMismatch::Raise(MESSAGE);
#else
  #define Interface_InterfaceMismatch_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Interface_InterfaceMismatch, Interface_InterfaceError)

#endif // _Interface_InterfaceMismatch_HeaderFile
