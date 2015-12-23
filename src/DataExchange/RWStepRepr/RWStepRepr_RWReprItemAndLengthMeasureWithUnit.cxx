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

#include <StepData_StepReaderData.hxx>
#include <DataExchange/Interface/Interface_Check.hxx>
#include <StepRepr_ReprItemAndLengthMeasureWithUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <DataExchange/RWStepRepr/RWStepRepr_RWReprItemAndLengthMeasureWithUnit.hxx>

#include <StepBasic_MeasureValueMember.hxx>
#include <StepBasic_Unit.hxx>
#include <StepBasic_MeasureWithUnit.hxx>


//=======================================================================
//function : RWSteprepr_RWReprItemAndLengthMeasureWithUnit
//purpose  : 
//=======================================================================

RWStepRepr_RWReprItemAndLengthMeasureWithUnit::RWStepRepr_RWReprItemAndLengthMeasureWithUnit() {}


//=======================================================================
//function : ReadStep
//purpose  : 
//=======================================================================

void RWStepRepr_RWReprItemAndLengthMeasureWithUnit::ReadStep
	(const Handle(StepData_StepReaderData)& data,
	 const Standard_Integer num0,
	 Handle(Interface_Check)& ach,
	 const Handle(StepRepr_ReprItemAndLengthMeasureWithUnit)& ent) const
{
  Standard_Integer num = 0;//num0;
  data->NamedForComplex("MEASURE_WITH_UNIT",num0,num,ach);
  if (!data->CheckNbParams(num,2,ach,"measure_with_unit")) return;
  // --- own field : valueComponent ---
  Handle(StepBasic_MeasureValueMember) mvc = new StepBasic_MeasureValueMember;
  data->ReadMember (num,1, "value_component", ach, mvc);
  // --- own field : unitComponent ---
  StepBasic_Unit aUnitComponent;
  data->ReadEntity(num, 2,"unit_component", ach, aUnitComponent);
  Handle(StepBasic_MeasureWithUnit) aMeasureWithUnit = new StepBasic_MeasureWithUnit;
  aMeasureWithUnit->Init(mvc, aUnitComponent);

  data->NamedForComplex("REPRESENTATION_ITEM",num0,num,ach);
  if (!data->CheckNbParams(num,1,ach,"representation_item")) return;
  // --- own field : name ---
  Handle(TCollection_HAsciiString) aName;
  data->ReadString (num,1,"name",ach,aName);
  Handle(StepRepr_RepresentationItem) aReprItem = new StepRepr_RepresentationItem;
  aReprItem->Init(aName);

  //--- Initialisation of the read entity ---
  ent->Init(aMeasureWithUnit,aReprItem);
}


//=======================================================================
//function : WriteStep
//purpose  : 
//=======================================================================

void RWStepRepr_RWReprItemAndLengthMeasureWithUnit::WriteStep
	(StepData_StepWriter& SW,
	 const Handle(StepRepr_ReprItemAndLengthMeasureWithUnit)& ent) const
{
  SW.StartEntity("LENGTH_MEASURE_WITH_UNIT");
  SW.StartEntity("MEASURE_REPRESENTATION_ITEM");
  SW.StartEntity("MEASURE_WITH_UNIT");
  SW.Send(ent->GetMeasureWithUnit()->ValueComponentMember());
  SW.Send(ent->GetMeasureWithUnit()->UnitComponent().Value());
  SW.StartEntity("REPRESENTATION_ITEM");
  SW.Send(ent->Name());
}
