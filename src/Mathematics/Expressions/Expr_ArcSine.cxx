// Created on: 1991-05-27
// Created by: Arnaud BOUZY
// Copyright (c) 1991-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <Foundation/Standard/Standard_NumericError.hxx>
#include <Mathematics/Expressions/Expr_NotEvaluable.hxx>
#include <Mathematics/Expressions/Expr_GeneralExpression.hxx>
#include <Mathematics/Expressions/Expr_NamedUnknown.hxx>
#include <Mathematics/Expressions/Expr_Array1OfNamedUnknown.hxx>
#include <Foundation/TColStd/TColStd_Array1OfReal.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Mathematics/Expressions/Expr_ArcSine.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Expr_ArcSine)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Expr_UnaryExpression),
  STANDARD_TYPE(Expr_GeneralExpression),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Expr_ArcSine)
IMPLEMENT_DOWNCAST(Expr_ArcSine,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Expr_ArcSine)
#include <Mathematics/Expressions/Expr_NumericValue.hxx>
#include <Mathematics/Expressions/Expr_Sine.hxx>
#include <Mathematics/Expressions/Expr_Division.hxx>
#include <Mathematics/Expressions/Expr_Square.hxx>
#include <Mathematics/Expressions/Expr_Difference.hxx>
#include <Mathematics/Expressions/Expr_SquareRoot.hxx>
#include <Mathematics/Expressions/Expr_Operators.hxx>
#include <Mathematics/Expressions/Expr.hxx>

Expr_ArcSine::Expr_ArcSine (const Handle(Expr_GeneralExpression)& exp)
{
  CreateOperand(exp);
}

Handle(Expr_GeneralExpression) Expr_ArcSine::ShallowSimplified () const
{
  Handle(Expr_GeneralExpression) op = Operand();
  if (op->IsKind(STANDARD_TYPE(Expr_NumericValue))) {
    Handle(Expr_NumericValue) valop = Handle(Expr_NumericValue)::DownCast(op);
    return new Expr_NumericValue(ASin(valop->GetValue()));
  }
  if (op->IsKind(STANDARD_TYPE(Expr_Sine))) {
    return op->SubExpression(1);
  }
  Handle(Expr_ArcSine) me = this;
  return me;
}

Handle(Expr_GeneralExpression) Expr_ArcSine::Copy () const 
{
  return  new Expr_ArcSine(Expr::CopyShare(Operand()));
}

Standard_Boolean Expr_ArcSine::IsIdentical (const Handle(Expr_GeneralExpression)& Other) const
{
  if (!Other->IsKind(STANDARD_TYPE(Expr_ArcSine))) {
    return Standard_False;
  }
  Handle(Expr_GeneralExpression) op = Operand();
  return op->IsIdentical(Other->SubExpression(1));
}

Standard_Boolean Expr_ArcSine::IsLinear () const
{
  if (ContainsUnknowns()) {
    return Standard_False;
  }
  return Standard_True;
}

Handle(Expr_GeneralExpression) Expr_ArcSine::Derivative (const Handle(Expr_NamedUnknown)& X) const
{
  if (!Contains(X)) {
    return new Expr_NumericValue(0.0);
  }
  Handle(Expr_GeneralExpression) op = Operand();
  Handle(Expr_GeneralExpression) derop = op->Derivative(X);

  Handle(Expr_Square) sq = new Expr_Square(Expr::CopyShare(op));
  // 1 - X2
  Handle(Expr_Difference) thedif = 1.0 - sq->ShallowSimplified(); 

  // sqrt(1-X2)
  Handle(Expr_SquareRoot) theroot = new Expr_SquareRoot(thedif->ShallowSimplified());

  // ArcSine'(F(X)) = F'(X)/sqrt(1-F(X)2) 
  Handle(Expr_Division) thediv = derop / theroot->ShallowSimplified(); 

  return thediv->ShallowSimplified();
}

Standard_Real Expr_ArcSine::Evaluate(const Expr_Array1OfNamedUnknown& vars, const TColStd_Array1OfReal& vals) const
{
  return ::ASin(Operand()->Evaluate(vars,vals));
}

TCollection_AsciiString Expr_ArcSine::String() const
{
  TCollection_AsciiString str("ASin(");
  str += Operand()->String();
  str += ")";
  return str;
}
