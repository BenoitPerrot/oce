// Created on: 1995-12-21
// Created by: Jean Yves LEBEY
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

#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_PaveSet.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_PaveClassifier.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_LoopSet.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_LoopClassifier.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_EdgeBuilder.hxx>
#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_Pave.hxx>

//=======================================================================
//function : TopOpeBRepBuild_EdgeBuilder
//purpose  : 
//=======================================================================

TopOpeBRepBuild_EdgeBuilder::TopOpeBRepBuild_EdgeBuilder()
{
}

//=======================================================================
//function : TopOpeBRepBuild_EdgeBuilder
//purpose  : 
//=======================================================================

TopOpeBRepBuild_EdgeBuilder::TopOpeBRepBuild_EdgeBuilder
(TopOpeBRepBuild_PaveSet& LS, TopOpeBRepBuild_PaveClassifier& LC,
 const Standard_Boolean ForceClass)
{
  InitEdgeBuilder(LS,LC,ForceClass);
}

//=======================================================================
//function : InitEdgeBuilder
//purpose  : 
//=======================================================================

void TopOpeBRepBuild_EdgeBuilder::InitEdgeBuilder
(TopOpeBRepBuild_LoopSet& LS, TopOpeBRepBuild_LoopClassifier& LC,
 const Standard_Boolean ForceClass)
{
  InitAreaBuilder(LS,LC,ForceClass);
}

//=======================================================================
//function : InitEdge
//purpose  : 
//=======================================================================

void TopOpeBRepBuild_EdgeBuilder::InitEdge()
{
  InitArea();
}

//=======================================================================
//function : MoreEdge
//purpose  : 
//=======================================================================

Standard_Boolean TopOpeBRepBuild_EdgeBuilder::MoreEdge() const
{
  Standard_Boolean b = MoreArea();
  return b;
}

//=======================================================================
//function : NextEdge
//purpose  : 
//=======================================================================

void TopOpeBRepBuild_EdgeBuilder::NextEdge()
{
  NextArea();
}

//=======================================================================
//function : InitVertex
//purpose  : 
//=======================================================================

void TopOpeBRepBuild_EdgeBuilder::InitVertex()
{
  InitLoop();
}

//=======================================================================
//function : MoreVertex
//purpose  : 
//=======================================================================

Standard_Boolean TopOpeBRepBuild_EdgeBuilder::MoreVertex() const
{
  Standard_Boolean b = MoreLoop();
  return b;
}

//=======================================================================
//function : NextVertex
//purpose  : 
//=======================================================================

void TopOpeBRepBuild_EdgeBuilder::NextVertex()
{
  NextLoop();
}

//=======================================================================
//function : Vertex
//purpose  : 
//=======================================================================

const TopoDS_Shape& TopOpeBRepBuild_EdgeBuilder::Vertex() const
{
  const Handle(TopOpeBRepBuild_Loop)& L = Loop();
  const Handle(TopOpeBRepBuild_Pave)& PV = *((Handle(TopOpeBRepBuild_Pave)*)&L);
  return PV->Vertex();
}

//=======================================================================
//function : Parameter
//purpose  : 
//=======================================================================

Standard_Real TopOpeBRepBuild_EdgeBuilder::Parameter() const
{
  const Handle(TopOpeBRepBuild_Loop)& L = Loop();
  const Handle(TopOpeBRepBuild_Pave)& PV = *((Handle(TopOpeBRepBuild_Pave)*)&L);
  Standard_Real parV = PV->Parameter();
  return parV;
}
