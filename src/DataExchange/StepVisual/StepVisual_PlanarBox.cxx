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

#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement.hxx>
#include <StepVisual_PlanarBox.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepVisual_PlanarBox)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepVisual_PlanarExtent),
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepVisual_PlanarBox)
IMPLEMENT_DOWNCAST(StepVisual_PlanarBox,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepVisual_PlanarBox)


StepVisual_PlanarBox::StepVisual_PlanarBox ()  {}

void StepVisual_PlanarBox::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Standard_Real aSizeInX,
	const Standard_Real aSizeInY)
{

	StepVisual_PlanarExtent::Init(aName, aSizeInX, aSizeInY);
}

void StepVisual_PlanarBox::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Standard_Real aSizeInX,
	const Standard_Real aSizeInY,
	const StepGeom_Axis2Placement& aPlacement)
{
	// --- classe own fields ---
	placement = aPlacement;
	// --- classe inherited fields ---
	StepVisual_PlanarExtent::Init(aName, aSizeInX, aSizeInY);
}


void StepVisual_PlanarBox::SetPlacement(const StepGeom_Axis2Placement& aPlacement)
{
	placement = aPlacement;
}

StepGeom_Axis2Placement StepVisual_PlanarBox::Placement() const
{
	return placement;
}
