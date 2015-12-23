// Created on: 1993-07-23
// Created by: Remi LEQUETTE
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

#include <Foundation/StdFail/StdFail_NotDone.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingAlgorithms/BRepBuilderAPI/BRepBuilderAPI_MakeShape.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <ModelingData/TopoDS/TopoDS_Vertex.hxx>


//=======================================================================
//function : BRepBuilderAPI_MakeShape
//purpose  : 
//=======================================================================

BRepBuilderAPI_MakeShape::BRepBuilderAPI_MakeShape()
{
}

void BRepBuilderAPI_MakeShape::Delete()
{}


//=======================================================================
//function : Build
//purpose  : 
//=======================================================================

void BRepBuilderAPI_MakeShape::Build()
{
}

//=======================================================================
//function : Shape
//purpose  : 
//=======================================================================

const TopoDS_Shape&  BRepBuilderAPI_MakeShape::Shape() const
{
  if (!IsDone()) {
    // the following is const cast away
    ((BRepBuilderAPI_MakeShape*) (void*) this)->Build();
    Check();
  }
  return myShape;
}


//=======================================================================
//function : operator
//purpose  : 
//=======================================================================

BRepBuilderAPI_MakeShape::operator TopoDS_Shape() const
{
  return Shape();
}


//=======================================================================
//function : Generated
//purpose  : 
//=======================================================================

const TopTools_ListOfShape& BRepBuilderAPI_MakeShape::Generated (const TopoDS_Shape&) 

{
  myGenerated.Clear();
  return myGenerated;
}


//=======================================================================
//function : Modified
//purpose  : 
//=======================================================================

const TopTools_ListOfShape& BRepBuilderAPI_MakeShape::Modified (const TopoDS_Shape&) 

{
  myGenerated.Clear();
  return myGenerated;
}


//=======================================================================
//function : IsDeleted
//purpose  : 
//=======================================================================

Standard_Boolean BRepBuilderAPI_MakeShape::IsDeleted (const TopoDS_Shape&) 

{
  return Standard_False;
}




