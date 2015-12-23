// Created on: 2000-05-24
// Created by: Edward AGAPOV
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

#include <MDF_ARDriverTable.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <XCAFDrivers_DocumentRetrievalDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(XCAFDrivers_DocumentRetrievalDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDocStd_DocumentRetrievalDriver),
  STANDARD_TYPE(PCDM_RetrievalDriver),
  STANDARD_TYPE(PCDM_Reader),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(XCAFDrivers_DocumentRetrievalDriver)
IMPLEMENT_DOWNCAST(XCAFDrivers_DocumentRetrievalDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(XCAFDrivers_DocumentRetrievalDriver)
#include <MDF.hxx>
#include <OCAF/MDataStd/MDataStd.hxx> 
#include <MDF_ARDriverHSequence.hxx>
#include <MXCAFDoc.hxx>
#include <StdDrivers_DocumentRetrievalDriver.hxx>

//=======================================================================
//function : XCAFDrivers_DocumentRetrievalDriver
//purpose  : 
//=======================================================================

XCAFDrivers_DocumentRetrievalDriver::XCAFDrivers_DocumentRetrievalDriver() {}

//=======================================================================
//function : AttributeDrivers
//purpose  : 
//=======================================================================

Handle(MDF_ARDriverTable) XCAFDrivers_DocumentRetrievalDriver::AttributeDrivers(const Handle(CDM_MessageDriver)& theMessageDriver)
{ 
  // Standard drivers
  Handle(StdDrivers_DocumentRetrievalDriver) aDocumentRetrievalDriver = new StdDrivers_DocumentRetrievalDriver;
  Handle(MDF_ARDriverTable) aRetrievalTable = aDocumentRetrievalDriver->AttributeDrivers(theMessageDriver);
  
  // Native drivers
  Handle(MDF_ARDriverHSequence) anHARSeq = new MDF_ARDriverHSequence();  
  MXCAFDoc::AddRetrievalDrivers        (anHARSeq, theMessageDriver);
  //
  aRetrievalTable->SetDrivers           (anHARSeq); //aRetrievalTable will append Native drivers
  return aRetrievalTable;
}
