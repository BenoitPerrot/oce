// Created on: 1993-06-14
// Created by: Remi LEQUETTE
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

#include <PTopoDS_HShape.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <OCAF/PTColStd/PTColStd_TransientPersistentMap.hxx>
#include <PTopoDS_Shape1.hxx>
#include <OCAF/PTColStd/PTColStd_PersistentTransientMap.hxx>
#include <OCAF/MgtBRep/MgtBRep.hxx>

#include <OCAF/MgtTopoDS/MgtTopoDS.hxx>
#include <OCAF/MgtBRep/MgtBRep_TranslateTool.hxx>
#include <OCAF/MgtBRep/MgtBRep_TranslateTool1.hxx>

#include <ModelingData/TopExp/TopExp_Explorer.hxx>
#include <ModelingData/TopAbs/TopAbs.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>

#include <Geometry/Geom/Geom_Surface.hxx>

#include <ModelingData/BRep/BRep_Tool.hxx>

//=======================================================================
//function : Translate
//purpose  : ... a Shape from BRep to PBRep.
//=======================================================================

Handle(PTopoDS_HShape) MgtBRep::Translate
(const TopoDS_Shape&              aShape,
 PTColStd_TransientPersistentMap& aMap,
 const MgtBRep_TriangleMode    aTriMode)
{
  Handle(MgtBRep_TranslateTool) TR = new MgtBRep_TranslateTool(aTriMode);
  return MgtTopoDS::Translate(aShape, TR, aMap);
}

//=======================================================================
//function : Translate
//purpose  : ... a Shape from PBRep to BRep.
//=======================================================================

void MgtBRep::Translate
(const Handle(PTopoDS_HShape)&    aShape,
 PTColStd_PersistentTransientMap& aMap,
 TopoDS_Shape&                    aResult,
 const MgtBRep_TriangleMode    aTriMode)
{
  Handle(MgtBRep_TranslateTool) TR = new MgtBRep_TranslateTool(aTriMode);
  MgtTopoDS::Translate(aShape, TR, aMap, aResult);
}
//=======================================================================
//function : Translate1
//purpose  : ... a Shape from BRep to PBRep.
//=======================================================================

void MgtBRep::Translate1
(const TopoDS_Shape& aShape,
 PTColStd_TransientPersistentMap& aMap,
 PTopoDS_Shape1& aResult,
 const MgtBRep_TriangleMode aTriMode)
{
  Handle(MgtBRep_TranslateTool1) TR = new MgtBRep_TranslateTool1(aTriMode);
  MgtTopoDS::Translate1(aShape, TR, aMap, aResult);
}


//=======================================================================
//function : Translate1
//purpose  : ... a Shape from PBRep to BRep.
//=======================================================================

void MgtBRep::Translate1
(const PTopoDS_Shape1& aShape,
 PTColStd_PersistentTransientMap& aMap,
 TopoDS_Shape& aResult,
 const MgtBRep_TriangleMode aTriMode)
{
  Handle(MgtBRep_TranslateTool1) TR = new MgtBRep_TranslateTool1(aTriMode);
  MgtTopoDS::Translate1(aShape, TR, aMap, aResult);
}
