// Created on: 2000-09-28
// Created by: Andrey BETENEV
// Copyright (c) 2000-2014 OPEN CASCADE SAS
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

#include <XSControl_WorkSession.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <OCAF/TDF/TDF_Label.hxx>
#include <DataExchange/STEPCAFControl/STEPCAFControl_ExternFile.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(STEPCAFControl_ExternFile)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(STEPCAFControl_ExternFile)
IMPLEMENT_DOWNCAST(STEPCAFControl_ExternFile,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(STEPCAFControl_ExternFile)

//=======================================================================
//function : STEPCAFControl_ExternFile
//purpose  : 
//=======================================================================

STEPCAFControl_ExternFile::STEPCAFControl_ExternFile ()
     : myLoadStatus(IFSelect_RetVoid), myTransferStatus(Standard_False),
       myWriteStatus(IFSelect_RetVoid)
{
}
