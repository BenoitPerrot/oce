// Created on: 1998-07-27
// Created by: Philippe MANGIN
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

#include <TopoDS_Wire.hxx>
#include <GeomFill_LocationLaw.hxx>
#include <BRepFill_Edge3DLaw.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BRepFill_Edge3DLaw)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(BRepFill_LocationLaw),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BRepFill_Edge3DLaw)
IMPLEMENT_DOWNCAST(BRepFill_Edge3DLaw,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BRepFill_Edge3DLaw)

#include <BRepTools_WireExplorer.hxx>
#include <BRep_Tool.hxx>
#include <TopoDS.hxx>
#include <TopoDS_Edge.hxx>
#include <TopExp.hxx>
#include <TopTools_HArray1OfShape.hxx>

#include <GeomFill_LocationLaw.hxx>
#include <GeomFill_HArray1OfLocationLaw.hxx>
#include <Geometry/Geom/Geom_Curve.hxx>
#include <Geometry/Geom/Geom_TrimmedCurve.hxx>
#include <Geometry/GeomAdaptor/GeomAdaptor_HCurve.hxx>

BRepFill_Edge3DLaw::BRepFill_Edge3DLaw(const TopoDS_Wire& Path,
				     const Handle(GeomFill_LocationLaw)& Law)
{
  Init(Path);

  Standard_Integer ipath;
  TopAbs_Orientation Or;
  BRepTools_WireExplorer wexp;
// Class BRep_Tool without fields and without Constructor :
//  BRep_Tool B;
  TopoDS_Edge E;
  Handle(Geom_Curve) C;
  Handle(GeomAdaptor_HCurve) AC;
  Standard_Real First, Last;

  for (ipath=0, wexp.Init(myPath); 
       wexp.More(); wexp.Next()) {
    E = wexp.Current();
//    if (!B.Degenerated(E)) {
    if (!BRep_Tool::Degenerated(E)) {
      ipath++;
      myEdges->SetValue(ipath, E);
      C = BRep_Tool::Curve(E,First,Last);
      Or = E.Orientation();
      if (Or == TopAbs_REVERSED) {
	Handle(Geom_TrimmedCurve) CBis = 
	  new (Geom_TrimmedCurve) (C, First, Last);
	CBis->Reverse(); // Pour eviter de deteriorer la topologie
	C = CBis;
        First =  C->FirstParameter();
	Last  =  C->LastParameter();
      }

      AC = new  (GeomAdaptor_HCurve) (C,First, Last);
      myLaws->SetValue(ipath, Law->Copy());
      myLaws->ChangeValue(ipath)->SetCurve(AC);
    }  
  }
}




