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
#include <OCAF/MDataStd/MDataStd_BooleanArrayStorageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDataStd_BooleanArrayStorageDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ASDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDataStd_BooleanArrayStorageDriver)
IMPLEMENT_DOWNCAST(MDataStd_BooleanArrayStorageDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDataStd_BooleanArrayStorageDriver)
#include <PDataStd_BooleanArray.hxx>
#include <TDataStd_BooleanArray.hxx>
#include <OCAF/MDataStd/MDataStd.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <Foundation/TColStd/TColStd_HArray1OfByte.hxx>
#include <OCAF/PColStd/PColStd_HArray1OfInteger.hxx>

//=======================================================================
//function : MDataStd_BooleanArrayStorageDriver
//purpose  : 
//=======================================================================
MDataStd_BooleanArrayStorageDriver::MDataStd_BooleanArrayStorageDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ASDriver(theMsgDriver)
{

}

//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================
Standard_Integer MDataStd_BooleanArrayStorageDriver::VersionNumber() const
{ 
  return 0;
}


//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================
Handle(Standard_Type) MDataStd_BooleanArrayStorageDriver::SourceType() const
{
  static Handle(Standard_Type) sourceType = STANDARD_TYPE(TDataStd_BooleanArray);
  return sourceType;
}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================
Handle(PDF_Attribute) MDataStd_BooleanArrayStorageDriver::NewEmpty() const 
{
  return new PDataStd_BooleanArray();
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================
void MDataStd_BooleanArrayStorageDriver::Paste(const Handle(TDF_Attribute)&  Source,
					       const Handle(PDF_Attribute)&   Target,
					       const Handle(MDF_SRelocationTable)& ) const
{
  Handle(TDataStd_BooleanArray) S = Handle(TDataStd_BooleanArray)::DownCast (Source);
  Handle(PDataStd_BooleanArray) T = Handle(PDataStd_BooleanArray)::DownCast (Target);
  
  if (S->Upper() >= S->Lower())
  {
    T->SetLower(S->Lower());
    T->SetUpper(S->Upper());
    const Handle(TColStd_HArray1OfByte)& tvalues = S->InternalArray();
    Handle(PColStd_HArray1OfInteger) pvalues = new PColStd_HArray1OfInteger(tvalues->Lower(), tvalues->Upper());
    Standard_Integer i = tvalues->Lower(), upper = tvalues->Upper();
    for (; i <= upper; i++)
    {
      pvalues->SetValue(i, tvalues->Value(i));
    }
    T->Set(pvalues);
  }
}
