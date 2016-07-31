// Created on: 1995-10-26
// Created by: Yves FRICAUD
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

#include <Foundation/Standard/Standard_ConstructionError.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingAlgorithms/BRepAlgo/BRepAlgo_Image.hxx>

#include <Foundation/Standard/Standard_ConstructionError.hxx>
#include <ModelingData/TopTools/TopTools_ListIteratorOfListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_MapOfShape.hxx>
#include <ModelingData/TopTools/TopTools_DataMapIteratorOfDataMapOfShapeShape.hxx>
#include <ModelingData/TopExp/TopExp_Explorer.hxx>

//=======================================================================
//function : BRepAlgo_Image
//purpose  : 
//=======================================================================

BRepAlgo_Image::BRepAlgo_Image()
{
}


//=======================================================================
//function : SetRoot
//purpose  : 
//=======================================================================

void BRepAlgo_Image::SetRoot(const TopoDS_Shape& S)
{
  roots.push_back(S);
}

//=======================================================================
//function : Bind
//purpose  : 
//=======================================================================

void BRepAlgo_Image::Bind(const TopoDS_Shape& OldS, 
			    const TopoDS_Shape& NewS)
{
  if (down.IsBound(OldS)) {
    Standard_ConstructionError::Raise(" BRepAlgo_Image::Bind");
    return;
  }
  TopTools_ListOfShape L;
  down.Bind(OldS,L);
  down(OldS).push_back(NewS);
  up.Bind(NewS,OldS);
}


//=======================================================================
//function : Bind
//purpose  : 
//=======================================================================

void BRepAlgo_Image::Bind(const TopoDS_Shape& OldS, 
			    const TopTools_ListOfShape& L)
{  
  if (HasImage(OldS)) {
    Standard_ConstructionError::Raise(" BRepAlgo_Image::Bind");
    return; 
  }
  for (auto S : L) {
    if (!HasImage(OldS))
      Bind(OldS, S);
    else 
      Add (OldS, S);
  }
}

//=======================================================================
//function : Clear
//purpose  : 
//=======================================================================

void BRepAlgo_Image::Clear()
{
  roots.clear();
  up   .Clear();
  down .Clear();
}

//=======================================================================
//function : Add
//purpose  : 
//=======================================================================

void BRepAlgo_Image::Add(const TopoDS_Shape& OldS, const TopoDS_Shape& NewS)
{
  if (!HasImage(OldS)) {    
    Standard_ConstructionError::Raise(" BRepAlgo_Image::Add");
  }
  down(OldS).push_back(NewS);
  up.Bind(NewS,OldS);
}

//=======================================================================
//function : Add
//purpose  : 
//=======================================================================

void BRepAlgo_Image::Add(const TopoDS_Shape&         OldS, 
			   const TopTools_ListOfShape& L)
{
  for (auto S : L) { 
    Add(OldS, S);
  }
}


//=======================================================================
//function : Remove
//purpose  : 
//=======================================================================

void BRepAlgo_Image::Remove(const TopoDS_Shape& S)
{
  if (!up.IsBound(S)) {
    Standard_ConstructionError::Raise(" BRepAlgo_Image::Remove");
  }
  const TopoDS_Shape& OldS = up(S);
  TopTools_ListOfShape& L = down(OldS);
#warning C++ify remove_if
  TopTools_ListIteratorOfListOfShape it = begin(L);
  while (it != end(L)) {
    if (it->IsSame(S)) {
      it = L.erase(it);
      break;
    }
    ++it;
  }
  if (L.empty()) down.UnBind(OldS);
  up.UnBind(S);
}


//=======================================================================
//function : TopTools_ListOfShape&
//purpose  : 
//=======================================================================

const TopTools_ListOfShape& BRepAlgo_Image::Roots() const 
{
  return roots;
}

//=======================================================================
//function : IsImage
//purpose  : 
//=======================================================================

Standard_Boolean  BRepAlgo_Image::IsImage(const TopoDS_Shape& S) const 
{
  return up.IsBound(S);
}

//=======================================================================
//function : ImageFrom
//purpose  : 
//=======================================================================

const TopoDS_Shape&  BRepAlgo_Image::ImageFrom(const TopoDS_Shape& S) const 
{
  if (!up.IsBound(S)) {
    Standard_ConstructionError::Raise(" BRepAlgo_Image::ImageFrom");
  }  
  return up(S);
}

//=======================================================================
//function : FirstImageFrom
//purpose  : 
//=======================================================================

const TopoDS_Shape&  BRepAlgo_Image::Root(const TopoDS_Shape& S) 
const 
{
  if (!up.IsBound(S)) {
    Standard_ConstructionError::Raise(" BRepAlgo_Image::FirstImageFrom");
  }

  TopoDS_Shape S1 = up(S);
  TopoDS_Shape S2 = S;

  if ( S1.IsSame(S2)) 
    return up(S);

  while ( up.IsBound(S1)) {
    S2 = S1;
    S1 = up(S1);
    if ( S1.IsSame(S2)) break;
  }
  return up(S2);
}

//=======================================================================
//function : HasImage
//purpose  : 
//=======================================================================

Standard_Boolean  BRepAlgo_Image::HasImage(const TopoDS_Shape& S) const 
{
  return down.IsBound(S);
}

//=======================================================================
//function : TopTools_ListOfShape&
//purpose  : 
//=======================================================================

const TopTools_ListOfShape& BRepAlgo_Image::Image(const TopoDS_Shape& S) const 
{
  if (!HasImage(S)) { 
    static TopTools_ListOfShape L;
    L.push_back(S);
    return L;
  }
  return down(S);
}


//=======================================================================
//function : TopTools_ListOfShape&
//purpose  : 
//=======================================================================
void BRepAlgo_Image::LastImage(const TopoDS_Shape&  S,
				  TopTools_ListOfShape& L) const 
{
  if (!down.IsBound(S)) {
    L.push_back(S);
  }
  else {
    for (auto downS : down(S)) {
      if (downS.IsSame(S)) {
	L.push_back(S);
      }
      else {
	LastImage(downS, L);
      }
    }
  }
}


//=======================================================================
//function : Compact
//purpose  : 
//=======================================================================

void BRepAlgo_Image::Compact()
{
  TopTools_DataMapOfShapeListOfShape M;
  for (const TopoDS_Shape& S : roots) {
    TopTools_ListOfShape  LI;
    if (HasImage(S)) LastImage(S,LI);
    M.Bind   (S,LI);
  }
  up.Clear();
  down.Clear();
  for (auto S : roots) {
    if (M.IsBound(S)) {
      Bind(S, M(S));
    }
  }
}

//=======================================================================
//function : Filter
//purpose  : 
//=======================================================================

void BRepAlgo_Image::Filter(const TopoDS_Shape&     S,
			      const TopAbs_ShapeEnum  T)

{
  TopExp_Explorer      exp(S,T) ;
  TopTools_MapOfShape  M;
  for (; exp.More(); exp.Next()) {M.Add(exp.Current());}
#warning simplify workflow!
  Standard_Boolean Change = Standard_True;
  while (Change) {
    Change = Standard_False;
    TopTools_DataMapIteratorOfDataMapOfShapeShape mit(up);
    for (; mit.More(); mit.Next()) {
      const TopoDS_Shape& K = mit.Key();
      if (K.ShapeType() == T && !M.Contains(K)) {
	Remove(K);
	Change = Standard_True;
	break;
      }
    }
  }
  
}

