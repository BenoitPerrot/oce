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

#include <DataExchange/StepShape/StepShape_HArray1OfValueQualifier.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <DataExchange/StepShape/StepShape_ValueQualifier.hxx>
#include <DataExchange/StepShape/StepShape_QualifiedRepresentationItem.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_QualifiedRepresentationItem)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_QualifiedRepresentationItem)
IMPLEMENT_DOWNCAST(StepShape_QualifiedRepresentationItem,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_QualifiedRepresentationItem)

StepShape_QualifiedRepresentationItem::StepShape_QualifiedRepresentationItem  ()    {  }

void  StepShape_QualifiedRepresentationItem::Init
  (const Handle(TCollection_HAsciiString)& aName,
   const Handle(StepShape_HArray1OfValueQualifier)& qualifiers)
{
  StepRepr_RepresentationItem::Init (aName);
  theQualifiers = qualifiers;
}


Handle(StepShape_HArray1OfValueQualifier)  StepShape_QualifiedRepresentationItem::Qualifiers () const
{  return theQualifiers;  }

Standard_Integer  StepShape_QualifiedRepresentationItem::NbQualifiers () const
{  return theQualifiers->Length();  }

void  StepShape_QualifiedRepresentationItem::SetQualifiers
  (const Handle(StepShape_HArray1OfValueQualifier)& qualifiers)
{  theQualifiers = qualifiers;  }

StepShape_ValueQualifier  StepShape_QualifiedRepresentationItem::QualifiersValue
  (const Standard_Integer num) const
{  return theQualifiers->Value(num);  }

void  StepShape_QualifiedRepresentationItem::SetQualifiersValue
  (const Standard_Integer num, const StepShape_ValueQualifier& aqualifier)
{  theQualifiers->SetValue (num,aqualifier);  }
