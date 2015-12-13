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

#include <StepShape_HArray1OfOrientedEdge.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <StepShape_OrientedEdge.hxx>
#include <StepShape_Path.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_Path)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepShape_TopologicalRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_Path)
IMPLEMENT_DOWNCAST(StepShape_Path,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_Path)


StepShape_Path::StepShape_Path ()  {}

void StepShape_Path::Init(
	const Handle(TCollection_HAsciiString)& aName)
{

	StepRepr_RepresentationItem::Init(aName);
}

void StepShape_Path::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepShape_HArray1OfOrientedEdge)& aEdgeList)
{
	// --- classe own fields ---
	edgeList = aEdgeList;
	// --- classe inherited fields ---
	StepRepr_RepresentationItem::Init(aName);
}


void StepShape_Path::SetEdgeList(const Handle(StepShape_HArray1OfOrientedEdge)& aEdgeList)
{
	edgeList = aEdgeList;
}

Handle(StepShape_HArray1OfOrientedEdge) StepShape_Path::EdgeList() const
{
	return edgeList;
}

Handle(StepShape_OrientedEdge) StepShape_Path::EdgeListValue(const Standard_Integer num) const
{
	return edgeList->Value(num);
}

Standard_Integer StepShape_Path::NbEdgeList () const
{
	if (edgeList.IsNull()) return 0;
	return edgeList->Length();
}
