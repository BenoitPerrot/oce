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

#include <DataExchange/StepData/StepData_StepReaderData.hxx>
#include <DataExchange/Interface/Interface_Check.hxx>
#include <DataExchange/StepShape/StepShape_Sphere.hxx>
#include <DataExchange/StepData/StepData_StepWriter.hxx>
#include <DataExchange/Interface/Interface_EntityIterator.hxx>
#include <DataExchange/RWStepShape/RWStepShape_RWSphere.hxx>
#include <DataExchange/StepGeom/StepGeom_Point.hxx>


#include <DataExchange/Interface/Interface_EntityIterator.hxx>


#include <DataExchange/StepShape/StepShape_Sphere.hxx>


RWStepShape_RWSphere::RWStepShape_RWSphere () {}

void RWStepShape_RWSphere::ReadStep
	(const Handle(StepData_StepReaderData)& data,
	 const Standard_Integer num,
	 Handle(Interface_Check)& ach,
	 const Handle(StepShape_Sphere)& ent) const
{


	// --- Number of Parameter Control ---

	if (!data->CheckNbParams(num,3,ach,"sphere")) return;

	// --- inherited field : name ---

	Handle(TCollection_HAsciiString) aName;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat1 =` not needed
	data->ReadString (num,1,"name",ach,aName);

	// --- own field : radius ---

	Standard_Real aRadius;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat2 =` not needed
	data->ReadReal (num,2,"radius",ach,aRadius);

	// --- own field : centre ---

	Handle(StepGeom_Point) aCentre;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat3 =` not needed
	data->ReadEntity(num, 3,"centre", ach, STANDARD_TYPE(StepGeom_Point), aCentre);

	//--- Initialisation of the read entity ---


	ent->Init(aName, aRadius, aCentre);
}


void RWStepShape_RWSphere::WriteStep
	(StepData_StepWriter& SW,
	 const Handle(StepShape_Sphere)& ent) const
{

	// --- inherited field name ---

	SW.Send(ent->Name());

	// --- own field : radius ---

	SW.Send(ent->Radius());

	// --- own field : centre ---

	SW.Send(ent->Centre());
}


void RWStepShape_RWSphere::Share(const Handle(StepShape_Sphere)& ent, Interface_EntityIterator& iter) const
{

	iter.GetOneItem(ent->Centre());
}

