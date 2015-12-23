// Created on: 2000-08-16
// Created by: data exchange team
// Copyright (c) 2000-2014 OPEN CASCADE SAS
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
#include <DataExchange/MXCAFDoc/MXCAFDoc.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_ColorToolRetrievalDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_ColorToolStorageDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_DocumentToolRetrievalDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_DocumentToolStorageDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_LocationRetrievalDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_LocationStorageDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_ColorRetrievalDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_ColorStorageDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_ShapeToolRetrievalDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_ShapeToolStorageDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_VolumeStorageDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_AreaStorageDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_CentroidStorageDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_VolumeRetrievalDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_AreaRetrievalDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_CentroidRetrievalDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_GraphNodeStorageDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_GraphNodeRetrievalDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_LayerToolRetrievalDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_LayerToolStorageDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_DatumRetrievalDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_DatumStorageDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_DimTolRetrievalDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_DimTolStorageDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_DimTolToolRetrievalDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_DimTolToolStorageDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_MaterialRetrievalDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_MaterialStorageDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_MaterialToolRetrievalDriver.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_MaterialToolStorageDriver.hxx>


//=======================================================================
//function : AddStorageDriver
//purpose  : 
//=======================================================================

void MXCAFDoc::AddStorageDrivers
(const Handle(MDF_ASDriverHSequence)& aDriverSeq,
 const Handle(CDM_MessageDriver)& theMsgDriver)
{
  aDriverSeq->Append(new MXCAFDoc_LocationStorageDriver    (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_ColorStorageDriver       (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_VolumeStorageDriver      (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_AreaStorageDriver        (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_CentroidStorageDriver    (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_ColorToolStorageDriver   (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_DocumentToolStorageDriver(theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_ShapeToolStorageDriver   (theMsgDriver));

  aDriverSeq->Append(new MXCAFDoc_LayerToolStorageDriver   (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_GraphNodeStorageDriver   (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_DatumStorageDriver       (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_DimTolStorageDriver      (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_DimTolToolStorageDriver  (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_MaterialStorageDriver    (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_MaterialToolStorageDriver(theMsgDriver));
}

//=======================================================================
//function : AddRetrievalDriver
//purpose  : 
//=======================================================================

void MXCAFDoc::AddRetrievalDrivers
(const Handle(MDF_ARDriverHSequence)& aDriverSeq,
 const Handle(CDM_MessageDriver)& theMsgDriver)
{
  aDriverSeq->Append(new MXCAFDoc_LocationRetrievalDriver    (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_ColorRetrievalDriver       (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_VolumeRetrievalDriver      (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_AreaRetrievalDriver        (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_CentroidRetrievalDriver    (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_ColorToolRetrievalDriver   (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_DocumentToolRetrievalDriver(theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_ShapeToolRetrievalDriver   (theMsgDriver));
  
  aDriverSeq->Append(new MXCAFDoc_LayerToolRetrievalDriver   (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_GraphNodeRetrievalDriver   (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_DatumRetrievalDriver       (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_DimTolRetrievalDriver      (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_DimTolToolRetrievalDriver  (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_MaterialRetrievalDriver    (theMsgDriver));
  aDriverSeq->Append(new MXCAFDoc_MaterialToolRetrievalDriver(theMsgDriver));
}
