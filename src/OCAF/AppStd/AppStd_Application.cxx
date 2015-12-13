// Created on: 2000-09-07
// Created by: TURIN Anatoliy
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

//AGV 15/10/01 : Add XmlOcaf support; add MessageDriver support

#include <CDM_MessageDriver.hxx>
#include <TColStd_SequenceOfExtendedString.hxx>
#include <AppStd_Application.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(AppStd_Application)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TDocStd_Application),
  STANDARD_TYPE(CDF_Application),
  STANDARD_TYPE(CDM_Application),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(AppStd_Application)
IMPLEMENT_DOWNCAST(AppStd_Application,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(AppStd_Application)
#include <CDM_COutMessageDriver.hxx>

//=======================================================================
//function : AppStd_Application
//purpose  : 
//=======================================================================

AppStd_Application::AppStd_Application()
{
  myMessageDriver = new CDM_COutMessageDriver;
}

//=======================================================================
//function : MessageDriver
//purpose  : 
//=======================================================================

Handle(CDM_MessageDriver) AppStd_Application::MessageDriver ()
{
  return myMessageDriver;
}

//=======================================================================
//function : Formats
//purpose  : 
//=======================================================================
void AppStd_Application::Formats(TColStd_SequenceOfExtendedString& theFormats) 
{
  theFormats.Append("XmlOcaf");
  theFormats.Append("BinOcaf");
  theFormats.Append("MDTV-Standard");
}

//=======================================================================
//function : ResourcesName
//purpose  : 
//=======================================================================

Standard_CString AppStd_Application::ResourcesName() {
  const Standard_CString aRes = "Standard";
  return aRes;
}

