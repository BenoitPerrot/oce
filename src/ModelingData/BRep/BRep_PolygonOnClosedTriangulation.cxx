// Created on: 1995-03-15
// Created by: Laurent PAINNOT
// Copyright (c) 1995-1999 Matra Datavision
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

#include <Mathematics/Polyhedral/Poly_PolygonOnTriangulation.hxx>
#include <Mathematics/Polyhedral/Poly_Triangulation.hxx>
#include <Mathematics/TopLoc/TopLoc_Location.hxx>
#include <ModelingData/BRep/BRep_CurveRepresentation.hxx>
#include <ModelingData/BRep/BRep_PolygonOnClosedTriangulation.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BRep_PolygonOnClosedTriangulation)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(BRep_PolygonOnTriangulation),
  STANDARD_TYPE(BRep_CurveRepresentation),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BRep_PolygonOnClosedTriangulation)
IMPLEMENT_DOWNCAST(BRep_PolygonOnClosedTriangulation,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BRep_PolygonOnClosedTriangulation)

//=======================================================================
//function : BRep_PolygonOnClosedTriangulation
//purpose  : 
//=======================================================================

BRep_PolygonOnClosedTriangulation::BRep_PolygonOnClosedTriangulation
  (const Handle(Poly_PolygonOnTriangulation)& P1,
   const Handle(Poly_PolygonOnTriangulation)& P2, 
   const Handle(Poly_Triangulation)&          T, 
   const TopLoc_Location&                     L):
   BRep_PolygonOnTriangulation(P1, T, L),
   myPolygon2(P2)
{
}

//=======================================================================
//function : IsPolygonOnclosedTriangulation
//purpose  : 
//=======================================================================

Standard_Boolean BRep_PolygonOnClosedTriangulation::IsPolygonOnClosedTriangulation() const 
{
  return Standard_True;
}


//=======================================================================
//function : PolygonOnTriangulation2
//purpose  : 
//=======================================================================

void BRep_PolygonOnClosedTriangulation::PolygonOnTriangulation2
  (const Handle(Poly_PolygonOnTriangulation)& P2)
{
  myPolygon2 = P2;
}
//=======================================================================
//function : PolygonOnTriangulation2
//purpose  : 
//=======================================================================

const Handle(Poly_PolygonOnTriangulation)& BRep_PolygonOnClosedTriangulation::PolygonOnTriangulation2() const 
{
  return myPolygon2;
}


//=======================================================================
//function : Copy
//purpose  : 
//=======================================================================

Handle(BRep_CurveRepresentation) BRep_PolygonOnClosedTriangulation::Copy() const 
{
  Handle(BRep_PolygonOnClosedTriangulation) P;
  P = new BRep_PolygonOnClosedTriangulation(PolygonOnTriangulation(), myPolygon2, 
					    Triangulation(), Location());

  return P;
}

