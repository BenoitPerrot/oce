// Created on: 1992-08-18
// Created by: Arnaud BOUZY
// Copyright (c) 1992-1999 Matra Datavision
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

#include <Mathematics/Expressions/Expr_GeneralRelation.hxx>
#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Mathematics/Expressions/ExprIntrp_GenRel.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(ExprIntrp_GenRel)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(ExprIntrp_Generator),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(ExprIntrp_GenRel)
IMPLEMENT_DOWNCAST(ExprIntrp_GenRel,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(ExprIntrp_GenRel)
#include <Mathematics/Expressions/ExprIntrp.hxx>
#include <Mathematics/Expressions/ExprIntrp_yaccanal.hxx>
#include <Foundation/Standard/Standard_NoSuchObject.hxx>

ExprIntrp_GenRel::ExprIntrp_GenRel ()
{
  done = Standard_False;
}

Handle( ExprIntrp_GenRel ) ExprIntrp_GenRel::Create()
{
  return new ExprIntrp_GenRel();
}

void ExprIntrp_GenRel::Process (const TCollection_AsciiString& str)
{
  Handle(ExprIntrp_GenRel) me = this;
  done = Standard_False;
  if (ExprIntrp::Parse(me,str)) {
    if (!ExprIntrp_Recept.IsRelStackEmpty()) {
      myRelation = ExprIntrp_Recept.PopRelation();
      done = Standard_True;
    }
    else {
      myRelation.Nullify();
    }
  }
  else {
    myRelation.Nullify();
  }
}
 
Standard_Boolean ExprIntrp_GenRel::IsDone() const
{
  return done;
}

Handle(Expr_GeneralRelation) ExprIntrp_GenRel::Relation () const
{
  if (!done) {
    Standard_NoSuchObject::Raise();
  }
  return myRelation;
}

