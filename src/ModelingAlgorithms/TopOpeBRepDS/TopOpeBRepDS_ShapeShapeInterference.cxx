// Created on: 1994-08-30
// Created by: Jean Yves LEBEY
// Copyright (c) 1994-1999 Matra Datavision
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

#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <TopOpeBRepDS.hxx>
#include <TopOpeBRepDS_Transition.hxx>
#include <TopOpeBRepDS_ShapeShapeInterference.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(TopOpeBRepDS_ShapeShapeInterference)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TopOpeBRepDS_Interference),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TopOpeBRepDS_ShapeShapeInterference)
IMPLEMENT_DOWNCAST(TopOpeBRepDS_ShapeShapeInterference,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TopOpeBRepDS_ShapeShapeInterference)

//=======================================================================
//function : TopOpeBRepDS_ShapeShapeInterference
//purpose  : 
//=======================================================================

TopOpeBRepDS_ShapeShapeInterference::TopOpeBRepDS_ShapeShapeInterference
  (const TopOpeBRepDS_Transition& T,
   const TopOpeBRepDS_Kind        ST, 
   const Standard_Integer         S, 
   const TopOpeBRepDS_Kind        GT, 
   const Standard_Integer         G, 
   const Standard_Boolean         GBound, 
   const TopOpeBRepDS_Config      C) :
   TopOpeBRepDS_Interference(T,ST,S,GT,G),
   myGBound(GBound),
   myC(C)
{
}


//=======================================================================
//function : Config
//purpose  : 
//=======================================================================

TopOpeBRepDS_Config TopOpeBRepDS_ShapeShapeInterference::Config()const 
{ return myC; }


//=======================================================================
//function : GBound
//purpose  : 
//=======================================================================

Standard_Boolean TopOpeBRepDS_ShapeShapeInterference::GBound()const 
{ return myGBound; }

//=======================================================================
//function : SetGBound
//purpose  : 
//=======================================================================

void TopOpeBRepDS_ShapeShapeInterference::SetGBound(const Standard_Boolean b)
{ myGBound = b; }

//=======================================================================
//function : Dump
//purpose  : 
//=======================================================================

Standard_OStream& TopOpeBRepDS_ShapeShapeInterference::Dump
  (Standard_OStream& OS) const
{
#ifdef OCCT_DEBUG
  OS<<"("; TopOpeBRepDS::Print(myC,OS); OS<<")"<<" ";
  if (myGBound) OS<<"(Gb 1) ";
  else          OS<<"(Gb 0) ";
  TopOpeBRepDS_Interference::Dump(OS);
#endif

  return OS;
}
