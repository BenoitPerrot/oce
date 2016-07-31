// Created on: 1998-12-09
// Created by: Xuan PHAM PHU
// Copyright (c) 1998-1999 Matra Datavision
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
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingAlgorithms/TopOpeBRepTool/TopOpeBRepTool_connexity.hxx>
#include <ModelingAlgorithms/TopOpeBRepTool/TopOpeBRepTool_define.hxx>
#include <ModelingAlgorithms/TopOpeBRepTool/TopOpeBRepTool_TOOL.hxx>

#define M_FORWARD(sta)  (sta == TopAbs_FORWARD)
#define M_REVERSED(sta) (sta == TopAbs_REVERSED)
#define M_INTERNAL(sta) (sta == TopAbs_INTERNAL)
#define M_EXTERNAL(sta) (sta == TopAbs_EXTERNAL)

#define FORWARD  (1)
#define REVERSED (2)
#define INTERNAL (3)
#define EXTERNAL (4)
#define CLOSING  (5)

//=======================================================================
//function : TopOpeBRepTool_connexity
//purpose  : 
//=======================================================================

TopOpeBRepTool_connexity::TopOpeBRepTool_connexity()
: theItems(1,5)
{
}
//=======================================================================
//function : TopOpeBRepTool_connexity
//purpose  : 
//=======================================================================

TopOpeBRepTool_connexity::TopOpeBRepTool_connexity(const TopoDS_Shape& Key)
: theKey(Key), theItems(1,5)
{
}

//=======================================================================
//function : SetKey
//purpose  : 
//=======================================================================

void TopOpeBRepTool_connexity::SetKey(const TopoDS_Shape& Key)
{
  theKey = Key;
}



//=======================================================================
//function : Key
//purpose  : 
//=======================================================================

const TopoDS_Shape& TopOpeBRepTool_connexity::Key() const
{
  return theKey;
}

/*static Standard_Integer FUN_toI(const TopAbs_Orientation& O)
{
  Standard_Integer Index = 0;
  if      (O == TopAbs_FORWARD)  Index = 1;
  else if (O == TopAbs_REVERSED) Index = 2;
  else if (O == TopAbs_INTERNAL) Index = 3;
  else if (O == TopAbs_EXTERNAL) Index = 0;
  return Index;
}*/

//=======================================================================
//function : Item
//purpose  : 
//=======================================================================

Standard_Integer TopOpeBRepTool_connexity::Item(const Standard_Integer OriKey, TopTools_ListOfShape& Item) const
{
  Item.clear();
  Item = theItems(OriKey);
  return (Item.size());
}

//=======================================================================
//function : AllItems
//purpose  : 
//=======================================================================

Standard_Integer TopOpeBRepTool_connexity::AllItems(TopTools_ListOfShape& Item) const
{
  Item.clear();
  for (Standard_Integer i = 1; i <=4; i++) {
    auto &l = theItems.Value(i);
    Item.insert(end(Item), begin(l), end(l));
  }
  return Item.size();
}

//=======================================================================
//function : AddItem
//purpose  : 
//=======================================================================

void TopOpeBRepTool_connexity::AddItem(const Standard_Integer OriKey, const TopTools_ListOfShape& Item)
{
  auto &l = theItems(OriKey);
  l.insert(end(l), begin(Item), end(Item));
}

void TopOpeBRepTool_connexity::AddItem(const Standard_Integer OriKey, const TopoDS_Shape& Item)
{
  TopTools_ListOfShape copy; copy.push_back(Item);
  AddItem(OriKey, copy);
}

//=======================================================================
//function : RemoveItem
//purpose  : 
//=======================================================================

Standard_Boolean TopOpeBRepTool_connexity::RemoveItem(const Standard_Integer OriKey, const TopoDS_Shape& Item)
{
#warning C++ify
  TopTools_ListOfShape& item = theItems.ChangeValue(OriKey);
  TopTools_ListIteratorOfListOfShape it = begin(item);
  while (it != end(item)) {
    if (it->IsEqual(Item)) {
      it = item.erase(it);
      return Standard_True;
    }
    else
      ++it;
  }
  return Standard_False;
}

//=======================================================================
//function : RemoveItem
//purpose  : 
//=======================================================================

Standard_Boolean TopOpeBRepTool_connexity::RemoveItem(const TopoDS_Shape& Item)
{
  Standard_Boolean removed = Standard_False;
  for (Standard_Integer i = 1; i<= 5; i++) {
    Standard_Boolean found = RemoveItem(i,Item);
    if (found) removed = Standard_True;
  }
  return removed;
}



//=======================================================================
//function : ChangeItem
//purpose  : 
//=======================================================================

TopTools_ListOfShape& TopOpeBRepTool_connexity::ChangeItem(const Standard_Integer OriKey)
{  
  return theItems.ChangeValue(OriKey);
}

//=======================================================================
//function : IsMultiple
//purpose  : 
//=======================================================================

Standard_Boolean TopOpeBRepTool_connexity::IsMultiple() const
{
  TopTools_ListOfShape lfound; 
  Standard_Integer nkeyitem = Item(FORWARD,lfound);
//  nkeyRitem += Item(INTERNAL,lfound); NOT VALID
  // if key is vertex : key appears F in closing E, only one time
  nkeyitem += Item(CLOSING,lfound); 
  Standard_Boolean multiple = (nkeyitem > 1);
  return multiple;
}

//=======================================================================
//function : IsFaulty
//purpose  : 
//=======================================================================

Standard_Boolean TopOpeBRepTool_connexity::IsFaulty() const
{
  TopTools_ListOfShape lfound; 
  Standard_Integer nkeyRintem = Item(FORWARD,lfound);
  Standard_Integer nkeyFitem  = Item(REVERSED,lfound);
  Standard_Boolean faulty = (nkeyRintem != nkeyFitem);
  return faulty;
}

//=======================================================================
//function : IsInternal
//purpose  : 
//=======================================================================
#warning should it return a boolean instead of an integer?
Standard_Integer TopOpeBRepTool_connexity::IsInternal(TopTools_ListOfShape& Item) const
{
  Item.clear();

  // all subshapes of INTERNAL(EXTERNAL) are oriented INTERNAL(EXTERNAL)
  TopTools_ListOfShape lINT(theItems.Value(INTERNAL));
  TopTools_ListIteratorOfListOfShape it1 = begin(lINT);
  while (it1 != end(lINT)) {
    const TopoDS_Shape& item1 = *it1;
    TopAbs_Orientation o1 = item1.Orientation();
    if (!M_INTERNAL(o1)) {++it1; continue;}
    Standard_Integer oKey1 = TopOpeBRepTool_TOOL::OriinSor(theKey,item1.Oriented(TopAbs_FORWARD));
    if (oKey1 != INTERNAL)
      it1 = lINT.erase(it1);
    else
      ++it1;
  }

  TopTools_ListOfShape lEXT(theItems.Value(EXTERNAL));
  for (const TopoDS_Shape& item2 : lEXT) {
    TopAbs_Orientation o2 = item2.Orientation();
    if (!M_EXTERNAL(o2)) continue;
    Standard_Integer oKey2 = TopOpeBRepTool_TOOL::OriinSor(theKey,item2.Oriented(TopAbs_FORWARD));
    if (oKey2 == INTERNAL) lINT.push_back(item2);
  }

  Item.splice(end(Item), lINT);  
  return Item.size();
}



