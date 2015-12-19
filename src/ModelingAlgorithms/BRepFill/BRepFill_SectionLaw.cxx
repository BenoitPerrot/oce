// Created on: 1998-01-07
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

#include <GeomFill_HArray1OfSectionLaw.hxx>
#include <GeomFill_SectionLaw.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Edge.hxx>
#include <BRepFill_SectionLaw.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BRepFill_SectionLaw)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BRepFill_SectionLaw)
IMPLEMENT_DOWNCAST(BRepFill_SectionLaw,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BRepFill_SectionLaw)

#include <BRepTools_WireExplorer.hxx>
#include <BRep_Tool.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <BRepLProp.hxx>
#include <TopExp.hxx>
#include <TopoDS.hxx>
#include <TopoDS_Vertex.hxx>

#include <Geometry/Geom/Geom_Curve.hxx>
#include <Geometry/Geom/Geom_Line.hxx>
#include <Geometry/Geom/Geom_TrimmedCurve.hxx>
#include <Geometry/Geom/Geom_BSplineCurve.hxx>
#include <GeomFill_UniformSection.hxx>

#include <Mathematics/Collections/TColgp_HArray1OfPnt.hxx>
#include <Foundation/TColStd/TColStd_HArray1OfReal.hxx>
#include <Foundation/TColStd/TColStd_HArray1OfInteger.hxx>


#include <Precision.hxx>


//=======================================================================
//function : NbLaw
//purpose  : Gives the number of elementary (or Geometric) law
//=======================================================================
Standard_Integer BRepFill_SectionLaw::NbLaw() const
{
  return myLaws->Length();
}


//=======================================================================
//function : Law
//purpose  : 
//=======================================================================
 const Handle(GeomFill_SectionLaw)& 
 BRepFill_SectionLaw::Law(const Standard_Integer Index) const
{
  return myLaws->Value(Index);
}

//=======================================================================
//function : IsUClosed
//purpose  : 
//=======================================================================
 Standard_Boolean BRepFill_SectionLaw::IsUClosed() const
{
  return uclosed;
}

//=======================================================================
//function : IsVClosed
//purpose  : 
//=======================================================================
 Standard_Boolean BRepFill_SectionLaw::IsVClosed() const
{
  return vclosed;
}

//=======================================================================
//function : Init
//purpose  : Prepare the parsing of a wire
//=======================================================================
 void BRepFill_SectionLaw::Init(const TopoDS_Wire& W)
{
  myIterator.Init(W);
}

//=======================================================================
//function : 
//purpose  : Parses the wire omitting the degenerated Edges
//=======================================================================
 TopoDS_Edge BRepFill_SectionLaw::CurrentEdge() 
{
  TopoDS_Edge E;
// Class BRep_Tool without fields and without Constructor :
//  BRep_Tool B;
  Standard_Boolean Suivant = Standard_False;
  if (myIterator.More()) {
    E =  myIterator.Current();
//    Next = (B.Degenerated(E));
    Suivant = (BRep_Tool::Degenerated(E));
  }

  while (Suivant) {
     myIterator.Next();
     E = myIterator.Current();
//    Next = (B.Degenerated(E) && myIterator.More());
     Suivant = (BRep_Tool::Degenerated(E) && myIterator.More());
   }

  if (myIterator.More()) myIterator.Next();
  return E;
}

