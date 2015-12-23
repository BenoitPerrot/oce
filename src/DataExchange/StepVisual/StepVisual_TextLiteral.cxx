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
#include <DataExchange/StepGeom/StepGeom_Axis2Placement.hxx>
#include <DataExchange/StepVisual/StepVisual_FontSelect.hxx>
#include <DataExchange/StepVisual/StepVisual_TextLiteral.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepVisual_TextLiteral)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepVisual_TextLiteral)
IMPLEMENT_DOWNCAST(StepVisual_TextLiteral,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepVisual_TextLiteral)


StepVisual_TextLiteral::StepVisual_TextLiteral ()  {}

void StepVisual_TextLiteral::Init(
	const Handle(TCollection_HAsciiString)& aName)
{

	StepRepr_RepresentationItem::Init(aName);
}

void StepVisual_TextLiteral::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(TCollection_HAsciiString)& aLiteral,
	const StepGeom_Axis2Placement& aPlacement,
	const Handle(TCollection_HAsciiString)& aAlignment,
	const StepVisual_TextPath aPath,
	const StepVisual_FontSelect& aFont)
{
	// --- classe own fields ---
	literal = aLiteral;
	placement = aPlacement;
	alignment = aAlignment;
	path = aPath;
	font = aFont;
	// --- classe inherited fields ---
	StepRepr_RepresentationItem::Init(aName);
}


void StepVisual_TextLiteral::SetLiteral(const Handle(TCollection_HAsciiString)& aLiteral)
{
	literal = aLiteral;
}

Handle(TCollection_HAsciiString) StepVisual_TextLiteral::Literal() const
{
	return literal;
}

void StepVisual_TextLiteral::SetPlacement(const StepGeom_Axis2Placement& aPlacement)
{
	placement = aPlacement;
}

StepGeom_Axis2Placement StepVisual_TextLiteral::Placement() const
{
	return placement;
}

void StepVisual_TextLiteral::SetAlignment(const Handle(TCollection_HAsciiString)& aAlignment)
{
	alignment = aAlignment;
}

Handle(TCollection_HAsciiString) StepVisual_TextLiteral::Alignment() const
{
	return alignment;
}

void StepVisual_TextLiteral::SetPath(const StepVisual_TextPath aPath)
{
	path = aPath;
}

StepVisual_TextPath StepVisual_TextLiteral::Path() const
{
	return path;
}

void StepVisual_TextLiteral::SetFont(const StepVisual_FontSelect& aFont)
{
	font = aFont;
}

StepVisual_FontSelect StepVisual_TextLiteral::Font() const
{
	return font;
}
