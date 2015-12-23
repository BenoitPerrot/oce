// Created on: 2009-04-06
// Created by: Sergey ZARITCHNY
// Copyright (c) 2009-2014 OPEN CASCADE SAS
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

#include <Foundation/Standard/Standard_GUID.hxx>
#include <OCAF/TDF/TDF_Label.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <OCAF/TDF/TDF_Attribute.hxx>
#include <OCAF/TDF/TDF_RelocationTable.hxx>
#include <OCAF/TDataXtd/TDataXtd_Point.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(TDataXtd_Point)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TDF_Attribute),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TDataXtd_Point)
IMPLEMENT_DOWNCAST(TDataXtd_Point,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TDataXtd_Point)
#include <OCAF/TDataStd/TDataStd.hxx>
#include <OCAF/TDataXtd/TDataXtd.hxx>
#include <TNaming_NamedShape.hxx>
#include <TNaming_Tool.hxx>
#include <TNaming_Builder.hxx>
#include <ModelingData/BRep/BRep_Tool.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>
#include <ModelingData/TopoDS/TopoDS_Vertex.hxx>
#include <ModelingData/TopAbs/TopAbs.hxx>
#include <ModelingAlgorithms/BRepLib/BRepLib_MakeVertex.hxx>

#include <Geometry/Geom/Geom_CartesianPoint.hxx>

#include <ModelingData/BRep/BRep_Tool.hxx>

#define OCC2932

//=======================================================================
//function : GetID
//purpose  : 
//=======================================================================

const Standard_GUID& TDataXtd_Point::GetID() 
{
  static Standard_GUID TDataXtd_PointID("2a96b60d-ec8b-11d0-bee7-080009dc3333");
  return TDataXtd_PointID;
}


//=======================================================================
//function : Set
//purpose  : 
//=======================================================================

Handle(TDataXtd_Point) TDataXtd_Point::Set (const TDF_Label& L)
{ 
  Handle(TDataXtd_Point) A; 
  if (!L.FindAttribute(TDataXtd_Point::GetID(),A)) {
    A = new TDataXtd_Point (); 
    L.AddAttribute(A);
  }
  return A;
}

//=======================================================================
//function : Set
//purpose  : 
//=======================================================================

Handle(TDataXtd_Point) TDataXtd_Point::Set (const TDF_Label& L, const gp_Pnt& P)
{ 
  Handle(TDataXtd_Point) A = Set (L);

#ifdef OCC2932
  Handle(TNaming_NamedShape) aNS;
  if(L.FindAttribute(TNaming_NamedShape::GetID(), aNS)) {
    if(!aNS->Get().IsNull())
       if(aNS->Get().ShapeType() == TopAbs_VERTEX) {
	 gp_Pnt anOldPnt = BRep_Tool::Pnt(TopoDS::Vertex(aNS->Get()));
	 if(anOldPnt.X() == P.X() &&
	    anOldPnt.Y() == P.Y() &&
	    anOldPnt.Z() == P.Z()
	    )
	   return A;
       }
  }
#endif

  TNaming_Builder B(L);
  B.Generated(BRepLib_MakeVertex(P));
  return A;
}


//=======================================================================
//function : TDataXtd_Point
//purpose  : 
//=======================================================================

TDataXtd_Point::TDataXtd_Point () {}



//=======================================================================
//function : ID
//purpose  : 
//=======================================================================

const Standard_GUID& TDataXtd_Point::ID() const { return GetID ();}


//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================

Handle(TDF_Attribute) TDataXtd_Point::NewEmpty () const
{  
  return new TDataXtd_Point(); 
}

//=======================================================================
//function : Restore
//purpose  : 
//=======================================================================

void TDataXtd_Point::Restore(const Handle(TDF_Attribute)&) 
{
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================

void TDataXtd_Point::Paste (const Handle(TDF_Attribute)&, const Handle(TDF_RelocationTable)&) const 
{
}

//=======================================================================
//function : Dump
//purpose  : 
//=======================================================================

Standard_OStream& TDataXtd_Point::Dump (Standard_OStream& anOS) const
{  
  anOS << "Point";
  return anOS;
}
