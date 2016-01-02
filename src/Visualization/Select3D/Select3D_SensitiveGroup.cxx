// Created on: 1998-04-16
// Created by: Robert COUBLANC
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

#include <Visualization/SelectBasics/SelectBasics_EntityOwner.hxx>
#include <Visualization/Select3D/Select3D_ListOfSensitive.hxx>
#include <Visualization/Select3D/Select3D_SensitiveEntity.hxx>
#include <Visualization/Select3D/Select3D_Projector.hxx>
#include <Mathematics/TopLoc/TopLoc_Location.hxx>
#include <Mathematics/Collections/TColgp_Array1OfPnt2d.hxx>
#include <Mathematics/BoundingVolumes/Bnd_Box2d.hxx>
#include <Visualization/Select3D/Select3D_SensitiveGroup.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Select3D_SensitiveGroup)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Select3D_SensitiveEntity),
  STANDARD_TYPE(SelectBasics_SensitiveEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Select3D_SensitiveGroup)
IMPLEMENT_DOWNCAST(Select3D_SensitiveGroup,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Select3D_SensitiveGroup)
#include <Visualization/Select3D/Select3D_ListIteratorOfListOfSensitive.hxx>
#include <Mathematics/Precision/Precision.hxx>

//=======================================================================
//function : Creation
//purpose  : 
//=======================================================================
Select3D_SensitiveGroup::Select3D_SensitiveGroup(const Handle(SelectBasics_EntityOwner)& OwnerId,
                                                 const Standard_Boolean MatchAll):
Select3D_SensitiveEntity(OwnerId),
myMustMatchAll(MatchAll)
{
}

//=======================================================================
//function : Creation
//purpose  : 
//=======================================================================

Select3D_SensitiveGroup::Select3D_SensitiveGroup(const Handle(SelectBasics_EntityOwner)& OwnerId,
                                                 Select3D_ListOfSensitive& TheList, 
                                                 const Standard_Boolean MatchAll):
Select3D_SensitiveEntity(OwnerId),
myMustMatchAll(MatchAll)
{
  myList.insert(myList.end(), TheList.begin(), TheList.end());
}

//=======================================================================
//function : Add
//purpose  : No control of  entities inside 
//=======================================================================

void Select3D_SensitiveGroup::Add(Select3D_ListOfSensitive& LL) 
{
  myList.insert(myList.end(), LL.begin(), LL.end());
}

//=======================================================================
//function : Add
//purpose  : 
//=======================================================================

void Select3D_SensitiveGroup::Add(const Handle(Select3D_SensitiveEntity)& aSensitive) 
{
  for (const Handle(Select3D_SensitiveEntity) &v : myList)
    if(v==aSensitive) return;
  myList.push_back(aSensitive);
}

//=======================================================================
//function : Remove
//purpose  : 
//=======================================================================

void Select3D_SensitiveGroup::Remove(const Handle(Select3D_SensitiveEntity)& aSensitive) 
{
#warning Use remove(value) instead of erase(iterator) (watchout: different semantics)
  for (Select3D_ListIteratorOfListOfSensitive It(myList.begin()); It != myList.end(); ++It)
  {
    if((*It)==aSensitive)
    {
      myList.erase(It);
      return;
    }
  }
}

//=======================================================================
//function : IsIn
//purpose  : 
//=======================================================================

Standard_Boolean Select3D_SensitiveGroup::IsIn(const Handle(Select3D_SensitiveEntity)& aSensitive) const
{
  for (const Handle(Select3D_SensitiveEntity)& v : myList)
  {
    if(v==aSensitive)
      return Standard_True;
  }
  return Standard_False;
}

//=======================================================================
//function : Clear
//purpose  : 
//=======================================================================

void Select3D_SensitiveGroup::Clear()
{myList.clear();}

//=======================================================================
//function : Project
//purpose  : 
//=======================================================================

void Select3D_SensitiveGroup::Project(const Handle(Select3D_Projector)& aProjector) 
{
  for (const Handle(Select3D_SensitiveEntity)& v : myList)
  {
    v->Project(aProjector);
  }
}

//=======================================================================
//function : Areas
//purpose  : 
//=======================================================================

void Select3D_SensitiveGroup::Areas(SelectBasics_ListOfBox2d& boxes) 
{
  for (const Handle(Select3D_SensitiveEntity)& v : myList)
  {
    v->Areas(boxes);
  }
}

//=======================================================================
//function : GetConnected
//purpose  : 
//=======================================================================

Handle(Select3D_SensitiveEntity) Select3D_SensitiveGroup::GetConnected(const TopLoc_Location& aLocation) 
{
  Handle(Select3D_SensitiveGroup) newgroup = new Select3D_SensitiveGroup(myOwnerId,myMustMatchAll);
  Select3D_ListOfSensitive LL;
  for (const Handle(Select3D_SensitiveEntity)& v : myList)
  {
    LL.push_back(v->GetConnected(aLocation));
  }
  newgroup->Add(LL);
  return newgroup;
}

//=======================================================================
//function : SetLocation
//purpose  : 
//=======================================================================

void Select3D_SensitiveGroup::SetLocation(const TopLoc_Location& aLoc) 
{
  if(aLoc.IsIdentity()) return;

  for (const Handle(Select3D_SensitiveEntity)& v : myList)
  {
    v->SetLocation(aLoc);
  }

  if(HasLocation())
    if(aLoc == Location()) return;
  
  Select3D_SensitiveEntity::SetLocation(aLoc);
  for (Handle(Select3D_SensitiveEntity)& v : myList)
  {
    if(v->HasLocation())
    {
      if(v->Location()!=aLoc) 
        v->SetLocation(v->Location()*aLoc);
    }
    else
      v->SetLocation(aLoc);
  }
}

//=======================================================================
//function : ResetLocation
//purpose  : 
//=======================================================================

void Select3D_SensitiveGroup::ResetLocation() 
{
 if(!HasLocation()) return;
 for (const Handle(Select3D_SensitiveEntity)& v : myList)
 {
   if(v->HasLocation() && v->Location()!=Location())
     v->SetLocation(v->Location()*Location().Inverted());
   else
     v->ResetLocation();
 }
 Select3D_SensitiveEntity::ResetLocation();
}

//=======================================================================
//function : Matches
//purpose  : 
//=======================================================================

Standard_Boolean Select3D_SensitiveGroup::Matches (const SelectBasics_PickArgs& thePickArgs,
                                                   Standard_Real& theMatchDMin,
                                                   Standard_Real& theMatchDepth)
{
  theMatchDMin = RealLast();
  theMatchDepth = RealLast();
  Standard_Real aChildDMin, aChildDepth;
  Standard_Boolean isMatched = Standard_False;

  for (Handle(SelectBasics_SensitiveEntity)& aChild : myList)
  {
    if (!aChild->Matches (thePickArgs, aChildDMin, aChildDepth))
    {
      continue;
    }

    if (!isMatched)
    {
      theMatchDMin = aChildDMin;
      isMatched = Standard_True;
    }

    theMatchDepth = Min (aChildDepth, theMatchDepth);
  }

  return isMatched;
}

//=======================================================================
//function : Matches
//purpose  :  si on doit tout matcher, on ne repond oui que si toutes
//            les primitives repondent oui
//=======================================================================
Standard_Boolean Select3D_SensitiveGroup::Matches(const Standard_Real XMin, 
                                                  const Standard_Real YMin, 
                                                  const Standard_Real XMax, 
                                                  const Standard_Real YMax, 
                                                  const Standard_Real aTol) 
{
  Standard_Boolean result(Standard_True);
  
  for (const Handle(SelectBasics_SensitiveEntity)& v : myList)
  {
    if(v->Matches(XMin,YMin,XMax,YMax,aTol))
    {
      if(!myMustMatchAll)
        return Standard_True;
    }
    // ca ne matches pas..
    else 
    {
      if(myMustMatchAll) 
        return Standard_False;
      else 
        result = Standard_False;
    }
  }
  return result;
}

//=======================================================================
//function : Matches
//purpose  : 
//=======================================================================

Standard_Boolean Select3D_SensitiveGroup::
Matches (const TColgp_Array1OfPnt2d& aPoly,
         const Bnd_Box2d& aBox,
         const Standard_Real aTol)
{ 
  Standard_Boolean result(Standard_True);
  
  for (const Handle(SelectBasics_SensitiveEntity)& v : myList)
  {
    if(v->Matches(aPoly, aBox, aTol))
    {
      if(!myMustMatchAll) 
        return Standard_True;
    }
    else 
    {
      if(myMustMatchAll) 
        return Standard_False;
      else 
        result = Standard_False;
    }
  }
  return result;
}

//=======================================================================
//function : MaxBoxes
//purpose  : 
//=======================================================================

Standard_Integer Select3D_SensitiveGroup::MaxBoxes() const
{
  Standard_Integer nbboxes(0);
  for (const Handle(SelectBasics_SensitiveEntity)& v : myList)
    nbboxes+=v->MaxBoxes();
  return nbboxes;
}

//=======================================================================
//function : Set
//purpose  : 
//=======================================================================

void Select3D_SensitiveGroup::Set 
  (const Handle(SelectBasics_EntityOwner)& TheOwnerId)
{ 
  Select3D_SensitiveEntity::Set(TheOwnerId);
  // set TheOwnerId for each element of sensitive group
  for (Handle(SelectBasics_SensitiveEntity)& v : myList)
    v->Set(TheOwnerId);
}
