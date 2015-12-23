// Created on: 1992-04-30
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

#include <Mathematics/Primitives/gp_Circ2d.hxx>
#include <Viewer/Draw/Draw_Color.hxx>
#include <Viewer/Draw/Draw_Display.hxx>
#include <Viewer/Draw/Draw_Circle2D.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Draw_Circle2D)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Draw_Drawable2D),
  STANDARD_TYPE(Draw_Drawable3D),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Draw_Circle2D)
IMPLEMENT_DOWNCAST(Draw_Circle2D,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Draw_Circle2D)

//=======================================================================
//function : Draw_Circle2D
//purpose  : 
//=======================================================================

Draw_Circle2D::Draw_Circle2D(const gp_Circ2d& C,
			     const Standard_Real A1, const Standard_Real A2,
			     const Draw_Color& col) :
       myCirc(C), myA1(A1), myA2(A2), myColor(col)
{
}

//=======================================================================
//function : DrawOn
//purpose  : 
//=======================================================================

void Draw_Circle2D::DrawOn(Draw_Display& d) const
{
  d.SetColor(myColor);
  d.Draw(myCirc,myA1,myA2);
}
