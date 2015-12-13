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

#include <StepBasic_PersonAndOrganization.hxx>
#include <StepBasic_PersonAndOrganizationRole.hxx>
#include <StepBasic_PersonAndOrganizationAssignment.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_PersonAndOrganizationAssignment)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_PersonAndOrganizationAssignment)
IMPLEMENT_DOWNCAST(StepBasic_PersonAndOrganizationAssignment,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_PersonAndOrganizationAssignment)

void StepBasic_PersonAndOrganizationAssignment::Init(
	const Handle(StepBasic_PersonAndOrganization)& aAssignedPersonAndOrganization,
	const Handle(StepBasic_PersonAndOrganizationRole)& aRole)
{
	// --- classe own fields ---
	assignedPersonAndOrganization = aAssignedPersonAndOrganization;
	role = aRole;
}


void StepBasic_PersonAndOrganizationAssignment::SetAssignedPersonAndOrganization(const Handle(StepBasic_PersonAndOrganization)& aAssignedPersonAndOrganization)
{
	assignedPersonAndOrganization = aAssignedPersonAndOrganization;
}

Handle(StepBasic_PersonAndOrganization) StepBasic_PersonAndOrganizationAssignment::AssignedPersonAndOrganization() const
{
	return assignedPersonAndOrganization;
}

void StepBasic_PersonAndOrganizationAssignment::SetRole(const Handle(StepBasic_PersonAndOrganizationRole)& aRole)
{
	role = aRole;
}

Handle(StepBasic_PersonAndOrganizationRole) StepBasic_PersonAndOrganizationAssignment::Role() const
{
	return role;
}
