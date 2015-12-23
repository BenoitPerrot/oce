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

#include <OCAF/PDF/PDF_TagSource.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PDF_TagSource)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PDF_Attribute),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PDF_TagSource)
IMPLEMENT_DOWNCAST(PDF_TagSource,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PDF_TagSource)

PDF_TagSource::PDF_TagSource() : myValue (0) { }

PDF_TagSource::PDF_TagSource(const Standard_Integer V)
: myValue (V) {}

Standard_Integer PDF_TagSource::Get() const
{ return myValue; }

void PDF_TagSource::Set(const Standard_Integer V) 
{ myValue = V; }

