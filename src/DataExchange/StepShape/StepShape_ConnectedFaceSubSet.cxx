// Created on: 2002-01-04
// Created by: data exchange team
// Copyright (c) 2002-2014 OPEN CASCADE SAS
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

// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.1

#include <StepShape_ConnectedFaceSet.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <StepShape_HArray1OfFace.hxx>
#include <StepShape_ConnectedFaceSubSet.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_ConnectedFaceSubSet)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepShape_ConnectedFaceSet),
  STANDARD_TYPE(StepShape_TopologicalRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_ConnectedFaceSubSet)
IMPLEMENT_DOWNCAST(StepShape_ConnectedFaceSubSet,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_ConnectedFaceSubSet)

//=======================================================================
//function : StepShape_ConnectedFaceSubSet
//purpose  : 
//=======================================================================

StepShape_ConnectedFaceSubSet::StepShape_ConnectedFaceSubSet ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepShape_ConnectedFaceSubSet::Init (const Handle(TCollection_HAsciiString) &aRepresentationItem_Name,
                                          const Handle(StepShape_HArray1OfFace) &aConnectedFaceSet_CfsFaces,
                                          const Handle(StepShape_ConnectedFaceSet) &aParentFaceSet)
{
  StepShape_ConnectedFaceSet::Init(aRepresentationItem_Name,
                                   aConnectedFaceSet_CfsFaces);

  theParentFaceSet = aParentFaceSet;
}

//=======================================================================
//function : ParentFaceSet
//purpose  : 
//=======================================================================

Handle(StepShape_ConnectedFaceSet) StepShape_ConnectedFaceSubSet::ParentFaceSet () const
{
  return theParentFaceSet;
}

//=======================================================================
//function : SetParentFaceSet
//purpose  : 
//=======================================================================

void StepShape_ConnectedFaceSubSet::SetParentFaceSet (const Handle(StepShape_ConnectedFaceSet) &aParentFaceSet)
{
  theParentFaceSet = aParentFaceSet;
}
