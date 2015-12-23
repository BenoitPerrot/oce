// Created on: 1995-04-05
// Created by: Christophe MARION
// Copyright (c) 1995-1999 Matra Datavision
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

#include <Foundation/Standard/Standard_Stream.hxx>
#include <ModelingAlgorithms/HLRAlgo/HLRAlgo_Projector.hxx>
#include <Viewer/Draw/Draw_Display.hxx>
#include <Viewer/Draw/Draw_Drawable3D.hxx>
#include <HLRTest_Projector.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(HLRTest_Projector)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Draw_Drawable3D),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(HLRTest_Projector)
IMPLEMENT_DOWNCAST(HLRTest_Projector,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(HLRTest_Projector)

//=======================================================================
//function : HLRTest_Projector
//purpose  : 
//=======================================================================

HLRTest_Projector::HLRTest_Projector (const HLRAlgo_Projector& P) :
myProjector(P)
{
}

//=======================================================================
//function : DrawOn
//purpose  : 
//=======================================================================

void HLRTest_Projector::DrawOn (Draw_Display&) const 
{
}

//=======================================================================
//function : Copy
//purpose  : 
//=======================================================================

Handle(Draw_Drawable3D) HLRTest_Projector::Copy () const 
{
  return new HLRTest_Projector(myProjector);
}

//=======================================================================
//function : Dump
//purpose  : 
//=======================================================================

void HLRTest_Projector::Dump (Standard_OStream& S) const 
{
  S << "Projector : \n";
  if (myProjector.Perspective())
    S << "perspective, focal = " << myProjector.Focus() << "\n";

  for (Standard_Integer i = 1; i <= 3; i++) {

    for (Standard_Integer j = 1; j <= 4; j++) {
      S << setw(15) << myProjector.Transformation().Value(i,j);
    }
    S << "\n";
  }
  S << endl;
}

//=======================================================================
//function : Whatis
//purpose  : 
//=======================================================================

void HLRTest_Projector::Whatis (Draw_Interpretor& I) const 
{
  I << "projector";
}

