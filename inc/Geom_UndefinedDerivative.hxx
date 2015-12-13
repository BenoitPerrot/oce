// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom_UndefinedDerivative_HeaderFile
#define _Geom_UndefinedDerivative_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard_DefineException.hxx>
#include <Foundation/Standard/Standard_SStream.hxx>
#include <Foundation/Standard/Standard_DomainError.hxx>
#include <Handle_Geom_UndefinedDerivative.hxx>

#if !defined No_Exception && !defined No_Geom_UndefinedDerivative
  #define Geom_UndefinedDerivative_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) Geom_UndefinedDerivative::Raise(MESSAGE);
#else
  #define Geom_UndefinedDerivative_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Geom_UndefinedDerivative, Standard_DomainError)

#endif // _Geom_UndefinedDerivative_HeaderFile
