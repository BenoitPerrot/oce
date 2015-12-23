// Created on: 1999-10-25
// Created by: Sergey ZARITCHNY
// Copyright (c) 1999-1999 Matra Datavision
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
#include <TNaming_Builder.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfShapeShape.hxx>
#include <QANewBRepNaming_LoaderParent.hxx>

#include <TNaming.hxx>
#include <OCAF/TDF/TDF_Label.hxx>
#include <TNaming_Builder.hxx>
#include <Mathematics/TopLoc/TopLoc_Location.hxx>
#include <ModelingData/TopExp/TopExp_Explorer.hxx>
#include <ModelingData/TopTools/TopTools_MapOfShape.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfShapeShape.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_ListIteratorOfListOfShape.hxx>
#include <ModelingAlgorithms/BRepBuilderAPI/BRepBuilderAPI_MakeShape.hxx>
#include <ModelingData/TopTools/TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#include <ModelingData/TopExp/TopExp.hxx>
#include <ModelingData/TopTools/TopTools_DataMapIteratorOfDataMapOfShapeShape.hxx>
#include <ModelingData/TopoDS/TopoDS_Iterator.hxx>
#include <ModelingData/TopTools/TopTools_MapIteratorOfMapOfShape.hxx>
#include <OCAF/TDataStd/TDataStd_Name.hxx>
#include <TNaming_NamedShape.hxx>


//=======================================================================
//function : GetDangleShapes
//purpose  : Returns dangle sub shapes Generator - Dangle.
//=======================================================================

Standard_Boolean QANewBRepNaming_LoaderParent::GetDangleShapes(const TopoDS_Shape& ShapeIn,
						    const TopAbs_ShapeEnum GeneratedFrom,
						    TopTools_DataMapOfShapeShape& Dangles) 
{
  Dangles.Clear();
  TopTools_IndexedDataMapOfShapeListOfShape subShapeAndAncestors;
  TopAbs_ShapeEnum GeneratedTo;
  if (GeneratedFrom == TopAbs_FACE) GeneratedTo = TopAbs_EDGE;
  else if (GeneratedFrom == TopAbs_EDGE) GeneratedTo = TopAbs_VERTEX;
  else return Standard_False;
  TopExp::MapShapesAndAncestors(ShapeIn, GeneratedTo, GeneratedFrom, subShapeAndAncestors);
  for (Standard_Integer i = 1; i <= subShapeAndAncestors.Extent(); i++) {
    const TopoDS_Shape& mayBeDangle = subShapeAndAncestors.FindKey(i);
    const TopTools_ListOfShape& ancestors = subShapeAndAncestors.FindFromIndex(i);
    if (ancestors.Extent() == 1) Dangles.Bind(ancestors.First(), mayBeDangle);
  }
  return !Dangles.IsEmpty();
}

//=======================================================================
//function : GetDangleShapes
//purpose  : Returns dangle sub shapes.
//=======================================================================
/*
Standard_Boolean QANewBRepNaming_LoaderParent::GetDangleShapes(const TopoDS_Shape& ShapeIn,
						    const TopAbs_ShapeEnum GeneratedFrom,
						    TopTools_MapOfShape& Dangles) 
{
  Dangles.Clear();
  TopTools_IndexedDataMapOfShapeListOfShape subShapeAndAncestors;
  TopAbs_ShapeEnum GeneratedTo;
  if (GeneratedFrom == TopAbs_FACE) GeneratedTo = TopAbs_EDGE;
  else if (GeneratedFrom == TopAbs_EDGE) GeneratedTo = TopAbs_VERTEX;
  else return Standard_False;
  TopExp::MapShapesAndAncestors(ShapeIn, GeneratedTo, GeneratedFrom, subShapeAndAncestors);
  for (Standard_Integer i = 1; i <= subShapeAndAncestors.Extent(); i++) {
    const TopoDS_Shape& mayBeDangle = subShapeAndAncestors.FindKey(i);
    const TopTools_ListOfShape& ancestors = subShapeAndAncestors.FindFromIndex(i);
    if (ancestors.Extent() == 1) Dangles.Add(mayBeDangle);
  }
  return Dangles.Extent();
}
*/
//=======================================================================
//function : LoadGeneratedDangleShapes
//purpose  : 
//=======================================================================

void QANewBRepNaming_LoaderParent::LoadGeneratedDangleShapes(const TopoDS_Shape&          ShapeIn,
						  const TopAbs_ShapeEnum       GeneratedFrom,
						  TNaming_Builder&             Builder)
{
  TopTools_DataMapOfShapeShape dangles;
  if (!QANewBRepNaming_LoaderParent::GetDangleShapes(ShapeIn, GeneratedFrom, dangles)) return;
  TopTools_DataMapIteratorOfDataMapOfShapeShape itr(dangles);
  for (; itr.More(); itr.Next()) Builder.Generated(itr.Key(), itr.Value());
}

