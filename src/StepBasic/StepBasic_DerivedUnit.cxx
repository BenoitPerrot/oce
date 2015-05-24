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

#include <StepBasic_HArray1OfDerivedUnitElement.hxx>
#include <StepBasic_DerivedUnitElement.hxx>
#include <StepBasic_DerivedUnit.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_DerivedUnit)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_DerivedUnit)
IMPLEMENT_DOWNCAST(StepBasic_DerivedUnit,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_DerivedUnit)

StepBasic_DerivedUnit::StepBasic_DerivedUnit  ()    {  }

void  StepBasic_DerivedUnit::Init (const Handle(StepBasic_HArray1OfDerivedUnitElement)& elements)
{  theElements = elements;  }

void  StepBasic_DerivedUnit::SetElements (const Handle(StepBasic_HArray1OfDerivedUnitElement)& elements)
{  theElements = elements;  }

Handle(StepBasic_HArray1OfDerivedUnitElement)  StepBasic_DerivedUnit::Elements () const
{  return theElements;  }

Standard_Integer  StepBasic_DerivedUnit::NbElements () const
{  return theElements->Length();  }

Handle(StepBasic_DerivedUnitElement)  StepBasic_DerivedUnit::ElementsValue (const Standard_Integer num) const
{  return theElements->Value(num);  }
