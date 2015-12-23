// Created on: 1992-08-25
// Created by: Modelistation
// Copyright (c) 1992-1999 Matra Datavision
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

#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <ModelingData/BRep/BRep_ListOfPointRepresentation.hxx>
#include <TopoDS_TShape.hxx>
#include <ModelingData/BRep/BRep_TVertex.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BRep_TVertex)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TopoDS_TVertex),
  STANDARD_TYPE(TopoDS_TShape),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BRep_TVertex)
IMPLEMENT_DOWNCAST(BRep_TVertex,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BRep_TVertex)
#include <ModelingData/TopAbs/TopAbs.hxx>

//=======================================================================
//function : BRep_TVertex
//purpose  : 
//=======================================================================

BRep_TVertex::BRep_TVertex() :
       TopoDS_TVertex(),
       myTolerance(RealEpsilon())
{
}

//=======================================================================
//function : EmptyCopy
//purpose  : 
//=======================================================================

Handle(TopoDS_TShape) BRep_TVertex::EmptyCopy() const
{
  Handle(BRep_TVertex) TV = 
    new BRep_TVertex();
  TV->Pnt(myPnt);
  TV->Tolerance(myTolerance);
  return TV;
}

