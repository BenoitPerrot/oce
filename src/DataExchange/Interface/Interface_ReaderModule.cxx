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

#include <Foundation/Standard/Standard_DomainError.hxx>
#include <DataExchange/Interface/Interface_FileReaderData.hxx>
#include <DataExchange/Interface/Interface_Check.hxx>
#include <Foundation/Standard/Standard_Transient.hxx>
#include <DataExchange/Interface/Interface_ReaderModule.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Interface_ReaderModule)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Interface_ReaderModule)
IMPLEMENT_DOWNCAST(Interface_ReaderModule,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Interface_ReaderModule)


Standard_Boolean Interface_ReaderModule::NewRead(const Standard_Integer,
                                                 const Handle(Interface_FileReaderData)&,
                                                 const Standard_Integer,
                                                 Handle(Interface_Check)&,
                                                 Handle(Standard_Transient)& ) const
{
  return Standard_False;
}
