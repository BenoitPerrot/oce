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

#include <DataExchange/StepBasic/StepBasic_HArray1OfProduct.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <DataExchange/StepBasic/StepBasic_Product.hxx>
#include <DataExchange/StepBasic/StepBasic_ProductRelatedProductCategory.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_ProductRelatedProductCategory)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepBasic_ProductCategory),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_ProductRelatedProductCategory)
IMPLEMENT_DOWNCAST(StepBasic_ProductRelatedProductCategory,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_ProductRelatedProductCategory)


StepBasic_ProductRelatedProductCategory::StepBasic_ProductRelatedProductCategory ()  {}

void StepBasic_ProductRelatedProductCategory::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Standard_Boolean hasAdescription,
	const Handle(TCollection_HAsciiString)& aDescription)
{

	StepBasic_ProductCategory::Init(aName, hasAdescription, aDescription);
}

void StepBasic_ProductRelatedProductCategory::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Standard_Boolean hasAdescription,
	const Handle(TCollection_HAsciiString)& aDescription,
	const Handle(StepBasic_HArray1OfProduct)& aProducts)
{
	// --- classe own fields ---
	products = aProducts;
	// --- classe inherited fields ---
	StepBasic_ProductCategory::Init(aName, hasAdescription, aDescription);
}


void StepBasic_ProductRelatedProductCategory::SetProducts(const Handle(StepBasic_HArray1OfProduct)& aProducts)
{
	products = aProducts;
}

Handle(StepBasic_HArray1OfProduct) StepBasic_ProductRelatedProductCategory::Products() const
{
	return products;
}

Handle(StepBasic_Product) StepBasic_ProductRelatedProductCategory::ProductsValue(const Standard_Integer num) const
{
	return products->Value(num);
}

Standard_Integer StepBasic_ProductRelatedProductCategory::NbProducts () const
{
	if (products.IsNull()) return 0;
	return products->Length();
}
