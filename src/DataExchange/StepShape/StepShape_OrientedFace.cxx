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

#include <DataExchange/StepShape/StepShape_Face.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <DataExchange/StepShape/StepShape_HArray1OfFaceBound.hxx>
#include <DataExchange/StepShape/StepShape_FaceBound.hxx>
#include <DataExchange/StepShape/StepShape_OrientedFace.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_OrientedFace)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepShape_Face),
  STANDARD_TYPE(StepShape_TopologicalRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_OrientedFace)
IMPLEMENT_DOWNCAST(StepShape_OrientedFace,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_OrientedFace)


StepShape_OrientedFace::StepShape_OrientedFace ()  {}

void StepShape_OrientedFace::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepShape_HArray1OfFaceBound)& aBounds)
{

	StepShape_Face::Init(aName, aBounds);
}

void StepShape_OrientedFace::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepShape_Face)& aFaceElement,
	const Standard_Boolean aOrientation)
{
	// --- classe own fields ---
	faceElement = aFaceElement;
	orientation = aOrientation;
	// --- classe inherited fields ---
	Handle(StepShape_HArray1OfFaceBound) aBounds;
	aBounds.Nullify();
	StepShape_Face::Init(aName, aBounds);
}


void StepShape_OrientedFace::SetFaceElement(const Handle(StepShape_Face)& aFaceElement)
{
	faceElement = aFaceElement;
}

Handle(StepShape_Face) StepShape_OrientedFace::FaceElement() const
{
	return faceElement;
}

void StepShape_OrientedFace::SetOrientation(const Standard_Boolean aOrientation)
{
	orientation = aOrientation;
}

Standard_Boolean StepShape_OrientedFace::Orientation() const
{
	return orientation;
}

void StepShape_OrientedFace::SetBounds(const Handle(StepShape_HArray1OfFaceBound)& /*aBounds*/)
{
	// WARNING : the field is redefined.
	// field set up forbidden.
	cout << "Field is redefined, SetUp Forbidden" << endl;
}

Handle(StepShape_HArray1OfFaceBound) StepShape_OrientedFace::Bounds() const
{
  // WARNING : the field is redefined.
  // method body is not yet automaticly wrote
  // Attention, cette modif. est juste pour la compilation  
  return faceElement->Bounds();

}

Handle(StepShape_FaceBound) StepShape_OrientedFace::BoundsValue(const Standard_Integer num) const
{
  // WARNING : the field is redefined.
  // method body is not yet automaticly wrote
  // Attention, cette modif. est juste pour la compilation  
  return faceElement->BoundsValue(num);
}

Standard_Integer StepShape_OrientedFace::NbBounds () const
{
  // WARNING : the field is redefined.
  // method body is not yet automaticly wrote
  // Attention, cette modif. est juste pour la compilation  
  return faceElement->NbBounds();
}
