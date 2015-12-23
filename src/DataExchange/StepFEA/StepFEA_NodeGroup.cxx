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

#include <DataExchange/StepFEA/StepFEA_HArray1OfNodeRepresentation.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <DataExchange/StepFEA/StepFEA_FeaModel.hxx>
#include <DataExchange/StepFEA/StepFEA_NodeGroup.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepFEA_NodeGroup)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepFEA_FeaGroup),
  STANDARD_TYPE(StepBasic_Group),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepFEA_NodeGroup)
IMPLEMENT_DOWNCAST(StepFEA_NodeGroup,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepFEA_NodeGroup)

//=======================================================================
//function : StepFEA_NodeGroup
//purpose  : 
//=======================================================================

StepFEA_NodeGroup::StepFEA_NodeGroup ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepFEA_NodeGroup::Init (const Handle(TCollection_HAsciiString) &aGroup_Name,
                              const Handle(TCollection_HAsciiString) &aGroup_Description,
                              const Handle(StepFEA_FeaModel) &aFeaGroup_ModelRef,
                              const Handle(StepFEA_HArray1OfNodeRepresentation) &aNodes)
{
  StepFEA_FeaGroup::Init(aGroup_Name,
                         aGroup_Description,
                         aFeaGroup_ModelRef);

  theNodes = aNodes;
}

//=======================================================================
//function : Nodes
//purpose  : 
//=======================================================================

Handle(StepFEA_HArray1OfNodeRepresentation) StepFEA_NodeGroup::Nodes () const
{
  return theNodes;
}

//=======================================================================
//function : SetNodes
//purpose  : 
//=======================================================================

void StepFEA_NodeGroup::SetNodes (const Handle(StepFEA_HArray1OfNodeRepresentation) &aNodes)
{
  theNodes = aNodes;
}
