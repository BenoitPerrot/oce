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

#include <BinMDF_ADriverTable.hxx>
#include <CDM_MessageDriver.hxx>
#include <BinXCAFDrivers_DocumentRetrievalDriver.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BinXCAFDrivers_DocumentRetrievalDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(BinDrivers_DocumentRetrievalDriver),
  STANDARD_TYPE(BinLDrivers_DocumentRetrievalDriver),
  STANDARD_TYPE(PCDM_RetrievalDriver),
  STANDARD_TYPE(PCDM_Reader),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BinXCAFDrivers_DocumentRetrievalDriver)
IMPLEMENT_DOWNCAST(BinXCAFDrivers_DocumentRetrievalDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BinXCAFDrivers_DocumentRetrievalDriver)
#include <BinXCAFDrivers.hxx>

//=======================================================================
//function : 
//purpose  :
//=======================================================================
BinXCAFDrivers_DocumentRetrievalDriver::BinXCAFDrivers_DocumentRetrievalDriver() {
}

//=======================================================================
//function : 
//purpose  :
//=======================================================================
Handle(BinMDF_ADriverTable) BinXCAFDrivers_DocumentRetrievalDriver::AttributeDrivers(const Handle(CDM_MessageDriver)& theMsgDriver) {
  return BinXCAFDrivers::AttributeDrivers (theMsgDriver);
}

