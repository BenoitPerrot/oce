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
#include <BinXCAFDrivers_DocumentStorageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BinXCAFDrivers_DocumentStorageDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(BinDrivers_DocumentStorageDriver),
  STANDARD_TYPE(BinLDrivers_DocumentStorageDriver),
  STANDARD_TYPE(PCDM_StorageDriver),
  STANDARD_TYPE(PCDM_Writer),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BinXCAFDrivers_DocumentStorageDriver)
IMPLEMENT_DOWNCAST(BinXCAFDrivers_DocumentStorageDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BinXCAFDrivers_DocumentStorageDriver)
#include <BinXCAFDrivers.hxx>

//=======================================================================
//function : 
//purpose  :
//=======================================================================
BinXCAFDrivers_DocumentStorageDriver::BinXCAFDrivers_DocumentStorageDriver() {
}

//=======================================================================
//function : 
//purpose  :
//=======================================================================
Handle(BinMDF_ADriverTable) BinXCAFDrivers_DocumentStorageDriver::AttributeDrivers(const Handle(CDM_MessageDriver)& theMsgDriver) {
  return BinXCAFDrivers::AttributeDrivers (theMsgDriver);
}

