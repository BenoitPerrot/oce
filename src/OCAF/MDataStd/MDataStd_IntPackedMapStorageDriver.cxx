// Created on: 2007-08-23
// Created by: Sergey ZARITCHNY
// Copyright (c) 2007-2014 OPEN CASCADE SAS
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

#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
#include <OCAF/PDF/PDF_Attribute.hxx>
#include <TDF_Attribute.hxx>
#include <OCAF/MDF/MDF_SRelocationTable.hxx>
#include <OCAF/MDataStd/MDataStd_IntPackedMapStorageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDataStd_IntPackedMapStorageDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ASDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDataStd_IntPackedMapStorageDriver)
IMPLEMENT_DOWNCAST(MDataStd_IntPackedMapStorageDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDataStd_IntPackedMapStorageDriver)
#include <OCAF/PDataStd/PDataStd_IntPackedMap.hxx>
#include <OCAF/PDataStd/PDataStd_IntPackedMap_1.hxx>
#include <TDataStd_IntPackedMap.hxx>
#include <OCAF/PColStd/PColStd_HArray1OfInteger.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <Foundation/TColStd/TColStd_MapIteratorOfPackedMapOfInteger.hxx>
#include <Foundation/TColStd/TColStd_PackedMapOfInteger.hxx>
#include <Foundation/TCollection/TCollection_ExtendedString.hxx>
//=======================================================================
//function : MDataStd_IntPackedMapStorageDriver
//purpose  : Constructor
//=======================================================================
MDataStd_IntPackedMapStorageDriver::MDataStd_IntPackedMapStorageDriver
  (const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ASDriver(theMsgDriver)
{
}

//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================
Standard_Integer MDataStd_IntPackedMapStorageDriver::VersionNumber() const
{ return 0; }

//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================
Handle(Standard_Type) MDataStd_IntPackedMapStorageDriver::SourceType() const
{ return STANDARD_TYPE(TDataStd_IntPackedMap);}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================
Handle(PDF_Attribute) MDataStd_IntPackedMapStorageDriver::NewEmpty() const
{ return new PDataStd_IntPackedMap_1; }

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================
void MDataStd_IntPackedMapStorageDriver::Paste(const Handle(TDF_Attribute)& Source,
  const Handle(PDF_Attribute)& Target,const Handle(MDF_SRelocationTable)& ) const
{
  Handle(TDataStd_IntPackedMap)   aS = 
    Handle(TDataStd_IntPackedMap)::DownCast (Source);
  Handle(PDataStd_IntPackedMap_1) aT = 
    Handle(PDataStd_IntPackedMap_1)::DownCast (Target);
  if(!aS.IsNull() && !aT.IsNull()) {
    Standard_Integer aSize = (aS->IsEmpty()) ? 0 : aS->Extent();
    if(aSize) {
      aT->Init (1, aSize);
      TColStd_MapIteratorOfPackedMapOfInteger anIt(aS->GetMap());
      for(Standard_Integer i = 1;anIt.More();anIt.Next(),i++)
	aT->SetValue(i, anIt.Key());
    }
    aT->SetDelta(aS->GetDelta());
  } else 
    WriteMessage(TCollection_ExtendedString ("error storing attribute TDataStd_IntPackedMap"));
}
