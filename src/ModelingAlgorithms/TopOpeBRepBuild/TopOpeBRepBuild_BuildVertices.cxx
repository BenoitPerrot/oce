// Created on: 1993-06-14
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

#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopTools_HArray1OfShape.hxx>
#include <TopTools_HArray1OfListOfShape.hxx>
#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <TopOpeBRepDS_BuildTool.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <TopTools_ListOfShape.hxx>
#include <TopTools_MapOfShape.hxx>
#include <TopTools_DataMapOfShapeShape.hxx>
#include <TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State.hxx>
#include <TopOpeBRepTool_ShapeExplorer.hxx>
#include <TopOpeBRepBuild_ShapeSet.hxx>
#include <TopOpeBRepBuild_EdgeBuilder.hxx>
#include <TopOpeBRepBuild_FaceBuilder.hxx>
#include <TopOpeBRepBuild_SolidBuilder.hxx>
#include <TopOpeBRepBuild_WireEdgeSet.hxx>
#include <TopOpeBRepDS_PointIterator.hxx>
#include <TopOpeBRepBuild_PaveSet.hxx>
#include <TopTools_DataMapOfIntegerListOfShape.hxx>
#include <TopTools_DataMapOfIntegerShape.hxx>
#include <TopOpeBRepBuild_GTopo.hxx>
#include <TopOpeBRepBuild_ShellFaceSet.hxx>
#include <TopOpeBRepDS_SurfaceIterator.hxx>
#include <TopTools_IndexedMapOfOrientedShape.hxx>
#include <TopOpeBRepDS_CurveIterator.hxx>
#include <ModelingData/TopoDS/TopoDS_Vertex.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <TopTools_DataMapOfShapeInteger.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <TopOpeBRepBuild_Builder.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>

//=======================================================================
//function : BuildVertices
//purpose  : 
//=======================================================================
void TopOpeBRepBuild_Builder::BuildVertices(const Handle(TopOpeBRepDS_HDataStructure)& HDS)
{
  Standard_Integer iP, n = HDS->NbPoints();
  
  myNewVertices = new TopTools_HArray1OfShape(0, n);

  for (iP = 1; iP <= n; iP++) {
    const TopOpeBRepDS_Point& aTBSPoint=HDS->Point(iP);
    myBuildTool.MakeVertex(ChangeNewVertex(iP), aTBSPoint);
  }
}
