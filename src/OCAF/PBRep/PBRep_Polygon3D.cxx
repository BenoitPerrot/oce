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

#include <PPoly_Polygon3D.hxx>
#include <PTopLoc_Location.hxx>
#include <PBRep_Polygon3D.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PBRep_Polygon3D)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PBRep_CurveRepresentation),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PBRep_Polygon3D)
IMPLEMENT_DOWNCAST(PBRep_Polygon3D,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PBRep_Polygon3D)



//=======================================================================
//function : PBRep_Polygon3D::PBRep_Polygon3D
//purpose  : 
//=======================================================================

PBRep_Polygon3D::PBRep_Polygon3D(const Handle(PPoly_Polygon3D)& aPPol,
				 const PTopLoc_Location&        aPLoc) : 
    PBRep_CurveRepresentation(aPLoc),
    myPolygon3D(aPPol)
     
{
}

//=======================================================================
//function : PBRep_Polygon3D::IsPolygon3D
//purpose  : 
//=======================================================================

Standard_Boolean PBRep_Polygon3D::IsPolygon3D() const 
{
  return Standard_True;
}

//=======================================================================
//function : PBRep_Polygon3D::IsPolygon3D
//purpose  : 
//=======================================================================

Handle(PPoly_Polygon3D) PBRep_Polygon3D::Polygon3D() const 
{
  return myPolygon3D;
}

