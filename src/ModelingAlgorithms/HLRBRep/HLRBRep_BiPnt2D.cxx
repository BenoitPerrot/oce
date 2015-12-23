// Created on: 1992-08-25
// Created by: Christophe MARION
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

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <HLRBRep_BiPnt2D.hxx>

//=======================================================================
//function : HLRBRep_BiPnt2D
//purpose  : 
//=======================================================================

HLRBRep_BiPnt2D::HLRBRep_BiPnt2D ()
{
}

//=======================================================================
//function : HLRBRep_BiPnt2D
//purpose  : 
//=======================================================================

HLRBRep_BiPnt2D::HLRBRep_BiPnt2D (const Standard_Real x1,
				  const Standard_Real y1,
				  const Standard_Real x2,
				  const Standard_Real y2,
				  const TopoDS_Shape& S,
				  const Standard_Boolean reg1,
				  const Standard_Boolean regn,
				  const Standard_Boolean outl,
				  const Standard_Boolean intl) :
				  myP1(x1,y1),
				  myP2(x2,y2),
				  myShape(S),
				  myFlags(0)
{
  Rg1Line(reg1);
  RgNLine(regn);
  OutLine(outl);
  IntLine(intl);
}
