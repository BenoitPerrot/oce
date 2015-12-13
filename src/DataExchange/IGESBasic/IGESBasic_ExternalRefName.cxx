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
#include <IGESBasic_ExternalRefName.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESBasic_ExternalRefName)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESBasic_ExternalRefName)
IMPLEMENT_DOWNCAST(IGESBasic_ExternalRefName,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESBasic_ExternalRefName)


IGESBasic_ExternalRefName::IGESBasic_ExternalRefName ()    {  }


    void  IGESBasic_ExternalRefName::Init
  (const Handle(TCollection_HAsciiString)& anExtName)
{
  theExtRefEntitySymbName = anExtName;
  InitTypeAndForm(416,3);
}

    Handle(TCollection_HAsciiString)  IGESBasic_ExternalRefName::ReferenceName
  () const
{
  return theExtRefEntitySymbName;
}
