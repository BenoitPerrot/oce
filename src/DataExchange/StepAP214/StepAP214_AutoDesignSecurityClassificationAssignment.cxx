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

#include <StepBasic_HArray1OfApproval.hxx>
#include <StepBasic_SecurityClassification.hxx>
#include <StepBasic_Approval.hxx>
#include <DataExchange/StepAP214/StepAP214_AutoDesignSecurityClassificationAssignment.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepAP214_AutoDesignSecurityClassificationAssignment)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepBasic_SecurityClassificationAssignment),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepAP214_AutoDesignSecurityClassificationAssignment)
IMPLEMENT_DOWNCAST(StepAP214_AutoDesignSecurityClassificationAssignment,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepAP214_AutoDesignSecurityClassificationAssignment)


StepAP214_AutoDesignSecurityClassificationAssignment::StepAP214_AutoDesignSecurityClassificationAssignment ()  {}

void StepAP214_AutoDesignSecurityClassificationAssignment::Init(
	const Handle(StepBasic_SecurityClassification)& aAssignedSecurityClassification)
{

	StepBasic_SecurityClassificationAssignment::Init(aAssignedSecurityClassification);
}

void StepAP214_AutoDesignSecurityClassificationAssignment::Init(
	const Handle(StepBasic_SecurityClassification)& aAssignedSecurityClassification,
	const Handle(StepBasic_HArray1OfApproval)& aItems)
{
	// --- classe own fields ---
	items = aItems;
	// --- classe inherited fields ---
	StepBasic_SecurityClassificationAssignment::Init(aAssignedSecurityClassification);
}


void StepAP214_AutoDesignSecurityClassificationAssignment::SetItems(const Handle(StepBasic_HArray1OfApproval)& aItems)
{
	items = aItems;
}

Handle(StepBasic_HArray1OfApproval) StepAP214_AutoDesignSecurityClassificationAssignment::Items() const
{
	return items;
}

Handle(StepBasic_Approval) StepAP214_AutoDesignSecurityClassificationAssignment::ItemsValue(const Standard_Integer num) const
{
	return items->Value(num);
}

Standard_Integer StepAP214_AutoDesignSecurityClassificationAssignment::NbItems () const
{
	if (items.IsNull()) return 0;
	return items->Length();
}
