// Created on: 1997-02-10
// Created by: Odile Olivier
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

#include <Visualization/Prs3d/Prs3d_Presentation.hxx>
#include <Visualization/Prs3d/Prs3d_Drawer.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Visualization/DsgPrs/DsgPrs_XYZPlanePresentation.hxx>
#include <Visualization/Prs3d/Prs3d_Root.hxx>
#include <Visualization/Prs3d/Prs3d_PlaneAspect.hxx>
#include <Visualization/Prs3d/Prs3d_LineAspect.hxx>
#include <Visualization/Graphic3d/Graphic3d_Group.hxx>
#include <Visualization/Graphic3d/Graphic3d_ArrayOfPolylines.hxx>


//=======================================================================
//function : Add
//purpose  : 
//=======================================================================

void DsgPrs_XYZPlanePresentation::Add(
		       const Handle(Prs3d_Presentation)& aPresentation,
		       const Handle(Prs3d_Drawer)& aDrawer,	     
		       const gp_Pnt& aPt1, 
		       const gp_Pnt& aPt2,
		       const gp_Pnt& aPt3)
{
  Handle(Graphic3d_Group) TheGroup = Prs3d_Root::CurrentGroup(aPresentation);
  TheGroup->SetPrimitivesAspect(aDrawer->PlaneAspect()->EdgesAspect()->Aspect());

  Handle(Graphic3d_ArrayOfPolylines) aPrims = new Graphic3d_ArrayOfPolylines(4);
  aPrims->AddVertex(aPt1);
  aPrims->AddVertex(aPt2);
  aPrims->AddVertex(aPt3);
  aPrims->AddVertex(aPt1);
  TheGroup->AddPrimitiveArray(aPrims);
}
