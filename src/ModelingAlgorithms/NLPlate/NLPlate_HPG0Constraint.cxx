// Created on: 1998-04-17
// Created by: Andre LIEUTIER
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

#include <Mathematics/Primitives/gp_XY.hxx>
#include <Mathematics/Primitives/gp_XYZ.hxx>
#include <ModelingAlgorithms/NLPlate/NLPlate_HPG0Constraint.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(NLPlate_HPG0Constraint)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(NLPlate_HGPPConstraint),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(NLPlate_HPG0Constraint)
IMPLEMENT_DOWNCAST(NLPlate_HPG0Constraint,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(NLPlate_HPG0Constraint)

NLPlate_HPG0Constraint::NLPlate_HPG0Constraint(const gp_XY& UV,const gp_XYZ& Value)
:myXYZTarget(Value)
{
  SetUV(UV);
  SetActiveOrder(0);
  UVIsFree = Standard_False;
  IncrementalLoadingAllowed = Standard_False;
}
void NLPlate_HPG0Constraint::SetUVFreeSliding(const Standard_Boolean UVFree) 
{
  UVIsFree = UVFree;
}
void NLPlate_HPG0Constraint::SetIncrementalLoadAllowed(const Standard_Boolean ILA) 
{
  IncrementalLoadingAllowed = ILA;
}
Standard_Boolean NLPlate_HPG0Constraint::UVFreeSliding() const
{
  return UVIsFree;
}
Standard_Boolean NLPlate_HPG0Constraint::IncrementalLoadAllowed() const
{
  return IncrementalLoadingAllowed;
}
Standard_Integer NLPlate_HPG0Constraint::ActiveOrder() const
{
  if (myActiveOrder<0) return myActiveOrder;
  else return 0;
}
Standard_Boolean NLPlate_HPG0Constraint::IsG0() const
{
  return Standard_True;
}
const gp_XYZ& NLPlate_HPG0Constraint::G0Target() const
{
  return myXYZTarget;
}
