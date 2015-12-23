// Created on: 2007-08-22
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
#include <PDF_Attribute.hxx>
#include <TDF_Attribute.hxx>
#include <OCAF/MDF/MDF_SRelocationTable.hxx>
#include <OCAF/MDataStd/MDataStd_AsciiStringStorageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDataStd_AsciiStringStorageDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ASDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDataStd_AsciiStringStorageDriver)
IMPLEMENT_DOWNCAST(MDataStd_AsciiStringStorageDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDataStd_AsciiStringStorageDriver)
#include <PDataStd_AsciiString.hxx>
#include <TDataStd_AsciiString.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <OCAF/PCollection/PCollection_HAsciiString.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>
//=======================================================================
//function : MDataStd_AsciiStringStorageDriver
//purpose  : Constructor
//=======================================================================
MDataStd_AsciiStringStorageDriver::MDataStd_AsciiStringStorageDriver
  (const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ASDriver(theMsgDriver)
{
}

//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================
Standard_Integer MDataStd_AsciiStringStorageDriver::VersionNumber() const
{ return 0; }

//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================
Handle(Standard_Type) MDataStd_AsciiStringStorageDriver::SourceType() const
{ return STANDARD_TYPE(TDataStd_AsciiString);}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================
Handle(PDF_Attribute) MDataStd_AsciiStringStorageDriver::NewEmpty() const
{ return new PDataStd_AsciiString; }

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================
void MDataStd_AsciiStringStorageDriver::Paste(const Handle(TDF_Attribute)& Source,
  const Handle(PDF_Attribute)& Target,const Handle(MDF_SRelocationTable)& ) const
{
  Handle(TDataStd_AsciiString) S = Handle(TDataStd_AsciiString)::DownCast (Source);
  Handle(PDataStd_AsciiString) T = Handle(PDataStd_AsciiString)::DownCast (Target);
  if(!S.IsNull() && !T.IsNull()) {
    if(S->Get().Length() != 0) {
      Handle(PCollection_HAsciiString) aString = new PCollection_HAsciiString (S->Get());
      T->Set (aString);
    }
  }
}
