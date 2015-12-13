// Created on: 1991-04-11
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

#include <Expr_GeneralExpression.hxx>
#include <Expr_NotAssigned.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Foundation/Standard/Standard_NumericError.hxx>
#include <Expr_InvalidAssignment.hxx>
#include <Expr_InvalidOperand.hxx>
#include <Expr_NotEvaluable.hxx>
#include <TCollection_AsciiString.hxx>
#include <Expr_Array1OfNamedUnknown.hxx>
#include <TColStd_Array1OfReal.hxx>
#include <Expr_NamedUnknown.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Expr_NamedUnknown)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Expr_NamedExpression),
  STANDARD_TYPE(Expr_GeneralExpression),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Expr_NamedUnknown)
IMPLEMENT_DOWNCAST(Expr_NamedUnknown,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Expr_NamedUnknown)
#include <Expr_NumericValue.hxx>
#include <Expr.hxx>
#include <Expr_NotAssigned.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_InvalidOperand.hxx>
#include <Expr_InvalidAssignment.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>

Expr_NamedUnknown::Expr_NamedUnknown(const TCollection_AsciiString& name)
{
  SetName(name);
  myExpression.Nullify();
}

const Handle(Expr_GeneralExpression)& Expr_NamedUnknown::AssignedExpression () const
{
  if (!IsAssigned()) {
    Expr_NotAssigned::Raise();
  }
  return myExpression;
}

void Expr_NamedUnknown::Assign (const Handle(Expr_GeneralExpression)& exp)
{
  Handle(Expr_NamedUnknown) me = this;
  if (exp->Contains(me)) {
    Expr_InvalidAssignment::Raise();
  }
  myExpression = exp;
}

      
const Handle(Expr_GeneralExpression)& Expr_NamedUnknown::SubExpression (const Standard_Integer I) const
{
  if (!IsAssigned()) {
    Standard_OutOfRange::Raise();
  }
  if (I != 1) {
    Standard_OutOfRange::Raise();
  }
  return AssignedExpression();
}

Handle(Expr_GeneralExpression) Expr_NamedUnknown::Simplified () const
{
  if (!IsAssigned()) {
    Handle(Expr_NamedUnknown) me = this;
    return me;
  }
  else {
    return myExpression->Simplified();
  }
}

Handle(Expr_GeneralExpression) Expr_NamedUnknown::Copy () const
{
  Handle(Expr_NamedUnknown) cop = new Expr_NamedUnknown(GetName());
  if (IsAssigned()) {
    cop->Assign(Expr::CopyShare(myExpression));
  }
  return cop;
}


Standard_Boolean Expr_NamedUnknown::ContainsUnknowns () const
{
  if (IsAssigned()) {
    if (myExpression->IsKind(STANDARD_TYPE(Expr_NamedUnknown))) {
      return Standard_True;
    }
    return myExpression->ContainsUnknowns();
  }
  else {
    return Standard_False;
  }
}

Standard_Boolean Expr_NamedUnknown::Contains
                        (const Handle(Expr_GeneralExpression)& exp) const
{
  if (!IsAssigned()) {
    const Handle(Expr_NamedUnknown) expNamed =
      Handle(Expr_NamedUnknown)::DownCast(exp);
    if (expNamed.IsNull() || expNamed->IsAssigned())
      return Standard_False;
    //AGV 22.03.12: Comparison based on name coincidence
    return IsIdentical(expNamed);
  }
  if (myExpression == exp) {
    return Standard_True;
  }
  return myExpression->Contains(exp);
}


Standard_Boolean Expr_NamedUnknown::IsLinear () const
{
  if (IsAssigned()) {
    return myExpression->IsLinear();
  }
  else {
    return Standard_True;
  }
}

Handle(Expr_GeneralExpression) Expr_NamedUnknown::Derivative (const Handle(Expr_NamedUnknown)& X) const
{
  Handle(Expr_NamedUnknown) me = this;
  if (me != X) {
    if (IsAssigned()) {
      return myExpression->Derivative(X);
    }
    else {
      return new Expr_NumericValue(0.0);
    }
  }
  else {
    return new Expr_NumericValue(1.0);
  }
}

void Expr_NamedUnknown::Replace (const Handle(Expr_NamedUnknown)& var, const Handle(Expr_GeneralExpression)& with)
{
  if (IsAssigned()) {
    if (myExpression == var) {
      Handle(Expr_NamedUnknown) me = this;
      if (with->Contains(me)) {
	Expr_InvalidOperand::Raise();
      }
      Assign(with);
    }
    else {
      if (myExpression->Contains(var)) {
	myExpression->Replace(var,with);
      }
    }
  }
}


Handle(Expr_GeneralExpression) Expr_NamedUnknown::ShallowSimplified () const
{
  if (IsAssigned()) {
    return myExpression;
  }
  Handle(Expr_NamedUnknown) me = this;
  return me;
}

Standard_Real Expr_NamedUnknown::Evaluate(const Expr_Array1OfNamedUnknown& vars, const TColStd_Array1OfReal& vals) const
{
  if (!IsAssigned()) {
    Handle(Expr_NamedUnknown) me = this;
    for (Standard_Integer i=vars.Lower();i<=vars.Upper();i++) {
      if (me->GetName() == vars(i)->GetName()) {
	return vals(i-vars.Lower()+vals.Lower());
      }
    }
    Expr_NotEvaluable::Raise();
  }
  return myExpression->Evaluate(vars,vals);
}

Standard_Integer Expr_NamedUnknown::NbSubExpressions () const
{
  if (IsAssigned()) {
    return 1;
  }
  else {
    return 0;
  }
}

