// Created on: 1999-11-26
// Created by: Andrey BETENEV
// Copyright (c) 1999 Matra Datavision
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

// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.0

#include <StepRepr_ConfigurationDesign.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepRepr_ConfigurationEffectivity.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepRepr_ConfigurationEffectivity)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepBasic_ProductDefinitionEffectivity),
  STANDARD_TYPE(StepBasic_Effectivity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepRepr_ConfigurationEffectivity)
IMPLEMENT_DOWNCAST(StepRepr_ConfigurationEffectivity,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepRepr_ConfigurationEffectivity)

//=======================================================================
//function : StepRepr_ConfigurationEffectivity
//purpose  : 
//=======================================================================

StepRepr_ConfigurationEffectivity::StepRepr_ConfigurationEffectivity ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepRepr_ConfigurationEffectivity::Init (const Handle(TCollection_HAsciiString) &aEffectivity_Id,
                                              const Handle(StepBasic_ProductDefinitionRelationship) &aProductDefinitionEffectivity_Usage,
                                              const Handle(StepRepr_ConfigurationDesign) &aConfiguration)
{
  StepBasic_ProductDefinitionEffectivity::Init(aEffectivity_Id,
                                               aProductDefinitionEffectivity_Usage);

  theConfiguration = aConfiguration;
}

//=======================================================================
//function : Configuration
//purpose  : 
//=======================================================================

Handle(StepRepr_ConfigurationDesign) StepRepr_ConfigurationEffectivity::Configuration () const
{
  return theConfiguration;
}

//=======================================================================
//function : SetConfiguration
//purpose  : 
//=======================================================================

void StepRepr_ConfigurationEffectivity::SetConfiguration (const Handle(StepRepr_ConfigurationDesign) &aConfiguration)
{
  theConfiguration = aConfiguration;
}
