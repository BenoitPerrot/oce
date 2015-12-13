// Created on: 1999-04-26
// Created by: Andrey BETENEV
// Copyright (c) 1999-1999 Matra Datavision
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

//    gka  01.06.99 S4205: changing order of splitting surface/curves for converting to bezier

#include <ShapeUpgrade_SplitSurface.hxx>
#include <ShapeUpgrade_WireDivide.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Shape.hxx>
#include <ShapeUpgrade_FaceDivide.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(ShapeUpgrade_FaceDivide)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(ShapeUpgrade_Tool),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(ShapeUpgrade_FaceDivide)
IMPLEMENT_DOWNCAST(ShapeUpgrade_FaceDivide,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(ShapeUpgrade_FaceDivide)
#include <Precision.hxx>
#include <ShapeExtend.hxx>
#include <ShapeBuild_Edge.hxx>
#include <BRep_Builder.hxx>
#include <BRep_Tool.hxx>
#include <TopoDS.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Iterator.hxx>
#include <ShapeFix_ComposeShell.hxx>
#include <BRepTools.hxx>
#include <ShapeExtend_CompositeSurface.hxx>
#include <TopExp_Explorer.hxx>
#include <Mathematics/BoundingVolumes/Bnd_Box2d.hxx>
#include <ShapeAnalysis.hxx>
#include <ShapeAnalysis_Edge.hxx>
#include <ShapeBuild_ReShape.hxx>

//=======================================================================
//function : ShapeUpgrade_FaceDivide
//purpose  : 
//=======================================================================

ShapeUpgrade_FaceDivide::ShapeUpgrade_FaceDivide():
       ShapeUpgrade_Tool(), myStatus(0)
{
  mySegmentMode = Standard_True;
  mySplitSurfaceTool = new ShapeUpgrade_SplitSurface;
  myWireDivideTool = new ShapeUpgrade_WireDivide;
}

//=======================================================================
//function : ShapeUpgrade_FaceDivide
//purpose  : 
//=======================================================================

ShapeUpgrade_FaceDivide::ShapeUpgrade_FaceDivide (const TopoDS_Face &F):
       ShapeUpgrade_Tool(), myStatus(0)
{
  mySegmentMode = Standard_True;
  mySplitSurfaceTool = new ShapeUpgrade_SplitSurface;
  myWireDivideTool = new ShapeUpgrade_WireDivide;
  Init ( F );
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void ShapeUpgrade_FaceDivide::Init (const TopoDS_Face &F)
{
  myResult = myFace = F;
}
  

//=======================================================================
//function : SetSurfaceSegmentMode
//purpose  : 
//=======================================================================

void ShapeUpgrade_FaceDivide::SetSurfaceSegmentMode(const Standard_Boolean Segment)
{
  mySegmentMode = Segment;
}


//=======================================================================
//function : Perform
//purpose  : 
//=======================================================================

Standard_Boolean ShapeUpgrade_FaceDivide::Perform ()
{
  myStatus = ShapeExtend::EncodeStatus ( ShapeExtend_OK );
  if ( myFace.IsNull() ) return Standard_False;
  myResult = myFace;
  SplitSurface();
  SplitCurves();
  return Status ( ShapeExtend_DONE );
 } 

//=======================================================================
//function : SplitSurface
//purpose  : 
//=======================================================================

Standard_Boolean ShapeUpgrade_FaceDivide::SplitSurface ()  
{  
  Handle(ShapeUpgrade_SplitSurface) SplitSurf = GetSplitSurfaceTool();
  if ( SplitSurf.IsNull() ) return Standard_False;

  // myResult should be face; else return with FAIL
  if ( myResult.IsNull() || myResult.ShapeType() != TopAbs_FACE ) {
    myStatus |= ShapeExtend::EncodeStatus ( ShapeExtend_FAIL3 );
    return Standard_False;
  }
  TopoDS_Face face = TopoDS::Face ( myResult );
  
  TopLoc_Location L;
  Handle(Geom_Surface) surf;
  surf = BRep_Tool::Surface ( face, L );
  
  Standard_Real Uf,Ul,Vf,Vl;
//  BRepTools::UVBounds(myFace,Uf,Ul,Vf,Vl);
  ShapeAnalysis::GetFaceUVBounds ( face, Uf, Ul, Vf, Vl );
  if(Precision::IsInfinite(Uf) || Precision::IsInfinite(Ul) ||
     Precision::IsInfinite(Vf) || Precision::IsInfinite(Vl))
    return Standard_False;
       
  SplitSurf->Init ( surf, Uf, Ul, Vf, Vl );
  SplitSurf->Perform(mySegmentMode);

  // If surface was neither splitted nor modified, do nothing
  if ( ! SplitSurf->Status ( ShapeExtend_DONE ) ) return Standard_False;
    
  // if surface was modified, force copying all vertices (and edges as consequence)
  // to protect original shape from increasing tolerance after SameParameter
  if ( SplitSurf->Status ( ShapeExtend_DONE3 ) )
    for (TopExp_Explorer exp(face,TopAbs_VERTEX); exp.More(); exp.Next() ) {
      if ( Context()->IsRecorded ( exp.Current() ) ) continue;
//smh#8
      TopoDS_Shape emptyCopied = exp.Current().EmptyCopied();
      TopoDS_Vertex V = TopoDS::Vertex ( emptyCopied );
      Context()->Replace ( exp.Current(), V );
    }
    
  Handle(ShapeExtend_CompositeSurface) Grid = SplitSurf->ResSurfaces();
  
  ShapeFix_ComposeShell CompShell;
  CompShell.Init( Grid, L, face, Precision() );
  CompShell.SetContext(Context());
  CompShell.SetMaxTolerance(MaxTolerance());
  Handle(ShapeUpgrade_WireDivide) SplitWire = GetWireDivideTool();
  if ( ! SplitWire.IsNull() )
       CompShell.SetTransferParamTool(GetWireDivideTool()->GetTransferParamTool());
  CompShell.Perform();
  if ( CompShell.Status ( ShapeExtend_FAIL ) || 
       ! CompShell.Status ( ShapeExtend_DONE ) ) 
    myStatus |= ShapeExtend::EncodeStatus ( ShapeExtend_FAIL2 );

  myResult = CompShell.Result();
  myStatus |= ShapeExtend::EncodeStatus ( ShapeExtend_DONE2 );

  return Standard_True;
}
 
//=======================================================================
//function : SplitCurves
//purpose  : 
//=======================================================================

Standard_Boolean ShapeUpgrade_FaceDivide::SplitCurves ()
{
  Handle(ShapeUpgrade_WireDivide) SplitWire = GetWireDivideTool();
  if ( SplitWire.IsNull() ) return Standard_False;
  
  SplitWire->SetMaxTolerance(MaxTolerance());
  for ( TopExp_Explorer explf(myResult,TopAbs_FACE); explf.More(); explf.Next()) {
    TopoDS_Shape S = Context()->Apply ( explf.Current(), TopAbs_SHAPE);
    
    // S should be face; else return with FAIL
    if ( S.IsNull() || S.ShapeType() != TopAbs_FACE ) {
      myStatus |= ShapeExtend::EncodeStatus ( ShapeExtend_FAIL3 );
      return Standard_False;
    }
    TopoDS_Face F = TopoDS::Face ( S );
    
    SplitWire->SetFace ( F );
    for ( TopoDS_Iterator wi(F,Standard_False); wi.More(); wi.Next() ) {
      //TopoDS_Wire wire = TopoDS::Wire ( wi.Value() );
      // modifications already defined in context are to be applied inside SplitWire
      if(wi.Value().ShapeType() !=TopAbs_WIRE)
	continue;
      TopoDS_Wire wire = TopoDS::Wire(wi.Value());
      SplitWire->Load ( wire );
      SplitWire->SetContext(Context());
      SplitWire->Perform ();
      if ( SplitWire->Status ( ShapeExtend_FAIL ) )
	myStatus |= ShapeExtend::EncodeStatus ( ShapeExtend_FAIL1 );
      if ( SplitWire->Status ( ShapeExtend_DONE ) ) {
	myStatus |= ShapeExtend::EncodeStatus ( ShapeExtend_DONE1 );
	Context()->Replace ( wire, SplitWire->Wire() );
      }
    }
  }
  myResult = Context()->Apply ( myResult );
  return Status ( ShapeExtend_DONE );
}

//=======================================================================
//function : Shell
//purpose  : 
//=======================================================================

TopoDS_Shape ShapeUpgrade_FaceDivide::Result () const
{
  return myResult;
}

//=======================================================================
//function : Status
//purpose  : 
//=======================================================================

Standard_Boolean ShapeUpgrade_FaceDivide::Status (const ShapeExtend_Status status) const
{
  return ShapeExtend::DecodeStatus ( myStatus, status );
}
    
//=======================================================================
//function : SetSplitSurfaceTool
//purpose  : 
//=======================================================================

void ShapeUpgrade_FaceDivide::SetSplitSurfaceTool(const Handle(ShapeUpgrade_SplitSurface)& splitSurfaceTool)
{
  mySplitSurfaceTool = splitSurfaceTool;
}

//=======================================================================
//function : SetWireDivideTool
//purpose  : 
//=======================================================================

void ShapeUpgrade_FaceDivide::SetWireDivideTool(const Handle(ShapeUpgrade_WireDivide)& wireDivideTool)
{
  myWireDivideTool = wireDivideTool;
}

//=======================================================================
//function : GetSplitSurfaceTool
//purpose  : 
//=======================================================================

Handle(ShapeUpgrade_SplitSurface) ShapeUpgrade_FaceDivide::GetSplitSurfaceTool () const
{
  return mySplitSurfaceTool;
}
	
//=======================================================================
//function : GetWireDivideTool
//purpose  : 
//=======================================================================

Handle(ShapeUpgrade_WireDivide) ShapeUpgrade_FaceDivide::GetWireDivideTool () const
{
  return myWireDivideTool;
}
