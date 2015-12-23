// Created on: 1995-07-20
// Created by: Modelistation
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

#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <ModelingData/BRepAdaptor/BRepAdaptor_Surface.hxx>
#include <Foundation/TColStd/TColStd_Array1OfReal.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_HSurface.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>
#include <Geometry/Geom/Geom_BezierSurface.hxx>
#include <Geometry/Geom/Geom_BSplineSurface.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_HCurve.hxx>
#include <BRepApprox_SurfaceTool.hxx>

Standard_Integer  BRepApprox_SurfaceTool::NbSamplesU (const BRepAdaptor_Surface&) 
{
  return(10);
}

Standard_Integer  BRepApprox_SurfaceTool::NbSamplesV (const BRepAdaptor_Surface&) 
{
  return(10);
}

Standard_Integer  BRepApprox_SurfaceTool::NbSamplesU (const BRepAdaptor_Surface&,
                                                         const Standard_Real,
                                                         const Standard_Real) 
{
  return(10);
}

Standard_Integer  BRepApprox_SurfaceTool::NbSamplesV (const BRepAdaptor_Surface&,
                                                         const Standard_Real,
                                                         const Standard_Real) 
{
  return(10);
}
