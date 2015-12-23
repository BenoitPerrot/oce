// Created on: 2005-04-18
// Created by: Eugeny NAPALKOV
// Copyright (c) 2005-2014 OPEN CASCADE SAS
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

#include <OCAF/BinMDF/BinMDF_ADriverTable.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <DataExchange/BinMXCAFDoc/BinMXCAFDoc.hxx>

#include <DataExchange/BinMXCAFDoc/BinMXCAFDoc_AreaDriver.hxx>
#include <DataExchange/BinMXCAFDoc/BinMXCAFDoc_CentroidDriver.hxx>
#include <DataExchange/BinMXCAFDoc/BinMXCAFDoc_ColorDriver.hxx>
#include <DataExchange/BinMXCAFDoc/BinMXCAFDoc_GraphNodeDriver.hxx>
#include <DataExchange/BinMXCAFDoc/BinMXCAFDoc_LocationDriver.hxx>
#include <DataExchange/BinMXCAFDoc/BinMXCAFDoc_VolumeDriver.hxx>
#include <DataExchange/BinMXCAFDoc/BinMXCAFDoc_DatumDriver.hxx>
#include <DataExchange/BinMXCAFDoc/BinMXCAFDoc_DimTolDriver.hxx>
#include <DataExchange/BinMXCAFDoc/BinMXCAFDoc_MaterialDriver.hxx>

#include <DataExchange/BinMXCAFDoc/BinMXCAFDoc_ColorToolDriver.hxx>
#include <DataExchange/BinMXCAFDoc/BinMXCAFDoc_DocumentToolDriver.hxx>
#include <DataExchange/BinMXCAFDoc/BinMXCAFDoc_LayerToolDriver.hxx>
#include <DataExchange/BinMXCAFDoc/BinMXCAFDoc_ShapeToolDriver.hxx>
#include <DataExchange/BinMXCAFDoc/BinMXCAFDoc_DimTolToolDriver.hxx>
#include <DataExchange/BinMXCAFDoc/BinMXCAFDoc_MaterialToolDriver.hxx>

#include <OCAF/BinMNaming/BinMNaming_NamedShapeDriver.hxx>
#include <OCAF/TNaming/TNaming_NamedShape.hxx>

//=======================================================================
//function :
//purpose  : 
//=======================================================================
void BinMXCAFDoc::AddDrivers(const Handle(BinMDF_ADriverTable)& theDriverTable,
			     const Handle(CDM_MessageDriver)& theMsgDrv) {
  theDriverTable->AddDriver( new BinMXCAFDoc_AreaDriver     (theMsgDrv));
  theDriverTable->AddDriver( new BinMXCAFDoc_CentroidDriver (theMsgDrv));
  theDriverTable->AddDriver( new BinMXCAFDoc_ColorDriver    (theMsgDrv));
  theDriverTable->AddDriver( new BinMXCAFDoc_GraphNodeDriver(theMsgDrv));
  
  //oan: changes for sharing locations map
  Handle(BinMNaming_NamedShapeDriver) aNamedShapeDriver;
  theDriverTable->GetDriver(STANDARD_TYPE(TNaming_NamedShape), aNamedShapeDriver);
  
  Handle(BinMXCAFDoc_LocationDriver) aLocationDriver = new BinMXCAFDoc_LocationDriver (theMsgDrv);
  if( !aNamedShapeDriver.IsNull() )
  {
    aLocationDriver->SetSharedLocations( &(aNamedShapeDriver->GetShapesLocations()) );
  }
  
  theDriverTable->AddDriver( aLocationDriver);
  theDriverTable->AddDriver( new BinMXCAFDoc_VolumeDriver   (theMsgDrv));
  theDriverTable->AddDriver( new BinMXCAFDoc_DatumDriver    (theMsgDrv));
  theDriverTable->AddDriver( new BinMXCAFDoc_DimTolDriver   (theMsgDrv));
  theDriverTable->AddDriver( new BinMXCAFDoc_MaterialDriver (theMsgDrv));

  theDriverTable->AddDriver( new BinMXCAFDoc_ColorToolDriver   (theMsgDrv));
  theDriverTable->AddDriver( new BinMXCAFDoc_DocumentToolDriver(theMsgDrv));
  theDriverTable->AddDriver( new BinMXCAFDoc_LayerToolDriver   (theMsgDrv));
  theDriverTable->AddDriver( new BinMXCAFDoc_ShapeToolDriver   (theMsgDrv));
  theDriverTable->AddDriver( new BinMXCAFDoc_DimTolToolDriver  (theMsgDrv));
  theDriverTable->AddDriver( new BinMXCAFDoc_MaterialToolDriver(theMsgDrv));
}
