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

#include <StepBasic_Document.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <StepBasic_DocumentReference.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_DocumentReference)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_DocumentReference)
IMPLEMENT_DOWNCAST(StepBasic_DocumentReference,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_DocumentReference)

void  StepBasic_DocumentReference::Init0
  (const Handle(StepBasic_Document)& aAssignedDocument,
   const Handle(TCollection_HAsciiString)& aSource)
{
  theAssignedDocument = aAssignedDocument;
  theSource = aSource;
}

Handle(StepBasic_Document)  StepBasic_DocumentReference::AssignedDocument () const
{  return theAssignedDocument;  }

void  StepBasic_DocumentReference::SetAssignedDocument (const Handle(StepBasic_Document)& aAssignedDocument)
{  theAssignedDocument = aAssignedDocument;  }

Handle(TCollection_HAsciiString)  StepBasic_DocumentReference::Source () const
{  return theSource;  }

void  StepBasic_DocumentReference::SetSource (const Handle(TCollection_HAsciiString)& aSource)
{  theSource = aSource;  }
