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

#include <PPoly_Polygon2D.hxx>
#include <PGeom_Surface.hxx>
#include <PTopLoc_Location.hxx>
#include <PBRep_PolygonOnClosedSurface.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PBRep_PolygonOnClosedSurface)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PBRep_PolygonOnSurface),
  STANDARD_TYPE(PBRep_CurveRepresentation),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PBRep_PolygonOnClosedSurface)
IMPLEMENT_DOWNCAST(PBRep_PolygonOnClosedSurface,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PBRep_PolygonOnClosedSurface)


//=======================================================================
//function : PBRep_PolygonOnClosedSurface
//purpose  : 
//=======================================================================

PBRep_PolygonOnClosedSurface::PBRep_PolygonOnClosedSurface
(const Handle(PPoly_Polygon2D)& aPPol2d1,
 const Handle(PPoly_Polygon2D)& aPPol2d2,
 const Handle(PGeom_Surface)&   aPSurf,
 const PTopLoc_Location&        aPLoc) :
 PBRep_PolygonOnSurface( aPPol2d1, aPSurf, aPLoc),
 myPolygon2(aPPol2d2)
{
}


//=======================================================================
//function : PBRep_PolygonOnClosedSurface::IsPolygonOnClosedSurface
//purpose  : 
//=======================================================================

Standard_Boolean PBRep_PolygonOnClosedSurface::IsPolygonOnClosedSurface() const 
{
  return Standard_True;
}

//=======================================================================
//function : PBRep_PolygonOnSurface::Polygon2
//purpose  : 
//=======================================================================

Handle(PPoly_Polygon2D) PBRep_PolygonOnClosedSurface::Polygon2() const 
{
  return myPolygon2;
}
