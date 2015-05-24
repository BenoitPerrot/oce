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

#include <StepAP214_HArray1OfAutoDesignReferencingItem.hxx>
#include <StepBasic_Document.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepAP214_AutoDesignReferencingItem.hxx>
#include <StepAP214_AutoDesignDocumentReference.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepAP214_AutoDesignDocumentReference)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepBasic_DocumentReference),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepAP214_AutoDesignDocumentReference)
IMPLEMENT_DOWNCAST(StepAP214_AutoDesignDocumentReference,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepAP214_AutoDesignDocumentReference)


StepAP214_AutoDesignDocumentReference::StepAP214_AutoDesignDocumentReference ()    {  }

void  StepAP214_AutoDesignDocumentReference::Init
(const Handle(StepBasic_Document)& aAssignedDocument,
 const Handle(TCollection_HAsciiString)& aSource,
 const Handle(StepAP214_HArray1OfAutoDesignReferencingItem)& aItems)
{
  Init0 (aAssignedDocument,aSource);
  items = aItems;
}

Handle(StepAP214_HArray1OfAutoDesignReferencingItem) StepAP214_AutoDesignDocumentReference::Items () const
{  return items;  }

void  StepAP214_AutoDesignDocumentReference::SetItems (const Handle(StepAP214_HArray1OfAutoDesignReferencingItem)& aItems)
{  items = aItems;  }

StepAP214_AutoDesignReferencingItem  StepAP214_AutoDesignDocumentReference::ItemsValue (const Standard_Integer num) const
{  return items->Value(num);  }

Standard_Integer  StepAP214_AutoDesignDocumentReference::NbItems () const
{  return (items.IsNull() ? 0 : items->Length());  }
