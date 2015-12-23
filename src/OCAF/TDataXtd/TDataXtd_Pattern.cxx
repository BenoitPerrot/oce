// Created on: 2009-04-06
// Created by: Sergey ZARITCHNY
// Copyright (c) 2009-2014 OPEN CASCADE SAS
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

#include <Foundation/Standard/Standard_GUID.hxx>
#include <OCAF/TDataXtd/TDataXtd_Array1OfTrsf.hxx>
#include <OCAF/TDataXtd/TDataXtd_Pattern.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(TDataXtd_Pattern)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TDF_Attribute),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TDataXtd_Pattern)
IMPLEMENT_DOWNCAST(TDataXtd_Pattern,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TDataXtd_Pattern)
//=======================================================================
//function : GetID
//purpose  : 
//=======================================================================

const Standard_GUID& TDataXtd_Pattern::GetID()
{
  static Standard_GUID myID("2a96b618-ec8b-11d0-bee7-080009dc3333");
  return myID;
}


//=======================================================================
//function : ID
//purpose  : 
//=======================================================================

const Standard_GUID& TDataXtd_Pattern::ID() const
{ return GetID(); }
