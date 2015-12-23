// Created on: 1992-04-23
// Created by: Remi LEQUETTE
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

#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <Viewer/Draw/Draw_Color.hxx>
#include <Viewer/Draw/Draw_Display.hxx>
#include <Viewer/Draw/Draw_Marker2D.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Draw_Marker2D)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Draw_Drawable2D),
  STANDARD_TYPE(Draw_Drawable3D),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Draw_Marker2D)
IMPLEMENT_DOWNCAST(Draw_Marker2D,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Draw_Marker2D)

//=======================================================================
//function : Draw_Marker2D
//purpose  : 
//=======================================================================

Draw_Marker2D::Draw_Marker2D(const gp_Pnt2d& P, const Draw_MarkerShape T,
			     const Draw_Color& C, const Standard_Integer S) :
       myPos(P),  myCol(C), myTyp(T),mySiz(S)
{
}

//=======================================================================
//function : Draw_Marker2D
//purpose  : 
//=======================================================================

Draw_Marker2D::Draw_Marker2D(const gp_Pnt2d& P, const Draw_MarkerShape T,
			     const Draw_Color& C, const Standard_Real /*RSize*/) :
       myPos(P), myCol(C), myTyp(T)
{
}

//=======================================================================
//function : DrawOn
//purpose  : 
//=======================================================================

void Draw_Marker2D::DrawOn(Draw_Display& D) const
{
  D.SetColor(myCol);
  D.DrawMarker(myPos,myTyp,mySiz);
}

//=======================================================================
//function : ChangePos
//purpose  : 
//=======================================================================

gp_Pnt2d& Draw_Marker2D::ChangePos()
{
  return myPos;
}

//=======================================================================
//function : PickReject
//purpose  : 
//=======================================================================

Standard_Boolean Draw_Marker2D::PickReject(const Standard_Real,
                                           const Standard_Real,
                                           const Standard_Real) const
{
  return Standard_False;
}
