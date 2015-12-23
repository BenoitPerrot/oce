// Created on: 1998-05-13
// Created by: Philippe NOUAILLE
// Copyright (c) 1998-1999 Matra Datavision
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

#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <ModelingAlgorithms/BRepBlend/BRepBlend_Line.hxx>
#include <ModelingAlgorithms/Blend/Blend_RstRstFunction.hxx>
#include <ModelingAlgorithms/Blend/Blend_AppFunction.hxx>
#include <ModelingAlgorithms/Blend/Blend_Point.hxx>
#include <ModelingAlgorithms/BRepBlend/BRepBlend_AppFuncRstRst.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BRepBlend_AppFuncRstRst)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(BRepBlend_AppFuncRoot),
  STANDARD_TYPE(Approx_SweepFunction),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BRepBlend_AppFuncRstRst)
IMPLEMENT_DOWNCAST(BRepBlend_AppFuncRstRst,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BRepBlend_AppFuncRstRst)

BRepBlend_AppFuncRstRst::BRepBlend_AppFuncRstRst (Handle(BRepBlend_Line)& Line,
						  Blend_RstRstFunction& Func,
						  const Standard_Real Tol3d,
						  const Standard_Real Tol2d)
:BRepBlend_AppFuncRoot(Line,Func,Tol3d,Tol2d)
{
}

void BRepBlend_AppFuncRstRst::Point(const Blend_AppFunction& Func,
				    const Standard_Real Param,
				    const math_Vector& theSol,
				    Blend_Point& Pnt)const
{
  Pnt.SetValue(Func.Pnt1(), Func.Pnt2(),
	       Param,
	       theSol(1), theSol(2));
}

void BRepBlend_AppFuncRstRst::Vec(math_Vector& theSol,
				  const Blend_Point& Pnt)const
{
  theSol(1) = Pnt.ParameterOnC1();
  theSol(2) = Pnt.ParameterOnC2();
}

