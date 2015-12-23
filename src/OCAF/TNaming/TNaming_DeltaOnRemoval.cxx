// Created on: 1997-12-05
// Created by: Yves FRICAUD
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

#include <OCAF/TNaming/TNaming_DeltaOnModification.hxx>
#include <OCAF/TNaming/TNaming_NamedShape.hxx>
#include <OCAF/TNaming/TNaming_DeltaOnRemoval.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(TNaming_DeltaOnRemoval)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TDF_DeltaOnRemoval),
  STANDARD_TYPE(TDF_AttributeDelta),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TNaming_DeltaOnRemoval)
IMPLEMENT_DOWNCAST(TNaming_DeltaOnRemoval,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TNaming_DeltaOnRemoval)
#include <OCAF/TNaming/TNaming_DeltaOnModification.hxx>
#include <OCAF/TDF/TDF_DeltaOnRemoval.hxx>

//=======================================================================
//function : TNaming_DeltaOnModification
//purpose  : 
//=======================================================================

TNaming_DeltaOnRemoval::TNaming_DeltaOnRemoval(const Handle(TNaming_NamedShape)& NS)
:TDF_DeltaOnRemoval(NS)
{
  myDelta = new TNaming_DeltaOnModification(NS);
}

//=======================================================================
//function : Apply
//purpose  : 
//=======================================================================

void TNaming_DeltaOnRemoval::Apply()
{
  myDelta->Apply();
}
