// Created on: 1998-08-27
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

#include <Visualization/AIS/AIS_InteractiveContext.hxx>
#include <V3d_View.hxx>
#include <Mathematics/Collections/TColgp_Array1OfPnt2d.hxx>
#include <ViewerTest_EventManager.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(ViewerTest_EventManager)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(ViewerTest_EventManager)
IMPLEMENT_DOWNCAST(ViewerTest_EventManager,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(ViewerTest_EventManager)
#include <Visualization/AIS/AIS_InteractiveContext.hxx>
#include <Visualization/Aspect/Aspect_Grid.hxx>
#include <NIS_View.hxx>

//=======================================================================
//function : ViewerTest_EventManager
//purpose  :
//=======================================================================

ViewerTest_EventManager::ViewerTest_EventManager (const Handle(V3d_View)&               theView,
                                                  const Handle(AIS_InteractiveContext)& theCtx)
: myCtx  (theCtx),
  myView (theView),
  myX    (-1),
  myY    (-1)
{}

//=======================================================================
//function : MoveTo
//purpose  :
//=======================================================================

void ViewerTest_EventManager::MoveTo (const Standard_Integer theXPix,
                                      const Standard_Integer theYPix)
{
  Standard_Real aPnt3d[3] = {0.0, 0.0, 0.0};
  if (!myCtx.IsNull()
   && !myView.IsNull())
  {
    const Standard_Boolean toEchoGrid = myView->Viewer()->Grid()->IsActive()
                                     && myView->Viewer()->GridEcho();
    switch (myCtx->MoveTo (theXPix, theYPix, myView, !toEchoGrid))
    {
      case AIS_SOD_Nothing:
      {
        if (toEchoGrid)
        {
          myView->ConvertToGrid (theXPix, theYPix, aPnt3d[0], aPnt3d[1], aPnt3d[2]);
          myView->Viewer()->ShowGridEcho (myView, Graphic3d_Vertex (aPnt3d[0], aPnt3d[1], aPnt3d[2]));
          myView->RedrawImmediate();
        }
        break;
      }
      default:
      {
        if (toEchoGrid)
        {
          myView->Viewer()->HideGridEcho (myView);
          myView->RedrawImmediate();
        }
        break;
      }
    }
  }

  myX = theXPix;
  myY = theYPix;
  const Handle(NIS_View) aView = Handle(NIS_View)::DownCast(myView);
  if (!aView.IsNull())
  {
    aView->DynamicHilight (theXPix, theYPix);
  }
}

//=======================================================================
//function : Select
//purpose  :
//=======================================================================

void ViewerTest_EventManager::Select (const Standard_Integer theXPMin,
                                      const Standard_Integer theYPMin,
                                      const Standard_Integer theXPMax,
                                      const Standard_Integer theYPMax)
{
  #define IS_FULL_INCLUSION Standard_True
  if (myView.IsNull()
   || Abs (theXPMax - theXPMin) < 2
   || Abs (theYPMax - theYPMin) < 2)
  {
    return;
  }
  else if (!myCtx.IsNull())
  {
    myCtx->Select (theXPMin, theYPMin, theXPMax, theYPMax, myView, Standard_False);
  }

  const Handle(NIS_View) aView = Handle(NIS_View)::DownCast (myView);
  if (!aView.IsNull())
  {
    aView->Select (theXPMin, theYPMin, theXPMax, theYPMax, Standard_False, IS_FULL_INCLUSION, Standard_False);
  }
  myView->Redraw();
}

//=======================================================================
//function : ShiftSelect
//purpose  :
//=======================================================================

void ViewerTest_EventManager::ShiftSelect (const Standard_Integer theXPMin,
                                           const Standard_Integer theYPMin,
                                           const Standard_Integer theXPMax,
                                           const Standard_Integer theYPMax)
{
  if (myView.IsNull()
   || Abs (theXPMax - theXPMin) < 2
   || Abs (theYPMax - theYPMin) < 2)
  {
    return;
  }
  else if (!myCtx.IsNull())
  {
    myCtx->AIS_InteractiveContext::ShiftSelect (theXPMin, theYPMin, theXPMax, theYPMax, myView, Standard_False);
  }
  const Handle(NIS_View) aView = Handle(NIS_View)::DownCast (myView);
  if (!aView.IsNull())
  {
    aView->Select (theXPMin, theYPMin, theXPMax, theYPMax, Standard_True, IS_FULL_INCLUSION, Standard_False);
  }
  myView->Redraw();
}

//=======================================================================
//function : Select
//purpose  :
//=======================================================================

void ViewerTest_EventManager::Select()
{
  if (myView.IsNull())
  {
    return;
  }
  else if (!myCtx.IsNull())
  {
    myCtx->Select (Standard_False);
  }

  const Handle(NIS_View) aView = Handle(NIS_View)::DownCast (myView);
  if (!aView.IsNull())
  {
    aView->Select (myX, myY, Standard_False);
  }
  myView->Redraw();
}

//=======================================================================
//function : ShiftSelect
//purpose  :
//=======================================================================

void ViewerTest_EventManager::ShiftSelect()
{
  if (myView.IsNull())
  {
    return;
  }
  else if (!myCtx.IsNull())
  {
    myCtx->ShiftSelect (Standard_False);
  }

  const Handle(NIS_View) aView = Handle(NIS_View)::DownCast (myView);
  if (!aView.IsNull())
  {
    aView->Select (myX, myY, Standard_False);
  }
  myView->Redraw();
}

//=======================================================================
//function : Select
//purpose  : Selection with polyline
//=======================================================================

void ViewerTest_EventManager::Select (const TColgp_Array1OfPnt2d& thePolyline)
{
  if (myView.IsNull())
  {
    return;
  }
  else if (!myCtx.IsNull())
  {
    myCtx->Select (thePolyline, myView, Standard_False);
  }

  const Handle(NIS_View) aView = Handle(NIS_View)::DownCast(myView);
  if (!aView.IsNull())
  {
    NCollection_List<gp_XY> aPolylist;
    for(Standard_Integer anIter = thePolyline.Lower(); anIter <= thePolyline.Upper(); ++anIter)
    {
      aPolylist.Append (gp_XY (thePolyline.Value (anIter).X(), thePolyline.Value (anIter).Y()));
    }
    aView->Select (aPolylist, Standard_False, Standard_False, Standard_False);
  }
  myView->Redraw();
}

//=======================================================================
//function : ShiftSelect
//purpose  : Selection with polyline without erasing of current selection
//=======================================================================

void ViewerTest_EventManager::ShiftSelect (const TColgp_Array1OfPnt2d& thePolyline)
{
  if (myView.IsNull())
  {
    return;
  }
  else if (!myCtx.IsNull())
  {
    myCtx->ShiftSelect (thePolyline, myView, Standard_False);
  }

  const Handle(NIS_View) aView = Handle(NIS_View)::DownCast (myView);
  if (!aView.IsNull())
  {
    NCollection_List<gp_XY> aPolylist;
    for (Standard_Integer anIter = thePolyline.Lower(); anIter <= thePolyline.Upper(); ++anIter)
    {
      aPolylist.Append (gp_XY (thePolyline.Value (anIter).X(), thePolyline.Value (anIter).Y()));
    }
    aView->Select (aPolylist, Standard_True, Standard_False, Standard_False);
  }
  myView->Redraw();
}

void ViewerTest_EventManager::GetCurrentPosition (Standard_Integer& theXPix, Standard_Integer& theYPix) const
{
  theXPix = myX;
  theYPix = myY;
}
