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

#include <DataExchange/IGESData/IGESData_Protocol.hxx>
#include <DataExchange/IGESData/IGESData_FileProtocol.hxx>
#include <Interface_Protocol.hxx>
#include <DataExchange/IGESData/IGESData_FileProtocol.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESData_FileProtocol)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_Protocol),
  STANDARD_TYPE(Interface_Protocol),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESData_FileProtocol)
IMPLEMENT_DOWNCAST(IGESData_FileProtocol,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESData_FileProtocol)


IGESData_FileProtocol::IGESData_FileProtocol ()    {  }

    void  IGESData_FileProtocol::Add (const Handle(IGESData_Protocol)& protocol)
{
  if      (theresource.IsNull()) theresource = protocol;
  else if (theresource->IsInstance(protocol->DynamicType())) return; // passer
  else if (!thenext.IsNull()) thenext->Add(protocol);
  else {
    thenext = new IGESData_FileProtocol;
    thenext->Add(protocol);
  }
}

    Standard_Integer  IGESData_FileProtocol::NbResources () const
{
  Standard_Integer nb = (theresource.IsNull() ? 0 : 1);
  if (!thenext.IsNull()) nb += thenext->NbResources();
  return nb;
}

    Handle(Interface_Protocol) IGESData_FileProtocol::Resource
  (const Standard_Integer num) const
{
  Handle(IGESData_Protocol) res;
  if (num == 1) return theresource;
  else if (!thenext.IsNull()) return thenext->Resource(num-1);
  return res;  // Null
}
