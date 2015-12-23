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

#include <DataExchange/StepAP214/StepAP214_HArray1OfAutoDesignGeneralOrgItem.hxx>
#include <DataExchange/StepBasic/StepBasic_Organization.hxx>
#include <DataExchange/StepBasic/StepBasic_OrganizationRole.hxx>
#include <DataExchange/StepAP214/StepAP214_AutoDesignGeneralOrgItem.hxx>
#include <DataExchange/StepAP214/StepAP214_AutoDesignOrganizationAssignment.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepAP214_AutoDesignOrganizationAssignment)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepBasic_OrganizationAssignment),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepAP214_AutoDesignOrganizationAssignment)
IMPLEMENT_DOWNCAST(StepAP214_AutoDesignOrganizationAssignment,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepAP214_AutoDesignOrganizationAssignment)


StepAP214_AutoDesignOrganizationAssignment::StepAP214_AutoDesignOrganizationAssignment ()  {}

void StepAP214_AutoDesignOrganizationAssignment::Init(
	const Handle(StepBasic_Organization)& aAssignedOrganization,
	const Handle(StepBasic_OrganizationRole)& aRole)
{

	StepBasic_OrganizationAssignment::Init(aAssignedOrganization, aRole);
}

void StepAP214_AutoDesignOrganizationAssignment::Init(
	const Handle(StepBasic_Organization)& aAssignedOrganization,
	const Handle(StepBasic_OrganizationRole)& aRole,
	const Handle(StepAP214_HArray1OfAutoDesignGeneralOrgItem)& aItems)
{
	// --- classe own fields ---
	items = aItems;
	// --- classe inherited fields ---
	StepBasic_OrganizationAssignment::Init(aAssignedOrganization, aRole);
}


void StepAP214_AutoDesignOrganizationAssignment::SetItems(const Handle(StepAP214_HArray1OfAutoDesignGeneralOrgItem)& aItems)
{
	items = aItems;
}

Handle(StepAP214_HArray1OfAutoDesignGeneralOrgItem) StepAP214_AutoDesignOrganizationAssignment::Items() const
{
	return items;
}

StepAP214_AutoDesignGeneralOrgItem StepAP214_AutoDesignOrganizationAssignment::ItemsValue(const Standard_Integer num) const
{
	return items->Value(num);
}

Standard_Integer StepAP214_AutoDesignOrganizationAssignment::NbItems () const
{
	return items->Length();
}
