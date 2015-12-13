// Created on: 1996-09-17
// Created by: Odile Olivier
// Copyright (c) 1996-1999 Matra Datavision
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

#include <SelectMgr_EntityOwner.hxx>
#include <StdSelect_ShapeTypeFilter.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StdSelect_ShapeTypeFilter)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(SelectMgr_Filter),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StdSelect_ShapeTypeFilter)
IMPLEMENT_DOWNCAST(StdSelect_ShapeTypeFilter,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StdSelect_ShapeTypeFilter)
#include <StdSelect_BRepOwner.hxx>


//==================================================
// Function: StdSelect_ShapeTypeFilter
// Purpose : Constructeur
//==================================================

StdSelect_ShapeTypeFilter::StdSelect_ShapeTypeFilter(const TopAbs_ShapeEnum aType):
myType(aType){}


//==================================================
// Function: IsOk
// Purpose : Renvoie True si la shape est du type defini a la construction
//==================================================

Standard_Boolean StdSelect_ShapeTypeFilter::IsOk(const Handle(SelectMgr_EntityOwner)& EO)  const 
{ 
  Handle(StdSelect_BRepOwner) BRO = Handle(StdSelect_BRepOwner)::DownCast( EO );
  if( BRO.IsNull() || !BRO->HasShape() ) return Standard_False;
  const TopoDS_Shape& anobj= BRO->Shape();
  return anobj.ShapeType() == myType;
}
Standard_Boolean StdSelect_ShapeTypeFilter::ActsOn(const TopAbs_ShapeEnum aStandardMode) const 
{return aStandardMode==myType;}
