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
#include <TDF_Attribute.hxx>
#include <OCAF/PDF/PDF_Attribute.hxx>
#include <OCAF/MDF/MDF_RRelocationTable.hxx>
#include <OCAF/MDataStd/MDataStd_AsciiStringRetrievalDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDataStd_AsciiStringRetrievalDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ARDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDataStd_AsciiStringRetrievalDriver)
IMPLEMENT_DOWNCAST(MDataStd_AsciiStringRetrievalDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDataStd_AsciiStringRetrievalDriver)
#include <OCAF/PDataStd/PDataStd_AsciiString.hxx>
#include <TDataStd_AsciiString.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <OCAF/PCollection/PCollection_HAsciiString.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>

//=======================================================================
//function : MDataStd_AsciiStringRetrievalDriver
//purpose  : Constructor
//=======================================================================
MDataStd_AsciiStringRetrievalDriver::MDataStd_AsciiStringRetrievalDriver
  (const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ARDriver(theMsgDriver)
{
}
//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================
Standard_Integer MDataStd_AsciiStringRetrievalDriver::VersionNumber() const
{ return 0; }

//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================
Handle(Standard_Type) MDataStd_AsciiStringRetrievalDriver::SourceType() const
{ return STANDARD_TYPE(PDataStd_AsciiString); }

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================
Handle(TDF_Attribute) MDataStd_AsciiStringRetrievalDriver::NewEmpty() const
{ return new TDataStd_AsciiString (); }

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================
void MDataStd_AsciiStringRetrievalDriver::Paste(const Handle(PDF_Attribute)& Source,
const Handle(TDF_Attribute)& Target,const Handle(MDF_RRelocationTable)& ) const
{
  Handle(PDataStd_AsciiString) S = Handle(PDataStd_AsciiString)::DownCast (Source);
  Handle(TDataStd_AsciiString) T = Handle(TDataStd_AsciiString)::DownCast (Target);
  if(!S.IsNull() && !T.IsNull()) {
    if(!S->Get().IsNull()) {
      TCollection_AsciiString aString((S->Get())->Convert ());
      T->Set (aString);
    }
  }
}

