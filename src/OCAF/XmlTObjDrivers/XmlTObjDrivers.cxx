// Created on: 2004-11-24
// Created by: Michael SAZONOV
// Copyright (c) 2004-2014 OPEN CASCADE SAS
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

// The original implementation Copyright: (C) RINA S.p.A

#include <OCAF/XmlLDrivers/XmlLDrivers.hxx>
#include <OCAF/XmlTObjDrivers/XmlTObjDrivers.hxx>
#include <OCAF/XmlMDF/XmlMDF_ADriverTable.hxx>
#include <OCAF/XmlTObjDrivers/XmlTObjDrivers_DocumentStorageDriver.hxx>
#include <OCAF/XmlTObjDrivers/XmlTObjDrivers_DocumentRetrievalDriver.hxx>
#include <OCAF/XmlTObjDrivers/XmlTObjDrivers_ModelDriver.hxx>
#include <OCAF/XmlTObjDrivers/XmlTObjDrivers_ObjectDriver.hxx>
#include <OCAF/XmlTObjDrivers/XmlTObjDrivers_ReferenceDriver.hxx>
#include <OCAF/XmlTObjDrivers/XmlTObjDrivers_XYZDriver.hxx>
#include <OCAF/XmlTObjDrivers/XmlTObjDrivers_IntSparseArrayDriver.hxx>

#include <Foundation/Plugin/Plugin_Macro.hxx>

static Standard_GUID XmlStorageDriver  ("f78ff4a0-a779-11d5-aab4-0050044b1af1");
static Standard_GUID XmlRetrievalDriver("f78ff4a1-a779-11d5-aab4-0050044b1af1");

Handle(Standard_Transient) XmlTObjDrivers::Factory(const Standard_GUID& aGUID)
{
  if(aGUID == XmlStorageDriver)
  {
#ifdef OCCT_DEBUG
    cout << "XmlTObjDrivers : Storage Plugin" << endl;
#endif
    static Handle(XmlTObjDrivers_DocumentStorageDriver) model_sd
      = new XmlTObjDrivers_DocumentStorageDriver
        ("Copyright: Open CASCADE 2004"); // default copyright
    return model_sd;
  }

  if(aGUID == XmlRetrievalDriver)
  {  
#ifdef OCCT_DEBUG
    cout << "XmlTObjDrivers : Retrieval Plugin" << endl;
#endif
    static Handle (XmlTObjDrivers_DocumentRetrievalDriver) model_rd
      = new XmlTObjDrivers_DocumentRetrievalDriver;
    return model_rd;
  }

  return XmlLDrivers::Factory (aGUID);
}

//=======================================================================
//function : AddDrivers
//purpose  : 
//=======================================================================
void XmlTObjDrivers::AddDrivers (const Handle(XmlMDF_ADriverTable)& aDriverTable,
                                 const Handle(CDM_MessageDriver)&   anMsgDrv)
{
  aDriverTable -> AddDriver (new XmlTObjDrivers_ModelDriver         (anMsgDrv));
  aDriverTable -> AddDriver (new XmlTObjDrivers_ObjectDriver        (anMsgDrv));
  aDriverTable -> AddDriver (new XmlTObjDrivers_ReferenceDriver     (anMsgDrv));
  aDriverTable -> AddDriver (new XmlTObjDrivers_XYZDriver           (anMsgDrv));
  aDriverTable -> AddDriver (new XmlTObjDrivers_IntSparseArrayDriver(anMsgDrv));
}

#ifdef _MSC_VER
#pragma warning(disable:4190) /* disable warning on C++ type returned by C function; should be OK for C++ usage */
#endif

PLUGIN(XmlTObjDrivers)
