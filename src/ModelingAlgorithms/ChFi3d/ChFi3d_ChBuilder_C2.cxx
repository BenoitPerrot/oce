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
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_SecHArray1.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_SurfData.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_HElSpine.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_Spine.hxx>
#include <ModelingData/BRepAdaptor/BRepAdaptor_HSurface.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_TopolTool.hxx>
#include <ModelingData/BRepAdaptor/BRepAdaptor_HCurve2d.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_SequenceOfSurfData.hxx>
#include <ModelingData/TopoDS/TopoDS_Vertex.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_Stripe.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_ListOfStripe.hxx>
#include <ModelingAlgorithms/ChFi3d/ChFi3d_ChBuilder.hxx>

//=======================================================================
//function : PerformTwoCorner
//purpose  :

//=======================================================================

void ChFi3d_ChBuilder::PerformTwoCorner(const Standard_Integer Index)
{
   PerformTwoCornerbyInter(Index);
}
