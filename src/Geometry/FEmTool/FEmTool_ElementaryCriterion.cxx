// Created on: 1998-11-05
// Created by: Igor FEOKTISTOV
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

#include <Foundation/TColStd/TColStd_HArray2OfReal.hxx>
#include <Foundation/Standard/Standard_NotImplemented.hxx>
#include <Foundation/Standard/Standard_DomainError.hxx>
#include <Foundation/TColStd/TColStd_HArray2OfInteger.hxx>
#include <Mathematics/Optimization/math_Matrix.hxx>
#include <Geometry/FEmTool/FEmTool_ElementaryCriterion.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(FEmTool_ElementaryCriterion)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(FEmTool_ElementaryCriterion)
IMPLEMENT_DOWNCAST(FEmTool_ElementaryCriterion,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(FEmTool_ElementaryCriterion)

void FEmTool_ElementaryCriterion::Set(const Handle(TColStd_HArray2OfReal)& Coeff) 
{
  myCoeff = Coeff;
}

void FEmTool_ElementaryCriterion::Set(const Standard_Real FirstKnot, const Standard_Real LastKnot) 
{
  myFirst = FirstKnot; myLast = LastKnot;
}


