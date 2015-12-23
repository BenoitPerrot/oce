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

#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ShapeUpgrade_FaceDivideArea.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(ShapeUpgrade_FaceDivideArea)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(ShapeUpgrade_FaceDivide),
  STANDARD_TYPE(ShapeUpgrade_Tool),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(ShapeUpgrade_FaceDivideArea)
IMPLEMENT_DOWNCAST(ShapeUpgrade_FaceDivideArea,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(ShapeUpgrade_FaceDivideArea)
#include <Geometry/GProp/GProp_GProps.hxx>
#include <ModelingAlgorithms/BRepGProp/BRepGProp.hxx>
#include <Precision.hxx> 
#include <ShapeUpgrade_SplitSurfaceArea.hxx> 
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopExp/TopExp_Explorer.hxx>  
#include <ModelingData/TopoDS/TopoDS.hxx>
#include <ModelingAlgorithms/ShapeExtend/ShapeExtend.hxx> 
#include <ModelingAlgorithms/ShapeBuild/ShapeBuild_ReShape.hxx>
#include <ModelingData/BRep/BRep_Builder.hxx>

//=======================================================================
//function : ShapeUpgrade_FaceDivideArea
//purpose  : 
//=======================================================================

ShapeUpgrade_FaceDivideArea::ShapeUpgrade_FaceDivideArea()
{
  myMaxArea = Precision::Infinite();
  SetPrecision(1.e-5);
  SetSplitSurfaceTool (new ShapeUpgrade_SplitSurfaceArea);
}

//=======================================================================
//function : ShapeUpgrade_FaceDivideArea
//purpose  : 
//=======================================================================

ShapeUpgrade_FaceDivideArea::ShapeUpgrade_FaceDivideArea(const TopoDS_Face& F)
{
  myMaxArea = Precision::Infinite();
  SetPrecision(1.e-5);
  SetSplitSurfaceTool (new ShapeUpgrade_SplitSurfaceArea);
  Init(F);
}

//=======================================================================
//function : Perform
//purpose  : 
//=======================================================================

 Standard_Boolean ShapeUpgrade_FaceDivideArea::Perform() 
{
  myStatus = ShapeExtend::EncodeStatus ( ShapeExtend_OK );
  GProp_GProps aGprop;
  
  BRepGProp::SurfaceProperties(myFace,aGprop,Precision());
  Standard_Real anArea = aGprop.Mass();
  if((anArea - myMaxArea) < Precision::Confusion())
    return Standard_False;
 
  Standard_Integer anbParts = RealToInt(ceil(anArea/myMaxArea));
  Handle(ShapeUpgrade_SplitSurfaceArea) aSurfTool= Handle(ShapeUpgrade_SplitSurfaceArea)::
    DownCast(GetSplitSurfaceTool ());
  if(aSurfTool.IsNull())
    return Standard_False;
  aSurfTool->NbParts() = anbParts;
  if(!ShapeUpgrade_FaceDivide::Perform())
    return Standard_False;
  
  TopoDS_Shape aResult = Result();
  if(aResult.ShapeType() == TopAbs_FACE)
    return Standard_False;
  Standard_Integer aStatus = myStatus;
  TopExp_Explorer aExpF(aResult,TopAbs_FACE);
  TopoDS_Shape aCopyRes = aResult.EmptyCopied();
  
  Standard_Boolean isModified = Standard_False;
  for( ; aExpF.More() ; aExpF.Next()) {
    TopoDS_Shape aSh = Context()->Apply(aExpF.Current());
    TopoDS_Face aFace = TopoDS::Face(aSh);
    Init(aFace);
    BRep_Builder aB;
    if(Perform()) {
      isModified = Standard_True;
      TopoDS_Shape aRes = Result();
      TopExp_Explorer aExpR(aRes,TopAbs_FACE);
      for( ; aExpR.More(); aExpR.Next())
        aB.Add(aCopyRes,aExpR.Current());
    }
    else
      aB.Add(aCopyRes,aFace);
  }
  if(isModified)
  {
    aCopyRes.Closed (BRep_Tool::IsClosed (aCopyRes));
    Context()->Replace(aResult,aCopyRes);
  }
  myStatus |= aStatus;  
  myResult = Context()->Apply ( aResult );
  return Status ( ShapeExtend_DONE ); 
}

