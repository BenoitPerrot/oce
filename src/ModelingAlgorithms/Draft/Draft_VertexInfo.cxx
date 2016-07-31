// Created on: 1994-09-01
// Created by: Jacques GOUSSARD
// Copyright (c) 1994-1999 Matra Datavision
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

#include <Foundation/Standard/Standard_DomainError.hxx>
#include <Foundation/Standard/Standard_NoMoreObject.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <ModelingAlgorithms/Draft/Draft_VertexInfo.hxx>

#include <Foundation/TColStd/TColStd_ListIteratorOfListOfReal.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>

//=======================================================================
//function : Draft_VertexInfo
//purpose  : 
//=======================================================================

Draft_VertexInfo::Draft_VertexInfo () {}


//=======================================================================
//function : Add
//purpose  : 
//=======================================================================

void Draft_VertexInfo::Add(const TopoDS_Edge& E)
{
#warning find
  for (myItEd = begin(myEdges); myItEd != end(myEdges); ++myItEd) {
    if (E.IsSame(*myItEd)) {
      break;
    }
  }
  if (myItEd == end(myEdges)) {
    myEdges.push_back(E);
    myParams.Append(RealLast());
  }
}


//=======================================================================
//function : Geometry
//purpose  : 
//=======================================================================

const gp_Pnt& Draft_VertexInfo::Geometry () const
{
  return myGeom;
}


//=======================================================================
//function : ChangeGeometry
//purpose  : 
//=======================================================================

gp_Pnt& Draft_VertexInfo::ChangeGeometry ()
{
  return myGeom;
}


//=======================================================================
//function : Parameter
//purpose  : 
//=======================================================================

Standard_Real Draft_VertexInfo::Parameter (const TopoDS_Edge& E)
{
  TColStd_ListIteratorOfListOfReal itp(myParams);
  myItEd = begin(myEdges);
  for (; myItEd != end(myEdges); ++myItEd,itp.Next()) {
    if (myItEd->IsSame(E)) {
      return itp.Value();
    }
  }
  Standard_DomainError::Raise(); return 0;
}


//=======================================================================
//function : ChangeParameter
//purpose  : 
//=======================================================================

Standard_Real& Draft_VertexInfo::ChangeParameter (const TopoDS_Edge& E)
{
  TColStd_ListIteratorOfListOfReal itp(myParams);
  myItEd = begin(myEdges);
  for (; myItEd != end(myEdges); ++myItEd,itp.Next()) {
    if (myItEd->IsSame(E)) {
      return itp.Value();
    }
  }
  Standard_DomainError::Raise(); return itp.Value();
}


//=======================================================================
//function : InitEdgeIterator
//purpose  : 
//=======================================================================

void Draft_VertexInfo::InitEdgeIterator () 
{
  myItEd = begin(myEdges);
}


//=======================================================================
//function : Edge
//purpose  : 
//=======================================================================

const TopoDS_Edge& Draft_VertexInfo::Edge () const
{
  return TopoDS::Edge(*myItEd);
}


//=======================================================================
//function : MoreEdge
//purpose  : 
//=======================================================================

Standard_Boolean Draft_VertexInfo::MoreEdge() const
{
  return myItEd != end(myEdges);
}


//=======================================================================
//function : NextEdge
//purpose  : 
//=======================================================================

void Draft_VertexInfo::NextEdge()
{
  ++myItEd;
}
