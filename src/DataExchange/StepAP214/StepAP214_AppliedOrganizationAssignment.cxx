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

#include <DataExchange/StepAP214/StepAP214_HArray1OfOrganizationItem.hxx>
#include <StepBasic_Organization.hxx>
#include <StepBasic_OrganizationRole.hxx>
#include <DataExchange/StepAP214/StepAP214_OrganizationItem.hxx>
#include <DataExchange/StepAP214/StepAP214_AppliedOrganizationAssignment.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepAP214_AppliedOrganizationAssignment)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepBasic_OrganizationAssignment),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepAP214_AppliedOrganizationAssignment)
IMPLEMENT_DOWNCAST(StepAP214_AppliedOrganizationAssignment,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepAP214_AppliedOrganizationAssignment)


StepAP214_AppliedOrganizationAssignment::StepAP214_AppliedOrganizationAssignment ()  {}

void StepAP214_AppliedOrganizationAssignment::Init(
	const Handle(StepBasic_Organization)& aAssignedOrganization,
	const Handle(StepBasic_OrganizationRole)& aRole)
{

	StepBasic_OrganizationAssignment::Init(aAssignedOrganization, aRole);
}

void StepAP214_AppliedOrganizationAssignment::Init(
	const Handle(StepBasic_Organization)& aAssignedOrganization,
	const Handle(StepBasic_OrganizationRole)& aRole,
	const Handle(StepAP214_HArray1OfOrganizationItem)& aItems)
{
	// --- classe own fields ---
	items = aItems;
	// --- classe inherited fields ---
	StepBasic_OrganizationAssignment::Init(aAssignedOrganization, aRole);
}


void StepAP214_AppliedOrganizationAssignment::SetItems(const Handle(StepAP214_HArray1OfOrganizationItem)& aItems)
{
	items = aItems;
}

Handle(StepAP214_HArray1OfOrganizationItem) StepAP214_AppliedOrganizationAssignment::Items() const
{
	return items;
}

StepAP214_OrganizationItem StepAP214_AppliedOrganizationAssignment::ItemsValue(const Standard_Integer num) const
{
	return items->Value(num);
}

Standard_Integer StepAP214_AppliedOrganizationAssignment::NbItems () const
{
	return items->Length();
}
