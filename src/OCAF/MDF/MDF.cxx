// Created by: DAUTRY Philippe
// Copyright (c) 1997-1999 Matra Datavision
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

//      	---------

// Version:	0.0
//Version	Date		Purpose
//		0.0	Mar 13 1997	Creation



#include <OCAF/TDF/TDF_Data.hxx>
#include <OCAF/PDF/PDF_Data.hxx>
#include <OCAF/MDF/MDF_ASDriverTable.hxx>
#include <OCAF/MDF/MDF_SRelocationTable.hxx>
#include <OCAF/MDF/MDF_ARDriverTable.hxx>
#include <OCAF/MDF/MDF_RRelocationTable.hxx>
#include <OCAF/MDF/MDF_ASDriverHSequence.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <OCAF/MDF/MDF_ARDriverHSequence.hxx>
#include <OCAF/MDF/MDF.hxx>

#include <OCAF/TDF/TDF_Attribute.hxx>
#include <OCAF/TDF/TDF_Label.hxx>
#include <OCAF/TDF/TDF_Tool.hxx>

#include <OCAF/MDF/MDF_RRelocationTable.hxx>
#include <OCAF/MDF/MDF_SRelocationTable.hxx>
#include <OCAF/MDF/MDF_Tool.hxx>
#include <OCAF/MDF/MDF_TypeARDriverMap.hxx>
#include <OCAF/MDF/MDF_TypeASDriverMap.hxx>

#include <OCAF/PDF/PDF_Attribute.hxx>
#include <OCAF/PDF/PDF_HAttributeArray1.hxx>

#include <OCAF/PColStd/PColStd_HArray1OfInteger.hxx>

#include <OCAF/PTColStd/PTColStd_TransientPersistentMap.hxx>

#include <OCAF/MDF/MDF_TagSourceStorageDriver.hxx>
#include <OCAF/MDF/MDF_TagSourceRetrievalDriver.hxx>
#include <OCAF/MDF/MDF_ReferenceStorageDriver.hxx>
#include <OCAF/MDF/MDF_ReferenceRetrievalDriver.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>

//=======================================================================
//function : FromTo
//purpose  : From TRANSIENT to PERSISTENT.
//=======================================================================

void MDF::FromTo
(const Handle(TDF_Data)& aSource,
 Handle(PDF_Data)& aTarget,
 const Handle(MDF_ASDriverTable)& aDriverTable,
 const Handle(MDF_SRelocationTable)& aReloc,
 const Standard_Integer aVersion) 
{
  // Into Data.
  aTarget = new PDF_Data(aVersion);

  // Extraction of the driver subset.
  const MDF_TypeASDriverMap& driverMap =
    aDriverTable->GetDrivers(aVersion);

  // Translation.
  MDF_Tool::WriteLabels(aSource, aTarget, driverMap, aReloc);
  MDF_Tool::WriteAttributes(driverMap, aReloc);
}


//=======================================================================
//function : FromTo
//purpose  : From PERSISTENT to TRANSIENT.
//=======================================================================

void MDF::FromTo
(const Handle(PDF_Data)& aSource,
 Handle(TDF_Data)& aTarget,
 const Handle(MDF_ARDriverTable)& aDriverTable,
 const Handle(MDF_RRelocationTable)& aReloc) 
{
  // Version number.
  Standard_Integer version = aSource->VersionNumber();

  // Extraction of the driver subset.
  const MDF_TypeARDriverMap& driverMap =
    aDriverTable->GetDrivers(version);

  // Translation.
  MDF_Tool::ReadLabels(aSource, aTarget, driverMap, aReloc);
  MDF_Tool::ReadAttributes(driverMap, aReloc);
}

//=======================================================================
//function : AddStorageDriver
//purpose  : 
//=======================================================================

void MDF::AddStorageDrivers
(const Handle(MDF_ASDriverHSequence)& theDriverSeq,const Handle(CDM_MessageDriver)& theMsgDriver)
{
  theDriverSeq->Append(new MDF_TagSourceStorageDriver(theMsgDriver)); 
  theDriverSeq->Append(new MDF_ReferenceStorageDriver(theMsgDriver));
}


//=======================================================================
//function : AddRetrievalDriver
//purpose  : 
//=======================================================================

void MDF::AddRetrievalDrivers
(const Handle(MDF_ARDriverHSequence)& theDriverSeq, const Handle(CDM_MessageDriver)& theMsgDriver)
{
  theDriverSeq->Append(new MDF_TagSourceRetrievalDriver(theMsgDriver)); 
  theDriverSeq->Append(new MDF_ReferenceRetrievalDriver(theMsgDriver));
}

