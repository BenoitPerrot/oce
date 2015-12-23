// Created on: 2000-04-18
// Created by: Andrey BETENEV
// Copyright (c) 2000-2014 OPEN CASCADE SAS
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

// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.0

#include <DataExchange/StepRepr/StepRepr_ShapeAspect.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <DataExchange/StepShape/StepShape_DimensionalSizeWithPath.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_DimensionalSizeWithPath)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepShape_DimensionalSize),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_DimensionalSizeWithPath)
IMPLEMENT_DOWNCAST(StepShape_DimensionalSizeWithPath,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_DimensionalSizeWithPath)

//=======================================================================
//function : StepShape_DimensionalSizeWithPath
//purpose  : 
//=======================================================================

StepShape_DimensionalSizeWithPath::StepShape_DimensionalSizeWithPath ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepShape_DimensionalSizeWithPath::Init (const Handle(StepRepr_ShapeAspect) &aDimensionalSize_AppliesTo,
                                              const Handle(TCollection_HAsciiString) &aDimensionalSize_Name,
                                              const Handle(StepRepr_ShapeAspect) &aPath)
{
  StepShape_DimensionalSize::Init(aDimensionalSize_AppliesTo,
                                  aDimensionalSize_Name);

  thePath = aPath;
}

//=======================================================================
//function : Path
//purpose  : 
//=======================================================================

Handle(StepRepr_ShapeAspect) StepShape_DimensionalSizeWithPath::Path () const
{
  return thePath;
}

//=======================================================================
//function : SetPath
//purpose  : 
//=======================================================================

void StepShape_DimensionalSizeWithPath::SetPath (const Handle(StepRepr_ShapeAspect) &aPath)
{
  thePath = aPath;
}
