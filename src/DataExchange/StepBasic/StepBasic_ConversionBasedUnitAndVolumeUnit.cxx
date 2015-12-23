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

#include <DataExchange/StepBasic/StepBasic_VolumeUnit.hxx>
#include <DataExchange/StepBasic/StepBasic_ConversionBasedUnitAndVolumeUnit.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_ConversionBasedUnitAndVolumeUnit)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepBasic_ConversionBasedUnit),
  STANDARD_TYPE(StepBasic_NamedUnit),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_ConversionBasedUnitAndVolumeUnit)
IMPLEMENT_DOWNCAST(StepBasic_ConversionBasedUnitAndVolumeUnit,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_ConversionBasedUnitAndVolumeUnit)

StepBasic_ConversionBasedUnitAndVolumeUnit::StepBasic_ConversionBasedUnitAndVolumeUnit()
{
}

void StepBasic_ConversionBasedUnitAndVolumeUnit::SetVolumeUnit(const Handle(StepBasic_VolumeUnit)& aVolumeUnit)
{
  volumeUnit = aVolumeUnit;
}

Handle(StepBasic_VolumeUnit) StepBasic_ConversionBasedUnitAndVolumeUnit::VolumeUnit() const
{
  return volumeUnit;
}

