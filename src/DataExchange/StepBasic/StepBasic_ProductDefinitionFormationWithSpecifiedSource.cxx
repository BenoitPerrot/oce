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

#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Product.hxx>
#include <StepBasic_ProductDefinitionFormationWithSpecifiedSource.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_ProductDefinitionFormationWithSpecifiedSource)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepBasic_ProductDefinitionFormation),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_ProductDefinitionFormationWithSpecifiedSource)
IMPLEMENT_DOWNCAST(StepBasic_ProductDefinitionFormationWithSpecifiedSource,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_ProductDefinitionFormationWithSpecifiedSource)


StepBasic_ProductDefinitionFormationWithSpecifiedSource::StepBasic_ProductDefinitionFormationWithSpecifiedSource ()  {}

void StepBasic_ProductDefinitionFormationWithSpecifiedSource::Init(
	const Handle(TCollection_HAsciiString)& aId,
	const Handle(TCollection_HAsciiString)& aDescription,
	const Handle(StepBasic_Product)& aOfProduct)
{

	StepBasic_ProductDefinitionFormation::Init(aId, aDescription, aOfProduct);
}

void StepBasic_ProductDefinitionFormationWithSpecifiedSource::Init(
	const Handle(TCollection_HAsciiString)& aId,
	const Handle(TCollection_HAsciiString)& aDescription,
	const Handle(StepBasic_Product)& aOfProduct,
	const StepBasic_Source aMakeOrBuy)
{
	// --- classe own fields ---
	makeOrBuy = aMakeOrBuy;
	// --- classe inherited fields ---
	StepBasic_ProductDefinitionFormation::Init(aId, aDescription, aOfProduct);
}


void StepBasic_ProductDefinitionFormationWithSpecifiedSource::SetMakeOrBuy(const StepBasic_Source aMakeOrBuy)
{
	makeOrBuy = aMakeOrBuy;
}

StepBasic_Source StepBasic_ProductDefinitionFormationWithSpecifiedSource::MakeOrBuy() const
{
	return makeOrBuy;
}
