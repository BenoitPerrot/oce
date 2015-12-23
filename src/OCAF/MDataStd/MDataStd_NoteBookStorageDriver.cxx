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

#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
#include <PDF_Attribute.hxx>
#include <TDF_Attribute.hxx>
#include <MDF_SRelocationTable.hxx>
#include <MDataStd_NoteBookStorageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDataStd_NoteBookStorageDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ASDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDataStd_NoteBookStorageDriver)
IMPLEMENT_DOWNCAST(MDataStd_NoteBookStorageDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDataStd_NoteBookStorageDriver)
#include <PDataStd_NoteBook.hxx>
#include <TDataStd_NoteBook.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>

MDataStd_NoteBookStorageDriver::MDataStd_NoteBookStorageDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ASDriver(theMsgDriver)
{
}

Standard_Integer MDataStd_NoteBookStorageDriver::VersionNumber() const
{ return 0; }

Handle(Standard_Type) MDataStd_NoteBookStorageDriver::SourceType() const
{ return STANDARD_TYPE (TDataStd_NoteBook); }

Handle(PDF_Attribute) MDataStd_NoteBookStorageDriver::NewEmpty() const
{ return new PDataStd_NoteBook(); }

//void MDataStd_NoteBookStorageDriver::Paste(const Handle(TDF_Attribute)& Source,const Handle(PDF_Attribute)& Target,const Handle(MDF_SRelocationTable)& RelocTable) const
void MDataStd_NoteBookStorageDriver::Paste(const Handle(TDF_Attribute)& ,const Handle(PDF_Attribute)& ,const Handle(MDF_SRelocationTable)& ) const
{
}

