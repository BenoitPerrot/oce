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

#include <StepGeom_Pcurve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_Edge.hxx>
#include <StepShape_SeamEdge.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_SeamEdge)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepShape_OrientedEdge),
  STANDARD_TYPE(StepShape_Edge),
  STANDARD_TYPE(StepShape_TopologicalRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_SeamEdge)
IMPLEMENT_DOWNCAST(StepShape_SeamEdge,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_SeamEdge)

//=======================================================================
//function : StepShape_SeamEdge
//purpose  : 
//=======================================================================

StepShape_SeamEdge::StepShape_SeamEdge ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepShape_SeamEdge::Init (const Handle(TCollection_HAsciiString) &aRepresentationItem_Name,
                               const Handle(StepShape_Edge) &aOrientedEdge_EdgeElement,
                               const Standard_Boolean aOrientedEdge_Orientation,
                               const Handle(StepGeom_Pcurve) &aPcurveReference)
{
  StepShape_OrientedEdge::Init(aRepresentationItem_Name,
                               aOrientedEdge_EdgeElement,
                               aOrientedEdge_Orientation);

  thePcurveReference = aPcurveReference;
}

//=======================================================================
//function : PcurveReference
//purpose  : 
//=======================================================================

Handle(StepGeom_Pcurve) StepShape_SeamEdge::PcurveReference () const
{
  return thePcurveReference;
}

//=======================================================================
//function : SetPcurveReference
//purpose  : 
//=======================================================================

void StepShape_SeamEdge::SetPcurveReference (const Handle(StepGeom_Pcurve) &aPcurveReference)
{
  thePcurveReference = aPcurveReference;
}
