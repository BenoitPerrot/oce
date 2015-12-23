// Created on: 1993-08-12
// Created by: Jean Yves LEBEY
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

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#include <TopOpeBRepTool_AncestorsTool.hxx>

#include <ModelingData/TopAbs/TopAbs.hxx>
#include <ModelingData/TopExp/TopExp.hxx>

//=======================================================================
//function : MakeAncestors
//purpose  : 
//=======================================================================

void TopOpeBRepTool_AncestorsTool::MakeAncestors
  (const TopoDS_Shape& S,
   const TopAbs_ShapeEnum TS,
   const TopAbs_ShapeEnum TA,
   TopTools_IndexedDataMapOfShapeListOfShape& M)
{
  TopExp::MapShapesAndAncestors(S,TS,TA,M);
}
