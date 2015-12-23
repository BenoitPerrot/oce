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
#include <OCAF/MDataStd/MDataStd_ByteArrayStorageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDataStd_ByteArrayStorageDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ASDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDataStd_ByteArrayStorageDriver)
IMPLEMENT_DOWNCAST(MDataStd_ByteArrayStorageDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDataStd_ByteArrayStorageDriver)
#include <PDataStd_ByteArray.hxx>
#include <PDataStd_ByteArray_1.hxx>
#include <TDataStd_ByteArray.hxx>
#include <OCAF/MDataStd/MDataStd.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <Foundation/TColStd/TColStd_HArray1OfByte.hxx>
#include <PColStd_HArray1OfInteger.hxx>

//=======================================================================
//function : MDataStd_ByteArrayStorageDriver
//purpose  : 
//=======================================================================
MDataStd_ByteArrayStorageDriver::MDataStd_ByteArrayStorageDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ASDriver(theMsgDriver)
{

}

//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================
Standard_Integer MDataStd_ByteArrayStorageDriver::VersionNumber() const
{ 
  return 0;
}


//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================
Handle(Standard_Type) MDataStd_ByteArrayStorageDriver::SourceType() const
{
  static Handle(Standard_Type) sourceType = STANDARD_TYPE(TDataStd_ByteArray);
  return sourceType;
}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================
Handle(PDF_Attribute) MDataStd_ByteArrayStorageDriver::NewEmpty() const 
{
  return new PDataStd_ByteArray_1();
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================
void MDataStd_ByteArrayStorageDriver::Paste(const Handle(TDF_Attribute)&  Source,
					    const Handle(PDF_Attribute)&   Target,
					    const Handle(MDF_SRelocationTable)& ) const
{
  Handle(TDataStd_ByteArray) S = Handle(TDataStd_ByteArray)::DownCast (Source);
  Handle(PDataStd_ByteArray_1) T = Handle(PDataStd_ByteArray_1)::DownCast (Target);
  
  const Handle(TColStd_HArray1OfByte)& tvalues = S->InternalArray();
  if (tvalues.IsNull())
    return;
  Handle(PColStd_HArray1OfInteger) pvalues = new PColStd_HArray1OfInteger(tvalues->Lower(), tvalues->Upper());
  Standard_Integer i = tvalues->Lower(), upper = tvalues->Upper();
  for (; i <= upper; i++)
  {
    pvalues->SetValue(i, tvalues->Value(i));
  }
  T->Set(pvalues);
  T->SetDelta(S->GetDelta());
}
