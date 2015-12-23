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

#include <DataExchange/StepBasic/StepBasic_MeasureWithUnit.hxx>
#include <DataExchange/StepShape/StepShape_ToleranceValue.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_ToleranceValue)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_ToleranceValue)
IMPLEMENT_DOWNCAST(StepShape_ToleranceValue,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_ToleranceValue)

StepShape_ToleranceValue::StepShape_ToleranceValue  ()    {  }

void  StepShape_ToleranceValue::Init
  (const Handle(StepBasic_MeasureWithUnit)& lower_bound,
   const Handle(StepBasic_MeasureWithUnit)& upper_bound)
{
  theLowerBound = lower_bound;
  theUpperBound = upper_bound;
}

Handle(StepBasic_MeasureWithUnit)  StepShape_ToleranceValue::LowerBound () const
{  return theLowerBound;  }

void  StepShape_ToleranceValue::SetLowerBound (const Handle(StepBasic_MeasureWithUnit)& lower_bound)
{  theLowerBound = lower_bound;  }

Handle(StepBasic_MeasureWithUnit)  StepShape_ToleranceValue::UpperBound () const
{  return theUpperBound;  }

void  StepShape_ToleranceValue::SetUpperBound (const Handle(StepBasic_MeasureWithUnit)& upper_bound)
{  theUpperBound = upper_bound;  }
