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

#include <StepRepr_RepresentationItem.hxx>
#include <StepRepr_Representation.hxx>
#include <StepRepr_RepresentationMap.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepRepr_RepresentationMap)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepRepr_RepresentationMap)
IMPLEMENT_DOWNCAST(StepRepr_RepresentationMap,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepRepr_RepresentationMap)


StepRepr_RepresentationMap::StepRepr_RepresentationMap ()  {}

void StepRepr_RepresentationMap::Init(
	const Handle(StepRepr_RepresentationItem)& aMappingOrigin,
	const Handle(StepRepr_Representation)& aMappedRepresentation)
{
	// --- classe own fields ---
	mappingOrigin = aMappingOrigin;
	mappedRepresentation = aMappedRepresentation;
}


void StepRepr_RepresentationMap::SetMappingOrigin(const Handle(StepRepr_RepresentationItem)& aMappingOrigin)
{
	mappingOrigin = aMappingOrigin;
}

Handle(StepRepr_RepresentationItem) StepRepr_RepresentationMap::MappingOrigin() const
{
	return mappingOrigin;
}

void StepRepr_RepresentationMap::SetMappedRepresentation(const Handle(StepRepr_Representation)& aMappedRepresentation)
{
	mappedRepresentation = aMappedRepresentation;
}

Handle(StepRepr_Representation) StepRepr_RepresentationMap::MappedRepresentation() const
{
	return mappedRepresentation;
}
