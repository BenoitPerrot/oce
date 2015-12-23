// Created on: 1999-06-17
// Created by: Vladislav ROMASHKO
// Copyright (c) 1999-1999 Matra Datavision
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
#include <OCAF/TDF/TDF_Attribute.hxx>
#include <OCAF/MDF/MDF_SRelocationTable.hxx>
#include <OCAF/MDataStd/MDataStd_TreeNodeStorageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDataStd_TreeNodeStorageDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ASDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDataStd_TreeNodeStorageDriver)
IMPLEMENT_DOWNCAST(MDataStd_TreeNodeStorageDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDataStd_TreeNodeStorageDriver)

#include <OCAF/TDataStd/TDataStd_TreeNode.hxx>
#include <OCAF/PDataStd/PDataStd_TreeNode.hxx>
#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>

MDataStd_TreeNodeStorageDriver::MDataStd_TreeNodeStorageDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ASDriver(theMsgDriver)
{}

Standard_Integer MDataStd_TreeNodeStorageDriver::VersionNumber() const
{ return 0; }

Handle(Standard_Type) MDataStd_TreeNodeStorageDriver::SourceType() const
{ return STANDARD_TYPE(TDataStd_TreeNode); }

Handle(PDF_Attribute) MDataStd_TreeNodeStorageDriver::NewEmpty() const
{ return new PDataStd_TreeNode(); }

void MDataStd_TreeNodeStorageDriver::Paste(const Handle(TDF_Attribute)&        Source,
					    const Handle(PDF_Attribute)&        Target,
					    const Handle(MDF_SRelocationTable)& RelocTable) const
{
  Handle(TDataStd_TreeNode) S = Handle(TDataStd_TreeNode)::DownCast (Source);
  Handle(PDataStd_TreeNode) T = Handle(PDataStd_TreeNode)::DownCast (Target);

  Handle (PDataStd_TreeNode) TF;
  // Only stores myFirst , myNext
  // When retrieving the function 
  // myFirst is appended to me and the next of myFirst and subsequently the next of the next
  // are appended to me.

  Handle (TDataStd_TreeNode) F  = S->First();
  if (!F.IsNull ()) {
    if (!RelocTable->HasRelocation(F, TF)) {
      Standard_NoSuchObject::Raise("MDataStd_TreeNodeStorageDriver::Paste");
    }
    T->SetFirst(TF);
  }

  F  = S->Next();
  if (!F.IsNull ()) {
    if (!RelocTable->HasRelocation(F, TF)) {
      Standard_NoSuchObject::Raise("MDataStd_TreeNodeStorageDriver::Paste");
    }
    T->SetNext(TF);
  }
  T->SetTreeID(S->ID());
}
