// Created on: 2003-09-09
// Created by: Alexander SOLOVYOV
// Copyright (c) 2003-2014 OPEN CASCADE SAS
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

#include <Visualization/PrsMgr/PrsMgr_PresentationManager.hxx>
#include <Visualization/MeshVS/MeshVS_MeshEntityOwner.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MeshVS_MeshEntityOwner)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(SelectMgr_EntityOwner),
  STANDARD_TYPE(SelectBasics_EntityOwner),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MeshVS_MeshEntityOwner)
IMPLEMENT_DOWNCAST(MeshVS_MeshEntityOwner,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MeshVS_MeshEntityOwner)

#include <Visualization/SelectBasics/SelectBasics_EntityOwner.hxx>
#include <Visualization/Graphic3d/Graphic3d_Group.hxx>
#include <Foundation/TColStd/TColStd_ListIteratorOfListOfReal.hxx>
#include <Visualization/Prs3d/Prs3d_Root.hxx>
#include <Visualization/SelectMgr/SelectMgr_SelectableObject.hxx>
#include <Visualization/PrsMgr/PrsMgr_PresentationManager.hxx>
#include <Visualization/PrsMgr/PrsMgr_PresentationManager3d.hxx>
#include <Visualization/MeshVS/MeshVS_Mesh.hxx>


#ifndef MeshVS_PRSBUILDERHXX
#include <Visualization/MeshVS/MeshVS_PrsBuilder.hxx>
#endif


//================================================================
// Function : Constructor MeshVS_MeshEntityOwner
// Purpose  :
//================================================================
MeshVS_MeshEntityOwner::MeshVS_MeshEntityOwner
                                   ( const SelectMgr_SOPtr& SelObj,
                                     const Standard_Integer ID,
                                     const Standard_Address MeshEntity,
                                     const MeshVS_EntityType& Type,
                                     const Standard_Integer Priority,
                                     const Standard_Boolean IsGroup )
: SelectMgr_EntityOwner ( SelObj, Priority ),
  myAddr    ( MeshEntity ),
  myType    ( Type ),
  myID      ( ID ),
  myIsGroup ( IsGroup )
{
  SelectBasics_EntityOwner::Set ( Priority );
}

//================================================================
// Function : Owner
// Purpose  :
//================================================================
Standard_Address MeshVS_MeshEntityOwner::Owner() const
{
  return myAddr;
}

//================================================================
// Function : Type
// Purpose  :
//================================================================
MeshVS_EntityType MeshVS_MeshEntityOwner::Type() const
{
  return myType;
}

//================================================================
// Function : IsGroup
// Purpose  :
//================================================================
Standard_Boolean MeshVS_MeshEntityOwner::IsGroup() const
{
  return myIsGroup;
}

//================================================================
// Function : IsHilighted
// Purpose  :
//================================================================
Standard_Boolean MeshVS_MeshEntityOwner::IsHilighted ( const Handle(PrsMgr_PresentationManager)&,
                                                 const Standard_Integer ) const
{
  return Standard_False;
}

//================================================================
// Function : Hilight
// Purpose  :
//================================================================
void MeshVS_MeshEntityOwner::Hilight ()
{
}

//================================================================
// Function : Hilight
// Purpose  :
//================================================================
void MeshVS_MeshEntityOwner::Hilight ( const Handle(PrsMgr_PresentationManager)&,
                                 const Standard_Integer )
{
}

//================================================================
// Function : HilightWithColor
// Purpose  :
//================================================================
void MeshVS_MeshEntityOwner::HilightWithColor ( const Handle(PrsMgr_PresentationManager3d)& thePM,
                                          const Quantity_NameOfColor theColor,
                                          const Standard_Integer /*theMode*/ )
{
  Handle( SelectMgr_SelectableObject ) aSelObj;
  if ( HasSelectable() )
    aSelObj = Selectable();

  if ( thePM->IsImmediateModeOn() && aSelObj->IsKind( STANDARD_TYPE( MeshVS_Mesh ) ) )
  {
    Handle( MeshVS_Mesh ) aMesh = Handle( MeshVS_Mesh )::DownCast ( aSelObj );
    aMesh->HilightOwnerWithColor ( thePM, theColor, this );
  }
}

//================================================================
// Function : Unhilight
// Purpose  :
//================================================================
void MeshVS_MeshEntityOwner::Unhilight ( const Handle(PrsMgr_PresentationManager)&,
                                   const Standard_Integer )
{
}

//================================================================
// Function : Clear
// Purpose  :
//================================================================
void MeshVS_MeshEntityOwner::Clear ( const Handle(PrsMgr_PresentationManager)&,
                               const Standard_Integer )
{
}

//================================================================
// Function : ID
// Purpose  :
//================================================================
Standard_Integer MeshVS_MeshEntityOwner::ID () const
{
  return myID;
}
