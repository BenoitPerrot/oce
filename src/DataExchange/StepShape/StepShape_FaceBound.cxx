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

#include <DataExchange/StepShape/StepShape_Loop.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <DataExchange/StepShape/StepShape_FaceBound.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_FaceBound)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepShape_TopologicalRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_FaceBound)
IMPLEMENT_DOWNCAST(StepShape_FaceBound,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_FaceBound)


StepShape_FaceBound::StepShape_FaceBound ()  {}

void StepShape_FaceBound::Init(
	const Handle(TCollection_HAsciiString)& aName)
{

	StepRepr_RepresentationItem::Init(aName);
}

void StepShape_FaceBound::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepShape_Loop)& aBound,
	const Standard_Boolean aOrientation)
{
	// --- classe own fields ---
	bound = aBound;
	orientation = aOrientation;
	// --- classe inherited fields ---
	StepRepr_RepresentationItem::Init(aName);
}


void StepShape_FaceBound::SetBound(const Handle(StepShape_Loop)& aBound)
{
	bound = aBound;
}

Handle(StepShape_Loop) StepShape_FaceBound::Bound() const
{
	return bound;
}

void StepShape_FaceBound::SetOrientation(const Standard_Boolean aOrientation)
{
	orientation = aOrientation;
}

Standard_Boolean StepShape_FaceBound::Orientation() const
{
	return orientation;
}
