// Created on: 2000-05-25
// Created by: data exchange team
// Copyright (c) 2000-2014 OPEN CASCADE SAS
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
#include <ModelingAlgorithms/ShapeUpgrade/ShapeUpgrade_ShapeDivideClosedEdges.hxx>
#include <ModelingAlgorithms/ShapeUpgrade/ShapeUpgrade_ClosedEdgeDivide.hxx>
#include <ModelingAlgorithms/ShapeUpgrade/ShapeUpgrade_WireDivide.hxx>
#include <ModelingAlgorithms/ShapeUpgrade/ShapeUpgrade_FaceDivide.hxx>

//=======================================================================
//function : ShapeUpgrade_ShapeDivideClosedEdges
//purpose  : 
//=======================================================================

ShapeUpgrade_ShapeDivideClosedEdges::ShapeUpgrade_ShapeDivideClosedEdges(const TopoDS_Shape& S):
       ShapeUpgrade_ShapeDivide(S)  
{
  SetNbSplitPoints(1);
}

//=======================================================================
//function : SetNbSplitPoints
//purpose  : 
//=======================================================================

void ShapeUpgrade_ShapeDivideClosedEdges::SetNbSplitPoints(const Standard_Integer /*num*/)
{
  Handle(ShapeUpgrade_ClosedEdgeDivide) tool = new ShapeUpgrade_ClosedEdgeDivide;
  Handle(ShapeUpgrade_WireDivide) wtool = new ShapeUpgrade_WireDivide;
  wtool->SetEdgeDivideTool(tool);
  Handle(ShapeUpgrade_FaceDivide) ftool = new ShapeUpgrade_FaceDivide;
  ftool->SetWireDivideTool(wtool);
  ftool->SetSplitSurfaceTool( 0 );
  SetSplitFaceTool(ftool);
}
