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
#include <TDF_Label.hxx>
#include <Mathematics/Primitives/gp_Pln.hxx>
#include <TDF_Attribute.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataXtd_Plane.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(TDataXtd_Plane)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TDF_Attribute),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TDataXtd_Plane)
IMPLEMENT_DOWNCAST(TDataXtd_Plane,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TDataXtd_Plane)
#include <OCAF/TDataStd/TDataStd.hxx>
#include <TDataXtd.hxx>
#include <TNaming_NamedShape.hxx>
#include <TNaming_Tool.hxx>
#include <TNaming_Builder.hxx>
#include <TDF_Label.hxx>
#include <Mathematics/Primitives/gp_Pln.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingData/TopAbs/TopAbs.hxx>
#include <ModelingData/BRep/BRep_Tool.hxx>
#include <ModelingAlgorithms/BRepLib/BRepLib_MakeFace.hxx>
#include <Geometry/Geom/Geom_RectangularTrimmedSurface.hxx>
#include <Geometry/Geom/Geom_Plane.hxx>
#include <Geometry/GeomLib/GeomLib_IsPlanarSurface.hxx>

#define OCC2932

//=======================================================================
//function : GetID
//purpose  : 
//=======================================================================

const Standard_GUID& TDataXtd_Plane::GetID () 
{
  static Standard_GUID TDataXtd_PlaneID("2a96b60c-ec8b-11d0-bee7-080009dc3333");
  return TDataXtd_PlaneID;
}

 
//=======================================================================
//function : Set
//purpose  : 
//=======================================================================

Handle(TDataXtd_Plane) TDataXtd_Plane::Set (const TDF_Label& L)
{
  Handle(TDataXtd_Plane) A;
  if (!L.FindAttribute(TDataXtd_Plane::GetID(),A)) {
    A = new TDataXtd_Plane (); 
    L.AddAttribute(A);
  }  
  return A;
}



//=======================================================================
//function : Set
//purpose  : 
//=======================================================================

Handle(TDataXtd_Plane) TDataXtd_Plane::Set (const TDF_Label& L, const gp_Pln& P)
{ 
  Handle(TDataXtd_Plane) A = Set (L);

#ifdef OCC2932
  Handle(TNaming_NamedShape) aNS;
  if(L.FindAttribute(TNaming_NamedShape::GetID(), aNS)) {
    if(!aNS->Get().IsNull())
       if(aNS->Get().ShapeType() == TopAbs_FACE) {
	 TopoDS_Face aFace = TopoDS::Face(aNS->Get());
	 Handle(Geom_Surface) aSurface = BRep_Tool::Surface(aFace);
	 GeomLib_IsPlanarSurface aChecker(aSurface);
	 if(aChecker.IsPlanar()) {
	   gp_Pln aPlane = aChecker.Plan();
	   if(aPlane.Location().X() == P.Location().X() &&
	      aPlane.Location().Y() == P.Location().Y() &&
	      aPlane.Location().Z() == P.Location().Z() &&
	      aPlane.Axis().Location().X() == P.Axis().Location().X() &&
	      aPlane.Axis().Location().Y() == P.Axis().Location().Y() &&
	      aPlane.Axis().Location().Z() == P.Axis().Location().Z() &&
	      aPlane.Axis().Direction().X() == P.Axis().Direction().X() &&
	      aPlane.Axis().Direction().Y() == P.Axis().Direction().Y() &&
	      aPlane.Axis().Direction().Z() == P.Axis().Direction().Z()
	      )
	     return A;
	 }
       }
  }
#endif

  TNaming_Builder B(L);
  B.Generated(BRepLib_MakeFace(P));
  return A;
}

//=======================================================================
//function : TDataXtd_Plane
//purpose  : 
//=======================================================================

TDataXtd_Plane::TDataXtd_Plane () { }


//=======================================================================
//function : ID
//purpose  : 
//=======================================================================

const Standard_GUID& TDataXtd_Plane::ID() const { return GetID(); }

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================

Handle(TDF_Attribute) TDataXtd_Plane::NewEmpty () const
{  
  return new TDataXtd_Plane(); 
}

//=======================================================================
//function : Restore
//purpose  : 
//=======================================================================

void TDataXtd_Plane::Restore(const Handle(TDF_Attribute)&)  {}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================

void TDataXtd_Plane::Paste (const Handle(TDF_Attribute)&, const Handle(TDF_RelocationTable)&) const { }


//=======================================================================
//function : Dump
//purpose  : 
//=======================================================================

Standard_OStream& TDataXtd_Plane::Dump (Standard_OStream& anOS) const
{  
  anOS << "Plane";
  return anOS;
}
