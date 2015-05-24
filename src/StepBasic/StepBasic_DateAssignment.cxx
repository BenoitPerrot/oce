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

#include <StepBasic_Date.hxx>
#include <StepBasic_DateRole.hxx>
#include <StepBasic_DateAssignment.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_DateAssignment)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_DateAssignment)
IMPLEMENT_DOWNCAST(StepBasic_DateAssignment,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_DateAssignment)

void StepBasic_DateAssignment::Init(
	const Handle(StepBasic_Date)& aAssignedDate,
	const Handle(StepBasic_DateRole)& aRole)
{
	// --- classe own fields ---
	assignedDate = aAssignedDate;
	role = aRole;
}


void StepBasic_DateAssignment::SetAssignedDate(const Handle(StepBasic_Date)& aAssignedDate)
{
	assignedDate = aAssignedDate;
}

Handle(StepBasic_Date) StepBasic_DateAssignment::AssignedDate() const
{
	return assignedDate;
}

void StepBasic_DateAssignment::SetRole(const Handle(StepBasic_DateRole)& aRole)
{
	role = aRole;
}

Handle(StepBasic_DateRole) StepBasic_DateAssignment::Role() const
{
	return role;
}
