// Created on: 1995-02-01
// Created by: Marie Jose MARTZ
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

//#53 rln 24.12.98 CCI60005
//#57 rln 25.12.98 avoid code duplication

#include <DataExchange/Geom2dToIGES/Geom2dToIGES_Geom2dEntity.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Geometry/Geom2d/Geom2d_Curve.hxx>
#include <DataExchange/Geom2dToIGES/Geom2dToIGES_Geom2dCurve.hxx>

#include <Geometry/Geom2d/Geom2d_Curve.hxx>
#include <Geometry/Geom2d/Geom2d_BoundedCurve.hxx>
#include <Geometry/Geom2d/Geom2d_BSplineCurve.hxx>
#include <Geometry/Geom2d/Geom2d_TrimmedCurve.hxx>
#include <Geometry/Geom2d/Geom2d_OffsetCurve.hxx>
#include <Geometry/Geom2d/Geom2d_Conic.hxx>
#include <Geometry/Geom2d/Geom2d_Circle.hxx>
#include <Geometry/Geom2d/Geom2d_Ellipse.hxx>
#include <Geometry/Geom2d/Geom2d_Hyperbola.hxx>
#include <Geometry/Geom2d/Geom2d_Line.hxx>
#include <Geometry/Geom2d/Geom2d_Parabola.hxx>

//#include <Geometry/Geom2dConvert/Geom2dConvert.hxx>

#include <Mathematics/Primitives/gp.hxx>
#include <Mathematics/Primitives/gp_Ax2.hxx>
#include <Mathematics/Primitives/gp_Ax22d.hxx>
#include <Mathematics/Primitives/gp_Circ.hxx>
#include <Mathematics/Primitives/gp_Circ2d.hxx>
#include <Mathematics/Primitives/gp_Dir.hxx>
#include <Mathematics/Primitives/gp_Elips.hxx>
#include <Mathematics/Primitives/gp_Elips2d.hxx>
#include <Mathematics/Primitives/gp_Hypr.hxx>
#include <Mathematics/Primitives/gp_Hypr2d.hxx>
#include <Mathematics/Primitives/gp_Parab.hxx>
#include <Mathematics/Primitives/gp_Parab2d.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Primitives/gp_XY.hxx>
#include <Mathematics/Primitives/gp_XYZ.hxx>

#include <IGESData_IGESEntity.hxx>
#include <IGESData_ToolLocation.hxx>

#include <IGESGeom_BSplineCurve.hxx>
#include <IGESGeom_CircularArc.hxx>
#include <IGESGeom_CompositeCurve.hxx>
#include <IGESGeom_ConicArc.hxx>
#include <IGESGeom_CopiousData.hxx>
#include <IGESGeom_CurveOnSurface.hxx>
#include <IGESGeom_Line.hxx>
#include <IGESGeom_Point.hxx>
#include <IGESGeom_OffsetCurve.hxx>
#include <IGESGeom_TransformationMatrix.hxx>

#include <Interface_Macros.hxx>

#include <Precision.hxx>

#include <DataExchange/GeomToIGES/GeomToIGES_GeomCurve.hxx>
#include <ModelingAlgorithms/GeomAPI/GeomAPI.hxx>
#include <Mathematics/Primitives/gp_Pln.hxx>


//=============================================================================
// Geom2dToIGES_Geom2dCurve
//=============================================================================

Geom2dToIGES_Geom2dCurve::Geom2dToIGES_Geom2dCurve()
:Geom2dToIGES_Geom2dEntity()
{
}


//=============================================================================
// Geom2dToIGES_Geom2dCurve
//=============================================================================

Geom2dToIGES_Geom2dCurve::Geom2dToIGES_Geom2dCurve
(const Geom2dToIGES_Geom2dEntity& G2dE)
:Geom2dToIGES_Geom2dEntity(G2dE)
{
}


//=============================================================================
// Transfer des Entites Curve de Geom2d vers IGES
// Transfer2dCurve
//=============================================================================

Handle(IGESData_IGESEntity) Geom2dToIGES_Geom2dCurve::Transfer2dCurve
(const Handle(Geom2d_Curve)& start, const Standard_Real Udeb, const Standard_Real Ufin)
{
  Handle(IGESData_IGESEntity) res;
  if (start.IsNull()) {
    return res;
  }

  //#57 rln 25.12.98 avoid code duplication
  GeomToIGES_GeomCurve GC;
  GC.SetModel (GetModel());
  GC.SetUnit (1.); //not scale 2D curves
  return GC.TransferCurve (GeomAPI::To3d (start, gp_Pln (0, 0, 1, 0)), Udeb, Ufin);
}

