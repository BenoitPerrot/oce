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

#include <DataExchange/StepAP214/StepAP214_HArray1OfAutoDesignDateAndTimeItem.hxx>
#include <DataExchange/StepBasic/StepBasic_DateAndTime.hxx>
#include <DataExchange/StepBasic/StepBasic_DateTimeRole.hxx>
#include <DataExchange/StepAP214/StepAP214_AutoDesignDateAndTimeItem.hxx>
#include <DataExchange/StepAP214/StepAP214_AutoDesignActualDateAndTimeAssignment.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepAP214_AutoDesignActualDateAndTimeAssignment)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepBasic_DateAndTimeAssignment),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepAP214_AutoDesignActualDateAndTimeAssignment)
IMPLEMENT_DOWNCAST(StepAP214_AutoDesignActualDateAndTimeAssignment,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepAP214_AutoDesignActualDateAndTimeAssignment)


StepAP214_AutoDesignActualDateAndTimeAssignment::StepAP214_AutoDesignActualDateAndTimeAssignment ()  {}

void StepAP214_AutoDesignActualDateAndTimeAssignment::Init(
	const Handle(StepBasic_DateAndTime)& aAssignedDateAndTime,
	const Handle(StepBasic_DateTimeRole)& aRole)
{

	StepBasic_DateAndTimeAssignment::Init(aAssignedDateAndTime, aRole);
}

void StepAP214_AutoDesignActualDateAndTimeAssignment::Init(
	const Handle(StepBasic_DateAndTime)& aAssignedDateAndTime,
	const Handle(StepBasic_DateTimeRole)& aRole,
	const Handle(StepAP214_HArray1OfAutoDesignDateAndTimeItem)& aItems)
{
	// --- classe own fields ---
	items = aItems;
	// --- classe inherited fields ---
	StepBasic_DateAndTimeAssignment::Init(aAssignedDateAndTime, aRole);
}


void StepAP214_AutoDesignActualDateAndTimeAssignment::SetItems(const Handle(StepAP214_HArray1OfAutoDesignDateAndTimeItem)& aItems)
{
	items = aItems;
}

Handle(StepAP214_HArray1OfAutoDesignDateAndTimeItem) StepAP214_AutoDesignActualDateAndTimeAssignment::Items() const
{
	return items;
}

StepAP214_AutoDesignDateAndTimeItem StepAP214_AutoDesignActualDateAndTimeAssignment::ItemsValue(const Standard_Integer num) const
{
	return items->Value(num);
}

Standard_Integer StepAP214_AutoDesignActualDateAndTimeAssignment::NbItems () const
{
	return items->Length();
}
