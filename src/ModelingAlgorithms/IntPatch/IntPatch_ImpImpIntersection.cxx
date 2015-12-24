// Created on: 1992-05-07
// Created by: Jacques GOUSSARD
// Copyright (c) 1992-1999 Matra Datavision
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

#include <Foundation/StdFail/StdFail_NotDone.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Foundation/Standard/Standard_DomainError.hxx>
#include <Foundation/Standard/Standard_ConstructionError.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_HSurface.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_TopolTool.hxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_Point.hxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_Line.hxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_ImpImpIntersection.hxx>

#include <Foundation/Standard/Standard_ConstructionError.hxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_SequenceOfLine.hxx>
#include <Foundation/TColStd/TColStd_Array1OfInteger.hxx>
#include <Foundation/TColStd/TColStd_SequenceOfReal.hxx>
#include <Mathematics/Collections/TColgp_SequenceOfPnt.hxx>

#include <ModelingAlgorithms/IntSurf/IntSurf_Quadric.hxx>

#include <Mathematics/Primitives/ElCLib.hxx>
#include <Mathematics/Primitives/ElSLib.hxx>
#include <Mathematics/Primitives/gp.hxx>
#include <Geometry/IntAna/IntAna_Quadric.hxx>
#include <Geometry/IntAna/IntAna_QuadQuadGeo.hxx>
#include <Geometry/IntAna/IntAna_IntQuadQuad.hxx>
#include <Mathematics/Primitives/gp_Pln.hxx>
#include <Mathematics/Primitives/gp_Cylinder.hxx>
#include <Mathematics/Primitives/gp_Sphere.hxx>
#include <Mathematics/Primitives/gp_Cone.hxx>
#include <ModelingAlgorithms/IntSurf/IntSurf.hxx>

#include <Geometry/Adaptor3d/Adaptor3d_HVertex.hxx>
#include <Geometry/Adaptor2d/Adaptor2d_HCurve2d.hxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_HInterTool.hxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_ArcFunction.hxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_GLine.hxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_ALine.hxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_RLine.hxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_ThePathPointOfTheSOnBounds.hxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_TheSegmentOfTheSOnBounds.hxx>

#include <ModelingAlgorithms/IntPatch/IntPatch_ImpImpIntersection_0.gxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_ImpImpIntersection_1.gxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_ImpImpIntersection_2.gxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_ImpImpIntersection_3.gxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_ImpImpIntersection_4.gxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_ImpImpIntersection_5.gxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_ImpImpIntersection_6.gxx>
