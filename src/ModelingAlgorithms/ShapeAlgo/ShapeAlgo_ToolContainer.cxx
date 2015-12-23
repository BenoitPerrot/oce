// Created on: 2000-02-07
// Created by: data exchange team
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

#include <ShapeFix_Shape.hxx>
#include <ShapeFix_EdgeProjAux.hxx>
#include <ModelingAlgorithms/ShapeAlgo/ShapeAlgo_ToolContainer.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(ShapeAlgo_ToolContainer)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(ShapeAlgo_ToolContainer)
IMPLEMENT_DOWNCAST(ShapeAlgo_ToolContainer,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(ShapeAlgo_ToolContainer)

//=======================================================================
//function : ShapeAlgo_ToolContainer
//purpose  : 
//=======================================================================

ShapeAlgo_ToolContainer::ShapeAlgo_ToolContainer()
{
}

//=======================================================================
//function : FixShape
//purpose  : 
//=======================================================================

Handle(ShapeFix_Shape) ShapeAlgo_ToolContainer::FixShape() const
{
  return new ShapeFix_Shape;
}

//=======================================================================
//function : EdgeProjAux
//purpose  : 
//=======================================================================

Handle(ShapeFix_EdgeProjAux) ShapeAlgo_ToolContainer::EdgeProjAux() const
{
  return new ShapeFix_EdgeProjAux;
}
