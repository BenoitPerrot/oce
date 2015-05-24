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

#include <XmlMDF_ADriverTable.hxx>
#include <CDM_MessageDriver.hxx>
#include <XmlXCAFDrivers_DocumentRetrievalDriver.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(XmlXCAFDrivers_DocumentRetrievalDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(XmlDrivers_DocumentRetrievalDriver),
  STANDARD_TYPE(XmlLDrivers_DocumentRetrievalDriver),
  STANDARD_TYPE(PCDM_RetrievalDriver),
  STANDARD_TYPE(PCDM_Reader),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(XmlXCAFDrivers_DocumentRetrievalDriver)
IMPLEMENT_DOWNCAST(XmlXCAFDrivers_DocumentRetrievalDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(XmlXCAFDrivers_DocumentRetrievalDriver)

#include <XmlDrivers.hxx>
#include <XmlMXCAFDoc.hxx>

//=======================================================================
//function : XmlXCAFDrivers_DocumentRetrievalDriver
//purpose  : 
//=======================================================================
XmlXCAFDrivers_DocumentRetrievalDriver::XmlXCAFDrivers_DocumentRetrievalDriver()
{
}

//=======================================================================
//function : AttributeDrivers
//purpose  : 
//=======================================================================
Handle(XmlMDF_ADriverTable)
        XmlXCAFDrivers_DocumentRetrievalDriver::AttributeDrivers
                        (const Handle(CDM_MessageDriver)& theMsgDrv) 
{ 
  // Standard drivers
  Handle(XmlMDF_ADriverTable) aTable = XmlDrivers::AttributeDrivers (theMsgDrv);

  // Native drivers
  XmlMXCAFDoc::AddDrivers(aTable, theMsgDrv);

  return aTable;
}
