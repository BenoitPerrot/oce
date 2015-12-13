// Created on: 1997-02-07
// Created by: Laurent BOURESCHE
// Copyright (c) 1997-1999 Matra Datavision
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

#include <Foundation/Standard/Standard_DomainError.hxx>
#include <math_Matrix.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec.hxx>
#include <gp_Vec2d.hxx>
#include <Foundation/TColStd/TColStd_Array1OfReal.hxx>
#include <Foundation/TColStd/TColStd_Array1OfInteger.hxx>
#include <Blend_Point.hxx>
#include <Mathematics/Collections/TColgp_Array1OfPnt.hxx>
#include <Mathematics/Collections/TColgp_Array1OfVec.hxx>
#include <Mathematics/Collections/TColgp_Array1OfPnt2d.hxx>
#include <Mathematics/Collections/TColgp_Array1OfVec2d.hxx>
#include <Blend_SurfRstFunction.hxx>
#include <Foundation/Standard/Standard_NotImplemented.hxx>

const gp_Pnt& Blend_SurfRstFunction::Pnt1() const
{
  return PointOnS();
}

const gp_Pnt& Blend_SurfRstFunction::Pnt2() const
{
  return PointOnRst();
}

Standard_Real Blend_SurfRstFunction::GetMinimalDistance() const
{
  Standard_NotImplemented::Raise("Blend_SurfRstFunction::GetMinimalDistance");
  return RealLast();
}
