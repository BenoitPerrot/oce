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
#include <ModelingAlgorithms/Plate/Plate_D1.hxx>
#include <ModelingAlgorithms/Plate/Plate_D2.hxx>
#include <ModelingAlgorithms/Plate/Plate_D3.hxx>
#include <ModelingAlgorithms/NLPlate/NLPlate_HPG3Constraint.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(NLPlate_HPG3Constraint)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(NLPlate_HPG2Constraint),
  STANDARD_TYPE(NLPlate_HPG1Constraint),
  STANDARD_TYPE(NLPlate_HGPPConstraint),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(NLPlate_HPG3Constraint)
IMPLEMENT_DOWNCAST(NLPlate_HPG3Constraint,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(NLPlate_HPG3Constraint)

NLPlate_HPG3Constraint::NLPlate_HPG3Constraint(const gp_XY& UV,const Plate_D1& D1T,const Plate_D2& D2T,const Plate_D3& D3T)
:NLPlate_HPG2Constraint(UV,D1T,D2T),myG3Target(D3T)
{
  SetActiveOrder(3);
}
Standard_Integer NLPlate_HPG3Constraint::ActiveOrder() const
{
  if (myActiveOrder<3) return myActiveOrder;
  else return 3;
}
const Plate_D3& NLPlate_HPG3Constraint::G3Target() const
{
  return myG3Target;
}
