// Created on: 2002-01-04
// Created by: data exchange team
// Copyright (c) 2002-2014 OPEN CASCADE SAS
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

// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.1

#include <DataExchange/StepShape/StepShape_Edge.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <DataExchange/StepShape/StepShape_Vertex.hxx>
#include <DataExchange/StepShape/StepShape_Subedge.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_Subedge)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepShape_Edge),
  STANDARD_TYPE(StepShape_TopologicalRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_Subedge)
IMPLEMENT_DOWNCAST(StepShape_Subedge,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_Subedge)

//=======================================================================
//function : StepShape_Subedge
//purpose  : 
//=======================================================================

StepShape_Subedge::StepShape_Subedge ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepShape_Subedge::Init (const Handle(TCollection_HAsciiString) &aRepresentationItem_Name,
                              const Handle(StepShape_Vertex) &aEdge_EdgeStart,
                              const Handle(StepShape_Vertex) &aEdge_EdgeEnd,
                              const Handle(StepShape_Edge) &aParentEdge)
{
  StepShape_Edge::Init(aRepresentationItem_Name,
                       aEdge_EdgeStart,
                       aEdge_EdgeEnd);

  theParentEdge = aParentEdge;
}

//=======================================================================
//function : ParentEdge
//purpose  : 
//=======================================================================

Handle(StepShape_Edge) StepShape_Subedge::ParentEdge () const
{
  return theParentEdge;
}

//=======================================================================
//function : SetParentEdge
//purpose  : 
//=======================================================================

void StepShape_Subedge::SetParentEdge (const Handle(StepShape_Edge) &aParentEdge)
{
  theParentEdge = aParentEdge;
}
