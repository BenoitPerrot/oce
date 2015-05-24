// Created on: 2000-09-07
// Created by: TURIN  Anatoliy
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
#include <CDM_MessageDriver.hxx>
#include <StdLDrivers_DocumentRetrievalDriver.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StdLDrivers_DocumentRetrievalDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDocStd_DocumentRetrievalDriver),
  STANDARD_TYPE(PCDM_RetrievalDriver),
  STANDARD_TYPE(PCDM_Reader),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StdLDrivers_DocumentRetrievalDriver)
IMPLEMENT_DOWNCAST(StdLDrivers_DocumentRetrievalDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StdLDrivers_DocumentRetrievalDriver)

#include <MDF_ARDriverHSequence.hxx>
#include <MDF.hxx>
#include <MDataStd.hxx> 
#include <MFunction.hxx>
#include <MDocStd.hxx> 

#include <CDM_MessageDriver.hxx>
//=======================================================================
//function : StdLDrivers_DocumentRetrievalDriver
//purpose  : 
//=======================================================================

StdLDrivers_DocumentRetrievalDriver::StdLDrivers_DocumentRetrievalDriver() {}

//=======================================================================
//function : AttributeDrivers
//purpose  : 
//=======================================================================

Handle(MDF_ARDriverTable) StdLDrivers_DocumentRetrievalDriver::AttributeDrivers(const Handle(CDM_MessageDriver)& theMsgDriver)
{ 
  Handle(MDF_ARDriverTable) aRetrievalTable  = new MDF_ARDriverTable(); 
  //
  Handle(MDF_ARDriverHSequence) HARSeq = new MDF_ARDriverHSequence();  
  MDF::AddRetrievalDrivers(HARSeq, theMsgDriver);  
  MDataStd::AddRetrievalDrivers(HARSeq, theMsgDriver);
  MFunction::AddRetrievalDrivers(HARSeq, theMsgDriver);
  MDocStd::AddRetrievalDrivers(HARSeq, theMsgDriver); 
  //
  aRetrievalTable->SetDrivers(HARSeq);
  return aRetrievalTable;
}

