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

#include <Interface_Protocol.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
#include <DataExchange/IGESDefs/IGESDefs_Protocol.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESDefs_Protocol)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_Protocol),
  STANDARD_TYPE(Interface_Protocol),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESDefs_Protocol)
IMPLEMENT_DOWNCAST(IGESDefs_Protocol,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESDefs_Protocol)

#include <DataExchange/IGESDefs/IGESDefs_AssociativityDef.hxx>
#include <DataExchange/IGESDefs/IGESDefs_MacroDef.hxx>
#include <DataExchange/IGESDefs/IGESDefs_UnitsData.hxx>
#include <DataExchange/IGESDefs/IGESDefs_AttributeDef.hxx>
#include <DataExchange/IGESDefs/IGESDefs_TabularData.hxx>
#include <DataExchange/IGESDefs/IGESDefs_GenericData.hxx>
#include <DataExchange/IGESDefs/IGESDefs_AttributeTable.hxx>

#include  <DataExchange/IGESGraph/IGESGraph.hxx>
#include  <DataExchange/IGESGraph/IGESGraph_Protocol.hxx>

static int deja = 0;
static Handle(Standard_Type) atype1,atype2,atype3,atype4,atype5,atype6,atype7;

    IGESDefs_Protocol::IGESDefs_Protocol ()
{
  if (deja) return;  deja = 1;
  atype1 = STANDARD_TYPE(IGESDefs_AssociativityDef);
  atype2 = STANDARD_TYPE(IGESDefs_AttributeDef);
  atype3 = STANDARD_TYPE(IGESDefs_AttributeTable);
  atype4 = STANDARD_TYPE(IGESDefs_GenericData);
  atype5 = STANDARD_TYPE(IGESDefs_MacroDef);
  atype6 = STANDARD_TYPE(IGESDefs_TabularData);
  atype7 = STANDARD_TYPE(IGESDefs_UnitsData);
}

    Standard_Integer IGESDefs_Protocol::NbResources () const
      {  return 1;  }

    Handle(Interface_Protocol) IGESDefs_Protocol::Resource
  (const Standard_Integer /*num*/) const
{
  Handle(Interface_Protocol) res = IGESGraph::Protocol();
  return res;
}

    Standard_Integer IGESDefs_Protocol::TypeNumber
  (const Handle(Standard_Type)& atype) const
{   
  if      (atype == atype1) return 1;
  else if (atype == atype2) return 2;
  else if (atype == atype3) return 3;
  else if (atype == atype4) return 4;
  else if (atype == atype5) return 5;
  else if (atype == atype6) return 6;
  else if (atype == atype7) return 7;
  return 0;
}
