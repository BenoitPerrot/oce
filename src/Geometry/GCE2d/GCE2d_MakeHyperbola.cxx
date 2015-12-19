// Created on: 1992-10-02
// Created by: Remi GILET
// Copyright (c) 1992-1999 Matra Datavision
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

#include <Geometry/Geom2d/Geom2d_Hyperbola.hxx>
#include <Foundation/StdFail/StdFail_NotDone.hxx>
#include <Mathematics/Primitives/gp_Hypr2d.hxx>
#include <Mathematics/Primitives/gp_Ax2d.hxx>
#include <Mathematics/Primitives/gp_Ax22d.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <Geometry/GCE2d/GCE2d_MakeHyperbola.hxx>
#include <Geometry/gce/gce_MakeHypr2d.hxx>
#include <Foundation/StdFail/StdFail_NotDone.hxx>

GCE2d_MakeHyperbola::GCE2d_MakeHyperbola(const gp_Hypr2d& H)
{
  TheError = gce_Done;
  TheHyperbola = new Geom2d_Hyperbola(H);
}

GCE2d_MakeHyperbola::GCE2d_MakeHyperbola(const gp_Ax2d&      MajorAxis  ,
					 const Standard_Real MajorRadius,
					 const Standard_Real MinorRadius,
					 const Standard_Boolean Sense   )
{
  gce_MakeHypr2d H = gce_MakeHypr2d(MajorAxis,MajorRadius,MinorRadius,Sense);
  TheError = H.Status();
  if (TheError == gce_Done) {
    TheHyperbola = new Geom2d_Hyperbola(H.Value());
  }
}

GCE2d_MakeHyperbola::GCE2d_MakeHyperbola(const gp_Ax22d&     Axis       ,
					 const Standard_Real MajorRadius,
					 const Standard_Real MinorRadius)
{
  gce_MakeHypr2d H = gce_MakeHypr2d(Axis,MajorRadius,MinorRadius);
  TheError = H.Status();
  if (TheError == gce_Done) {
    TheHyperbola = new Geom2d_Hyperbola(H.Value());
  }
}

GCE2d_MakeHyperbola::GCE2d_MakeHyperbola(const gp_Pnt2d& S1     ,
					 const gp_Pnt2d& S2     ,
					 const gp_Pnt2d& Center ) {
  gce_MakeHypr2d H = gce_MakeHypr2d(S1,S2,Center);
  TheError = H.Status();
  if (TheError == gce_Done) {
    TheHyperbola = new Geom2d_Hyperbola(H.Value());
  }
}

const Handle(Geom2d_Hyperbola)& GCE2d_MakeHyperbola::Value() const
{ 
  StdFail_NotDone_Raise_if(TheError != gce_Done,"");
  return TheHyperbola;
}

const Handle(Geom2d_Hyperbola)& GCE2d_MakeHyperbola::Operator() const 
{
  return Value();
}

GCE2d_MakeHyperbola::operator Handle(Geom2d_Hyperbola) () const
{
  return Value();
}

