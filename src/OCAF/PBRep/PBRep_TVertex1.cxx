// Created on: 1993-07-26
// Created by: Remi LEQUETTE
// Copyright (c) 1993-1999 Matra Datavision
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

#include <PBRep_PointRepresentation.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <PBRep_TVertex1.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PBRep_TVertex1)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PTopoDS_TVertex1),
  STANDARD_TYPE(PTopoDS_TShape1),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PBRep_TVertex1)
IMPLEMENT_DOWNCAST(PBRep_TVertex1,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PBRep_TVertex1)


//=======================================================================
//function : PBRep_TVertex1
//purpose  : 
//=======================================================================

PBRep_TVertex1::PBRep_TVertex1() : myTolerance(0.)
{
}

//=======================================================================
//function : Tolerance
//purpose  : 
//=======================================================================

Standard_Real  PBRep_TVertex1::Tolerance()const 
{
  return myTolerance;
}


//=======================================================================
//function : Tolerance
//purpose  : 
//=======================================================================

void  PBRep_TVertex1::Tolerance(const Standard_Real T)
{
  myTolerance = T;
}


//=======================================================================
//function : Pnt
//purpose  : 
//=======================================================================

gp_Pnt  PBRep_TVertex1::Pnt()const 
{
  return myPnt;
}


//=======================================================================
//function : Pnt
//purpose  : 
//=======================================================================

void  PBRep_TVertex1::Pnt(const gp_Pnt& P)
{
  myPnt = P;
}


//=======================================================================
//function : Points
//purpose  : 
//=======================================================================

Handle(PBRep_PointRepresentation)  PBRep_TVertex1::Points()const 
{
  return myPoints;
}


//=======================================================================
//function : Points
//purpose  : 
//=======================================================================

void  PBRep_TVertex1::Points(const Handle(PBRep_PointRepresentation)& P)
{
  myPoints = P;
}


