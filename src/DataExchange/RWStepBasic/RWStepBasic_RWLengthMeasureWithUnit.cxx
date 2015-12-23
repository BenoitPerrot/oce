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

#include <DataExchange/StepData/StepData_StepReaderData.hxx>
#include <DataExchange/Interface/Interface_Check.hxx>
#include <DataExchange/StepBasic/StepBasic_LengthMeasureWithUnit.hxx>
#include <DataExchange/StepData/StepData_StepWriter.hxx>
#include <DataExchange/Interface/Interface_EntityIterator.hxx>
#include <DataExchange/RWStepBasic/RWStepBasic_RWLengthMeasureWithUnit.hxx>
#include <DataExchange/StepBasic/StepBasic_NamedUnit.hxx>
#include <DataExchange/StepBasic/StepBasic_MeasureValueMember.hxx>

#include <Foundation/TCollection/TCollection_AsciiString.hxx>

#include <DataExchange/Interface/Interface_EntityIterator.hxx>


#include <DataExchange/StepBasic/StepBasic_LengthMeasureWithUnit.hxx>

//=======================================================================
//function : RWStepBasic_RWLengthMeasureWithUnit
//purpose  : 
//=======================================================================

RWStepBasic_RWLengthMeasureWithUnit::RWStepBasic_RWLengthMeasureWithUnit () {}

//=======================================================================
//function : ReadStep
//purpose  : 
//=======================================================================

void RWStepBasic_RWLengthMeasureWithUnit::ReadStep (const Handle(StepData_StepReaderData)& data,
						    const Standard_Integer num,
						    Handle(Interface_Check)& ach,
						    const Handle(StepBasic_LengthMeasureWithUnit)& ent) const
{
  // --- Number of Parameter Control ---
  if (!data->CheckNbParams(num,2,ach,"length_measure_with_unit")) return;
  
  // --- inherited field : valueComponent ---
  // --- Update 12-02-96 by FMA , 31-MARS-1997 by CKY
  Handle(StepBasic_MeasureValueMember) mvc = new StepBasic_MeasureValueMember;
  data->ReadMember (num,1, "value_component", ach, mvc);
  
  // --- inherited field : unitComponent ---
  StepBasic_Unit aUnitComponent;
  data->ReadEntity(num, 2,"unit_component", ach, aUnitComponent);

  //--- Initialisation of the read entity ---
  ent->Init(mvc, aUnitComponent);
}

//=======================================================================
//function : WriteStep
//purpose  : 
//=======================================================================

void RWStepBasic_RWLengthMeasureWithUnit::WriteStep (StepData_StepWriter& SW,
						     const Handle(StepBasic_LengthMeasureWithUnit)& ent) const
{

  // --- inherited field valueComponent ---
  SW.Send(ent->ValueComponentMember());

  // --- inherited field unitComponent ---
  SW.Send(ent->UnitComponent().Value());
}


//=======================================================================
//function : Share
//purpose  : 
//=======================================================================

void RWStepBasic_RWLengthMeasureWithUnit::Share (const Handle(StepBasic_LengthMeasureWithUnit)& ent, 
						 Interface_EntityIterator& iter) const
{

  iter.GetOneItem(ent->UnitComponent().Value());
}

