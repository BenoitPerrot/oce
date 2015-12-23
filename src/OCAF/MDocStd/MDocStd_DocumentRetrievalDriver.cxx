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

#include <OCAF/MDF/MDF_ARDriverTable.hxx>
#include <PDocStd_Document.hxx>
#include <TDocStd_Document.hxx>
#include <OCAF/MDF/MDF_RRelocationTable.hxx>
#include <PCDM_Document.hxx>
#include <OCAF/CDM/CDM_Document.hxx>
#include <Foundation/TCollection/TCollection_ExtendedString.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <MDocStd_DocumentRetrievalDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDocStd_DocumentRetrievalDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PCDM_RetrievalDriver),
  STANDARD_TYPE(PCDM_Reader),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDocStd_DocumentRetrievalDriver)
IMPLEMENT_DOWNCAST(MDocStd_DocumentRetrievalDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDocStd_DocumentRetrievalDriver)
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <TDocStd_Application.hxx>
#include <TDocStd_Document.hxx>
#include <OCAF/MDF/MDF.hxx>
#include <OCAF/MDF/MDF_RRelocationTable.hxx>
#include <PDocStd_Document.hxx>
#include <TDF_Data.hxx> 
#include <TDocStd_Owner.hxx>

#include <TDF_Tool.hxx>
#include <UTL.hxx>
#include <Foundation/Resource/Resource_Manager.hxx>
#include <Foundation/Plugin/Plugin.hxx>

#include <OCAF/CDF/CDF_Application.hxx>
#include <OCAF/CDF/CDF_Session.hxx>


//=======================================================================
//function : MDocStd_DocumentRetrievalDriver
//purpose  : 
//=======================================================================

MDocStd_DocumentRetrievalDriver::MDocStd_DocumentRetrievalDriver () {}


//=======================================================================
//function : CreateDocument
//purpose  : virtuelle
// //=======================================================================

Handle(CDM_Document) MDocStd_DocumentRetrievalDriver::CreateDocument() 
{
   return new TDocStd_Document (PCDM_RetrievalDriver::GetFormat());
}

//=======================================================================
//function : Paste
//purpose  : paste Persistant Document in Transient Document
//=======================================================================

void MDocStd_DocumentRetrievalDriver::Paste (const Handle(PDocStd_Document)& PDOC,
				     const Handle(TDocStd_Document)& TDOC,
				     const Handle(MDF_RRelocationTable)& Reloc)
{
  Handle(PDF_Data) aPDF = PDOC->GetData(); 
  Handle(TDF_Data) aTDF = new TDF_Data();  
  Handle(CDM_MessageDriver) aMsgDriver;
  if (CDF_Session::CurrentSession()->HasCurrentApplication()) 
    aMsgDriver = CDF_Session::CurrentSession()->CurrentApplication()->MessageDriver();
 
  if (myDrivers.IsNull()) myDrivers = AttributeDrivers(aMsgDriver);
  MDF::FromTo (aPDF, aTDF, myDrivers, Reloc); 
  TDOC->SetData(aTDF);  
  TDocStd_Owner::SetDocument(aTDF,TDOC);
}

//=======================================================================
//function : Make
//purpose  : 
//=======================================================================

void MDocStd_DocumentRetrievalDriver::Make (const Handle(PCDM_Document)& aPDocument,
				    const Handle(CDM_Document)& aTDocument) 
{ 
  Handle(PDocStd_Document) PDOC = Handle(PDocStd_Document)::DownCast(aPDocument);
  Handle(TDocStd_Document) TDOC = Handle(TDocStd_Document)::DownCast(aTDocument);
  if (!PDOC.IsNull() && !TDOC.IsNull()) {
    Handle(MDF_RRelocationTable) Reloc = new MDF_RRelocationTable();
    Paste (PDOC,TDOC,Reloc);
  }


//   Handle(PDF_Data) aPDF =  Handle(PDocStd_Document)::DownCast(aPDocument)->GetData();
//   Handle(MDF_RRelocationTable) aReloc = new  MDF_RRelocationTable();
//   Handle(TDF_Data) aTDF = new TDF_Data();
//   if (myDrivers.IsNull()) myDrivers = AttributeDrivers();
//   MDF::FromTo (aPDF, aTDF, myDrivers, aReloc);
//   Handle(TDocStd_Document)::DownCast(aTDocument)->SetData(aTDF);
}


//=======================================================================
//function : SchemaName
//purpose  : 
//=======================================================================

TCollection_ExtendedString MDocStd_DocumentRetrievalDriver::SchemaName() const 
{  
  TCollection_ExtendedString schemaname = PCDM_RetrievalDriver::GetFormat();
  schemaname+="Schema";
  return schemaname;
}

//=======================================================================
//function : AttributeDrivers
//purpose  : 
//=======================================================================

Handle(MDF_ARDriverTable) MDocStd_DocumentRetrievalDriver::AttributeDrivers(const Handle(CDM_MessageDriver)& theMsgDriver)
{ 
  Handle(MDF_ARDriverTable) drivers;
  //
  Handle(CDF_Application) TheApplication;  
  if (CDF_Session::Exists()) {
    Handle(CDF_Session) TheSession = CDF_Session::CurrentSession();   
    if (TheSession->HasCurrentApplication()) {
      TheApplication = TheSession->CurrentApplication();
    } 
  }
  if (!TheApplication.IsNull()) {
    Handle(Resource_Manager) resource = TheApplication->Resources();
    TCollection_ExtendedString pluginNAME;
    pluginNAME = PCDM_RetrievalDriver::GetFormat(); 
    pluginNAME+=".";  
    pluginNAME+="AttributeRetrievalPlugin";  
    TCollection_ExtendedString pluginID;
    Standard_Boolean found = UTL::Find(resource,pluginNAME);
    if(found) { 
      TCollection_ExtendedString value = UTL::Value (resource,pluginNAME);
      Standard_GUID plugin (UTL::GUID(value));
      drivers = Handle(MDF_ARDriverTable)::DownCast(Plugin::Load(plugin));
    } else {
      TCollection_ExtendedString aMsg("Resource not found: ");
      aMsg = aMsg.Cat(pluginNAME).Cat("\0");
      theMsgDriver->Write(aMsg.ToExtString());
    }
  }
  if (drivers.IsNull()) {
    TCollection_ExtendedString aMsg("AttributeDrivers not found ");
    aMsg = aMsg.Cat("\0");
    theMsgDriver->Write(aMsg.ToExtString());
  }
  return drivers;
}



