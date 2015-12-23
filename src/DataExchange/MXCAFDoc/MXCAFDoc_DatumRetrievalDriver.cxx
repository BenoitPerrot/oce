// Created on: 2008-12-10
// Created by: Pavel TELKOV
// Copyright (c) 2008-2014 OPEN CASCADE SAS
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
#include <OCAF/TDF/TDF_Attribute.hxx>
#include <OCAF/PDF/PDF_Attribute.hxx>
#include <OCAF/MDF/MDF_RRelocationTable.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_DatumRetrievalDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MXCAFDoc_DatumRetrievalDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ARDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MXCAFDoc_DatumRetrievalDriver)
IMPLEMENT_DOWNCAST(MXCAFDoc_DatumRetrievalDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MXCAFDoc_DatumRetrievalDriver)
#include <DataExchange/PXCAFDoc/PXCAFDoc_Datum.hxx>
#include <XCAFDoc_Datum.hxx>

#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <OCAF/PCollection/PCollection_HAsciiString.hxx>


//=======================================================================
//function : MCAFDoc_DatumRetrievalDriver
//purpose  : 
//=======================================================================

MXCAFDoc_DatumRetrievalDriver::MXCAFDoc_DatumRetrievalDriver
  (const Handle(CDM_MessageDriver)& theMsgDriver) : MDF_ARDriver (theMsgDriver)
{}

//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================

Standard_Integer MXCAFDoc_DatumRetrievalDriver::VersionNumber() const
{ return 0; }

//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================

Handle(Standard_Type) MXCAFDoc_DatumRetrievalDriver::SourceType() const
{
  static Handle(Standard_Type) sourceType = STANDARD_TYPE(PXCAFDoc_Datum);
  return sourceType;
}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================

Handle(TDF_Attribute) MXCAFDoc_DatumRetrievalDriver::NewEmpty() const
{
  return new XCAFDoc_Datum();
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================

void MXCAFDoc_DatumRetrievalDriver::Paste(const Handle(PDF_Attribute)& Source,
                                           const Handle(TDF_Attribute)& Target,
                                           const Handle(MDF_RRelocationTable)& /*RelocTable*/) const
{
  Handle(PXCAFDoc_Datum) S = Handle(PXCAFDoc_Datum)::DownCast (Source);
  Handle(XCAFDoc_Datum) T = Handle(XCAFDoc_Datum)::DownCast (Target);
  
  Handle(TCollection_HAsciiString) aName, aDescr, anId;
  if ( !S->GetName().IsNull() )
    aName = new TCollection_HAsciiString( (S->GetName())->Convert() );
  if ( !S->GetDescription().IsNull() )
    aDescr = new TCollection_HAsciiString( (S->GetDescription())->Convert() );
  if ( !S->GetIdentification().IsNull() )
    anId = new TCollection_HAsciiString( (S->GetIdentification())->Convert() );

  T->Set(aName, aDescr, anId);
}
