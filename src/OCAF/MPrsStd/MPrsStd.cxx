// Created on: 1997-08-26
// Created by: Guest Design
// Copyright (c) 1997-1999 Matra Datavision
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

#include <OCAF/MDF/MDF_ASDriverHSequence.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <OCAF/MDF/MDF_ARDriverHSequence.hxx>
#include <OCAF/MPrsStd/MPrsStd.hxx>
#include <OCAF/MDF/MDF_ASDriverHSequence.hxx>
#include <OCAF/MDF/MDF_ARDriverHSequence.hxx>
#include <OCAF/MPrsStd/MPrsStd_AISPresentationStorageDriver.hxx>
#include <OCAF/MPrsStd/MPrsStd_AISPresentationRetrievalDriver.hxx>
#include <OCAF/MPrsStd/MPrsStd_AISPresentationRetrievalDriver_1.hxx>
//#include <OCAF/MPrsStd/MPrsStd_AISViewerStorageDriver.hxx>
//#include <OCAF/MPrsStd/MPrsStd_AISViewerRetrievalDriver.hxx> 
#include <OCAF/MPrsStd/MPrsStd_PositionStorageDriver.hxx>
#include <OCAF/MPrsStd/MPrsStd_PositionRetrievalDriver.hxx>

//=======================================================================
//function : AddStorageDriver
//purpose  : 
//=======================================================================

void MPrsStd::AddStorageDrivers
(const Handle(MDF_ASDriverHSequence)& aDriverSeq, const Handle(CDM_MessageDriver)& theMsgDriver)
{
  aDriverSeq->Append(new MPrsStd_AISPresentationStorageDriver(theMsgDriver));
//  aDriverSeq->Append(new MPrsStd_AISViewerStorageDriver());
  aDriverSeq->Append(new MPrsStd_PositionStorageDriver(theMsgDriver));
}


//=======================================================================
//function : AddRetrievalDriver
//purpose  : 
//=======================================================================

void MPrsStd::AddRetrievalDrivers
(const Handle(MDF_ARDriverHSequence)& aDriverSeq, const Handle(CDM_MessageDriver)& theMsgDriver)
{
  aDriverSeq->Append(new MPrsStd_AISPresentationRetrievalDriver(theMsgDriver));
  aDriverSeq->Append(new MPrsStd_AISPresentationRetrievalDriver_1(theMsgDriver));
//  aDriverSeq->Append(new MPrsStd_AISViewerRetrievalDriver());
  aDriverSeq->Append(new MPrsStd_PositionRetrievalDriver(theMsgDriver));
}


