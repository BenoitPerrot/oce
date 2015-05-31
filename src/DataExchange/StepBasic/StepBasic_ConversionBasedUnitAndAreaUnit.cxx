// Created on: 1999-10-12
// Created by: data exchange team
// Copyright (c) 1999-1999 Matra Datavision
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

#include <StepBasic_AreaUnit.hxx>
#include <StepBasic_ConversionBasedUnitAndAreaUnit.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_ConversionBasedUnitAndAreaUnit)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepBasic_ConversionBasedUnit),
  STANDARD_TYPE(StepBasic_NamedUnit),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_ConversionBasedUnitAndAreaUnit)
IMPLEMENT_DOWNCAST(StepBasic_ConversionBasedUnitAndAreaUnit,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_ConversionBasedUnitAndAreaUnit)

StepBasic_ConversionBasedUnitAndAreaUnit::StepBasic_ConversionBasedUnitAndAreaUnit()
{
}

void StepBasic_ConversionBasedUnitAndAreaUnit::SetAreaUnit(const Handle(StepBasic_AreaUnit)& anAreaUnit)
{
  areaUnit = anAreaUnit;
}

Handle(StepBasic_AreaUnit) StepBasic_ConversionBasedUnitAndAreaUnit::AreaUnit() const
{
  return areaUnit;
}
