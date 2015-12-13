// Created on: 2000-05-10
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

#include <StepBasic_ExternallyDefinedItem.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_SourceItem.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <StepAP214_ExternallyDefinedClass.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepAP214_ExternallyDefinedClass)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepAP214_Class),
  STANDARD_TYPE(StepBasic_Group),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepAP214_ExternallyDefinedClass)
IMPLEMENT_DOWNCAST(StepAP214_ExternallyDefinedClass,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepAP214_ExternallyDefinedClass)

//=======================================================================
//function : StepAP214_ExternallyDefinedClass
//purpose  : 
//=======================================================================

StepAP214_ExternallyDefinedClass::StepAP214_ExternallyDefinedClass ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepAP214_ExternallyDefinedClass::Init (const Handle(TCollection_HAsciiString) &aGroup_Name,
                                             const Standard_Boolean hasGroup_Description,
                                             const Handle(TCollection_HAsciiString) &aGroup_Description,
                                             const StepBasic_SourceItem &aExternallyDefinedItem_ItemId,
                                             const Handle(StepBasic_ExternalSource) &aExternallyDefinedItem_Source)
{
  StepAP214_Class::Init(aGroup_Name,
                        hasGroup_Description,
                        aGroup_Description);
  theExternallyDefinedItem->Init(aExternallyDefinedItem_ItemId,
                                 aExternallyDefinedItem_Source);
}

//=======================================================================
//function : ExternallyDefinedItem
//purpose  : 
//=======================================================================

Handle(StepBasic_ExternallyDefinedItem) StepAP214_ExternallyDefinedClass::ExternallyDefinedItem () const
{
  return theExternallyDefinedItem;
}

//=======================================================================
//function : SetExternallyDefinedItem
//purpose  : 
//=======================================================================

void StepAP214_ExternallyDefinedClass::SetExternallyDefinedItem (const Handle(StepBasic_ExternallyDefinedItem) &aExternallyDefinedItem)
{
  theExternallyDefinedItem = aExternallyDefinedItem;
}
