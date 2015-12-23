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

#include <DataExchange/StepGeom/StepGeom_Axis2Placement3d.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <StepShape_Block.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_Block)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_Block)
IMPLEMENT_DOWNCAST(StepShape_Block,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_Block)


StepShape_Block::StepShape_Block ()  {}

void StepShape_Block::Init(
	const Handle(TCollection_HAsciiString)& aName)
{

	StepRepr_RepresentationItem::Init(aName);
}

void StepShape_Block::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepGeom_Axis2Placement3d)& aPosition,
	const Standard_Real aX,
	const Standard_Real aY,
	const Standard_Real aZ)
{
	// --- classe own fields ---
	position = aPosition;
	x = aX;
	y = aY;
	z = aZ;
	// --- classe inherited fields ---
	StepRepr_RepresentationItem::Init(aName);
}


void StepShape_Block::SetPosition(const Handle(StepGeom_Axis2Placement3d)& aPosition)
{
	position = aPosition;
}

Handle(StepGeom_Axis2Placement3d) StepShape_Block::Position() const
{
	return position;
}

void StepShape_Block::SetX(const Standard_Real aX)
{
	x = aX;
}

Standard_Real StepShape_Block::X() const
{
	return x;
}

void StepShape_Block::SetY(const Standard_Real aY)
{
	y = aY;
}

Standard_Real StepShape_Block::Y() const
{
	return y;
}

void StepShape_Block::SetZ(const Standard_Real aZ)
{
	z = aZ;
}

Standard_Real StepShape_Block::Z() const
{
	return z;
}
