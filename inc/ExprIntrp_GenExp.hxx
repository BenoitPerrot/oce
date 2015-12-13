// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ExprIntrp_GenExp_HeaderFile
#define _ExprIntrp_GenExp_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_ExprIntrp_GenExp.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Expr_GeneralExpression.hxx>
#include <ExprIntrp_Generator.hxx>
class Expr_GeneralExpression;
class Standard_NoSuchObject;
class TCollection_AsciiString;


//! This class permits, from a string, to create any
//! kind of expression of package Expr by using
//! built-in functions such as Sin,Cos, etc, and by
//! creating variables.
class ExprIntrp_GenExp : public ExprIntrp_Generator
{

public:

  
  Standard_EXPORT static   Handle(ExprIntrp_GenExp) Create() ;
  
  //! Processes given string.
  Standard_EXPORT   void Process (const TCollection_AsciiString& str) ;
  
  //! Returns false if any syntax error has occurred during
  //! process.
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  //! Returns expression generated. Raises an exception if
  //! IsDone answers false.
  Standard_EXPORT   Handle(Expr_GeneralExpression) Expression()  const;




  DEFINE_STANDARD_RTTI(ExprIntrp_GenExp)

protected:




private: 

  
  //! Creates an empty generator
  Standard_EXPORT ExprIntrp_GenExp();

  Standard_Boolean done;
  Handle(Expr_GeneralExpression) myExpression;


};







#endif // _ExprIntrp_GenExp_HeaderFile
