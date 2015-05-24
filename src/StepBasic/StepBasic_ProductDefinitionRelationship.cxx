// Created on: 2000-07-03
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

// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.1

#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_ProductDefinitionRelationship)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_ProductDefinitionRelationship)
IMPLEMENT_DOWNCAST(StepBasic_ProductDefinitionRelationship,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_ProductDefinitionRelationship)

//=======================================================================
//function : StepBasic_ProductDefinitionRelationship
//purpose  : 
//=======================================================================

StepBasic_ProductDefinitionRelationship::StepBasic_ProductDefinitionRelationship ()
{
  defDescription = Standard_False;
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepBasic_ProductDefinitionRelationship::Init (const Handle(TCollection_HAsciiString) &aId,
                                                    const Handle(TCollection_HAsciiString) &aName,
                                                    const Standard_Boolean hasDescription,
                                                    const Handle(TCollection_HAsciiString) &aDescription,
                                                    const Handle(StepBasic_ProductDefinition) &aRelatingProductDefinition,
                                                    const Handle(StepBasic_ProductDefinition) &aRelatedProductDefinition)
{

  theId = aId;

  theName = aName;

  defDescription = hasDescription;
  if (defDescription) {
    theDescription = aDescription;
  }
  else theDescription.Nullify();

  theRelatingProductDefinition = aRelatingProductDefinition;

  theRelatedProductDefinition = aRelatedProductDefinition;
}

//=======================================================================
//function : Id
//purpose  : 
//=======================================================================

Handle(TCollection_HAsciiString) StepBasic_ProductDefinitionRelationship::Id () const
{
  return theId;
}

//=======================================================================
//function : SetId
//purpose  : 
//=======================================================================

void StepBasic_ProductDefinitionRelationship::SetId (const Handle(TCollection_HAsciiString) &aId)
{
  theId = aId;
}

//=======================================================================
//function : Name
//purpose  : 
//=======================================================================

Handle(TCollection_HAsciiString) StepBasic_ProductDefinitionRelationship::Name () const
{
  return theName;
}

//=======================================================================
//function : SetName
//purpose  : 
//=======================================================================

void StepBasic_ProductDefinitionRelationship::SetName (const Handle(TCollection_HAsciiString) &aName)
{
  theName = aName;
}

//=======================================================================
//function : Description
//purpose  : 
//=======================================================================

Handle(TCollection_HAsciiString) StepBasic_ProductDefinitionRelationship::Description () const
{
  return theDescription;
}

//=======================================================================
//function : SetDescription
//purpose  : 
//=======================================================================

void StepBasic_ProductDefinitionRelationship::SetDescription (const Handle(TCollection_HAsciiString) &aDescription)
{
  theDescription = aDescription;
}

//=======================================================================
//function : HasDescription
//purpose  : 
//=======================================================================

Standard_Boolean StepBasic_ProductDefinitionRelationship::HasDescription () const
{
  return defDescription;
}

//=======================================================================
//function : RelatingProductDefinition
//purpose  : 
//=======================================================================

Handle(StepBasic_ProductDefinition) StepBasic_ProductDefinitionRelationship::RelatingProductDefinition () const
{
  return theRelatingProductDefinition;
}

//=======================================================================
//function : SetRelatingProductDefinition
//purpose  : 
//=======================================================================

void StepBasic_ProductDefinitionRelationship::SetRelatingProductDefinition (const Handle(StepBasic_ProductDefinition) &aRelatingProductDefinition)
{
  theRelatingProductDefinition = aRelatingProductDefinition;
}

//=======================================================================
//function : RelatedProductDefinition
//purpose  : 
//=======================================================================

Handle(StepBasic_ProductDefinition) StepBasic_ProductDefinitionRelationship::RelatedProductDefinition () const
{
  return theRelatedProductDefinition;
}

//=======================================================================
//function : SetRelatedProductDefinition
//purpose  : 
//=======================================================================

void StepBasic_ProductDefinitionRelationship::SetRelatedProductDefinition (const Handle(StepBasic_ProductDefinition) &aRelatedProductDefinition)
{
  theRelatedProductDefinition = aRelatedProductDefinition;
}
