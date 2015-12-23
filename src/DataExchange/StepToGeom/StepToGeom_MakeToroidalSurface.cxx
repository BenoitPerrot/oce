// Created on: 1993-07-05
// Created by: Martine LANGLOIS
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

#include <DataExchange/StepGeom/StepGeom_ToroidalSurface.hxx>
#include <Geometry/Geom/Geom_ToroidalSurface.hxx>
#include <DataExchange/StepToGeom/StepToGeom_MakeToroidalSurface.hxx>
#include <DataExchange/StepGeom/StepGeom_ToroidalSurface.hxx>
#include <DataExchange/StepGeom/StepGeom_Axis2Placement3d.hxx>
#include <DataExchange/StepToGeom/StepToGeom_MakeAxis2Placement.hxx>
#include <Geometry/Geom/Geom_Axis2Placement.hxx>
#include <Mathematics/Primitives/gp_Ax2.hxx>
#include <Geometry/Geom/Geom_ToroidalSurface.hxx>
#include <DataExchange/UnitsMethods/UnitsMethods.hxx>

//=============================================================================
// Creation d' une ToroidalSurface de Geom a partir d' une 
// ToroidalSurface de Step
//=============================================================================

Standard_Boolean StepToGeom_MakeToroidalSurface::Convert (const Handle(StepGeom_ToroidalSurface)& SS, Handle(Geom_ToroidalSurface)& CS)
{
  Handle(Geom_Axis2Placement) A;
  if (StepToGeom_MakeAxis2Placement::Convert(SS->Position(),A))
  {
    const Standard_Real LF = UnitsMethods::LengthFactor();
    CS = new Geom_ToroidalSurface(A->Ax2(), Abs(SS->MajorRadius() * LF), Abs(SS->MinorRadius() * LF));
    return Standard_True;
  }
  return Standard_False;
}
