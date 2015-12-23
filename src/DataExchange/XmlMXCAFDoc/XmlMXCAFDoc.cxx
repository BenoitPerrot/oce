// Created on: 2001-09-11
// Created by: Julia DOROVSKIKH
// Copyright (c) 2001-2014 OPEN CASCADE SAS
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

#include <OCAF/XmlMDF/XmlMDF_ADriverTable.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <DataExchange/XmlMXCAFDoc/XmlMXCAFDoc.hxx>

#include <DataExchange/XmlMXCAFDoc/XmlMXCAFDoc_AreaDriver.hxx>
#include <DataExchange/XmlMXCAFDoc/XmlMXCAFDoc_CentroidDriver.hxx>
#include <DataExchange/XmlMXCAFDoc/XmlMXCAFDoc_ColorDriver.hxx>
#include <DataExchange/XmlMXCAFDoc/XmlMXCAFDoc_GraphNodeDriver.hxx>
#include <DataExchange/XmlMXCAFDoc/XmlMXCAFDoc_LocationDriver.hxx>
#include <DataExchange/XmlMXCAFDoc/XmlMXCAFDoc_VolumeDriver.hxx>
#include <DataExchange/XmlMXCAFDoc/XmlMXCAFDoc_DatumDriver.hxx>
#include <DataExchange/XmlMXCAFDoc/XmlMXCAFDoc_DimTolDriver.hxx>
#include <DataExchange/XmlMXCAFDoc/XmlMXCAFDoc_MaterialDriver.hxx>

#include <DataExchange/XmlMXCAFDoc/XmlMXCAFDoc_ColorToolDriver.hxx>
#include <DataExchange/XmlMXCAFDoc/XmlMXCAFDoc_DocumentToolDriver.hxx>
#include <DataExchange/XmlMXCAFDoc/XmlMXCAFDoc_LayerToolDriver.hxx>
#include <DataExchange/XmlMXCAFDoc/XmlMXCAFDoc_ShapeToolDriver.hxx>
#include <DataExchange/XmlMXCAFDoc/XmlMXCAFDoc_DimTolToolDriver.hxx>
#include <DataExchange/XmlMXCAFDoc/XmlMXCAFDoc_MaterialToolDriver.hxx>

#include <OCAF/XmlMNaming/XmlMNaming_NamedShapeDriver.hxx>
#include <OCAF/TNaming/TNaming_NamedShape.hxx>

//=======================================================================
//function : AddDrivers
//purpose  : 
//=======================================================================
void XmlMXCAFDoc::AddDrivers (const Handle(XmlMDF_ADriverTable)& aDriverTable,
                              const Handle(CDM_MessageDriver)&   anMsgDrv)
{
  aDriverTable -> AddDriver (new XmlMXCAFDoc_AreaDriver      (anMsgDrv));
  aDriverTable -> AddDriver (new XmlMXCAFDoc_CentroidDriver  (anMsgDrv));
  aDriverTable -> AddDriver (new XmlMXCAFDoc_ColorDriver     (anMsgDrv));
  aDriverTable -> AddDriver (new XmlMXCAFDoc_GraphNodeDriver (anMsgDrv));
  
  //oan: changes for sharing locations map
  Handle(XmlMNaming_NamedShapeDriver) aNamedShapeDriver;
  aDriverTable->GetDriver(STANDARD_TYPE(TNaming_NamedShape), aNamedShapeDriver);
  
  Handle(XmlMXCAFDoc_LocationDriver) aLocationDriver = new XmlMXCAFDoc_LocationDriver (anMsgDrv);
  if( !aNamedShapeDriver.IsNull() )
  {
    aLocationDriver->SetSharedLocations( &(aNamedShapeDriver->GetShapesLocations()) );
  }
  
  aDriverTable -> AddDriver( aLocationDriver);
  aDriverTable -> AddDriver (new XmlMXCAFDoc_VolumeDriver    (anMsgDrv));
  aDriverTable -> AddDriver (new XmlMXCAFDoc_DatumDriver     (anMsgDrv));
  aDriverTable -> AddDriver (new XmlMXCAFDoc_DimTolDriver    (anMsgDrv));
  aDriverTable -> AddDriver (new XmlMXCAFDoc_MaterialDriver  (anMsgDrv));

  aDriverTable -> AddDriver (new XmlMXCAFDoc_ColorToolDriver    (anMsgDrv));
  aDriverTable -> AddDriver (new XmlMXCAFDoc_DocumentToolDriver (anMsgDrv));
  aDriverTable -> AddDriver (new XmlMXCAFDoc_LayerToolDriver    (anMsgDrv));
  aDriverTable -> AddDriver (new XmlMXCAFDoc_ShapeToolDriver    (anMsgDrv));
  aDriverTable -> AddDriver (new XmlMXCAFDoc_DimTolToolDriver   (anMsgDrv));
  aDriverTable -> AddDriver (new XmlMXCAFDoc_MaterialToolDriver (anMsgDrv));
}
