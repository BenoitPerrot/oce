// Created on: 2002-10-31
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

#include <BinMDF_ADriverTable.hxx>
#include <CDM_MessageDriver.hxx>
#include <OCAF/BinLDrivers/BinLDrivers_DocumentSection.hxx>
#include <OCAF/BinDrivers/BinDrivers_DocumentRetrievalDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BinDrivers_DocumentRetrievalDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(BinLDrivers_DocumentRetrievalDriver),
  STANDARD_TYPE(PCDM_RetrievalDriver),
  STANDARD_TYPE(PCDM_Reader),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BinDrivers_DocumentRetrievalDriver)
IMPLEMENT_DOWNCAST(BinDrivers_DocumentRetrievalDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BinDrivers_DocumentRetrievalDriver)
#include <OCAF/BinDrivers/BinDrivers.hxx>
#include <OCAF/BinLDrivers/BinLDrivers_DocumentSection.hxx>
#include <BinMNaming.hxx>
#include <BinMNaming_NamedShapeDriver.hxx>
#include <TNaming_NamedShape.hxx>
#include <BinMDataStd.hxx>
#include <Foundation/TCollection/TCollection_ExtendedString.hxx>
#include <Foundation/Standard/Standard_Failure.hxx>
#include <Foundation/Standard/Standard_IStream.hxx>
#include <Foundation/Standard/Standard_ErrorHandler.hxx>
//=======================================================================
//function : BinDrivers_DocumentRetrievalDriver
//purpose  : Constructor
//=======================================================================

BinDrivers_DocumentRetrievalDriver::BinDrivers_DocumentRetrievalDriver ()
{
}

//=======================================================================
//function : AttributeDrivers
//purpose  :
//=======================================================================

Handle(BinMDF_ADriverTable) BinDrivers_DocumentRetrievalDriver::AttributeDrivers
       (const Handle(CDM_MessageDriver)& theMessageDriver)
{
  return BinDrivers::AttributeDrivers (theMessageDriver);
}

//=======================================================================
//function : ReadShapeSection
//purpose  : 
//=======================================================================

void BinDrivers_DocumentRetrievalDriver::ReadShapeSection
                              (BinLDrivers_DocumentSection& /*theSection*/,
                               Standard_IStream&            theIS,
			       const Standard_Boolean       /*isMess*/)

{
  // Read Shapes
  Handle(BinMNaming_NamedShapeDriver) aNamedShapeDriver;
  if (myDrivers->GetDriver(STANDARD_TYPE(TNaming_NamedShape),aNamedShapeDriver))
    {
      try {
	OCC_CATCH_SIGNALS
	  aNamedShapeDriver->ReadShapeSection (theIS);
      }
      catch(Standard_Failure) {
	Handle(Standard_Failure) aFailure = Standard_Failure::Caught();
	const TCollection_ExtendedString aMethStr
	  ("BinDrivers_DocumentRetrievalDriver: ");
	WriteMessage (aMethStr + "error of Shape Section " +
		      aFailure->GetMessageString());
      }
    }
}

//=======================================================================
//function : CheckShapeSection
//purpose  : 
//=======================================================================
void BinDrivers_DocumentRetrievalDriver::CheckShapeSection(
			      const Storage_Position& /*ShapeSectionPos*/, 
				 	         Standard_IStream& /*IS*/)
{}

//=======================================================================
//function : PropagateDocumentVersion
//purpose  : 
//=======================================================================
void BinDrivers_DocumentRetrievalDriver::PropagateDocumentVersion(
				    const Standard_Integer theDocVersion )
{
  BinMDataStd::SetDocumentVersion(theDocVersion);
  BinMNaming::SetDocumentVersion(theDocVersion);
}

