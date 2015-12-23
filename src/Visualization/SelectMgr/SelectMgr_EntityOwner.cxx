// Created on: 1995-05-23
// Created by: Robert COUBLANC
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

#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <SelectMgr_SelectableObject.hxx>
#include <Visualization/PrsMgr/PrsMgr_PresentationManager.hxx>
#include <Mathematics/TopLoc/TopLoc_Location.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(SelectMgr_EntityOwner)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(SelectBasics_EntityOwner),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(SelectMgr_EntityOwner)
IMPLEMENT_DOWNCAST(SelectMgr_EntityOwner,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(SelectMgr_EntityOwner)



//==================================================
// Function: 
// Purpose :
//==================================================
SelectMgr_EntityOwner::SelectMgr_EntityOwner(const Standard_Integer aPriority):
SelectBasics_EntityOwner(aPriority),
mySelectable(NULL),
myIsSelected (Standard_False)
{
}

SelectMgr_EntityOwner::SelectMgr_EntityOwner(const Handle(SelectMgr_SelectableObject)& aSO,
					     const Standard_Integer aPriority):
SelectBasics_EntityOwner(aPriority),
myIsSelected (Standard_False)
{
  mySelectable = aSO.operator->();
}

SelectMgr_EntityOwner::SelectMgr_EntityOwner (const Handle(SelectMgr_EntityOwner)& theOwner, const Standard_Integer aPriority)
:
  SelectBasics_EntityOwner(aPriority),
  mySelectable (theOwner->mySelectable)
{
}


//=======================================================================
//function : About Selectable...
//purpose  : 
//=======================================================================
void SelectMgr_EntityOwner::Set(const Handle(SelectMgr_SelectableObject)& aSO)
{
  mySelectable = aSO.operator->();
}

Standard_Boolean SelectMgr_EntityOwner::HasSelectable() const
{  
  Handle(Standard_Transient) aNull;
  if(mySelectable != aNull.operator->()){
    if(!Selectable().IsNull()) return Standard_True;}
  return Standard_False;
}

Handle(SelectMgr_SelectableObject) SelectMgr_EntityOwner::Selectable() const
{  
  return mySelectable;
}

//=======================================================================
//function : about Hilight
//purpose  : 
//=======================================================================
Standard_Boolean SelectMgr_EntityOwner::IsHilighted(const Handle(PrsMgr_PresentationManager)& PM,
						    const Standard_Integer aMode) const 
{if(HasSelectable())
   return PM->IsHighlighted(mySelectable,aMode);
 return Standard_False;
}
void SelectMgr_EntityOwner::Hilight(const Handle(PrsMgr_PresentationManager)& PM,
				    const Standard_Integer aMode)
{if(HasSelectable())
   PM->Highlight(mySelectable,aMode);
}

void SelectMgr_EntityOwner::HilightWithColor(const Handle(PrsMgr_PresentationManager3d)& PM,
					     const Quantity_NameOfColor aColor,
					     const Standard_Integer aMode)
{
  if( HasSelectable() ) {
    if( IsAutoHilight() )
      PM->Color(mySelectable,aColor,aMode);
    else
      mySelectable->HilightOwnerWithColor( PM, aColor, this );
  }
}

void SelectMgr_EntityOwner::Unhilight(const Handle(PrsMgr_PresentationManager)& PM,
	const Standard_Integer aMode)
{
  if(HasSelectable())
    PM->Unhighlight(mySelectable,aMode);
}

void SelectMgr_EntityOwner::Clear(const Handle(PrsMgr_PresentationManager)&,
				  const Standard_Integer)
{
// nothing done on the selectable here...
}


void SelectMgr_EntityOwner::
Hilight(){}


//=======================================================================
//function : about Transformation
//purpose  : 
//=======================================================================

Standard_Boolean SelectMgr_EntityOwner::HasLocation() const
{
  return (HasSelectable() && mySelectable->HasTransformation());
}

void SelectMgr_EntityOwner::SetLocation(const TopLoc_Location&)
{
}

TopLoc_Location SelectMgr_EntityOwner::Location() const
{
  return !HasSelectable() ? TopLoc_Location() : TopLoc_Location(mySelectable->Transformation());
}

void SelectMgr_EntityOwner::ResetLocation()
{
}

Standard_Boolean SelectMgr_EntityOwner::IsAutoHilight () const
{
  if ( mySelectable==0 )
    return Standard_True;
  else
    return mySelectable->IsAutoHilight();
}

Standard_Boolean SelectMgr_EntityOwner::IsForcedHilight () const
{
  return Standard_False;
}

//=======================================================================
//function : SetZLayer
//purpose  :
//=======================================================================
void SelectMgr_EntityOwner::SetZLayer 
  (const Handle(PrsMgr_PresentationManager)&,
   const Standard_Integer)
{
}
