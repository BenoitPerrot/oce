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

#include <TCollection_HAsciiString.hxx>
#include <IGESBasic_ExternalRefFileName.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESBasic_ExternalRefFileName)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESBasic_ExternalRefFileName)
IMPLEMENT_DOWNCAST(IGESBasic_ExternalRefFileName,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESBasic_ExternalRefFileName)


IGESBasic_ExternalRefFileName::IGESBasic_ExternalRefFileName ()    {  }


    void  IGESBasic_ExternalRefFileName::Init
  (const Handle(TCollection_HAsciiString)& aFileIdent,
   const Handle(TCollection_HAsciiString)& anExtName)
{
  theExtRefFileIdentifier = aFileIdent;
  theExtRefEntitySymbName = anExtName;
  InitTypeAndForm(416,FormNumber());
//  FormNumber 0-2 : sens pas clair. Pourrait etre 0:Definition  2:Entity
}

    void IGESBasic_ExternalRefFileName::SetForEntity (const Standard_Boolean F)
{
  InitTypeAndForm(416, (F ? 2 : 0));
}


    Handle(TCollection_HAsciiString)  IGESBasic_ExternalRefFileName::FileId () const
{
  return theExtRefFileIdentifier;
}

    Handle(TCollection_HAsciiString)  IGESBasic_ExternalRefFileName::ReferenceName () const
{
  return theExtRefEntitySymbName;
}
