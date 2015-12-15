// Created on: 1994-08-26
// Created by: Frederic MAUPAS
// Copyright (c) 1994-1999 Matra Datavision
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

#include <StepGeom_Circle.hxx>
#include <Geom2d_Circle.hxx>
#include <StepToGeom_MakeCircle2d.hxx>
#include <StepGeom_Circle.hxx>
#include <StepGeom_Axis2Placement2d.hxx>
#include <Geom2d_AxisPlacement.hxx>
#include <StepToGeom_MakeAxisPlacement.hxx>
#include <Mathematics/Primitives/gp_Ax2.hxx>
#include <Mathematics/Primitives/gp_Ax22d.hxx>

//=============================================================================
// Creation d' un Circle de Geom2d a partir d' un Circle de Step
//=============================================================================

Standard_Boolean StepToGeom_MakeCircle2d::Convert
    (const Handle(StepGeom_Circle)& SC,
     Handle(Geom2d_Circle)& CC)
{
  const StepGeom_Axis2Placement AxisSelect = SC->Position();
  if (AxisSelect.CaseNum(AxisSelect.Value()) == 1) {
    Handle(Geom2d_AxisPlacement) A1;
    if (StepToGeom_MakeAxisPlacement::Convert
          (Handle(StepGeom_Axis2Placement2d)::DownCast(AxisSelect.Value()),A1))
    {
      const gp_Ax22d A( A1->Ax2d() );
      CC = new Geom2d_Circle(A, SC->Radius());
      return Standard_True;
    }
  }
  return Standard_False;
}
