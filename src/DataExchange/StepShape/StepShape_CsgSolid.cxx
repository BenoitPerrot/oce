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
#include <StepShape_CsgSelect.hxx>
#include <StepShape_CsgSolid.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_CsgSolid)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepShape_SolidModel),
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_CsgSolid)
IMPLEMENT_DOWNCAST(StepShape_CsgSolid,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_CsgSolid)


StepShape_CsgSolid::StepShape_CsgSolid ()  {}

void StepShape_CsgSolid::Init(
	const Handle(TCollection_HAsciiString)& aName)
{

	StepRepr_RepresentationItem::Init(aName);
}

void StepShape_CsgSolid::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const StepShape_CsgSelect& aTreeRootExpression)
{
	// --- classe own fields ---
	treeRootExpression = aTreeRootExpression;
	// --- classe inherited fields ---
	StepRepr_RepresentationItem::Init(aName);
}


void StepShape_CsgSolid::SetTreeRootExpression(const StepShape_CsgSelect& aTreeRootExpression)
{
	treeRootExpression = aTreeRootExpression;
}

StepShape_CsgSelect StepShape_CsgSolid::TreeRootExpression() const
{
	return treeRootExpression;
}
