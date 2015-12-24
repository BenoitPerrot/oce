// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_Equal_HeaderFile
#define _Expr_Equal_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Mathematics/Expressions/Handle_Expr_Equal.hxx>

#include <Mathematics/Expressions/Expr_SingleRelation.hxx>
#include <Mathematics/Expressions/Handle_Expr_GeneralExpression.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Mathematics/Expressions/Handle_Expr_GeneralRelation.hxx>
class Standard_NumericError;
class Expr_GeneralExpression;
class Expr_GeneralRelation;
class TCollection_AsciiString;



class Expr_Equal : public Expr_SingleRelation
{

public:

  
  //! Creates the relation <exp1> = <exp2>.
  Standard_EXPORT Expr_Equal(const Handle(Expr_GeneralExpression)& exp1, const Handle(Expr_GeneralExpression)& exp2);
  
  Standard_EXPORT   Standard_Boolean IsSatisfied()  const;
  
  //! returns a GeneralRelation after replacement of
  //! NamedUnknowns by an associated expression and after
  //! values computation.
  Standard_EXPORT   Handle(Expr_GeneralRelation) Simplified()  const;
  
  //! Replaces NamedUnknowns by an associated expressions
  //! and computes values in <me>.
  Standard_EXPORT   void Simplify() ;
  
  //! Returns a copy of <me> having the same unknowns and functions.
  Standard_EXPORT   Handle(Expr_GeneralRelation) Copy()  const;
  
  //! returns a string representing <me> in a readable way.
  Standard_EXPORT   TCollection_AsciiString String()  const;




  DEFINE_STANDARD_RTTI(Expr_Equal)

protected:




private: 




};







#endif // _Expr_Equal_HeaderFile
