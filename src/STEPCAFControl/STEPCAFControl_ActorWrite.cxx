// Created on: 2000-10-05
// Created by: Andrey BETENEV
// Copyright (c) 2000-2014 OPEN CASCADE SAS
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

#include <TopoDS_Shape.hxx>
#include <STEPCAFControl_ActorWrite.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(STEPCAFControl_ActorWrite)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(STEPControl_ActorWrite),
  STANDARD_TYPE(Transfer_ActorOfFinderProcess),
  STANDARD_TYPE(Transfer_ActorOfProcessForFinder),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(STEPCAFControl_ActorWrite)
IMPLEMENT_DOWNCAST(STEPCAFControl_ActorWrite,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(STEPCAFControl_ActorWrite)

//=======================================================================
//function : STEPCAFControl_ActorWrite
//purpose  : 
//=======================================================================

STEPCAFControl_ActorWrite::STEPCAFControl_ActorWrite () : myStdMode(Standard_True)
{
}

//=======================================================================
//function : ClearMap
//purpose  : 
//=======================================================================

void STEPCAFControl_ActorWrite::SetStdMode (const Standard_Boolean stdmode)
{
  myStdMode = stdmode;
  if ( myStdMode ) ClearMap();
}

//=======================================================================
//function : ClearMap
//purpose  : 
//=======================================================================

void STEPCAFControl_ActorWrite::ClearMap ()
{
  myMap.Clear();
}

//=======================================================================
//function : RegisterAssembly
//purpose  : 
//=======================================================================

void STEPCAFControl_ActorWrite::RegisterAssembly (const TopoDS_Shape &S)
{
  if ( ! myStdMode && S.ShapeType() == TopAbs_COMPOUND ) myMap.Add ( S );
}

//=======================================================================
//function : IsAssembly
//purpose  : 
//=======================================================================

Standard_Boolean STEPCAFControl_ActorWrite::IsAssembly (TopoDS_Shape &S) const
{
  if ( myStdMode ) return STEPControl_ActorWrite::IsAssembly ( S );
  return myMap.Contains ( S );
}

