// Created by: CKY / Contract Toubro-Larsen
// Copyright (c) 1993-1999 Matra Datavision
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

//--------------------------------------------------------------------
//--------------------------------------------------------------------

#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <DataExchange/IGESBasic/IGESBasic_ExternalRefFile.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESBasic_ExternalRefFile)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESBasic_ExternalRefFile)
IMPLEMENT_DOWNCAST(IGESBasic_ExternalRefFile,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESBasic_ExternalRefFile)


IGESBasic_ExternalRefFile::IGESBasic_ExternalRefFile ()    {  }


    void  IGESBasic_ExternalRefFile::Init
  (const Handle(TCollection_HAsciiString)& aFileIdent)
{
  theExtRefFileIdentifier = aFileIdent;
  InitTypeAndForm(416,1);
}

    Handle(TCollection_HAsciiString)  IGESBasic_ExternalRefFile::FileId () const
{
  return theExtRefFileIdentifier;
}
