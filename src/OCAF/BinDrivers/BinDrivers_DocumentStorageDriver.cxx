// Created on: 2002-10-29
// Created by: Michael SAZONOV
// Copyright (c) 2002-2014 OPEN CASCADE SAS
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
#include <OCAF/BinLDrivers/BinLDrivers_DocumentSection.hxx>
#include <OCAF/BinDrivers/BinDrivers_DocumentStorageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BinDrivers_DocumentStorageDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(BinLDrivers_DocumentStorageDriver),
  STANDARD_TYPE(PCDM_StorageDriver),
  STANDARD_TYPE(PCDM_Writer),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BinDrivers_DocumentStorageDriver)
IMPLEMENT_DOWNCAST(BinDrivers_DocumentStorageDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BinDrivers_DocumentStorageDriver)
#include <Foundation/Standard/Standard_ErrorHandler.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <OCAF/BinDrivers/BinDrivers.hxx>
#include <OCAF/BinMDF/BinMDF_ADriver.hxx>
#include <OCAF/BinMNaming/BinMNaming_NamedShapeDriver.hxx>
#include <OCAF/TNaming/TNaming_NamedShape.hxx>
//=======================================================================
//function : BinDrivers_DocumentStorageDriver
//purpose  : Constructor
//=======================================================================

BinDrivers_DocumentStorageDriver::BinDrivers_DocumentStorageDriver ()
{
}

//=======================================================================
//function : AttributeDrivers
//purpose  :
//=======================================================================

Handle(BinMDF_ADriverTable) BinDrivers_DocumentStorageDriver::AttributeDrivers
       (const Handle(CDM_MessageDriver)& theMessageDriver)
{
  return BinDrivers::AttributeDrivers (theMessageDriver);
}

//=======================================================================
//function : WriteShapeSection
//purpose  : Implements WriteShapeSection
//=======================================================================
void BinDrivers_DocumentStorageDriver::WriteShapeSection
                               (BinLDrivers_DocumentSection&   theSection,
                                Standard_OStream&              theOS)
{
  const Standard_Size aShapesSectionOffset = (Standard_Size) theOS.tellp();
  
  Handle(BinMNaming_NamedShapeDriver) aNamedShapeDriver;
  if (myDrivers->GetDriver(STANDARD_TYPE(TNaming_NamedShape), aNamedShapeDriver)) {   
    try { 
      OCC_CATCH_SIGNALS  aNamedShapeDriver->WriteShapeSection (theOS);
    }
    catch(Standard_Failure) {
      TCollection_ExtendedString anErrorStr ("Error: ");
      Handle(Standard_Failure) aFailure = Standard_Failure::Caught();
      TCollection_ExtendedString aStr = 
	anErrorStr + "BinDrivers_DocumentStorageDriver, Shape Section :";
      WriteMessage (aStr  + aFailure->GetMessageString());
    }
  }
   
  // Write the section info in the TOC.
  theSection.Write (theOS, aShapesSectionOffset);
}
