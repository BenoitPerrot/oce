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
#include <ModelingAlgorithms/BRepAlgo/BRepAlgo_AsDes.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BRepAlgo_AsDes)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BRepAlgo_AsDes)
IMPLEMENT_DOWNCAST(BRepAlgo_AsDes,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BRepAlgo_AsDes)
#include <ModelingData/TopTools/TopTools_ListIteratorOfListOfShape.hxx>

//=======================================================================
//function : BRepAlgo_AsDes
//purpose  : 
//=======================================================================

BRepAlgo_AsDes::BRepAlgo_AsDes()
{
}


//=======================================================================
//function : Add
//purpose  : 
//=======================================================================

void BRepAlgo_AsDes::Add(const TopoDS_Shape& S, const TopoDS_Shape& SS)
{
  if (!down.IsBound(S)) {
    TopTools_ListOfShape L;
    down.Bind(S,L);
  }
  down(S).push_back(SS);

  if (!up.IsBound(SS)) {    
    TopTools_ListOfShape L;
    up.Bind(SS,L);
  }
  up(SS).push_back(S);
}


//=======================================================================
//function : Add
//purpose  : 
//=======================================================================

void BRepAlgo_AsDes::Add(const TopoDS_Shape& S, const TopTools_ListOfShape& SS)
{
  for (auto X : SS) {
    Add(S,X);
  }
}

//=======================================================================
//function : Clear
//purpose  : 
//=======================================================================

void BRepAlgo_AsDes::Clear() 
{
  up  .Clear();
  down.Clear();
}


//=======================================================================
//function : HasAscendant
//purpose  : 
//=======================================================================

Standard_Boolean BRepAlgo_AsDes::HasAscendant(const TopoDS_Shape& S) 
const 
{
  return up.IsBound(S);
} 

//=======================================================================
//function : HasDescendant
//purpose  : 
//=======================================================================

Standard_Boolean BRepAlgo_AsDes::HasDescendant(const TopoDS_Shape& S) 
const 
{
  return down.IsBound(S);
} 

//=======================================================================
//function : Ascendant
//purpose  : 
//=======================================================================

const TopTools_ListOfShape& BRepAlgo_AsDes::Ascendant(const TopoDS_Shape& S) const 
{
  if (up.IsBound(S))
    return up(S);
  static TopTools_ListOfShape empty;
  return empty; 
}


//=======================================================================
//function : Descendant
//purpose  : 
//=======================================================================

const TopTools_ListOfShape& BRepAlgo_AsDes::Descendant(const TopoDS_Shape& S) const 
{
  if (down.IsBound(S)) 
    return down(S);
  static TopTools_ListOfShape empty;
  return empty;
}

//=======================================================================
//function : ChangeDescendant
//purpose  : 
//=======================================================================

TopTools_ListOfShape& BRepAlgo_AsDes::ChangeDescendant(const TopoDS_Shape& S) 
{
  if (down.IsBound(S)) 
    return down.ChangeFind(S);
  static TopTools_ListOfShape empty;
  return empty;
}

//=======================================================================
//function : ReplaceInList
//purpose  : 
//=======================================================================

#warning C++ify
static void ReplaceInList(const TopoDS_Shape&   OldS,
			  const TopoDS_Shape&   NewS,
			  TopTools_ListOfShape& L)
{
  TopTools_ListIteratorOfListOfShape it = begin(L);
  while (it != end(L)) {
    if (it->IsSame(OldS)) {
      TopAbs_Orientation O = it->Orientation();
      L.insert(it, NewS.Oriented(O));
      it = L.erase(it);
    }
    else
      ++it;
  }
}
//=======================================================================
//function : RemoveInList
//purpose  : 
//=======================================================================
#warning C++ify
static void RemoveInList(const TopoDS_Shape&   S,
			 TopTools_ListOfShape& L)
{
  TopTools_ListIteratorOfListOfShape it = begin(L);
  while (it != end(L)) {
    if (it->IsSame(S)) {
      it = L.erase(it);
      break;
    }
    ++it;
  }
}

//=======================================================================
//function : HasCommonDescendant
//purpose  : 
//=======================================================================

Standard_Boolean BRepAlgo_AsDes::HasCommonDescendant(const TopoDS_Shape& S1, 
						       const TopoDS_Shape& S2, 
						       TopTools_ListOfShape& LC) const 
{
  LC.clear();
  if (HasDescendant (S1) && HasDescendant (S2)) {
    for (const TopoDS_Shape& DS1 : Descendant(S1)) {
      for (const TopoDS_Shape& ADS1 : Ascendant(DS1)) {
	if (ADS1.IsSame(S2)) {
	  LC.push_back(DS1);
	}
      }
    }
  }
  return (!LC.empty());
} 

//=======================================================================
//function : BackReplace
//purpose  : 
//=======================================================================

void BRepAlgo_AsDes::BackReplace(const TopoDS_Shape&         OldS,
				   const TopoDS_Shape&         NewS,
				   const TopTools_ListOfShape& L,
				   const Standard_Boolean      InUp)
{
  for (const TopoDS_Shape& S : L) {
    if (InUp) {
      if (up.IsBound(S)) {
	ReplaceInList(OldS,NewS,up.ChangeFind(S));
      }
    }
    else {      
      if (down.IsBound(S)) {
	ReplaceInList(OldS,NewS,down.ChangeFind(S));
      }
    }
  }
}

//=======================================================================
//function : Replace
//purpose  : 
//=======================================================================

void BRepAlgo_AsDes::Replace(const TopoDS_Shape& OldS,
			       const TopoDS_Shape& NewS)
{
  Standard_Boolean InUp;

  if (up.IsBound(OldS)) {
    InUp = Standard_False;
    BackReplace (OldS,NewS,up(OldS),InUp);
    if (up.IsBound(NewS)) {
      auto &upNew = up(NewS);
      auto &upOld = up(OldS);
      upNew.insert(end(upNew), begin(upOld), end(upOld));
    }
    else {
      up.Bind(NewS,up(OldS));
    }
    up.UnBind(OldS);
  }
  
  if (down.IsBound(OldS)) {
    InUp = Standard_True;
    BackReplace(OldS,NewS,down (OldS),InUp);
    if (down.IsBound(NewS)) {
      auto &downNew = down(NewS);
      auto &downOld = down(OldS);
      downNew.insert(end(downNew), begin(downOld), end(downOld));
    }
    else {
      down.Bind(NewS,down(OldS));
    }
    down.UnBind(OldS);
  }
}

//=======================================================================
//function : Remove
//purpose  : 
//=======================================================================

void BRepAlgo_AsDes::Remove(const TopoDS_Shape& SS)
{
  if (down.IsBound(SS)) {
    Standard_ConstructionError::Raise(" BRepAlgo_AsDes::Remove");
  }
  if (!up.IsBound(SS)) {
    Standard_ConstructionError::Raise(" BRepAlgo_AsDes::Remove");
  }
  for (auto S : up(SS)) {
    RemoveInList(SS,down.ChangeFind(S));
  }
  up.UnBind(SS);
}
