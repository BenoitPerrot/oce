// Created on: 1999-08-31
// Created by: Pavel DURANDIN
// Copyright (c) 1999-1999 Matra Datavision
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

#include <ShapeBuild_ReShape.hxx>
#include <ShapeUpgrade_Tool.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(ShapeUpgrade_Tool)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(ShapeUpgrade_Tool)
IMPLEMENT_DOWNCAST(ShapeUpgrade_Tool,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(ShapeUpgrade_Tool)
#include <Precision.hxx>

//=======================================================================
//function : ShapeUpgrade_Tool
//purpose  : 
//=======================================================================

ShapeUpgrade_Tool::ShapeUpgrade_Tool()
{
  myPrecision = myMinTol = Precision::Confusion();
  myMaxTol = 1; //Precision::Infinite() ?? pdn
}

//=======================================================================
//function : Set
//purpose  : 
//=======================================================================

void ShapeUpgrade_Tool::Set(const Handle(ShapeUpgrade_Tool)& tool)
{
  myContext   = tool->myContext;
  myPrecision = tool->myPrecision;
  myMinTol    = tool->myMinTol;
  myMaxTol    = tool->myMaxTol;
}

