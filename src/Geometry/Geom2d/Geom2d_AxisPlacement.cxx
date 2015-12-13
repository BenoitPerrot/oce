// Created on: 1993-03-24
// Created by: JCV
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

#include <gp_Ax2d.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Dir2d.hxx>
#include <gp_Trsf2d.hxx>
#include <Geom2d_Geometry.hxx>
#include <Geom2d_AxisPlacement.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Geom2d_AxisPlacement)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Geom2d_Geometry),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Geom2d_AxisPlacement)
IMPLEMENT_DOWNCAST(Geom2d_AxisPlacement,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Geom2d_AxisPlacement)



typedef Geom2d_AxisPlacement          AxisPlacement;
typedef Handle(Geom2d_AxisPlacement)  Handle(AxisPlacement);
typedef gp_Dir2d  Dir2d;
typedef gp_Pnt2d  Pnt2d;
typedef gp_Trsf2d Trsf2d;
typedef gp_Vec2d  Vec2d;




Handle(Geom2d_Geometry) Geom2d_AxisPlacement::Copy() const {

  Handle(AxisPlacement) A;
  A = new AxisPlacement (axis);
  return A;
}






Geom2d_AxisPlacement::Geom2d_AxisPlacement (const gp_Ax2d& A) { axis = A; }


Geom2d_AxisPlacement::Geom2d_AxisPlacement (const Pnt2d& P, const Dir2d& V) {

   axis = gp_Ax2d (P, V);
}

gp_Ax2d Geom2d_AxisPlacement::Ax2d () const { return axis; }

Dir2d Geom2d_AxisPlacement::Direction () const { return axis.Direction(); }

Pnt2d Geom2d_AxisPlacement::Location () const { return axis.Location(); }

void Geom2d_AxisPlacement::Reverse()        { axis.Reverse(); }

Handle(AxisPlacement) Geom2d_AxisPlacement::Reversed() const {

  gp_Ax2d A = axis;
  A.Reverse();
  Handle(AxisPlacement) Temp = new AxisPlacement (A);
  return Temp;
}

void Geom2d_AxisPlacement::Transform (const Trsf2d& T) { axis.Transform (T); }


void Geom2d_AxisPlacement::SetAxis (const gp_Ax2d& A)  { axis = A; }

void Geom2d_AxisPlacement::SetLocation (const Pnt2d& P) {axis.SetLocation (P);}

void Geom2d_AxisPlacement::SetDirection (const Dir2d& V) {

  axis.SetDirection(V);
}

Standard_Real Geom2d_AxisPlacement::Angle (const Handle(AxisPlacement)& Other) const {

  return axis.Angle (Other->Ax2d());
}
