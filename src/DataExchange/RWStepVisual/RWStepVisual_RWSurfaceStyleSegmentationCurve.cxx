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
#include <DataExchange/StepVisual/StepVisual_SurfaceStyleSegmentationCurve.hxx>
#include <DataExchange/StepData/StepData_StepWriter.hxx>
#include <DataExchange/Interface/Interface_EntityIterator.hxx>
#include <DataExchange/RWStepVisual/RWStepVisual_RWSurfaceStyleSegmentationCurve.hxx>
#include <DataExchange/StepVisual/StepVisual_CurveStyle.hxx>


#include <DataExchange/Interface/Interface_EntityIterator.hxx>


#include <DataExchange/StepVisual/StepVisual_SurfaceStyleSegmentationCurve.hxx>


RWStepVisual_RWSurfaceStyleSegmentationCurve::RWStepVisual_RWSurfaceStyleSegmentationCurve () {}

void RWStepVisual_RWSurfaceStyleSegmentationCurve::ReadStep
	(const Handle(StepData_StepReaderData)& data,
	 const Standard_Integer num,
	 Handle(Interface_Check)& ach,
	 const Handle(StepVisual_SurfaceStyleSegmentationCurve)& ent) const
{


	// --- Number of Parameter Control ---

	if (!data->CheckNbParams(num,1,ach,"surface_style_segmentation_curve")) return;

	// --- own field : styleOfSegmentationCurve ---

	Handle(StepVisual_CurveStyle) aStyleOfSegmentationCurve;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat1 =` not needed
	data->ReadEntity(num, 1,"style_of_segmentation_curve", ach, STANDARD_TYPE(StepVisual_CurveStyle), aStyleOfSegmentationCurve);

	//--- Initialisation of the read entity ---


	ent->Init(aStyleOfSegmentationCurve);
}


void RWStepVisual_RWSurfaceStyleSegmentationCurve::WriteStep
	(StepData_StepWriter& SW,
	 const Handle(StepVisual_SurfaceStyleSegmentationCurve)& ent) const
{

	// --- own field : styleOfSegmentationCurve ---

	SW.Send(ent->StyleOfSegmentationCurve());
}


void RWStepVisual_RWSurfaceStyleSegmentationCurve::Share(const Handle(StepVisual_SurfaceStyleSegmentationCurve)& ent, Interface_EntityIterator& iter) const
{

	iter.GetOneItem(ent->StyleOfSegmentationCurve());
}

