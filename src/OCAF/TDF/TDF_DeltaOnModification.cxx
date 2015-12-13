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

//      	---------------------------

// Version:	0.0
//Version	Date		Purpose
//		0.0	Oct 10 1997	Creation



#include <TDF_Attribute.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(TDF_DeltaOnModification)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TDF_AttributeDelta),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TDF_DeltaOnModification)
IMPLEMENT_DOWNCAST(TDF_DeltaOnModification,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TDF_DeltaOnModification)


//=======================================================================
//function : TDF_DeltaOnModification
//purpose  : 
//=======================================================================

TDF_DeltaOnModification::TDF_DeltaOnModification
(const Handle(TDF_Attribute)& anAttribute)
: TDF_AttributeDelta(anAttribute)
{}


//=======================================================================
//function : Apply
//purpose  : 
//=======================================================================

void TDF_DeltaOnModification::Apply() 
{ Attribute()->DeltaOnModification(this); }
