// Created on: 2000-05-11
// Created by: data exchange team
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

#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <StepBasic_DocumentType.hxx>
#include <StepBasic_Document.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_Document)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_Document)
IMPLEMENT_DOWNCAST(StepBasic_Document,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_Document)

//=======================================================================
//function : StepBasic_Document
//purpose  : 
//=======================================================================

StepBasic_Document::StepBasic_Document ()
{
  defDescription = Standard_False;
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepBasic_Document::Init (const Handle(TCollection_HAsciiString) &aId,
                               const Handle(TCollection_HAsciiString) &aName,
                               const Standard_Boolean hasDescription,
                               const Handle(TCollection_HAsciiString) &aDescription,
                               const Handle(StepBasic_DocumentType) &aKind)
{

  theId = aId;

  theName = aName;

  defDescription = hasDescription;
  if (defDescription) {
    theDescription = aDescription;
  }
  else theDescription.Nullify();

  theKind = aKind;
}

//=======================================================================
//function : Id
//purpose  : 
//=======================================================================

Handle(TCollection_HAsciiString) StepBasic_Document::Id () const
{
  return theId;
}

//=======================================================================
//function : SetId
//purpose  : 
//=======================================================================

void StepBasic_Document::SetId (const Handle(TCollection_HAsciiString) &aId)
{
  theId = aId;
}

//=======================================================================
//function : Name
//purpose  : 
//=======================================================================

Handle(TCollection_HAsciiString) StepBasic_Document::Name () const
{
  return theName;
}

//=======================================================================
//function : SetName
//purpose  : 
//=======================================================================

void StepBasic_Document::SetName (const Handle(TCollection_HAsciiString) &aName)
{
  theName = aName;
}

//=======================================================================
//function : Description
//purpose  : 
//=======================================================================

Handle(TCollection_HAsciiString) StepBasic_Document::Description () const
{
  return theDescription;
}

//=======================================================================
//function : SetDescription
//purpose  : 
//=======================================================================

void StepBasic_Document::SetDescription (const Handle(TCollection_HAsciiString) &aDescription)
{
  theDescription = aDescription;
}

//=======================================================================
//function : HasDescription
//purpose  : 
//=======================================================================

Standard_Boolean StepBasic_Document::HasDescription () const
{
  return defDescription;
}

//=======================================================================
//function : Kind
//purpose  : 
//=======================================================================

Handle(StepBasic_DocumentType) StepBasic_Document::Kind () const
{
  return theKind;
}

//=======================================================================
//function : SetKind
//purpose  : 
//=======================================================================

void StepBasic_Document::SetKind (const Handle(StepBasic_DocumentType) &aKind)
{
  theKind = aKind;
}
