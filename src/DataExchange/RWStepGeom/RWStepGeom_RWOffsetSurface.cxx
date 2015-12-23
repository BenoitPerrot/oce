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
#include <DataExchange/StepGeom/StepGeom_OffsetSurface.hxx>
#include <DataExchange/StepData/StepData_StepWriter.hxx>
#include <DataExchange/Interface/Interface_EntityIterator.hxx>
#include <DataExchange/RWStepGeom/RWStepGeom_RWOffsetSurface.hxx>
#include <DataExchange/StepGeom/StepGeom_Surface.hxx>
#include <DataExchange/StepData/StepData_Logical.hxx>


#include <DataExchange/Interface/Interface_EntityIterator.hxx>


#include <DataExchange/StepGeom/StepGeom_OffsetSurface.hxx>


RWStepGeom_RWOffsetSurface::RWStepGeom_RWOffsetSurface () {}

void RWStepGeom_RWOffsetSurface::ReadStep
	(const Handle(StepData_StepReaderData)& data,
	 const Standard_Integer num,
	 Handle(Interface_Check)& ach,
	 const Handle(StepGeom_OffsetSurface)& ent) const
{


	// --- Number of Parameter Control ---

	if (!data->CheckNbParams(num,4,ach,"offset_surface")) return;

	// --- inherited field : name ---

	Handle(TCollection_HAsciiString) aName;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat1 =` not needed
	data->ReadString (num,1,"name",ach,aName);

	// --- own field : basisSurface ---

	Handle(StepGeom_Surface) aBasisSurface;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat2 =` not needed
	data->ReadEntity(num, 2,"basis_surface", ach, STANDARD_TYPE(StepGeom_Surface), aBasisSurface);

	// --- own field : distance ---

	Standard_Real aDistance;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat3 =` not needed
	data->ReadReal (num,3,"distance",ach,aDistance);

	// --- own field : selfIntersect ---

	StepData_Logical aSelfIntersect;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat4 =` not needed
	data->ReadLogical (num,4,"self_intersect",ach,aSelfIntersect);

	//--- Initialisation of the read entity ---


	ent->Init(aName, aBasisSurface, aDistance, aSelfIntersect);
}


void RWStepGeom_RWOffsetSurface::WriteStep
	(StepData_StepWriter& SW,
	 const Handle(StepGeom_OffsetSurface)& ent) const
{

	// --- inherited field name ---

	SW.Send(ent->Name());

	// --- own field : basisSurface ---

	SW.Send(ent->BasisSurface());

	// --- own field : distance ---

	SW.Send(ent->Distance());

	// --- own field : selfIntersect ---

	SW.SendLogical(ent->SelfIntersect());
}


void RWStepGeom_RWOffsetSurface::Share(const Handle(StepGeom_OffsetSurface)& ent, Interface_EntityIterator& iter) const
{

	iter.GetOneItem(ent->BasisSurface());
}

