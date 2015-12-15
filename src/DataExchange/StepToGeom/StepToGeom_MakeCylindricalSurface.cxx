// Created on: 1993-07-02
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

#include <StepGeom_CylindricalSurface.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <StepToGeom_MakeCylindricalSurface.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepToGeom_MakeAxis2Placement.hxx>
#include <Geom_Axis2Placement.hxx>
#include <Mathematics/Primitives/gp_Ax2.hxx>
#include <UnitsMethods.hxx>

//=============================================================================
// Creation d' une CylindricalSurface de Geom a partir d' une 
// CylindricalSurface de Step
//=============================================================================

Standard_Boolean StepToGeom_MakeCylindricalSurface::Convert (const Handle(StepGeom_CylindricalSurface)& SS, Handle(Geom_CylindricalSurface)& CS)
{
  Handle(Geom_Axis2Placement) A;
  if (StepToGeom_MakeAxis2Placement::Convert(SS->Position(),A))
  {
    CS = new Geom_CylindricalSurface(A->Ax2(), SS->Radius() * UnitsMethods::LengthFactor());
    return Standard_True;
  }
  return Standard_False;
}
