// Created on: 2002-11-19
// Created by: Vladimir ANIKIN
// Copyright (c) 2002-2014 OPEN CASCADE SAS
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

#include <OCAF/TDocStd/TDocStd_SequenceOfDocument.hxx>
#include <Foundation/TCollection/TCollection_ExtendedString.hxx>
#include <OCAF/TDocStd/TDocStd_ApplicationDelta.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(TDocStd_ApplicationDelta)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TDocStd_ApplicationDelta)
IMPLEMENT_DOWNCAST(TDocStd_ApplicationDelta,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TDocStd_ApplicationDelta)
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <OCAF/TDocStd/TDocStd_Document.hxx>

//=======================================================================
//function : TDocStd_ApplicationDelta
//purpose  : 
//=======================================================================

TDocStd_ApplicationDelta::TDocStd_ApplicationDelta() {}

//=======================================================================
//function : Dump
//purpose  : 
//=======================================================================

void TDocStd_ApplicationDelta::Dump(Standard_OStream& anOS) const {
  anOS<<"\t";
  myName.Print(anOS);
  anOS<<" - " << myDocuments.Length() << " documents ";
  anOS<<" ( ";
  Standard_Integer i;
  for (i = 1; i <= myDocuments.Length(); i++) {
    Handle(TDocStd_Document) aDocAddr= myDocuments.Value(i);
    anOS << "\"" << ((Standard_Transient*)aDocAddr);
    anOS << "\" ";
  }
  anOS << ") ";
}
