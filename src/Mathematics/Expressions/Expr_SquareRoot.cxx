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
#include <TCollection_AsciiString.hxx>
#include <Expr_SquareRoot.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Expr_SquareRoot)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Expr_UnaryExpression),
  STANDARD_TYPE(Expr_GeneralExpression),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Expr_SquareRoot)
IMPLEMENT_DOWNCAST(Expr_SquareRoot,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Expr_SquareRoot)
#include <Expr_NumericValue.hxx>
#include <Expr_Square.hxx>
#include <Expr_Product.hxx>
#include <Expr_Division.hxx>
#include <Expr_Operators.hxx>
#include <Expr.hxx>

Expr_SquareRoot::Expr_SquareRoot (const Handle(Expr_GeneralExpression)& exp)
{
  CreateOperand(exp);
}

Handle(Expr_GeneralExpression) Expr_SquareRoot::ShallowSimplified () const
{
  Handle(Expr_GeneralExpression) myexp = Operand();
  if (myexp->IsKind(STANDARD_TYPE(Expr_NumericValue))) {
    Handle(Expr_NumericValue) myNVexp = Handle(Expr_NumericValue)::DownCast(myexp);
    return new Expr_NumericValue(Sqrt(myNVexp->GetValue()));
  }
  if (myexp->IsKind(STANDARD_TYPE(Expr_Square))) {
    return myexp->SubExpression(1);
  }
  Handle(Expr_SquareRoot) me = this;
  return me;
}

Handle(Expr_GeneralExpression) Expr_SquareRoot::Copy () const
{
  return new Expr_SquareRoot(Expr::CopyShare(Operand()));
}

Standard_Boolean Expr_SquareRoot::IsIdentical (const Handle(Expr_GeneralExpression)& Other) const
{
  if (Other->IsKind(STANDARD_TYPE(Expr_SquareRoot))) {
    return Operand()->IsIdentical(Other->SubExpression(1));
  }
  return Standard_False;
}

Standard_Boolean Expr_SquareRoot::IsLinear () const
{
  return !ContainsUnknowns();
}

Handle(Expr_GeneralExpression) Expr_SquareRoot::Derivative (const Handle(Expr_NamedUnknown)& X) const
{
  if (!Contains(X)) {
    return  new Expr_NumericValue(0.0);
  }
  Handle(Expr_GeneralExpression) myexp = Operand();
  Handle(Expr_GeneralExpression) myder = myexp->Derivative(X);
  Handle(Expr_SquareRoot) sq = new Expr_SquareRoot(Expr::CopyShare(myexp));
  Handle(Expr_Product) theprod = 2.0 * sq;
  Handle(Expr_Division) resu = myder / theprod->ShallowSimplified();
  return resu->ShallowSimplified();
}


Standard_Real Expr_SquareRoot::Evaluate(const Expr_Array1OfNamedUnknown& vars, const TColStd_Array1OfReal& vals) const
{
  return ::Sqrt(Operand()->Evaluate(vars,vals));
}

TCollection_AsciiString Expr_SquareRoot::String() const
{
  TCollection_AsciiString str("Sqrt(");
  str += Operand()->String();
  str += ")";
  return str;
}
