// Created on: 1998-05-18
// Created by: Philippe NOUAILLE
// Copyright (c) 1998-1999 Matra Datavision
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

#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <Foundation/Standard/Standard_ConstructionError.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <ChFiDS_Spine.hxx>
#include <ModelingData/TopoDS/TopoDS_Vertex.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <Geometry/Geom/Geom_Surface.hxx>
#include <ChFiDS_SurfData.hxx>
#include <ChFiDS_HElSpine.hxx>
#include <ModelingData/BRepAdaptor/BRepAdaptor_HSurface.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_TopolTool.hxx>
#include <ModelingData/BRepAdaptor/BRepAdaptor_HCurve2d.hxx>
#include <BRepBlend_Line.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_HSurface.hxx>
#include <Blend_Function.hxx>
#include <Blend_FuncInv.hxx>
#include <Geometry/Adaptor2d/Adaptor2d_HCurve2d.hxx>
#include <Blend_SurfRstFunction.hxx>
#include <Blend_SurfPointFuncInv.hxx>
#include <Blend_SurfCurvFuncInv.hxx>
#include <Blend_RstRstFunction.hxx>
#include <Blend_CurvPointFuncInv.hxx>
#include <ChFiDS_Stripe.hxx>
#include <BRepTopAdaptor_TopolTool.hxx>
#include <ChFiDS_SequenceOfSurfData.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <ChFiDS_ListOfStripe.hxx>
#include <ChFiDS_CommonPoint.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <AppBlend_Approx.hxx>
#include <Geometry/Geom2d/Geom2d_Curve.hxx>
#include <ChFi3d_Builder.hxx>

//=======================================================================
//function : SimulSurf
//purpose  : 
//=======================================================================

void  ChFi3d_Builder::SimulSurf(Handle(ChFiDS_SurfData)&            ,
				const Handle(ChFiDS_HElSpine)&      , 
				const Handle(ChFiDS_Spine)&         , 
				const Standard_Integer              ,
				const Handle(BRepAdaptor_HSurface)& ,
				const Handle(Adaptor3d_TopolTool)&    ,
				const Handle(BRepAdaptor_HCurve2d)& ,
				const Handle(BRepAdaptor_HSurface)& ,
				const Handle(BRepAdaptor_HCurve2d)& ,
				Standard_Boolean&                   ,
				const Handle(BRepAdaptor_HSurface)& ,
				const Handle(Adaptor3d_TopolTool)&    ,
				const TopAbs_Orientation            ,
				const Standard_Real                 ,
				const Standard_Real                 ,
				Standard_Real&                      ,
				Standard_Real&                      ,
				const Standard_Boolean              ,
				const Standard_Boolean              ,
				const Standard_Boolean              ,
				const Standard_Boolean              ,
				const Standard_Boolean              ,
				const Standard_Boolean              ,
				const math_Vector&                  )
{
  Standard_Failure::Raise("SimulSurf Not Implemented");
}

//=======================================================================
//function : SimulSurf
//purpose  : 
//=======================================================================

void  ChFi3d_Builder::SimulSurf(Handle(ChFiDS_SurfData)&            ,
				const Handle(ChFiDS_HElSpine)&      , 
				const Handle(ChFiDS_Spine)&         , 
				const Standard_Integer              ,
				const Handle(BRepAdaptor_HSurface)& ,
				const Handle(Adaptor3d_TopolTool)&    ,
				const TopAbs_Orientation            ,
				const Handle(BRepAdaptor_HSurface)& ,
				const Handle(Adaptor3d_TopolTool)&    ,
				const Handle(BRepAdaptor_HCurve2d)& ,
				const Handle(BRepAdaptor_HSurface)& ,
				const Handle(BRepAdaptor_HCurve2d)& ,
				Standard_Boolean&                   ,
				const Standard_Real                 ,
				const Standard_Real                 ,
				Standard_Real&                      ,
				Standard_Real&                      ,
				const Standard_Boolean              ,
				const Standard_Boolean              ,
				const Standard_Boolean              ,
				const Standard_Boolean              ,
				const Standard_Boolean              ,
				const Standard_Boolean              ,
				const math_Vector&                  )
{
  Standard_Failure::Raise("SimulSurf Not Implemented");
}


//=======================================================================
//function : SimulSurf
//purpose  : 
//=======================================================================

void  ChFi3d_Builder::SimulSurf(Handle(ChFiDS_SurfData)&            ,
				const Handle(ChFiDS_HElSpine)&      ,
				const Handle(ChFiDS_Spine)&         ,
				const Standard_Integer              ,
				const Handle(BRepAdaptor_HSurface)& ,
				const Handle(Adaptor3d_TopolTool)&    ,
				const Handle(BRepAdaptor_HCurve2d)& ,
				const Handle(BRepAdaptor_HSurface)& ,
				const Handle(BRepAdaptor_HCurve2d)& ,
				Standard_Boolean&                   ,
				const TopAbs_Orientation            ,
				const Handle(BRepAdaptor_HSurface)& ,
				const Handle(Adaptor3d_TopolTool)&    ,
				const Handle(BRepAdaptor_HCurve2d)& ,
				const Handle(BRepAdaptor_HSurface)& ,
				const Handle(BRepAdaptor_HCurve2d)& ,
				Standard_Boolean&                   ,
				const TopAbs_Orientation            ,
				const Standard_Real                 ,
				const Standard_Real                 ,
				Standard_Real&                      ,
				Standard_Real&                      ,
				const Standard_Boolean              ,
				const Standard_Boolean              ,
				const Standard_Boolean              ,
				const Standard_Boolean              ,
				const Standard_Boolean              ,
				const Standard_Boolean              ,
				const Standard_Boolean              ,
				const math_Vector&                  )
{
  Standard_Failure::Raise("SimulSurf Not Implemented");
}



//=======================================================================
//function : PerformSurf
//purpose  : 
//=======================================================================

void  ChFi3d_Builder::PerformSurf(ChFiDS_SequenceOfSurfData&          ,
				  const Handle(ChFiDS_HElSpine)&      , 
				  const Handle(ChFiDS_Spine)&         , 
				  const Standard_Integer              ,
				  const Handle(BRepAdaptor_HSurface)& ,
				  const Handle(Adaptor3d_TopolTool)&    ,
				  const Handle(BRepAdaptor_HCurve2d)& ,
				  const Handle(BRepAdaptor_HSurface)& ,
				  const Handle(BRepAdaptor_HCurve2d)& ,
				  Standard_Boolean&                   ,
				  const Handle(BRepAdaptor_HSurface)& ,
				  const Handle(Adaptor3d_TopolTool)&    ,
				  const TopAbs_Orientation            ,
				  const Standard_Real                 ,
				  const Standard_Real                 ,
				  const Standard_Real                 ,
				  Standard_Real&                      ,
				  Standard_Real&                      ,
				  const Standard_Boolean              ,
				  const Standard_Boolean              ,
				  const Standard_Boolean              ,
				  const Standard_Boolean              ,
				  const Standard_Boolean              ,
				  const Standard_Boolean              ,
				  const math_Vector&                  )
{
  Standard_Failure::Raise("PerformSurf Not Implemented");
}

//=======================================================================
//function : PerformSurf
//purpose  : 
//=======================================================================

void  ChFi3d_Builder::PerformSurf(ChFiDS_SequenceOfSurfData&          ,
				  const Handle(ChFiDS_HElSpine)&      , 
				  const Handle(ChFiDS_Spine)&         , 
				  const Standard_Integer              ,
				  const Handle(BRepAdaptor_HSurface)& ,
				  const Handle(Adaptor3d_TopolTool)&    ,
				  const TopAbs_Orientation            ,
				  const Handle(BRepAdaptor_HSurface)& ,
				  const Handle(Adaptor3d_TopolTool)&    ,
				  const Handle(BRepAdaptor_HCurve2d)& ,
				  const Handle(BRepAdaptor_HSurface)& ,
				  const Handle(BRepAdaptor_HCurve2d)& ,
				  Standard_Boolean&                   ,
				  const Standard_Real                 ,
				  const Standard_Real                 ,
				  const Standard_Real                 ,
				  Standard_Real&                      ,
				  Standard_Real&                      ,
				  const Standard_Boolean              ,
				  const Standard_Boolean              ,
				  const Standard_Boolean              ,
				  const Standard_Boolean              ,
				  const Standard_Boolean              ,
				  const Standard_Boolean              ,
				  const math_Vector&                  )
{
  Standard_Failure::Raise("PerformSurf Not Implemented");

}





//=======================================================================
//function : PerformSurf
//purpose  : 
//=======================================================================

void  ChFi3d_Builder::PerformSurf(ChFiDS_SequenceOfSurfData&          ,
				  const Handle(ChFiDS_HElSpine)&      ,
				  const Handle(ChFiDS_Spine)&         ,
				  const Standard_Integer              ,
				  const Handle(BRepAdaptor_HSurface)& ,
				  const Handle(Adaptor3d_TopolTool)&    ,
				  const Handle(BRepAdaptor_HCurve2d)& ,
				  const Handle(BRepAdaptor_HSurface)& ,
				  const Handle(BRepAdaptor_HCurve2d)& ,
				  Standard_Boolean&                   ,
				  const TopAbs_Orientation            ,
				  const Handle(BRepAdaptor_HSurface)& ,
				  const Handle(Adaptor3d_TopolTool)&    ,
				  const Handle(BRepAdaptor_HCurve2d)& ,
				  const Handle(BRepAdaptor_HSurface)& ,
				  const Handle(BRepAdaptor_HCurve2d)& ,
				  Standard_Boolean&                   ,
				  const TopAbs_Orientation            ,
				  const Standard_Real                 ,
				  const Standard_Real                 ,
				  const Standard_Real                 ,
				  Standard_Real&                      ,
				  Standard_Real&                      ,
				  const Standard_Boolean              ,
				  const Standard_Boolean              ,
				  const Standard_Boolean              ,
				  const Standard_Boolean              ,
				  const Standard_Boolean              ,
				  const Standard_Boolean              ,
				  const Standard_Boolean              ,
				  const math_Vector&                  )
{
  Standard_Failure::Raise("PerformSurf Not Implemented");

}
