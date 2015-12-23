// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_TransferFailure_HeaderFile
#define _Transfer_TransferFailure_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard_DefineException.hxx>
#include <Foundation/Standard/Standard_SStream.hxx>
#include <DataExchange/Interface/Interface_InterfaceError.hxx>
#include <Handle_Transfer_TransferFailure.hxx>

#if !defined No_Exception && !defined No_Transfer_TransferFailure
  #define Transfer_TransferFailure_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) Transfer_TransferFailure::Raise(MESSAGE);
#else
  #define Transfer_TransferFailure_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Transfer_TransferFailure, Interface_InterfaceError)

#endif // _Transfer_TransferFailure_HeaderFile
