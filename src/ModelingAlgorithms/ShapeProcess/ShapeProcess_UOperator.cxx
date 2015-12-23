// Created on: 2000-08-22
// Created by: Andrey BETENEV
// Copyright (c) 2000-2014 OPEN CASCADE SAS
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

#include <ModelingAlgorithms/ShapeProcess/ShapeProcess_Context.hxx>
#include <ModelingAlgorithms/ShapeProcess/ShapeProcess_UOperator.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(ShapeProcess_UOperator)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(ShapeProcess_Operator),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(ShapeProcess_UOperator)
IMPLEMENT_DOWNCAST(ShapeProcess_UOperator,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(ShapeProcess_UOperator)

//=======================================================================
//function : ShapeProcess_UOperator
//purpose  : 
//=======================================================================

ShapeProcess_UOperator::ShapeProcess_UOperator (const ShapeProcess_OperFunc func) : myFunc(func)
{
}

//=======================================================================
//function : Perform
//purpose  : 
//=======================================================================

Standard_Boolean ShapeProcess_UOperator::Perform (const Handle(ShapeProcess_Context)& context)
{
  return myFunc ( context );
}
