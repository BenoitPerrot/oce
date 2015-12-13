// Created on: 1991-04-15
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

#include <Mathematics/Expressions/Expr_GeneralExpression.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Foundation/Standard/Standard_NumericError.hxx>
#include <Mathematics/Expressions/Expr_InvalidOperand.hxx>
#include <Mathematics/Expressions/Expr_NamedUnknown.hxx>
#include <Mathematics/Expressions/Expr_UnaryExpression.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Expr_UnaryExpression)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Expr_GeneralExpression),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Expr_UnaryExpression)
IMPLEMENT_DOWNCAST(Expr_UnaryExpression,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Expr_UnaryExpression)
#include <Mathematics/Expressions/Expr_NamedUnknown.hxx>
#include <Mathematics/Expressions/Expr_InvalidOperand.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>

void Expr_UnaryExpression::SetOperand (const Handle(Expr_GeneralExpression)& exp)
{
  Handle(Expr_UnaryExpression) me = this;
  if (exp == me) {
    Expr_InvalidOperand::Raise();
  }
  if (exp->Contains(me)) {
    Expr_InvalidOperand::Raise();
  }
  myOperand = exp;
}

void Expr_UnaryExpression::CreateOperand (const Handle(Expr_GeneralExpression)& exp)
{
  myOperand = exp;
}

Standard_Integer Expr_UnaryExpression::NbSubExpressions () const
{
  return 1;
}

const Handle(Expr_GeneralExpression)& Expr_UnaryExpression::SubExpression (const Standard_Integer I) const
{
  if (I != 1) {
    Standard_OutOfRange::Raise();
  }
  return myOperand;
}

Standard_Boolean Expr_UnaryExpression::ContainsUnknowns () const
{
  if (!myOperand->IsKind(STANDARD_TYPE(Expr_NamedUnknown))) {
    return myOperand->ContainsUnknowns();
  }
  return Standard_True;
}

Standard_Boolean Expr_UnaryExpression::Contains (const Handle(Expr_GeneralExpression)& exp) const
{
  if (myOperand != exp) {
    return myOperand->Contains(exp);
  }
  return Standard_True;
}

void Expr_UnaryExpression::Replace (const Handle(Expr_NamedUnknown)& var, const Handle(Expr_GeneralExpression)& with)
{
  if (myOperand == var) {
    SetOperand(with);
  }
  else {
    if (myOperand->Contains(var)) {
      myOperand->Replace(var,with);
    }
  }
}


Handle(Expr_GeneralExpression) Expr_UnaryExpression::Simplified() const
{
  Handle(Expr_UnaryExpression) cop = Handle(Expr_UnaryExpression)::DownCast(Copy());
  Handle(Expr_GeneralExpression) op = cop->Operand();
  cop->SetOperand(op->Simplified());
  return cop->ShallowSimplified();
}

