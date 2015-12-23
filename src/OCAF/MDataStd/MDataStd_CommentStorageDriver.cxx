// Created on: 1998-01-15
// Created by: Denis PASCAL
// Copyright (c) 1998-1999 Matra Datavision
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
#include <OCAF/PDF/PDF_Attribute.hxx>
#include <TDF_Attribute.hxx>
#include <OCAF/MDF/MDF_SRelocationTable.hxx>
#include <OCAF/MDataStd/MDataStd_CommentStorageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDataStd_CommentStorageDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ASDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDataStd_CommentStorageDriver)
IMPLEMENT_DOWNCAST(MDataStd_CommentStorageDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDataStd_CommentStorageDriver)

#include <OCAF/PDataStd/PDataStd_Comment.hxx>
#include <OCAF/TDataStd/TDataStd_Comment.hxx>
#include <Foundation/TCollection/TCollection_ExtendedString.hxx>
#include <OCAF/PCollection/PCollection_HExtendedString.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>


MDataStd_CommentStorageDriver::MDataStd_CommentStorageDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ASDriver(theMsgDriver)
{
}

Standard_Integer MDataStd_CommentStorageDriver::VersionNumber() const
{ return 0; }

Handle(Standard_Type) MDataStd_CommentStorageDriver::SourceType() const
{ return STANDARD_TYPE(TDataStd_Comment);}

Handle(PDF_Attribute) MDataStd_CommentStorageDriver::NewEmpty() const
{ return new PDataStd_Comment; }

//void MDataStd_CommentStorageDriver::Paste(const Handle(TDF_Attribute)& Source,const Handle(PDF_Attribute)& Target,const Handle(MDF_SRelocationTable)& RelocTable) const
void MDataStd_CommentStorageDriver::Paste(const Handle(TDF_Attribute)& Source,const Handle(PDF_Attribute)& Target,const Handle(MDF_SRelocationTable)& ) const
{
  Handle(TDataStd_Comment) S = Handle(TDataStd_Comment)::DownCast (Source);
  Handle(PDataStd_Comment) T = Handle(PDataStd_Comment)::DownCast (Target);
  Handle(PCollection_HExtendedString) Comment = new PCollection_HExtendedString (S->Get());
  T->Set (Comment);
}

