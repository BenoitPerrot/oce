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

#include <Geometry/Adaptor2d/Adaptor2d_HCurve2d.hxx>
#include <Foundation/Standard/Standard_DomainError.hxx>
#include <ModelingAlgorithms/IntSurf/IntSurf_Transition.hxx>
#include <ModelingAlgorithms/BRepBlend/BRepBlend_PointOnRst.hxx>

BRepBlend_PointOnRst::BRepBlend_PointOnRst () {}


BRepBlend_PointOnRst::BRepBlend_PointOnRst(const Handle(Adaptor2d_HCurve2d)& A,
				   const Standard_Real Param,
				   const IntSurf_Transition& TLine,
				   const IntSurf_Transition& TArc):

       arc(A),traline(TLine),traarc(TArc),prm(Param)
{}

void BRepBlend_PointOnRst::SetArc(const Handle(Adaptor2d_HCurve2d)& A,
			      const Standard_Real Param,
			      const IntSurf_Transition& TLine,
			      const IntSurf_Transition& TArc)
{
  arc     = A;
  prm     = Param;
  traline = TLine;
  traarc  = TArc;
}

