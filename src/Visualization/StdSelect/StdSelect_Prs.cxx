// Created on: 1995-03-17
// Created by: Robert COUBLANC
// Copyright (c) 1995-1999 Matra Datavision
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

#include <Graphic3d_StructureManager.hxx>
#include <StdSelect_Prs.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StdSelect_Prs)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Prs3d_Presentation),
  STANDARD_TYPE(Graphic3d_Structure),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StdSelect_Prs)
IMPLEMENT_DOWNCAST(StdSelect_Prs,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StdSelect_Prs)

StdSelect_Prs::
StdSelect_Prs(const Handle(Graphic3d_StructureManager)& aStructureManager):
Prs3d_Presentation(aStructureManager),
myManager(aStructureManager){}

