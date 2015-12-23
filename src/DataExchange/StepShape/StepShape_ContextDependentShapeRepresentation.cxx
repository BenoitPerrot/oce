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

#include <DataExchange/StepRepr/StepRepr_ShapeRepresentationRelationship.hxx>
#include <DataExchange/StepRepr/StepRepr_ProductDefinitionShape.hxx>
#include <DataExchange/StepShape/StepShape_ContextDependentShapeRepresentation.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_ContextDependentShapeRepresentation)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_ContextDependentShapeRepresentation)
IMPLEMENT_DOWNCAST(StepShape_ContextDependentShapeRepresentation,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_ContextDependentShapeRepresentation)

StepShape_ContextDependentShapeRepresentation::StepShape_ContextDependentShapeRepresentation ()    {  }

void  StepShape_ContextDependentShapeRepresentation::Init
  (const Handle(StepRepr_ShapeRepresentationRelationship)& aRepRel,
   const Handle(StepRepr_ProductDefinitionShape)& aProRel)
{
  theRepRel = aRepRel;
  theProRel = aProRel;
}

Handle(StepRepr_ShapeRepresentationRelationship)  StepShape_ContextDependentShapeRepresentation::RepresentationRelation () const
{  return theRepRel;  }

void  StepShape_ContextDependentShapeRepresentation::SetRepresentationRelation (const Handle(StepRepr_ShapeRepresentationRelationship)& aRepRel)
{  theRepRel = aRepRel;  }

Handle(StepRepr_ProductDefinitionShape)  StepShape_ContextDependentShapeRepresentation::RepresentedProductRelation () const
{  return theProRel;  }

void  StepShape_ContextDependentShapeRepresentation::SetRepresentedProductRelation (const Handle(StepRepr_ProductDefinitionShape)& aProRel)
{  theProRel = aProRel;  }
