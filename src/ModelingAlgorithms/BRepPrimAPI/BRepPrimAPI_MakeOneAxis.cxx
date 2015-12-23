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
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingData/TopoDS/TopoDS_Shell.hxx>
#include <ModelingData/TopoDS/TopoDS_Solid.hxx>
#include <ModelingAlgorithms/BRepPrimAPI/BRepPrimAPI_MakeOneAxis.hxx>
#include <ModelingAlgorithms/BRepBuilderAPI/BRepBuilderAPI.hxx>
#include <ModelingAlgorithms/BRepPrim/BRepPrim_OneAxis.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>

//=======================================================================
//function : Face
//purpose  : 
//=======================================================================

const TopoDS_Face&  BRepPrimAPI_MakeOneAxis::Face()
{
  Build();
  return ((BRepPrim_OneAxis*) OneAxis())->LateralFace();
}


//=======================================================================
//function : Shell
//purpose  : 
//=======================================================================

const TopoDS_Shell&  BRepPrimAPI_MakeOneAxis::Shell()
{
  Build();
  return ((BRepPrim_OneAxis*) OneAxis())->Shell();
}

//=======================================================================
//function : Build
//purpose  : 
//=======================================================================

void BRepPrimAPI_MakeOneAxis::Build()
{
  BRep_Builder B;
  B.MakeSolid(TopoDS::Solid(myShape));
  B.Add(myShape,((BRepPrim_OneAxis*) OneAxis())->Shell());
  myShape.Closed(Standard_True);
  Done();
}

//=======================================================================
//function : Solid
//purpose  : 
//=======================================================================

const TopoDS_Solid&  BRepPrimAPI_MakeOneAxis::Solid()
{
  Build();
  return TopoDS::Solid(myShape);
}



//=======================================================================
//function : operator
//purpose  : 
//=======================================================================

BRepPrimAPI_MakeOneAxis::operator TopoDS_Face()
{
  return Face();
}

//=======================================================================
//function : operator
//purpose  : 
//=======================================================================

BRepPrimAPI_MakeOneAxis::operator TopoDS_Shell()
{
  return Shell();
}


//=======================================================================
//function : operator
//purpose  : 
//=======================================================================

BRepPrimAPI_MakeOneAxis::operator TopoDS_Solid()
{
  return Solid();
}

