// Created on: 1991-04-25
// Created by: Arnaud BOUZY
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

#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Viewer/Draw/Draw_Color.hxx>
#include <Viewer/Draw/Draw_Display.hxx>
#include <Viewer/Draw/Draw_Segment3D.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Draw_Segment3D)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Draw_Drawable3D),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Draw_Segment3D)
IMPLEMENT_DOWNCAST(Draw_Segment3D,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Draw_Segment3D)

//=======================================================================
//function : Draw_Segment3D
//purpose  : 
//=======================================================================

Draw_Segment3D::Draw_Segment3D(const gp_Pnt& p1, 
			       const gp_Pnt& p2, 
			       const Draw_Color& col) :
       myFirst(p1),
       myLast(p2),
       myColor(col)
{
}


//=======================================================================
//function : DrawOn
//purpose  : 
//=======================================================================

void  Draw_Segment3D::DrawOn(Draw_Display& dis)const 
{
  dis.SetColor(myColor);
  dis.Draw(myFirst,myLast);
}


//=======================================================================
//function : First
//purpose  : 
//=======================================================================

const gp_Pnt&  Draw_Segment3D::First() const
{
  return myFirst;
}


//=======================================================================
//function : First
//purpose  : 
//=======================================================================

void  Draw_Segment3D::First(const gp_Pnt& P)
{
  myFirst = P;
}


//=======================================================================
//function : Last
//purpose  : 
//=======================================================================

const gp_Pnt&  Draw_Segment3D::Last() const
{
  return myLast;
}


//=======================================================================
//function : Last
//purpose  : 
//=======================================================================

void  Draw_Segment3D::Last(const gp_Pnt& P)
{
  myLast = P;
}


