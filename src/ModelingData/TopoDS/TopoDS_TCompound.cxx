// Created on: 1991-04-12
// Created by: Remi LEQUETTE
// Copyright (c) 1991-1999 Matra Datavision
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

#include <ModelingData/TopoDS/TopoDS_TShape.hxx>
#include <ModelingData/TopoDS/TopoDS_TCompound.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(TopoDS_TCompound)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TopoDS_TShape),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TopoDS_TCompound)
IMPLEMENT_DOWNCAST(TopoDS_TCompound,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TopoDS_TCompound)

#include <ModelingData/TopAbs/TopAbs.hxx>

//=======================================================================
//function : ShapeType
//purpose  : 
//=======================================================================

TopAbs_ShapeEnum TopoDS_TCompound::ShapeType() const
{
  return TopAbs_COMPOUND;
}

//=======================================================================
//function : EmptyCopy
//purpose  : 
//=======================================================================

Handle(TopoDS_TShape) TopoDS_TCompound::EmptyCopy() const
{
  return Handle(TopoDS_TCompound)(new TopoDS_TCompound());
}
