// Created on: 1997-08-22
// Created by: Prestataire Mary FABIEN
// Copyright (c) 1997-1999 Matra Datavision
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

#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingAlgorithms/BRepAlgo/BRepAlgo_EdgeConnector.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BRepAlgo_EdgeConnector)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BRepAlgo_EdgeConnector)
IMPLEMENT_DOWNCAST(BRepAlgo_EdgeConnector,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BRepAlgo_EdgeConnector)

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_ListIteratorOfListOfShape.hxx>
#include <ModelingData/TopoDS/TopoDS_Wire.hxx>
#include <ModelingData/BRep/BRep_Builder.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_ShapeSet.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_BlockIterator.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_BlockBuilder.hxx>
#include <ModelingAlgorithms/BRepAlgo/BRepAlgo_DataMapOfShapeBoolean.hxx>

//=======================================================================
//function : Create
//purpose  : 
//=======================================================================

BRepAlgo_EdgeConnector::BRepAlgo_EdgeConnector()
:myIsDone(Standard_False)
{
  myListeOfEdge.Clear();
}

//=======================================================================
//function : Add
//purpose  : 
//=======================================================================

void BRepAlgo_EdgeConnector::Add(const TopoDS_Edge& e)
{
  if(e.IsNull()) return;
  myListeOfEdge.Append(e);
}

//=======================================================================
//function : Add
//purpose  : 
//=======================================================================

void BRepAlgo_EdgeConnector::Add(TopTools_ListOfShape& LOEdge)
{
  if(LOEdge.IsEmpty()) return;
  myListeOfEdge.Append(LOEdge);
}

//=======================================================================
//function : AddStart
//purpose  : 
//=======================================================================

void BRepAlgo_EdgeConnector::AddStart(const TopoDS_Shape& e)
{
  if(e.IsNull()) return;
  myListeOfStartEdge.Append(e);
}

//=======================================================================
//function : AddStart
//purpose  : 
//=======================================================================

void BRepAlgo_EdgeConnector::AddStart(TopTools_ListOfShape& LOEdge)
{
  if(LOEdge.IsEmpty()) return;
  myListeOfStartEdge.Append(LOEdge);
}

//=======================================================================
//function : ClearStartElement
//purpose  : 
//=======================================================================

void BRepAlgo_EdgeConnector::ClearStartElement()
{
  myListeOfStartEdge.Clear();
}

//=======================================================================
//function : MakeBlock
//purpose  : 
//=======================================================================

TopTools_ListOfShape& BRepAlgo_EdgeConnector::MakeBlock()
{
  Standard_Boolean b;
  if(myListeOfStartEdge.IsEmpty()) return myListeOfStartEdge;
  TopOpeBRepBuild_ShapeSet SS(TopAbs_VERTEX);
  myResultMap.Clear();
  myResultList.Clear();
  TopTools_ListIteratorOfListOfShape it(myListeOfEdge);
  for(;it.More();it.Next()) {
    const TopoDS_Shape& edge = it.Value();
    SS.AddElement(edge);
  }
  it.Initialize(myListeOfStartEdge);
  for(;it.More();it.Next()) {
    const TopoDS_Shape& edge = it.Value();
    SS.AddStartElement(edge);
  }
  myBlockB.MakeBlock(SS);
  BRep_Builder WireB;
  for(myBlockB.InitBlock();myBlockB.MoreBlock();myBlockB.NextBlock()) {
//#ifndef OCCT_DEBUG
    TopOpeBRepBuild_BlockIterator BI = myBlockB.BlockIterator();
//#else
//    TopOpeBRepBuild_BlockIterator& BI = myBlockB.BlockIterator();
//#endif
    TopoDS_Wire W;
    WireB.MakeWire(W);
    for(BI.Initialize();BI.More();BI.Next()) {
      const TopoDS_Shape& CurrentE = myBlockB.Element(BI);
      WireB.Add(W, CurrentE);
    }
    b = myBlockB.CurrentBlockIsRegular();
    myResultMap.Bind(W, b);
    myResultList.Append(W);
  }
  Done();
  return myResultList;
}

//=======================================================================
//function : IsWire
//purpose  : 
//=======================================================================

Standard_Boolean BRepAlgo_EdgeConnector::IsWire(const TopoDS_Shape& S)
{
  if(!myResultMap.IsBound(S)) {
    return Standard_False;
  }
  Standard_Boolean b = Standard_False;
  myBlockB.InitBlock();
  TopTools_ListIteratorOfListOfShape LI(myResultList);
  for(;myBlockB.MoreBlock();myBlockB.NextBlock(),LI.Next()) {
    if(S == LI.Value()) {
      b = myBlockB.CurrentBlockIsRegular();
      break;
    }
  }
  return b;
}

//=======================================================================
//function : IsDone
//purpose  : 
//=======================================================================


Standard_Boolean BRepAlgo_EdgeConnector::IsDone() const
{
  return myIsDone;
}

//=======================================================================
//function : Done
//purpose  : 
//=======================================================================


void BRepAlgo_EdgeConnector::Done()
{
  myIsDone = Standard_True;
}

