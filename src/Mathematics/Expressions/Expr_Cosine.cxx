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
#include <Mathematics/Expressions/Expr_Cosine.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Expr_Cosine)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Expr_UnaryExpression),
  STANDARD_TYPE(Expr_GeneralExpression),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Expr_Cosine)
IMPLEMENT_DOWNCAST(Expr_Cosine,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Expr_Cosine)
#include <Mathematics/Expressions/Expr_NumericValue.hxx>
#include <Mathematics/Expressions/Expr_ArcCosine.hxx>
#include <Mathematics/Expressions/Expr_Sine.hxx>
#include <Mathematics/Expressions/Expr_UnaryMinus.hxx>
#include <Mathematics/Expressions/Expr_Product.hxx>
#include <Mathematics/Expressions/Expr_Operators.hxx>
#include <Mathematics/Expressions/Expr.hxx>

Expr_Cosine::Expr_Cosine(const Handle(Expr_GeneralExpression)& exp)
{
  CreateOperand(exp);
}

Handle(Expr_GeneralExpression) Expr_Cosine::ShallowSimplified () const
{
  Handle(Expr_GeneralExpression) myexp = Operand();
  if (myexp->IsKind(STANDARD_TYPE(Expr_NumericValue))) {
    Handle(Expr_NumericValue) myNVexp = Handle(Expr_NumericValue)::DownCast(myexp);
    return new Expr_NumericValue(Cos(myNVexp->GetValue()));
  }
  if (myexp->IsKind(STANDARD_TYPE(Expr_ArcCosine))) {
    return myexp->SubExpression(1);
  }
  Handle(Expr_Cosine) me = this;
  return me;
}

Handle(Expr_GeneralExpression) Expr_Cosine::Copy () const
{
  return new Expr_Cosine(Expr::CopyShare(Operand()));
}

Standard_Boolean Expr_Cosine::IsIdentical (const Handle(Expr_GeneralExpression)& Other) const
{
  if (Other->IsKind(STANDARD_TYPE(Expr_Cosine))) {
    Handle(Expr_GeneralExpression) myexp = Operand();
    return myexp->IsIdentical(Other->SubExpression(1));
  }
  return Standard_False;
}

Standard_Boolean Expr_Cosine::IsLinear () const
{
  return !ContainsUnknowns();
}

Handle(Expr_GeneralExpression) Expr_Cosine::Derivative (const Handle(Expr_NamedUnknown)& X) const
{
  if (!Contains(X)) {
    return new Expr_NumericValue(0.0);
  }
  Handle(Expr_GeneralExpression) myexp = Operand();
  Handle(Expr_GeneralExpression) myder = myexp->Derivative(X);
  Handle(Expr_Sine) firstder = new Expr_Sine(Expr::CopyShare(myexp));
  Handle(Expr_UnaryMinus) fder = - (firstder->ShallowSimplified());
  Handle(Expr_Product) resu = fder->ShallowSimplified() * myder;
  return resu->ShallowSimplified();
}

Standard_Real Expr_Cosine::Evaluate(const Expr_Array1OfNamedUnknown& vars, const TColStd_Array1OfReal& vals) const
{
  return ::Cos(Operand()->Evaluate(vars,vals));
}

TCollection_AsciiString Expr_Cosine::String() const
{
  TCollection_AsciiString str("Cos(");
  str += Operand()->String();
  str += ")";
  return str;
}
