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

#include <DataExchange/StepShape/StepShape_PrecisionQualifier.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_PrecisionQualifier)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_PrecisionQualifier)
IMPLEMENT_DOWNCAST(StepShape_PrecisionQualifier,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_PrecisionQualifier)

StepShape_PrecisionQualifier::StepShape_PrecisionQualifier  ()    {  }

void  StepShape_PrecisionQualifier::Init
  (const Standard_Integer precision_value)
{  thePrecisionValue = precision_value;  }

Standard_Integer  StepShape_PrecisionQualifier::PrecisionValue () const
{  return thePrecisionValue; }

void  StepShape_PrecisionQualifier::SetPrecisionValue
  (const Standard_Integer precision_value)
{  thePrecisionValue = precision_value;  }
