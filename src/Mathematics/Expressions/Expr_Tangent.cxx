// Created on: 1991-05-28
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
#include <Expr_NotEvaluable.hxx>
#include <Expr_GeneralExpression.hxx>
#include <Expr_NamedUnknown.hxx>
#include <Expr_Array1OfNamedUnknown.hxx>
#include <TColStd_Array1OfReal.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Expr_Tangent.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Expr_Tangent)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Expr_UnaryExpression),
  STANDARD_TYPE(Expr_GeneralExpression),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Expr_Tangent)
IMPLEMENT_DOWNCAST(Expr_Tangent,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Expr_Tangent)
#include <Expr_NumericValue.hxx>
#include <Expr_ArcTangent.hxx>
#include <Expr_Cosine.hxx>
#include <Expr_Square.hxx>
#include <Expr_Division.hxx>
#include <Expr_Operators.hxx>
#include <Expr.hxx>

Expr_Tangent::Expr_Tangent(const Handle(Expr_GeneralExpression)& exp)
{
  CreateOperand(exp);
}

Handle(Expr_GeneralExpression) Expr_Tangent::ShallowSimplified () const
{
  Handle(Expr_GeneralExpression) myexp = Operand();
  if (myexp->IsKind(STANDARD_TYPE(Expr_NumericValue))) {
    Handle(Expr_NumericValue) myNVexp = Handle(Expr_NumericValue)::DownCast(myexp);
    return new Expr_NumericValue(Tan(myNVexp->GetValue()));
  }
  if (myexp->IsKind(STANDARD_TYPE(Expr_ArcTangent))) {
    return myexp->SubExpression(1);
  }
  Handle(Expr_Tangent) me = this;
  return me;
}

Handle(Expr_GeneralExpression) Expr_Tangent::Copy () const
{
  return new Expr_Tangent(Expr::CopyShare(Operand()));
}

Standard_Boolean Expr_Tangent::IsIdentical (const Handle(Expr_GeneralExpression)& Other) const
{
  if (Other->IsKind(STANDARD_TYPE(Expr_Tangent))) {
    Handle(Expr_GeneralExpression) myexp = Operand();
    return myexp->IsIdentical(Other->SubExpression(1));
  }
  return Standard_False;
}

Standard_Boolean Expr_Tangent::IsLinear () const
{
  return !ContainsUnknowns();
}

Handle(Expr_GeneralExpression) Expr_Tangent::Derivative (const Handle(Expr_NamedUnknown)& X) const
{
  if (!Contains(X)) {
    return  new Expr_NumericValue(0.0);
  }
  Handle(Expr_GeneralExpression) myexp = Operand();
  Handle(Expr_GeneralExpression) myder = myexp->Derivative(X);
  Handle(Expr_Cosine) firstder = new Expr_Cosine(Expr::CopyShare(myexp));
  Handle(Expr_Square) sq = new Expr_Square(firstder->ShallowSimplified());
  Handle(Expr_Division) resu = myder / sq->ShallowSimplified();
  return resu->ShallowSimplified();
}

Standard_Real Expr_Tangent::Evaluate(const Expr_Array1OfNamedUnknown& vars, const TColStd_Array1OfReal& vals) const
{
  return ::Tan(Operand()->Evaluate(vars,vals));
}

TCollection_AsciiString Expr_Tangent::String() const
{
  TCollection_AsciiString str("Tan(");
  str += Operand()->String();
  str +=")";
  return str;
}
