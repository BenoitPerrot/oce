// Created on: 1999-09-08
// Created by: Andrey BETENEV
// Copyright (c) 1999-1999 Matra Datavision
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

#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureValueMember.hxx>
#include <StepBasic_Unit.hxx>
#include <StepRepr_MeasureRepresentationItem.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepRepr_MeasureRepresentationItem)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepRepr_MeasureRepresentationItem)
IMPLEMENT_DOWNCAST(StepRepr_MeasureRepresentationItem,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepRepr_MeasureRepresentationItem)

//=======================================================================
//function : StepRepr_MeasureRepresentationItem
//purpose  : 
//=======================================================================

StepRepr_MeasureRepresentationItem::StepRepr_MeasureRepresentationItem() 
{
  myMeasure = new StepBasic_MeasureWithUnit;
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepRepr_MeasureRepresentationItem::Init (const Handle(TCollection_HAsciiString) &aName,
					       const Handle(StepBasic_MeasureValueMember) &aValueComponent,
					       const StepBasic_Unit &aUnitComponent)
{
  StepRepr_RepresentationItem::Init ( aName );
  myMeasure->Init ( aValueComponent, aUnitComponent );
}

//=======================================================================
//function : SetMeasureUnit
//purpose  : 
//=======================================================================

void StepRepr_MeasureRepresentationItem::SetMeasure (const Handle(StepBasic_MeasureWithUnit) &Measure)
{
  myMeasure = Measure;
}

//=======================================================================
//function : Measure
//purpose  : 
//=======================================================================

Handle(StepBasic_MeasureWithUnit) StepRepr_MeasureRepresentationItem::Measure () const
{
  return myMeasure;
}
