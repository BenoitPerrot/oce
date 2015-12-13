// Created on: 1998-11-30
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

#include <Foundation/Standard/Standard_NotImplemented.hxx>
#include <Foundation/Standard/Standard_DomainError.hxx>
#include <TColStd_HArray1OfReal.hxx>
#include <FEmTool_Curve.hxx>
#include <FEmTool_HAssemblyTable.hxx>
#include <TColStd_HArray2OfInteger.hxx>
#include <math_Matrix.hxx>
#include <TColStd_Array1OfReal.hxx>
#include <AppDef_SmoothCriterion.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(AppDef_SmoothCriterion)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(AppDef_SmoothCriterion)
IMPLEMENT_DOWNCAST(AppDef_SmoothCriterion,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(AppDef_SmoothCriterion)
