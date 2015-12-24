// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_ExprFailure_HeaderFile
#define _Expr_ExprFailure_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard_DefineException.hxx>
#include <Foundation/Standard/Standard_SStream.hxx>
#include <Foundation/Standard/Standard_Failure.hxx>
#include <Mathematics/Expressions/Handle_Expr_ExprFailure.hxx>

#if !defined No_Exception && !defined No_Expr_ExprFailure
  #define Expr_ExprFailure_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) Expr_ExprFailure::Raise(MESSAGE);
#else
  #define Expr_ExprFailure_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Expr_ExprFailure, Standard_Failure)

#endif // _Expr_ExprFailure_HeaderFile
