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

#include <StepShape_HArray1OfShell.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <StepShape_Shell.hxx>
#include <StepShape_ShellBasedSurfaceModel.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_ShellBasedSurfaceModel)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_ShellBasedSurfaceModel)
IMPLEMENT_DOWNCAST(StepShape_ShellBasedSurfaceModel,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_ShellBasedSurfaceModel)


StepShape_ShellBasedSurfaceModel::StepShape_ShellBasedSurfaceModel ()  {}

void StepShape_ShellBasedSurfaceModel::Init(
	const Handle(TCollection_HAsciiString)& aName)
{

	StepRepr_RepresentationItem::Init(aName);
}

void StepShape_ShellBasedSurfaceModel::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepShape_HArray1OfShell)& aSbsmBoundary)
{
	// --- classe own fields ---
	sbsmBoundary = aSbsmBoundary;
	// --- classe inherited fields ---
	StepRepr_RepresentationItem::Init(aName);
}


void StepShape_ShellBasedSurfaceModel::SetSbsmBoundary(const Handle(StepShape_HArray1OfShell)& aSbsmBoundary)
{
	sbsmBoundary = aSbsmBoundary;
}

Handle(StepShape_HArray1OfShell) StepShape_ShellBasedSurfaceModel::SbsmBoundary() const
{
	return sbsmBoundary;
}

StepShape_Shell StepShape_ShellBasedSurfaceModel::SbsmBoundaryValue(const Standard_Integer num) const
{
	return sbsmBoundary->Value(num);
}

Standard_Integer StepShape_ShellBasedSurfaceModel::NbSbsmBoundary () const
{
	return sbsmBoundary->Length();
}
