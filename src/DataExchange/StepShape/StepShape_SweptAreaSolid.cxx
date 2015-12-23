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

#include <DataExchange/StepGeom/StepGeom_CurveBoundedSurface.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <DataExchange/StepShape/StepShape_SweptAreaSolid.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_SweptAreaSolid)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepShape_SolidModel),
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_SweptAreaSolid)
IMPLEMENT_DOWNCAST(StepShape_SweptAreaSolid,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_SweptAreaSolid)


StepShape_SweptAreaSolid::StepShape_SweptAreaSolid ()  {}

void StepShape_SweptAreaSolid::Init(
	const Handle(TCollection_HAsciiString)& aName)
{

	StepRepr_RepresentationItem::Init(aName);
}

void StepShape_SweptAreaSolid::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepGeom_CurveBoundedSurface)& aSweptArea)
{
	// --- classe own fields ---
	sweptArea = aSweptArea;
	// --- classe inherited fields ---
	StepRepr_RepresentationItem::Init(aName);
}


void StepShape_SweptAreaSolid::SetSweptArea(const Handle(StepGeom_CurveBoundedSurface)& aSweptArea)
{
	sweptArea = aSweptArea;
}

Handle(StepGeom_CurveBoundedSurface) StepShape_SweptAreaSolid::SweptArea() const
{
	return sweptArea;
}
