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
#include <DataExchange/MXCAFDoc/MXCAFDoc_MaterialRetrievalDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MXCAFDoc_MaterialRetrievalDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ARDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MXCAFDoc_MaterialRetrievalDriver)
IMPLEMENT_DOWNCAST(MXCAFDoc_MaterialRetrievalDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MXCAFDoc_MaterialRetrievalDriver)
#include <PXCAFDoc_Material.hxx>
#include <XCAFDoc_Material.hxx>

#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <OCAF/PCollection/PCollection_HAsciiString.hxx>


//=======================================================================
//function : MCAFDoc_MaterialRetrievalDriver
//purpose  : 
//=======================================================================

MXCAFDoc_MaterialRetrievalDriver::MXCAFDoc_MaterialRetrievalDriver
  (const Handle(CDM_MessageDriver)& theMsgDriver) : MDF_ARDriver (theMsgDriver)
{}

//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================

Standard_Integer MXCAFDoc_MaterialRetrievalDriver::VersionNumber() const
{ return 0; }

//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================

Handle(Standard_Type) MXCAFDoc_MaterialRetrievalDriver::SourceType() const
{
  static Handle(Standard_Type) sourceType = STANDARD_TYPE(PXCAFDoc_Material);
  return sourceType;
}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================

Handle(TDF_Attribute) MXCAFDoc_MaterialRetrievalDriver::NewEmpty() const
{
  return new XCAFDoc_Material();
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================

void MXCAFDoc_MaterialRetrievalDriver::Paste(const Handle(PDF_Attribute)& Source,
                                             const Handle(TDF_Attribute)& Target,
                                             const Handle(MDF_RRelocationTable)& /*RelocTable*/) const
{
  Handle(PXCAFDoc_Material) S = Handle(PXCAFDoc_Material)::DownCast (Source);
  Handle(XCAFDoc_Material) T = Handle(XCAFDoc_Material)::DownCast (Target);
  
  Handle(TCollection_HAsciiString) aName, aDescr, aDensName, aDensValType;
  if ( !S->GetName().IsNull() )
    aName = new TCollection_HAsciiString( (S->GetName())->Convert() );
  if ( !S->GetDescription().IsNull() )
    aDescr = new TCollection_HAsciiString( (S->GetDescription())->Convert() );
  if ( !S->GetDensName().IsNull() )
    aDensName = new TCollection_HAsciiString( (S->GetDensName())->Convert() );
  if ( !S->GetDensValType().IsNull() )
    aDensValType = new TCollection_HAsciiString( (S->GetDensValType())->Convert() );

  T->Set(aName, aDescr, S->GetDensity(), aDensName, aDensValType);
}
