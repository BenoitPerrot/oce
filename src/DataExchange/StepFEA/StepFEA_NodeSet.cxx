// Created on: 2002-12-12
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

// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.2

#include <StepFEA_HArray1OfNodeRepresentation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_NodeSet.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepFEA_NodeSet)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepFEA_NodeSet)
IMPLEMENT_DOWNCAST(StepFEA_NodeSet,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepFEA_NodeSet)

//=======================================================================
//function : StepFEA_NodeSet
//purpose  : 
//=======================================================================

StepFEA_NodeSet::StepFEA_NodeSet ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepFEA_NodeSet::Init (const Handle(TCollection_HAsciiString) &aRepresentationItem_Name,
                            const Handle(StepFEA_HArray1OfNodeRepresentation) &aNodes)
{
  StepGeom_GeometricRepresentationItem::Init(aRepresentationItem_Name);

  theNodes = aNodes;
}

//=======================================================================
//function : Nodes
//purpose  : 
//=======================================================================

Handle(StepFEA_HArray1OfNodeRepresentation) StepFEA_NodeSet::Nodes () const
{
  return theNodes;
}

//=======================================================================
//function : SetNodes
//purpose  : 
//=======================================================================

void StepFEA_NodeSet::SetNodes (const Handle(StepFEA_HArray1OfNodeRepresentation) &aNodes)
{
  theNodes = aNodes;
}
