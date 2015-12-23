// Created on: 2002-04-09
// Created by: QA Admin
// Copyright (c) 2002-2014 OPEN CASCADE SAS
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

#include <SelectMgr_Selection.hxx>
#include <Visualization/Prs3d/Prs3d_Presentation.hxx>
#include <QABugs_PresentableObject.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(QABugs_PresentableObject)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(AIS_InteractiveObject),
  STANDARD_TYPE(SelectMgr_SelectableObject),
  STANDARD_TYPE(PrsMgr_PresentableObject),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(QABugs_PresentableObject)
IMPLEMENT_DOWNCAST(QABugs_PresentableObject,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(QABugs_PresentableObject)
#include <QABugs_PresentableObject.hxx>

#include <Visualization/Graphic3d/Graphic3d_Group.hxx>
#include <Visualization/Graphic3d/Graphic3d_MaterialAspect.hxx>
#include <Visualization/Prs3d/Prs3d_ShadingAspect.hxx>
#include <Visualization/Graphic3d/Graphic3d_AspectFillArea3d.hxx>
#include <Visualization/Graphic3d/Graphic3d_ArrayOfTriangles.hxx>
#include <Mathematics/Primitives/gp_Dir.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Visualization/AIS/AIS_Drawer.hxx>

QABugs_PresentableObject::QABugs_PresentableObject(const PrsMgr_TypeOfPresentation3d theTypeOfPresentation3d)
     :AIS_InteractiveObject(theTypeOfPresentation3d)
{
}

void QABugs_PresentableObject::Compute(const Handle(PrsMgr_PresentationManager3d)& ,
				const Handle(Prs3d_Presentation)& thePrs,
				const Standard_Integer theMode)
{
  Handle(Graphic3d_Structure) aStructure = Handle(Graphic3d_Structure)::DownCast (thePrs);
  Handle(Graphic3d_Group)     aGroup     = aStructure->NewGroup();
  Handle(Prs3d_ShadingAspect) anAspect = myDrawer->ShadingAspect();
  Graphic3d_MaterialAspect aMat = anAspect->Aspect()->FrontMaterial();
  aMat.SetReflectionModeOff (Graphic3d_TOR_AMBIENT);
  aMat.SetReflectionModeOff (Graphic3d_TOR_DIFFUSE);
  aMat.SetReflectionModeOff (Graphic3d_TOR_SPECULAR);
  aMat.SetReflectionModeOff (Graphic3d_TOR_EMISSION);
  anAspect->SetMaterial (aMat);
  aGroup->SetPrimitivesAspect (anAspect->Aspect());

  Handle(Graphic3d_ArrayOfTriangles) aPrims
    = new Graphic3d_ArrayOfTriangles (6, 0,
                                      theMode == 1,   // normals
                                      Standard_True); // color per vertex
  switch (theMode)
  {
    case 0:
    {
      aPrims->AddVertex (gp_Pnt (0.0,  0.0,  0.0), Quantity_Color (Quantity_NOC_RED));
      aPrims->AddVertex (gp_Pnt (0.0,  5.0,  1.0), Quantity_Color (Quantity_NOC_BLUE1));
      aPrims->AddVertex (gp_Pnt (5.0,  0.0,  1.0), Quantity_Color (Quantity_NOC_YELLOW));

      aPrims->AddVertex (gp_Pnt (0.0,  5.0,  1.0), Quantity_Color (Quantity_NOC_BLUE1));
      aPrims->AddVertex (gp_Pnt (5.0,  5.0, -1.0), Quantity_Color (Quantity_NOC_GREEN));
      aPrims->AddVertex (gp_Pnt (5.0,  0.0,  1.0), Quantity_Color (Quantity_NOC_YELLOW));
      break;
    }
    case 1:
    {
      aPrims->AddVertex (gp_Pnt ( 5.0, 0.0,  0.0), gp_Dir (0.0, 0.0,  1.0), Quantity_Color (Quantity_NOC_RED));
      aPrims->AddVertex (gp_Pnt ( 5.0, 5.0,  1.0), gp_Dir (1.0, 1.0,  1.0), Quantity_Color (Quantity_NOC_BLUE1));
      aPrims->AddVertex (gp_Pnt (10.0, 0.0,  1.0), gp_Dir (0.0, 1.0,  1.0), Quantity_Color (Quantity_NOC_YELLOW));

      aPrims->AddVertex (gp_Pnt ( 5.0, 5.0,  1.0), gp_Dir (1.0, 1.0,  1.0), Quantity_Color (Quantity_NOC_BLUE1));
      aPrims->AddVertex (gp_Pnt (10.0, 5.0, -1.0), gp_Dir (0.0, 0.0, -1.0), Quantity_Color (Quantity_NOC_GREEN));
      aPrims->AddVertex (gp_Pnt (10.0, 0.0,  1.0), gp_Dir (0.0, 1.0,  1.0), Quantity_Color (Quantity_NOC_YELLOW));
    }
    break;
  }

  aGroup->AddPrimitiveArray (aPrims);
}

void QABugs_PresentableObject::ComputeSelection(const Handle(SelectMgr_Selection)& ,
					 const Standard_Integer ) {
}
