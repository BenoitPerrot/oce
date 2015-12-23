// Created on: 2001-07-09
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

#include <Foundation/TCollection/TCollection_ExtendedString.hxx>
#include <XmlMDF_ADriverTable.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <XmlDrivers_DocumentStorageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(XmlDrivers_DocumentStorageDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(XmlLDrivers_DocumentStorageDriver),
  STANDARD_TYPE(PCDM_StorageDriver),
  STANDARD_TYPE(PCDM_Writer),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(XmlDrivers_DocumentStorageDriver)
IMPLEMENT_DOWNCAST(XmlDrivers_DocumentStorageDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(XmlDrivers_DocumentStorageDriver)
#include <XmlDrivers.hxx>
#include <XmlMNaming_NamedShapeDriver.hxx>
#include <OCAF/TNaming/TNaming_NamedShape.hxx>
#include <XmlObjMgt_Element.hxx>
//=======================================================================
//function : XmlDrivers_DocumentStorageDriver
//purpose  : Constructor
//=======================================================================
XmlDrivers_DocumentStorageDriver::XmlDrivers_DocumentStorageDriver
                                (const TCollection_ExtendedString& theCopyright) :
  XmlLDrivers_DocumentStorageDriver(theCopyright)
{ 
}

//=======================================================================
//function : AttributeDrivers
//purpose  : 
//=======================================================================
Handle(XmlMDF_ADriverTable) XmlDrivers_DocumentStorageDriver::AttributeDrivers
       (const Handle(CDM_MessageDriver)& theMessageDriver) 
{
  return XmlDrivers::AttributeDrivers (theMessageDriver);
}

//=======================================================================
//function : WriteShapeSection
//purpose  : Implements WriteShapeSection
//=======================================================================
Standard_Boolean XmlDrivers_DocumentStorageDriver::WriteShapeSection
                                         (XmlObjMgt_Element&  theElement)
{
  Handle(XmlMNaming_NamedShapeDriver) aNamedShapeDriver;
  Standard_Boolean isShape(Standard_False);
  if (myDrivers -> GetDriver (STANDARD_TYPE(TNaming_NamedShape),
                              aNamedShapeDriver)) {
    aNamedShapeDriver -> WriteShapeSection (theElement); 
    isShape = Standard_True;
  }
  return isShape;
}
