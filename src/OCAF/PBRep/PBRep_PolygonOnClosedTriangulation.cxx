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

#include <PPoly_PolygonOnTriangulation.hxx>
#include <PPoly_Triangulation.hxx>
#include <PTopLoc_Location.hxx>
#include <OCAF/PBRep/PBRep_PolygonOnClosedTriangulation.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PBRep_PolygonOnClosedTriangulation)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PBRep_PolygonOnTriangulation),
  STANDARD_TYPE(PBRep_CurveRepresentation),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PBRep_PolygonOnClosedTriangulation)
IMPLEMENT_DOWNCAST(PBRep_PolygonOnClosedTriangulation,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PBRep_PolygonOnClosedTriangulation)


//=======================================================================
//function : PBRep_PolygonOnClosedTriangulation
//purpose  : 
//=======================================================================

PBRep_PolygonOnClosedTriangulation::PBRep_PolygonOnClosedTriangulation
(const Handle(PPoly_PolygonOnTriangulation)& aP1,
 const Handle(PPoly_PolygonOnTriangulation)& aP2,
 const Handle(PPoly_Triangulation)&      aPPol,
 const PTopLoc_Location&                 aPLoc) :
 PBRep_PolygonOnTriangulation(aP1, aPPol, aPLoc),
 myPolygon2(aP2)
{
}


//=======================================================================
//function : PBRep_PolygonOnClosedTriangulation::IsPolygonOnTriangulation
//purpose  : 
//=======================================================================

Standard_Boolean PBRep_PolygonOnClosedTriangulation::IsPolygonOnClosedTriangulation() const 
{
  return Standard_True;
}

//=======================================================================
//function : PBRep_CurveRepresentation::PolygonOnTriangulation2
//purpose  : 
//=======================================================================

Handle(PPoly_PolygonOnTriangulation) 
     PBRep_PolygonOnClosedTriangulation::PolygonOnTriangulation2() const 
{
  return myPolygon2;
}
