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

#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <ExprIntrp_GenFct.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(ExprIntrp_GenFct)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(ExprIntrp_Generator),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(ExprIntrp_GenFct)
IMPLEMENT_DOWNCAST(ExprIntrp_GenFct,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(ExprIntrp_GenFct)
#include <ExprIntrp.hxx>
#include <ExprIntrp_yaccanal.hxx>

ExprIntrp_GenFct::ExprIntrp_GenFct ()
{
  done = Standard_False;
}

Handle( ExprIntrp_GenFct ) ExprIntrp_GenFct::Create()
{
  return new ExprIntrp_GenFct();
}

void ExprIntrp_GenFct::Process (const TCollection_AsciiString& str)
{
  Handle(ExprIntrp_GenFct) me = this;
  done = ExprIntrp::Parse(me,str);
}
 
Standard_Boolean ExprIntrp_GenFct::IsDone() const
{
  return done;
}

