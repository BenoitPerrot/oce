// Created on: 1997-01-08
// Created by: Robert COUBLANC
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

#include <Foundation/Standard/Standard_NotImplemented.hxx>

#include <Visualization/AIS/AIS_InteractiveObject.hxx>
#include <Foundation/Standard/Standard_NotImplemented.hxx>
#include <Mathematics/Primitives/gp_Trsf.hxx>
#include <Visualization/Prs3d/Prs3d_Presentation.hxx>
#include <Visualization/Prs3d/Prs3d_Projector.hxx>
#include <Geometry/Geom/Geom_Transformation.hxx>
#include <Visualization/SelectMgr/SelectMgr_Selection.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Visualization/AIS/AIS_ConnectedInteractive.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(AIS_ConnectedInteractive)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(AIS_InteractiveObject),
  STANDARD_TYPE(SelectMgr_SelectableObject),
  STANDARD_TYPE(PrsMgr_PresentableObject),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(AIS_ConnectedInteractive)
IMPLEMENT_DOWNCAST(AIS_ConnectedInteractive,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(AIS_ConnectedInteractive)
#include <Visualization/SelectMgr/SelectMgr_EntityOwner.hxx>
#include <Visualization/Select3D/Select3D_SensitiveEntity.hxx>
#include <Geometry/Geom/Geom_Transformation.hxx>

#include <Visualization/PrsMgr/PrsMgr_ModedPresentation.hxx>
#include <Visualization/PrsMgr/PrsMgr_Presentation.hxx>

#include <Visualization/StdSelect/StdSelect_BRepOwner.hxx>

#include <Visualization/StdSelect/StdSelect.hxx>
#include <ModelingData/TopTools/TopTools_IndexedMapOfShape.hxx>
#include <ModelingData/TopTools/TopTools_OrientedShapeMapHasher.hxx>

#include <Visualization/AIS/AIS_InteractiveContext.hxx>
#include <ModelingData/BRepTools/BRepTools.hxx>
#include <Precision.hxx>
#include <Visualization/AIS/AIS_Drawer.hxx>
#include <ModelingData/TopAbs/TopAbs_ShapeEnum.hxx>
#include <Foundation/Standard/Standard_ProgramError.hxx>
#include <Visualization/StdPrs/StdPrs_WFDeflectionShape.hxx>
#include <Visualization/StdPrs/StdPrs_HLRPolyShape.hxx>
#include <Visualization/Prs3d/Prs3d_Drawer.hxx>

#include <Visualization/AIS/AIS_Shape.hxx>

#include <Foundation/NCollection/NCollection_DataMap.hxx>


//=======================================================================
//function : AIS_ConnectedInteractive
//purpose  : 
//=======================================================================
AIS_ConnectedInteractive::AIS_ConnectedInteractive(const PrsMgr_TypeOfPresentation3d aTypeOfPresentation3d):
AIS_InteractiveObject(aTypeOfPresentation3d)
{
  SetHilightMode(0);
}

//=======================================================================
//function : Type
//purpose  : 
//=======================================================================
AIS_KindOfInteractive AIS_ConnectedInteractive::Type() const
{
  return AIS_KOI_Object;
}

Standard_Integer AIS_ConnectedInteractive::Signature() const
{
  return 0;
}


//=======================================================================
//function : Connect
//purpose  : 
//=======================================================================
void AIS_ConnectedInteractive::Connect (const Handle(AIS_InteractiveObject)& theAnotherObj)
{
  if (myReference == theAnotherObj) return;

  Handle(AIS_ConnectedInteractive) aConnected = Handle(AIS_ConnectedInteractive)::DownCast (theAnotherObj);
  if (!aConnected.IsNull())
  {
    myReference = aConnected->myReference;
  }
  else if (theAnotherObj->HasOwnPresentations())
  {
    myReference = theAnotherObj;
  }
  else
  {
    Standard_ProgramError::Raise ("AIS_ConnectedInteractive::Connect() - object without own presentation can not be connected");
  }

  if (!myReference.IsNull())
  {
    myTypeOfPresentation3d = myReference->TypeOfPresentation3d();
  }

  theAnotherObj->AddChild (this);
}

//=======================================================================
//function : Connect
//purpose  : 
//=======================================================================
void AIS_ConnectedInteractive::Connect (const Handle(AIS_InteractiveObject)& theAnotherObj, 
                                        const gp_Trsf&                       theLocation)
{
  Connect (theAnotherObj);

  SetLocalTransformation (theLocation);
}


//=======================================================================
//function : Disconnect
//purpose  :
//=======================================================================

void AIS_ConnectedInteractive::Disconnect()
{
  for(Standard_Integer aPrsIter = 1; aPrsIter <= myPresentations.Length(); ++aPrsIter)
  {
    const Handle(PrsMgr_Presentation)& aPrs = myPresentations (aPrsIter).Presentation();
    if (!aPrs.IsNull())
    {
      aPrs->Presentation()->DisconnectAll (Graphic3d_TOC_DESCENDANT);
    }
  }
}
//=======================================================================
//function : Compute
//purpose  :
//=======================================================================
void AIS_ConnectedInteractive::Compute (const Handle(PrsMgr_PresentationManager3d)& thePrsMgr,
                                        const Handle(Prs3d_Presentation)&           thePrs,
                                        const Standard_Integer                      theMode)
{
  if (HasConnection())
  {
    thePrs->Clear (Standard_False);
    thePrs->RemoveAll();

    if (!myReference->HasInteractiveContext())
    {
      myReference->SetContext (GetContext());
    }
    thePrsMgr->Connect (this, myReference, theMode, theMode);
    if (thePrsMgr->Presentation (myReference, theMode)->MustBeUpdated())
    {
      thePrsMgr->Update (myReference, theMode);
    }
  }

  if (!thePrs.IsNull())
  {
    thePrs->ReCompute();
  }
}

//=======================================================================
//function : Compute
//purpose  :
//=======================================================================
void AIS_ConnectedInteractive::Compute (const Handle(Prs3d_Projector)& theProjector,
                                        const Handle(Geom_Transformation)& theTransformation,
                                        const Handle(Prs3d_Presentation)& thePresentation)
{
  updateShape (Standard_False);
  if (myShape.IsNull())
  {
    return;
  }
  const TopLoc_Location& aLocation = myShape.Location();
  TopoDS_Shape aShape = myShape.Located (TopLoc_Location (theTransformation->Trsf()) * aLocation);
  Compute (theProjector, thePresentation, aShape);
}

//=======================================================================
//function : Compute
//purpose  :
//=======================================================================
void AIS_ConnectedInteractive::Compute(const Handle(Prs3d_Projector)& aProjector, const Handle(Prs3d_Presentation)& aPresentation)
{
  updateShape (Standard_True);
  Compute (aProjector, aPresentation, myShape);
}

//=======================================================================
//function : Compute
//purpose  :
//=======================================================================
void AIS_ConnectedInteractive::Compute (const Handle(Prs3d_Projector)& theProjector,
                                        const Handle(Prs3d_Presentation)& thePresentation,
                                        const TopoDS_Shape& theShape)
{
  if (myShape.IsNull())
  {
    return;
  }

  switch (theShape.ShapeType())
  {
    case TopAbs_VERTEX:
    case TopAbs_EDGE:
    case TopAbs_WIRE:
    {
      thePresentation->SetDisplayPriority (4);
      StdPrs_WFDeflectionShape::Add (thePresentation, theShape, myDrawer);
      break;
    }
    default:
    {
      Handle(Prs3d_Drawer) aDefaultDrawer = GetContext()->DefaultDrawer();
      if (aDefaultDrawer->DrawHiddenLine()) 
      {
        myDrawer->EnableDrawHiddenLine();
      }
      else 
      {
        myDrawer->DisableDrawHiddenLine();
      }
      
      Aspect_TypeOfDeflection aPrevDeflection = aDefaultDrawer->TypeOfDeflection();
      aDefaultDrawer->SetTypeOfDeflection(Aspect_TOD_RELATIVE);

      // process HLRAngle and HLRDeviationCoefficient()
      Standard_Real aPrevAngle = myDrawer->HLRAngle();
      Standard_Real aNewAngle = aDefaultDrawer->HLRAngle();
      if (Abs (aNewAngle - aPrevAngle) > Precision::Angular())
      {
        BRepTools::Clean (theShape);
      }

      myDrawer->SetHLRAngle (aNewAngle);
      myDrawer->SetHLRDeviationCoefficient (aDefaultDrawer->HLRDeviationCoefficient());
      StdPrs_HLRPolyShape::Add (thePresentation, theShape, myDrawer, theProjector);
      aDefaultDrawer->SetTypeOfDeflection (aPrevDeflection);
    }
  }
}

//=======================================================================
//function : updateShape
//purpose  : 
//=======================================================================
void AIS_ConnectedInteractive::updateShape (const Standard_Boolean isWithLocation)
{
  Handle(AIS_Shape) anAisShape = Handle(AIS_Shape)::DownCast (myReference);
  if (anAisShape.IsNull())
  {
    return;
  }
 
  TopoDS_Shape aShape = anAisShape->Shape();
  if (aShape.IsNull())
  {
    return;
  }

  if(!isWithLocation)
  {
    myShape = aShape;
  }
  else
  {
    myShape = aShape.Moved (TopLoc_Location (Transformation()));
  }
}

//=======================================================================
//function : ComputeSelection
//purpose  : 
//=======================================================================
void AIS_ConnectedInteractive::ComputeSelection (const Handle(SelectMgr_Selection)& theSelection, 
                                                 const Standard_Integer theMode)
{
  if (!HasConnection())
  {
    return;
  }

  if (theMode != 0 && myReference->AcceptShapeDecomposition())
  {
    computeSubShapeSelection (theSelection, theMode);
    return;
  }

  if (!myReference->HasSelection (theMode))
  {
    myReference->UpdateSelection (theMode);
  }

  const Handle(SelectMgr_Selection)& TheRefSel = myReference->Selection (theMode);
  Handle(SelectMgr_EntityOwner) anOwner = new SelectMgr_EntityOwner (this);
  Handle(Select3D_SensitiveEntity) aSensitive, aNewSensitive;
  
  if (TheRefSel->IsEmpty())
  {
    myReference->UpdateSelection (theMode);
  }

  for (TheRefSel->Init(); TheRefSel->More(); TheRefSel->Next())
  {
    aSensitive = Handle(Select3D_SensitiveEntity)::DownCast (TheRefSel->Sensitive());
    if (!aSensitive.IsNull())
    {
      TopLoc_Location aLocation (Transformation());
      // Get the copy of SE3D
      aNewSensitive = aSensitive->GetConnected (aLocation);

      aNewSensitive->Set(anOwner);
      // In case if SE3D caches some location-dependent data
      // that must be updated after setting OWN
      aNewSensitive->SetLocation (aLocation);

      theSelection->Add (aNewSensitive);
    }
  }
}

//=======================================================================
//function : ComputeSubShapeSelection 
//purpose  :
//=======================================================================
void AIS_ConnectedInteractive::computeSubShapeSelection (const Handle(SelectMgr_Selection)& theSelection, 
                                                         const Standard_Integer theMode)
{
  typedef NCollection_List<Handle(Select3D_SensitiveEntity)> SensitiveList;
  typedef NCollection_DataMap<TopoDS_Shape, SensitiveList, TopTools_OrientedShapeMapHasher>
    Shapes2EntitiesMap;

  if (!myReference->HasSelection (theMode))
    myReference->UpdateSelection (theMode);
   
  const Handle(SelectMgr_Selection)& aRefSel = myReference->Selection (theMode);

  if (aRefSel->IsEmpty() || aRefSel->UpdateStatus() == SelectMgr_TOU_Full)
  {
    myReference->UpdateSelection (theMode);
  }
  
  Handle(StdSelect_BRepOwner) anOwner;
  TopLoc_Location aDummyLoc;

  Handle(Select3D_SensitiveEntity) aSE, aNewSE;
  Shapes2EntitiesMap aShapes2EntitiesMap;

  SensitiveList aSEList;
  TopoDS_Shape aSubShape;

  // Fill in the map of subshapes and corresponding 
  // sensitive entities associated with aMode 
  for (aRefSel->Init(); aRefSel->More(); aRefSel->Next())
  {
    aSE = Handle(Select3D_SensitiveEntity)::DownCast (aRefSel->Sensitive()); 
    if(!aSE.IsNull())
    {
      anOwner = Handle(StdSelect_BRepOwner)::DownCast (aSE->OwnerId());
      if(!anOwner.IsNull())
      {
        aSubShape = anOwner->Shape(); 
        if(!aShapes2EntitiesMap.IsBound (aSubShape))
        {
          aShapes2EntitiesMap.Bind (aSubShape, aSEList);
        }
        aShapes2EntitiesMap (aSubShape).Append (aSE);
      }
    }
  }

  // Fill in selection from aShapes2EntitiesMap
  for (Shapes2EntitiesMap::Iterator aMapIt (aShapes2EntitiesMap); aMapIt.More(); aMapIt.Next())
  {
    aSEList = aMapIt.Value();
    anOwner = new StdSelect_BRepOwner (aMapIt.Key(), 
                                       this, 
                                       aSEList.First()->OwnerId()->Priority(), 
                                       Standard_True);

    for (SensitiveList::Iterator aListIt (aSEList); aListIt.More(); aListIt.Next())
    {      
      aSE = aListIt.Value();

      TopLoc_Location aLocation (Transformation());
      aNewSE = aSE->GetConnected (aDummyLoc);
      aNewSE->Set (anOwner);
      // In case if aSE caches some location-dependent data 
      // that must be updated after setting anOwner
      aNewSE->SetLocation (aLocation);

      theSelection->Add (aNewSE);
    }
  }

  StdSelect::SetDrawerForBRepOwner (theSelection, myDrawer);  
}
