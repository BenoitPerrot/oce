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

#include <ModelingAlgorithms/Plate/Plate_D1.hxx>

#include <Mathematics/Primitives/gp_XY.hxx>
#include <Mathematics/Primitives/gp_XYZ.hxx>
#include <ModelingAlgorithms/Plate/Plate_D1.hxx>
#include <ModelingAlgorithms/NLPlate/NLPlate_HPG0G1Constraint.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(NLPlate_HPG0G1Constraint)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(NLPlate_HPG0Constraint),
  STANDARD_TYPE(NLPlate_HGPPConstraint),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(NLPlate_HPG0G1Constraint)
IMPLEMENT_DOWNCAST(NLPlate_HPG0G1Constraint,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(NLPlate_HPG0G1Constraint)

NLPlate_HPG0G1Constraint::NLPlate_HPG0G1Constraint(const gp_XY& UV,const gp_XYZ& Value,const Plate_D1& D1T)
: NLPlate_HPG0Constraint(UV,Value),myG1Target(D1T)
{
  SetActiveOrder(1);
  myOrientation = 0;
}

void NLPlate_HPG0G1Constraint::SetOrientation(const Standard_Integer Orient) 
{
  myOrientation = Orient;
}

Standard_Integer NLPlate_HPG0G1Constraint::ActiveOrder() const
{
  if (myActiveOrder<1) return myActiveOrder;
  else return 1;
}

Standard_Integer NLPlate_HPG0G1Constraint::Orientation() 
{
  return myOrientation;
}

const Plate_D1& NLPlate_HPG0G1Constraint::G1Target() const
{
  return myG1Target;
}
