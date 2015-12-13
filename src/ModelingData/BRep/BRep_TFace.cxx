// Created on: 1992-08-25
// Created by: Remi Lequette
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

#include <Geom_Surface.hxx>
#include <Mathematics/Polyhedral/Poly_Triangulation.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_TShape.hxx>
#include <BRep_TFace.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BRep_TFace)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TopoDS_TFace),
  STANDARD_TYPE(TopoDS_TShape),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BRep_TFace)
IMPLEMENT_DOWNCAST(BRep_TFace,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BRep_TFace)
#include <TopAbs.hxx>

//=======================================================================
//function : BRep_TFace
//purpose  : 
//=======================================================================

BRep_TFace::BRep_TFace() :
       TopoDS_TFace(),
       myTolerance(RealEpsilon()),
       myNaturalRestriction(Standard_False)
{
}

//=======================================================================
//function : EmptyCopy
//purpose  : 
//=======================================================================

Handle(TopoDS_TShape) BRep_TFace::EmptyCopy() const
{
  Handle(BRep_TFace) TF = 
    new BRep_TFace();
  TF->Surface(mySurface);
  TF->Location(myLocation);
  TF->Tolerance(myTolerance);
  return TF;
}
