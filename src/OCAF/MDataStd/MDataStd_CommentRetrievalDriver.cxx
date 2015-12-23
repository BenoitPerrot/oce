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
#include <OCAF/TDF/TDF_Attribute.hxx>
#include <OCAF/PDF/PDF_Attribute.hxx>
#include <OCAF/MDF/MDF_RRelocationTable.hxx>
#include <OCAF/MDataStd/MDataStd_CommentRetrievalDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDataStd_CommentRetrievalDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ARDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDataStd_CommentRetrievalDriver)
IMPLEMENT_DOWNCAST(MDataStd_CommentRetrievalDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDataStd_CommentRetrievalDriver)

#include <OCAF/PDataStd/PDataStd_Comment.hxx>
#include <OCAF/TDataStd/TDataStd_Comment.hxx>
#include <Foundation/TCollection/TCollection_ExtendedString.hxx>
#include <OCAF/PCollection/PCollection_HExtendedString.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>

MDataStd_CommentRetrievalDriver::MDataStd_CommentRetrievalDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ARDriver(theMsgDriver)
{
}

Standard_Integer MDataStd_CommentRetrievalDriver::VersionNumber() const
{ return 0; }

Handle(Standard_Type) MDataStd_CommentRetrievalDriver::SourceType() const
{ return STANDARD_TYPE(PDataStd_Comment); }

Handle(TDF_Attribute) MDataStd_CommentRetrievalDriver::NewEmpty() const
{ return new TDataStd_Comment (); }

//void MDataStd_CommentRetrievalDriver::Paste(const Handle(PDF_Attribute)& Source,const Handle(TDF_Attribute)& Target,const Handle(MDF_RRelocationTable)& RelocTable) const
void MDataStd_CommentRetrievalDriver::Paste(const Handle(PDF_Attribute)& Source,const Handle(TDF_Attribute)& Target,const Handle(MDF_RRelocationTable)& ) const
{
  Handle(PDataStd_Comment) S = Handle(PDataStd_Comment)::DownCast (Source);
  Handle(TDataStd_Comment) T = Handle(TDataStd_Comment)::DownCast (Target);
  TCollection_ExtendedString Comment = (S->Get())->Convert ();
  T->Set (Comment);
}

