// Created on: 2002-12-12
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

// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.2

#include <StepFEA_FeaModel3d.hxx>
#include <DataExchange/StepElement/StepElement_Curve3dElementDescriptor.hxx>
#include <StepFEA_Curve3dElementProperty.hxx>
#include <DataExchange/StepElement/StepElement_ElementMaterial.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <StepRepr_HArray1OfRepresentationItem.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepFEA_HArray1OfNodeRepresentation.hxx>
#include <StepFEA_Curve3dElementRepresentation.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepFEA_Curve3dElementRepresentation)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepFEA_ElementRepresentation),
  STANDARD_TYPE(StepRepr_Representation),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepFEA_Curve3dElementRepresentation)
IMPLEMENT_DOWNCAST(StepFEA_Curve3dElementRepresentation,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepFEA_Curve3dElementRepresentation)

//=======================================================================
//function : StepFEA_Curve3dElementRepresentation
//purpose  : 
//=======================================================================

StepFEA_Curve3dElementRepresentation::StepFEA_Curve3dElementRepresentation ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepFEA_Curve3dElementRepresentation::Init (const Handle(TCollection_HAsciiString) &aRepresentation_Name,
                                                 const Handle(StepRepr_HArray1OfRepresentationItem) &aRepresentation_Items,
                                                 const Handle(StepRepr_RepresentationContext) &aRepresentation_ContextOfItems,
                                                 const Handle(StepFEA_HArray1OfNodeRepresentation) &aElementRepresentation_NodeList,
                                                 const Handle(StepFEA_FeaModel3d) &aModelRef,
                                                 const Handle(StepElement_Curve3dElementDescriptor) &aElementDescriptor,
                                                 const Handle(StepFEA_Curve3dElementProperty) &aProperty,
                                                 const Handle(StepElement_ElementMaterial) &aMaterial)
{
  StepFEA_ElementRepresentation::Init(aRepresentation_Name,
                                      aRepresentation_Items,
                                      aRepresentation_ContextOfItems,
                                      aElementRepresentation_NodeList);

  theModelRef = aModelRef;

  theElementDescriptor = aElementDescriptor;

  theProperty = aProperty;

  theMaterial = aMaterial;
}

//=======================================================================
//function : ModelRef
//purpose  : 
//=======================================================================

Handle(StepFEA_FeaModel3d) StepFEA_Curve3dElementRepresentation::ModelRef () const
{
  return theModelRef;
}

//=======================================================================
//function : SetModelRef
//purpose  : 
//=======================================================================

void StepFEA_Curve3dElementRepresentation::SetModelRef (const Handle(StepFEA_FeaModel3d) &aModelRef)
{
  theModelRef = aModelRef;
}

//=======================================================================
//function : ElementDescriptor
//purpose  : 
//=======================================================================

Handle(StepElement_Curve3dElementDescriptor) StepFEA_Curve3dElementRepresentation::ElementDescriptor () const
{
  return theElementDescriptor;
}

//=======================================================================
//function : SetElementDescriptor
//purpose  : 
//=======================================================================

void StepFEA_Curve3dElementRepresentation::SetElementDescriptor (const Handle(StepElement_Curve3dElementDescriptor) &aElementDescriptor)
{
  theElementDescriptor = aElementDescriptor;
}

//=======================================================================
//function : Property
//purpose  : 
//=======================================================================

Handle(StepFEA_Curve3dElementProperty) StepFEA_Curve3dElementRepresentation::Property () const
{
  return theProperty;
}

//=======================================================================
//function : SetProperty
//purpose  : 
//=======================================================================

void StepFEA_Curve3dElementRepresentation::SetProperty (const Handle(StepFEA_Curve3dElementProperty) &aProperty)
{
  theProperty = aProperty;
}

//=======================================================================
//function : Material
//purpose  : 
//=======================================================================

Handle(StepElement_ElementMaterial) StepFEA_Curve3dElementRepresentation::Material () const
{
  return theMaterial;
}

//=======================================================================
//function : SetMaterial
//purpose  : 
//=======================================================================

void StepFEA_Curve3dElementRepresentation::SetMaterial (const Handle(StepElement_ElementMaterial) &aMaterial)
{
  theMaterial = aMaterial;
}
