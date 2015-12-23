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

#include <DataExchange/Interface/Interface_HArray1OfHAsciiString.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <DataExchange/HeaderSection/HeaderSection_FileSchema.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(HeaderSection_FileSchema)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(HeaderSection_FileSchema)
IMPLEMENT_DOWNCAST(HeaderSection_FileSchema,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(HeaderSection_FileSchema)


HeaderSection_FileSchema::HeaderSection_FileSchema ()  {}

void HeaderSection_FileSchema::Init(
	const Handle(Interface_HArray1OfHAsciiString)& aSchemaIdentifiers)
{
	// --- class own fields ---
	schemaIdentifiers = aSchemaIdentifiers;
}


void HeaderSection_FileSchema::SetSchemaIdentifiers(const Handle(Interface_HArray1OfHAsciiString)& aSchemaIdentifiers)
{
	schemaIdentifiers = aSchemaIdentifiers;
}

Handle(Interface_HArray1OfHAsciiString) HeaderSection_FileSchema::SchemaIdentifiers() const
{
	return schemaIdentifiers;
}

Handle(TCollection_HAsciiString) HeaderSection_FileSchema::SchemaIdentifiersValue(const Standard_Integer num) const
{
	return schemaIdentifiers->Value(num);
}

Standard_Integer HeaderSection_FileSchema::NbSchemaIdentifiers () const
{
	if (schemaIdentifiers.IsNull()) return 0;
	return schemaIdentifiers->Length();
}
