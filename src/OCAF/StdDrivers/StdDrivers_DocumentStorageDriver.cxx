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

#include <OCAF/CDM/CDM_Document.hxx>
#include <PCDM_SequenceOfDocument.hxx>
#include <OCAF/MDF/MDF_ASDriverTable.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <StdDrivers_DocumentStorageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StdDrivers_DocumentStorageDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDocStd_DocumentStorageDriver),
  STANDARD_TYPE(PCDM_StorageDriver),
  STANDARD_TYPE(PCDM_Writer),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StdDrivers_DocumentStorageDriver)
IMPLEMENT_DOWNCAST(StdDrivers_DocumentStorageDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StdDrivers_DocumentStorageDriver)
#include <OCAF/MDF/MDF.hxx> 
#include <OCAF/MDataStd/MDataStd.hxx> 
#include <OCAF/MDataXtd/MDataXtd.hxx>
#include <OCAF/MNaming/MNaming.hxx>  
#include <OCAF/MDocStd/MDocStd.hxx> 
#include <OCAF/MPrsStd/MPrsStd.hxx>
#include <OCAF/MFunction/MFunction.hxx>

#include <TNaming_Tool.hxx>
#include <TNaming_NamedShape.hxx>
#include <PDocStd_Document.hxx>
#include <TDocStd_Document.hxx>

#include <TDF_Label.hxx>
#include <OCAF/MDF/MDF_ASDriverHSequence.hxx>
#include <OCAF/MDF/MDF_SRelocationTable.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>



//=======================================================================
//function : PAppStd_DocumentStorageDriver
//purpose  : 
//=======================================================================

StdDrivers_DocumentStorageDriver::StdDrivers_DocumentStorageDriver () {}


//=======================================================================
//function : AttributeDrivers
//purpose  : faire le Plugin
//=======================================================================

Handle(MDF_ASDriverTable) StdDrivers_DocumentStorageDriver::AttributeDrivers(const Handle(CDM_MessageDriver)& theMsgDriver) 
{
  Handle(MDF_ASDriverTable) aStorageTable  = new MDF_ASDriverTable(); 
  //
  Handle(MDF_ASDriverHSequence) HASSeq = new MDF_ASDriverHSequence();  
  MDF::AddStorageDrivers(HASSeq, theMsgDriver);   
  MDataStd::AddStorageDrivers(HASSeq, theMsgDriver);
  MDataXtd::AddStorageDrivers(HASSeq, theMsgDriver);
  MDocStd::AddStorageDrivers(HASSeq, theMsgDriver); 
  MFunction::AddStorageDrivers(HASSeq, theMsgDriver);
  MNaming::AddStorageDrivers(HASSeq, theMsgDriver);
  MPrsStd::AddStorageDrivers(HASSeq, theMsgDriver);
  //
  aStorageTable->SetDrivers(HASSeq);
  return aStorageTable;
}

//=======================================================================
//function : Make
//purpose  : 
//=======================================================================

void StdDrivers_DocumentStorageDriver::Make (const Handle(CDM_Document)& aDocument,
					     PCDM_SequenceOfDocument& Documents)
{  
  Handle(PDocStd_Document) PDOC;   
  Handle(MDF_SRelocationTable) Reloc = new MDF_SRelocationTable();
  Handle(TDocStd_Document) TDOC = Handle(TDocStd_Document)::DownCast(aDocument);
  if (!TDOC.IsNull()) {
    PDOC = new PDocStd_Document ();
    Paste (TDOC,PDOC,Reloc);
  }
  Documents.Append(PDOC);
}
