// Created on: 1991-04-12
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

#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Mathematics/Expressions/Expr_GeneralExpression.hxx>
#include <Mathematics/Expressions/Expr_NamedUnknown.hxx>
#include <Mathematics/Expressions/Expr_Array1OfNamedUnknown.hxx>
#include <Foundation/TColStd/TColStd_Array1OfReal.hxx>
#include <Mathematics/Expressions/Expr_NamedConstant.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Expr_NamedConstant)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Expr_NamedExpression),
  STANDARD_TYPE(Expr_GeneralExpression),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Expr_NamedConstant)
IMPLEMENT_DOWNCAST(Expr_NamedConstant,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Expr_NamedConstant)
#include <Mathematics/Expressions/Expr_NumericValue.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>

Expr_NamedConstant::Expr_NamedConstant(const TCollection_AsciiString& name, const Standard_Real value)
{
  SetName(name);
  myValue = value;
}

const Handle(Expr_GeneralExpression)& Expr_NamedConstant::SubExpression (const Standard_Integer ) const
{
 Standard_OutOfRange::Raise();
 Handle(Expr_GeneralExpression)* bid = new Handle(Expr_GeneralExpression);
 return *bid;
}

Handle(Expr_GeneralExpression) Expr_NamedConstant::Simplified () const
{
  Handle(Expr_GeneralExpression) res = new Expr_NumericValue(myValue);
  return res;
}

Handle(Expr_GeneralExpression) Expr_NamedConstant::Copy () const
{
  return new Expr_NamedConstant(GetName(),myValue);
}

Handle(Expr_GeneralExpression) Expr_NamedConstant::Derivative (const Handle(Expr_NamedUnknown)& ) const
{
  Handle(Expr_GeneralExpression) aNumVal = new Expr_NumericValue(0.0);
  return aNumVal;
}

Handle(Expr_GeneralExpression) Expr_NamedConstant::NDerivative (const Handle(Expr_NamedUnknown)& , const Standard_Integer ) const
{
  return new Expr_NumericValue(0.0);
}

Handle(Expr_GeneralExpression) Expr_NamedConstant::ShallowSimplified () const
{
  Handle(Expr_GeneralExpression) res = new Expr_NumericValue(myValue);
  return res;
}

Standard_Real Expr_NamedConstant::Evaluate(const Expr_Array1OfNamedUnknown&, const TColStd_Array1OfReal&) const
{
  return myValue;
}

Standard_Integer Expr_NamedConstant::NbSubExpressions () const
{
  return 0;
}

Standard_Boolean Expr_NamedConstant::ContainsUnknowns () const
{
  return Standard_False;
}

Standard_Boolean Expr_NamedConstant::Contains (const Handle(Expr_GeneralExpression)& ) const
{
  return Standard_False;
}

Standard_Boolean Expr_NamedConstant::IsLinear () const
{
  return Standard_True;
}

void Expr_NamedConstant::Replace (const Handle(Expr_NamedUnknown)& , const Handle(Expr_GeneralExpression)& )
{
}

