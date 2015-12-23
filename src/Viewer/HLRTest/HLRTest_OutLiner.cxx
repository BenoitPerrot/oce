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

#include <ModelingAlgorithms/HLRTopoBRep/HLRTopoBRep_OutLiner.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Viewer/Draw/Draw_Display.hxx>
#include <Viewer/Draw/Draw_Drawable3D.hxx>
#include <Viewer/HLRTest/HLRTest_OutLiner.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(HLRTest_OutLiner)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Draw_Drawable3D),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(HLRTest_OutLiner)
IMPLEMENT_DOWNCAST(HLRTest_OutLiner,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(HLRTest_OutLiner)

//=======================================================================
//function : HLRTest_OutLiner
//purpose  : 
//=======================================================================

HLRTest_OutLiner::HLRTest_OutLiner (const TopoDS_Shape& S)
{
  myOutLiner = new HLRTopoBRep_OutLiner(S);
}

//=======================================================================
//function : DrawOn
//purpose  : 
//=======================================================================

void HLRTest_OutLiner::DrawOn (Draw_Display& /*dis*/) const 
{
}

//=======================================================================
//function : Copy
//purpose  : 
//=======================================================================

Handle(Draw_Drawable3D) HLRTest_OutLiner::Copy () const 
{
  Handle(HLRTest_OutLiner) O = 
    new HLRTest_OutLiner(myOutLiner->OriginalShape());
  return O;
}

//=======================================================================
//function : Dump
//purpose  : 
//=======================================================================

void HLRTest_OutLiner::Dump (Standard_OStream& S) const 
{
  S << "This is an outliner" << endl;
}

//=======================================================================
//function : Whatis
//purpose  : 
//=======================================================================

void HLRTest_OutLiner::Whatis (Draw_Interpretor& I) const 
{
  I << "outliner";
}

