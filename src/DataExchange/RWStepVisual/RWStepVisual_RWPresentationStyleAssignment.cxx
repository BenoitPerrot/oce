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
#include <StepVisual_PresentationStyleAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <DataExchange/Interface/Interface_EntityIterator.hxx>
#include <DataExchange/RWStepVisual/RWStepVisual_RWPresentationStyleAssignment.hxx>
#include <StepVisual_HArray1OfPresentationStyleSelect.hxx>
#include <StepVisual_PresentationStyleSelect.hxx>


#include <DataExchange/Interface/Interface_EntityIterator.hxx>


#include <StepVisual_PresentationStyleAssignment.hxx>


RWStepVisual_RWPresentationStyleAssignment::RWStepVisual_RWPresentationStyleAssignment () {}

void RWStepVisual_RWPresentationStyleAssignment::ReadStep
	(const Handle(StepData_StepReaderData)& data,
	 const Standard_Integer num,
	 Handle(Interface_Check)& ach,
	 const Handle(StepVisual_PresentationStyleAssignment)& ent) const
{


	// --- Number of Parameter Control ---

	if (!data->CheckNbParams(num,1,ach,"presentation_style_assignment")) return;

	// --- own field : styles ---

	Handle(StepVisual_HArray1OfPresentationStyleSelect) aStyles;
	StepVisual_PresentationStyleSelect aStylesItem;
	Standard_Integer nsub1;
	if (data->ReadSubList (num,1,"styles",ach,nsub1)) {
	  Standard_Integer nb1 = data->NbParams(nsub1);
	  aStyles = new StepVisual_HArray1OfPresentationStyleSelect (1, nb1);
	  for (Standard_Integer i1 = 1; i1 <= nb1; i1 ++) {
	    //szv#4:S4163:12Mar99 `Standard_Boolean stat1 =` not needed
	    if (data->ReadEntity (nsub1,i1,"styles",ach,aStylesItem))
	      aStyles->SetValue(i1,aStylesItem);
	  }
	}

	//--- Initialisation of the read entity ---


	ent->Init(aStyles);
}


void RWStepVisual_RWPresentationStyleAssignment::WriteStep
	(StepData_StepWriter& SW,
	 const Handle(StepVisual_PresentationStyleAssignment)& ent) const
{

	// --- own field : styles ---

	SW.OpenSub();
	for (Standard_Integer i1 = 1;  i1 <= ent->NbStyles();  i1 ++) {
	  SW.Send(ent->StylesValue(i1).Value());
	}
	SW.CloseSub();
}


void RWStepVisual_RWPresentationStyleAssignment::Share(const Handle(StepVisual_PresentationStyleAssignment)& ent, Interface_EntityIterator& iter) const
{

	Standard_Integer nbElem1 = ent->NbStyles();
	for (Standard_Integer is1=1; is1<=nbElem1; is1 ++) {
	  iter.GetOneItem(ent->StylesValue(is1).Value());
	}

}

