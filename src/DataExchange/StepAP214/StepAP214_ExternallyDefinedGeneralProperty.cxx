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
#include <StepAP214_ExternallyDefinedGeneralProperty.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepAP214_ExternallyDefinedGeneralProperty)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepBasic_GeneralProperty),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepAP214_ExternallyDefinedGeneralProperty)
IMPLEMENT_DOWNCAST(StepAP214_ExternallyDefinedGeneralProperty,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepAP214_ExternallyDefinedGeneralProperty)

//=======================================================================
//function : StepAP214_ExternallyDefinedGeneralProperty
//purpose  : 
//=======================================================================

StepAP214_ExternallyDefinedGeneralProperty::StepAP214_ExternallyDefinedGeneralProperty ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepAP214_ExternallyDefinedGeneralProperty::Init (const Handle(TCollection_HAsciiString) &aGeneralProperty_Id,
                                                       const Handle(TCollection_HAsciiString) &aGeneralProperty_Name,
                                                       const Standard_Boolean hasGeneralProperty_Description,
                                                       const Handle(TCollection_HAsciiString) &aGeneralProperty_Description,
                                                       const StepBasic_SourceItem &aExternallyDefinedItem_ItemId,
                                                       const Handle(StepBasic_ExternalSource) &aExternallyDefinedItem_Source)
{
  StepBasic_GeneralProperty::Init(aGeneralProperty_Id,
                                  aGeneralProperty_Name,
                                  hasGeneralProperty_Description,
                                  aGeneralProperty_Description);
  theExternallyDefinedItem->Init(aExternallyDefinedItem_ItemId,
                                 aExternallyDefinedItem_Source);
}

//=======================================================================
//function : ExternallyDefinedItem
//purpose  : 
//=======================================================================

Handle(StepBasic_ExternallyDefinedItem) StepAP214_ExternallyDefinedGeneralProperty::ExternallyDefinedItem () const
{
  return theExternallyDefinedItem;
}

//=======================================================================
//function : SetExternallyDefinedItem
//purpose  : 
//=======================================================================

void StepAP214_ExternallyDefinedGeneralProperty::SetExternallyDefinedItem (const Handle(StepBasic_ExternallyDefinedItem) &aExternallyDefinedItem)
{
  theExternallyDefinedItem = aExternallyDefinedItem;
}
