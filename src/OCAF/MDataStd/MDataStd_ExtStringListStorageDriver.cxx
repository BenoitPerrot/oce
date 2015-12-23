// Created on: 2007-05-29
// Created by: Vlad Romashko
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
#include <PDF_Attribute.hxx>
#include <TDF_Attribute.hxx>
#include <OCAF/MDF/MDF_SRelocationTable.hxx>
#include <OCAF/MDataStd/MDataStd_ExtStringListStorageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDataStd_ExtStringListStorageDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ASDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDataStd_ExtStringListStorageDriver)
IMPLEMENT_DOWNCAST(MDataStd_ExtStringListStorageDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDataStd_ExtStringListStorageDriver)
#include <PDataStd_ExtStringList.hxx>
#include <TDataStd_ExtStringList.hxx>
#include <OCAF/MDataStd/MDataStd.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <TDataStd_ListIteratorOfListOfExtendedString.hxx>
#include <Foundation/TCollection/TCollection_ExtendedString.hxx>
#include <OCAF/PCollection/PCollection_HExtendedString.hxx>

//=======================================================================
//function : MDataStd_ExtStringListStorageDriver
//purpose  : 
//=======================================================================
MDataStd_ExtStringListStorageDriver::MDataStd_ExtStringListStorageDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ASDriver(theMsgDriver)
{
}

//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================
Standard_Integer MDataStd_ExtStringListStorageDriver::VersionNumber() const
{ 
  return 0;
}


//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================
Handle(Standard_Type) MDataStd_ExtStringListStorageDriver::SourceType() const
{
  static Handle(Standard_Type) sourceType = STANDARD_TYPE(TDataStd_ExtStringList);
  return sourceType;
}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================
Handle(PDF_Attribute) MDataStd_ExtStringListStorageDriver::NewEmpty() const 
{
  return new PDataStd_ExtStringList();
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================
void MDataStd_ExtStringListStorageDriver::Paste(const Handle(TDF_Attribute)& Source,
						const Handle(PDF_Attribute)& Target,
						const Handle(MDF_SRelocationTable)& /*RelocTable*/) const
{
  Handle(TDataStd_ExtStringList) S = Handle(TDataStd_ExtStringList)::DownCast (Source);
  Handle(PDataStd_ExtStringList) T = Handle(PDataStd_ExtStringList)::DownCast (Target);
  
  Standard_Integer lower = 1, upper = S->Extent(), i = lower;
  if (upper >= lower)
  {
    T->Init(lower, upper);
    TDataStd_ListIteratorOfListOfExtendedString itr(S->List());
    for (; itr.More(); itr.Next(), i++) 
    {
      const TCollection_ExtendedString& tvalue = itr.Value();
      Handle(PCollection_HExtendedString) pvalue = new PCollection_HExtendedString(tvalue);
      T->SetValue(i, pvalue);
    }
  }
}
