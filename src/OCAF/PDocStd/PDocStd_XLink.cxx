// Created by: DAUTRY Philippe
// Copyright (c) 1997-1999 Matra Datavision
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

//      	--------------

// Version:	0.0
//Version	Date		Purpose
//		0.0	Sep 17 1997	Creation



#include <OCAF/PCollection/PCollection_HAsciiString.hxx>
#include <PDocStd_XLink.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PDocStd_XLink)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PDF_Attribute),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PDocStd_XLink)
IMPLEMENT_DOWNCAST(PDocStd_XLink,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PDocStd_XLink)


//=======================================================================
//function : PDocStd_XLink
//purpose  : 
//=======================================================================

PDocStd_XLink::PDocStd_XLink()
{}


//=======================================================================
//function : DocumentEntry
//purpose  : 
//=======================================================================

void PDocStd_XLink::DocumentEntry
(const Handle(PCollection_HAsciiString)& aDocEntry) 
{ myDocEntry = aDocEntry; }


//=======================================================================
//function : DocumentEntry
//purpose  : 
//=======================================================================

Handle(PCollection_HAsciiString) PDocStd_XLink::DocumentEntry() const
{ return myDocEntry; }


//=======================================================================
//function : LabelEntry
//purpose  : 
//=======================================================================

void PDocStd_XLink::LabelEntry
(const Handle(PCollection_HAsciiString)& aLabEntry) 
{ myLabEntry = aLabEntry; }


//=======================================================================
//function : LabelEntry
//purpose  : 
//=======================================================================

Handle(PCollection_HAsciiString) PDocStd_XLink::LabelEntry() const
{ return myLabEntry; }

