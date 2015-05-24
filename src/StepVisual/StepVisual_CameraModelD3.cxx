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

#include <StepGeom_Axis2Placement3d.hxx>
#include <StepVisual_ViewVolume.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_CameraModelD3.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepVisual_CameraModelD3)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepVisual_CameraModel),
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepVisual_CameraModelD3)
IMPLEMENT_DOWNCAST(StepVisual_CameraModelD3,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepVisual_CameraModelD3)


StepVisual_CameraModelD3::StepVisual_CameraModelD3 ()  {}

void StepVisual_CameraModelD3::Init(
	const Handle(TCollection_HAsciiString)& aName)
{

	StepRepr_RepresentationItem::Init(aName);
}

void StepVisual_CameraModelD3::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepGeom_Axis2Placement3d)& aViewReferenceSystem,
	const Handle(StepVisual_ViewVolume)& aPerspectiveOfVolume)
{
	// --- classe own fields ---
	viewReferenceSystem = aViewReferenceSystem;
	perspectiveOfVolume = aPerspectiveOfVolume;
	// --- classe inherited fields ---
	StepRepr_RepresentationItem::Init(aName);
}


void StepVisual_CameraModelD3::SetViewReferenceSystem(const Handle(StepGeom_Axis2Placement3d)& aViewReferenceSystem)
{
	viewReferenceSystem = aViewReferenceSystem;
}

Handle(StepGeom_Axis2Placement3d) StepVisual_CameraModelD3::ViewReferenceSystem() const
{
	return viewReferenceSystem;
}

void StepVisual_CameraModelD3::SetPerspectiveOfVolume(const Handle(StepVisual_ViewVolume)& aPerspectiveOfVolume)
{
	perspectiveOfVolume = aPerspectiveOfVolume;
}

Handle(StepVisual_ViewVolume) StepVisual_CameraModelD3::PerspectiveOfVolume() const
{
	return perspectiveOfVolume;
}
