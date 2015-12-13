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

#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_SelectModelEntities.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IFSelect_SelectModelEntities)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IFSelect_SelectBase),
  STANDARD_TYPE(IFSelect_Selection),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IFSelect_SelectModelEntities)
IMPLEMENT_DOWNCAST(IFSelect_SelectModelEntities,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IFSelect_SelectModelEntities)
#include <Interface_InterfaceModel.hxx>


IFSelect_SelectModelEntities::IFSelect_SelectModelEntities ()    {  }

    Interface_EntityIterator  IFSelect_SelectModelEntities::RootResult
  (const Interface_Graph& G) const
      {  return G.Model()->Entities();  }

    Interface_EntityIterator  IFSelect_SelectModelEntities::CompleteResult
  (const Interface_Graph& G) const 
      {  return G.Model()->Entities();  }

    TCollection_AsciiString  IFSelect_SelectModelEntities::Label () const 
{  return TCollection_AsciiString("All Entities from Model");  }
