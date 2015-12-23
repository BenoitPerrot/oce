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

#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
#include <PDF_Attribute.hxx>
#include <TDF_Attribute.hxx>
#include <MDF_SRelocationTable.hxx>
#include <MDF_TagSourceStorageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDF_TagSourceStorageDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ASDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDF_TagSourceStorageDriver)
IMPLEMENT_DOWNCAST(MDF_TagSourceStorageDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDF_TagSourceStorageDriver)
#include <PDF_TagSource.hxx>
#include <TDF_TagSource.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>

MDF_TagSourceStorageDriver::MDF_TagSourceStorageDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ASDriver(theMsgDriver)
{
}

Standard_Integer MDF_TagSourceStorageDriver::VersionNumber() const
{ return 0; }

Handle(Standard_Type) MDF_TagSourceStorageDriver::SourceType() const
{ return STANDARD_TYPE(TDF_TagSource); }

Handle(PDF_Attribute) MDF_TagSourceStorageDriver::NewEmpty() const
{ return new PDF_TagSource (); }

//void MDF_TagSourceStorageDriver::Paste(const Handle(TDF_Attribute)& Source,const Handle(PDF_Attribute)& Target,const Handle(MDF_SRelocationTable)& RelocTable) const
void MDF_TagSourceStorageDriver::Paste(const Handle(TDF_Attribute)& Source,const Handle(PDF_Attribute)& Target,const Handle(MDF_SRelocationTable)& ) const
{
  Handle(TDF_TagSource) S = Handle(TDF_TagSource)::DownCast (Source);
  Handle(PDF_TagSource) T = Handle(PDF_TagSource)::DownCast (Target);
  T->Set (S->Get ());
}

