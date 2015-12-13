// Created on: 1993-08-05
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

#include <StepGeom_BSplineCurveWithKnots.hxx>
#include <Foundation/StdFail/StdFail_NotDone.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <GeomToStep_MakeBSplineCurveWithKnots.hxx>
#include <Foundation/StdFail/StdFail_NotDone.hxx>
#include <Geom_BSplineCurve.hxx>
#include <StepGeom_BSplineCurveWithKnots.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <GeomToStep_MakeCartesianPoint.hxx>
#include <StepGeom_HArray1OfCartesianPoint.hxx>
#include <Foundation/TColStd/TColStd_HArray1OfInteger.hxx>
#include <Foundation/TColStd/TColStd_HArray1OfReal.hxx>
#include <TColgp_Array1OfPnt.hxx>
#include <TColgp_Array1OfPnt2d.hxx>
#include <GeomAbs_BSplKnotDistribution.hxx>
#include <StepGeom_KnotType.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>

//=============================================================================
// Creation d' une bspline_curve_with_knots de
// prostep a partir d' une BSplineCurve de Geom
//=============================================================================

GeomToStep_MakeBSplineCurveWithKnots::
  GeomToStep_MakeBSplineCurveWithKnots( const
    Handle(Geom_BSplineCurve)& BS )
								      
{
#define Array1OfPnt_gen TColgp_Array1OfPnt
#include <GeomToStep_MakeBSplineCurveWithKnots_gen.pxx>
#undef Array1OfPnt_gen
}
//=============================================================================
// Creation d' une bspline_curve_with_knots de
// prostep a partir d' une BSplineCurve de Geom2d
//=============================================================================

GeomToStep_MakeBSplineCurveWithKnots::
  GeomToStep_MakeBSplineCurveWithKnots( const
    Handle(Geom2d_BSplineCurve)& BS )
								      
{
#define Array1OfPnt_gen TColgp_Array1OfPnt2d
#include <GeomToStep_MakeBSplineCurveWithKnots_gen.pxx>
#undef Array1OfPnt_gen
}

//=============================================================================
// renvoi des valeurs
//=============================================================================

const Handle(StepGeom_BSplineCurveWithKnots) &
      GeomToStep_MakeBSplineCurveWithKnots::Value() const
{
  StdFail_NotDone_Raise_if(!done == Standard_True,"");
  return theBSplineCurveWithKnots;
}
