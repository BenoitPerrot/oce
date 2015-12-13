// Created on: 1995-01-23
// Created by: Mister rmi
// Copyright (c) 1995-1999 Matra Datavision
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

#include <SelectBasics_EntityOwner.hxx>
#include <SelectBasics_ListOfBox2d.hxx>
#include <Mathematics/Collections/TColgp_Array1OfPnt2d.hxx>
#include <Mathematics/BoundingVolumes/Bnd_Box2d.hxx>
#include <SelectBasics_SensitiveEntity.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(SelectBasics_SensitiveEntity)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(SelectBasics_SensitiveEntity)
IMPLEMENT_DOWNCAST(SelectBasics_SensitiveEntity,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(SelectBasics_SensitiveEntity)



//==================================
//function : Initialize
//purpose  : 
//==================================
SelectBasics_SensitiveEntity
::SelectBasics_SensitiveEntity(const Handle(SelectBasics_EntityOwner)& OwnerId,
			       const Standard_ShortReal aFactor):
myOwnerId(OwnerId),
mySFactor(aFactor)
{}


void SelectBasics_SensitiveEntity
::Set (const Handle(SelectBasics_EntityOwner)& TheOwnerId) { myOwnerId = TheOwnerId;}

const Handle(SelectBasics_EntityOwner)&  SelectBasics_SensitiveEntity
::OwnerId() const {return myOwnerId;}
