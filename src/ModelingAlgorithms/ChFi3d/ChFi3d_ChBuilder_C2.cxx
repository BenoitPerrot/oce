// Created on: 1996-07-26
// Created by: Stagiaire Xuan Trang PHAMPHU
// Copyright (c) 1996-1999 Matra Datavision
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
#include <Foundation/Standard/Standard_DomainError.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <ChFiDS_SecHArray1.hxx>
#include <ChFiDS_SurfData.hxx>
#include <ChFiDS_HElSpine.hxx>
#include <ChFiDS_Spine.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <BRepAdaptor_HCurve2d.hxx>
#include <ChFiDS_SequenceOfSurfData.hxx>
#include <TopoDS_Vertex.hxx>
#include <ChFiDS_Stripe.hxx>
#include <ChFiDS_ListOfStripe.hxx>
#include <ChFi3d_ChBuilder.hxx>

//=======================================================================
//function : PerformTwoCorner
//purpose  :

//=======================================================================

void ChFi3d_ChBuilder::PerformTwoCorner(const Standard_Integer Index)
{
   PerformTwoCornerbyInter(Index);
}
