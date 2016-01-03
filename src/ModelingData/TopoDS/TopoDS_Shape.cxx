// Created on: 1991-03-20
// Created by: Remi Lequette
// Copyright (c) 1991-1999 Matra Datavision
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

#include <ModelingData/TopoDS/TopoDS_TShape.hxx>
#include <Foundation/Standard/Standard_NullObject.hxx>
#include <Foundation/Standard/Standard_DomainError.hxx>
#include <Foundation/Standard/Standard_TypeMismatch.hxx>
#include <Mathematics/TopLoc/TopLoc_Location.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>


//=======================================================================
//function : ShapeType
//purpose  : 
//=======================================================================

TopAbs_ShapeEnum TopoDS_Shape::ShapeType() const
{
  return myTShape->ShapeType();
}

//=======================================================================
//function : Free
//purpose  : 
//=======================================================================

Standard_Boolean TopoDS_Shape::Free () const
{
  return myTShape->Free();
}

//=======================================================================
//function : Free
//purpose  : 
//=======================================================================

void TopoDS_Shape::Free (const Standard_Boolean B)
{
  myTShape->Free(B);
}

//=======================================================================
//function : Locked
//purpose  : 
//=======================================================================

Standard_Boolean TopoDS_Shape::Locked () const
{
  return myTShape->Locked();
}

//=======================================================================
//function : Locked
//purpose  : 
//=======================================================================

void TopoDS_Shape::Locked (const Standard_Boolean B)
{
  myTShape->Locked(B);
}

//=======================================================================
//function : Modified
//purpose  : 
//=======================================================================

Standard_Boolean TopoDS_Shape::Modified () const
{
  return myTShape->Modified();
}

//=======================================================================
//function : Modified
//purpose  : 
//=======================================================================

void TopoDS_Shape::Modified (const Standard_Boolean B)
{
  myTShape->Modified(B);
}

//=======================================================================
//function : Checked
//purpose  : 
//=======================================================================

Standard_Boolean TopoDS_Shape::Checked () const
{
  return myTShape->Checked();
}

//=======================================================================
//function : Checked
//purpose  : 
//=======================================================================

void TopoDS_Shape::Checked (const Standard_Boolean B)
{
  myTShape->Checked(B);
}

//=======================================================================
//function : Orientable
//purpose  : 
//=======================================================================

Standard_Boolean TopoDS_Shape::Orientable () const
{
  return myTShape->Orientable();
}

//=======================================================================
//function : Orientable
//purpose  : 
//=======================================================================

void TopoDS_Shape::Orientable (const Standard_Boolean B)
{
  myTShape->Orientable(B);
}

//=======================================================================
//function : Closed
//purpose  : 
//=======================================================================

Standard_Boolean TopoDS_Shape::Closed () const
{
  return myTShape->Closed();
}

//=======================================================================
//function : Closed
//purpose  : 
//=======================================================================

void TopoDS_Shape::Closed (const Standard_Boolean B)
{
  myTShape->Closed(B);
}

//=======================================================================
//function : Infinite
//purpose  : 
//=======================================================================

Standard_Boolean TopoDS_Shape::Infinite () const
{
  return myTShape->Infinite();
}

//=======================================================================
//function : Infinite
//purpose  : 
//=======================================================================

void TopoDS_Shape::Infinite (const Standard_Boolean B)
{
  myTShape->Infinite(B);
}

//=======================================================================
//function : Convex
//purpose  : 
//=======================================================================

Standard_Boolean TopoDS_Shape::Convex () const
{
  return myTShape->Convex();
}

//=======================================================================
//function : Convex
//purpose  : 
//=======================================================================

void TopoDS_Shape::Convex (const Standard_Boolean B)
{
  myTShape->Convex(B);
}

//=======================================================================
//function : IsPartner
//purpose  : 
//=======================================================================

Standard_Boolean TopoDS_Shape::IsPartner (const TopoDS_Shape& other) const
{
  return (myTShape == other.myTShape);
}

//=======================================================================
//function : IsSame
//purpose  : 
//=======================================================================

Standard_Boolean TopoDS_Shape::IsSame (const TopoDS_Shape& other) const
{
  return (myTShape == other.myTShape) &&
         (myLocation == other.myLocation);
}

//=======================================================================
//function : IsEqual
//purpose  : 
//=======================================================================

Standard_Boolean TopoDS_Shape::IsEqual (const TopoDS_Shape& other) const
{
  return (myTShape == other.myTShape) &&
         (myLocation == other.myLocation) &&
         (myOrient == other.myOrient);
}

//=======================================================================
//function : EmptyCopy
//purpose  : 
//=======================================================================

void TopoDS_Shape::EmptyCopy()
{
  myTShape = myTShape->EmptyCopy();
}

//=======================================================================
//function : HashCode
//purpose  : 
//=======================================================================

Standard_Integer TopoDS_Shape::HashCode(const Standard_Integer Upper) const
{
  //PKV
  const Standard_Integer aI = (Standard_Integer) ptrdiff_t(myTShape.operator->());
  const Standard_Integer aHS = ::HashCode(aI,Upper);
  const Standard_Integer aHL = myLocation.HashCode(Upper);
  return (aHS^aHL)%Upper;
} 
