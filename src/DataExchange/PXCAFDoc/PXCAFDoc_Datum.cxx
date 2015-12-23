// Created on: 2008-12-10
// Created by: Pavel TELKOV
// Copyright (c) 2008-2014 OPEN CASCADE SAS
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

#include <OCAF/PCollection/PCollection_HAsciiString.hxx>
#include <PXCAFDoc_Datum.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PXCAFDoc_Datum)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PDF_Attribute),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PXCAFDoc_Datum)
IMPLEMENT_DOWNCAST(PXCAFDoc_Datum,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PXCAFDoc_Datum)

//=======================================================================
//function : PXCAFDoc_Datum
//purpose  : 
//=======================================================================

PXCAFDoc_Datum::PXCAFDoc_Datum ()
{}

//=======================================================================
//function : PXCAFDoc_Datum
//purpose  : 
//=======================================================================

PXCAFDoc_Datum::PXCAFDoc_Datum 
  (const Handle(PCollection_HAsciiString)& theName,
   const Handle(PCollection_HAsciiString)& theDescr,
   const Handle(PCollection_HAsciiString)& theId)
: myName(theName),
  myDescr(theDescr),
  myId(theId)
{}
    
//=======================================================================
//function : Set
//purpose  : 
//=======================================================================

void PXCAFDoc_Datum::Set (const Handle(PCollection_HAsciiString)& theName,
                          const Handle(PCollection_HAsciiString)& theDescr,
                          const Handle(PCollection_HAsciiString)& theId)
{
  myName = theName;
  myDescr = theDescr;
  myId = theId;
}

//=======================================================================
//function : GetName
//purpose  : 
//=======================================================================

Handle(PCollection_HAsciiString) PXCAFDoc_Datum::GetName () const
{
  return myName;
}

//=======================================================================
//function : GetDescription
//purpose  : 
//=======================================================================

Handle(PCollection_HAsciiString) PXCAFDoc_Datum::GetDescription () const
{
  return myDescr;
}

//=======================================================================
//function : GetIdentification
//purpose  : 
//=======================================================================

Handle(PCollection_HAsciiString) PXCAFDoc_Datum::GetIdentification () const
{
  return myId;
}
