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
#include <DataExchange/StepShape/StepShape_HArray1OfValueQualifier.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <DataExchange/StepBasic/StepBasic_MeasureValueMember.hxx>
#include <DataExchange/StepBasic/StepBasic_Unit.hxx>
#include <DataExchange/StepShape/StepShape_ValueQualifier.hxx>
#include <DataExchange/StepShape/StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem)
IMPLEMENT_DOWNCAST(StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem)

StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem  ()
{
  myMeasure = new StepBasic_MeasureWithUnit;
}

void  StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::Init
  (const Handle(TCollection_HAsciiString)& aName,
   const Handle(StepBasic_MeasureValueMember)& aValueComponent,
   const StepBasic_Unit& aUnitComponent,
   const Handle(StepShape_HArray1OfValueQualifier)& qualifiers)
{
  StepRepr_RepresentationItem::Init (aName);
  myMeasure->Init ( aValueComponent, aUnitComponent );
  theQualifiers = qualifiers;
}


void StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::SetMeasure (const Handle(StepBasic_MeasureWithUnit)& Measure)
{  myMeasure = Measure;  }

Handle(StepBasic_MeasureWithUnit) StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::Measure () const
{  return myMeasure;  }



Handle(StepShape_HArray1OfValueQualifier)  StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::Qualifiers () const
{  return theQualifiers;  }

Standard_Integer  StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::NbQualifiers () const
{  return theQualifiers->Length();  }

void  StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::SetQualifiers
  (const Handle(StepShape_HArray1OfValueQualifier)& qualifiers)
{  theQualifiers = qualifiers;  }

StepShape_ValueQualifier  StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::QualifiersValue
  (const Standard_Integer num) const
{  return theQualifiers->Value(num);  }

void  StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::SetQualifiersValue
  (const Standard_Integer num, const StepShape_ValueQualifier& aqualifier)
{  theQualifiers->SetValue (num,aqualifier);  }
