// Created on: 1994-09-01
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

//:o9 abv 19.02.99: bm4_id_punch_b.stp #678: treatment of ellipse with minR > maxR
//                  NOTE: parametrisation of resulting ellipse shifted on pi/2

#include <DataExchange/StepGeom/StepGeom_Ellipse.hxx>
#include <Geometry/Geom/Geom_Ellipse.hxx>
#include <DataExchange/StepToGeom/StepToGeom_MakeEllipse.hxx>
#include <DataExchange/StepGeom/StepGeom_Ellipse.hxx>
#include <DataExchange/StepGeom/StepGeom_Axis2Placement3d.hxx>
#include <Geometry/Geom/Geom_Axis2Placement.hxx>
#include <DataExchange/StepToGeom/StepToGeom_MakeAxis2Placement.hxx>
#include <Mathematics/Primitives/gp_Ax2.hxx>
#include <UnitsMethods.hxx>

//=============================================================================
// Creation d' un Ellipse de Geom a partir d' un Ellipse de Step
//=============================================================================

Standard_Boolean StepToGeom_MakeEllipse::Convert
    (const Handle(StepGeom_Ellipse)& SC,
     Handle(Geom_Ellipse)& CC)
{
  const StepGeom_Axis2Placement AxisSelect = SC->Position();
  if (AxisSelect.CaseNum(AxisSelect.Value()) == 2) {
    Handle(Geom_Axis2Placement) A1;
    if (StepToGeom_MakeAxis2Placement::Convert
          (Handle(StepGeom_Axis2Placement3d)::DownCast(AxisSelect.Value()),A1))
    {
      gp_Ax2 A( A1->Ax2() );
      const Standard_Real LF = UnitsMethods::LengthFactor();
      const Standard_Real majorR = SC->SemiAxis1() * LF;
      const Standard_Real minorR = SC->SemiAxis2() * LF;
      if ( majorR - minorR >= 0. ) { //:o9 abv 19 Feb 99
        CC = new Geom_Ellipse(A, majorR, minorR);
      }
      //:o9 abv 19 Feb 99
      else {
        A.SetXDirection ( A.XDirection() ^ A.Direction() );
        CC = new Geom_Ellipse(A, minorR, majorR);
      }
      return Standard_True;
    }
  }
  return Standard_False;
}
