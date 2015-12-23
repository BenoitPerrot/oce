// Created on: 1998-04-07
// Created by: Jean-Pierre COMBE
// Copyright (c) 1998-1999 Matra Datavision
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

#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
#include <TDF_Attribute.hxx>
#include <PDF_Attribute.hxx>
#include <OCAF/MDF/MDF_RRelocationTable.hxx>
#include <OCAF/MPrsStd/MPrsStd_PositionRetrievalDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MPrsStd_PositionRetrievalDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ARDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MPrsStd_PositionRetrievalDriver)
IMPLEMENT_DOWNCAST(MPrsStd_PositionRetrievalDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MPrsStd_PositionRetrievalDriver)

#include <PDataXtd_Position.hxx>
#include <TDataXtd_Position.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>

//=======================================================================
//function : MPrsStd_PositionRetrievalDriver
//purpose  : 
//=======================================================================
MPrsStd_PositionRetrievalDriver::MPrsStd_PositionRetrievalDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ARDriver(theMsgDriver)
{}

//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================
Standard_Integer MPrsStd_PositionRetrievalDriver::VersionNumber() const
{ return 0; }

//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================
Handle(Standard_Type) MPrsStd_PositionRetrievalDriver::SourceType() const
{ return STANDARD_TYPE(PDataXtd_Position); }

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================
Handle(TDF_Attribute) MPrsStd_PositionRetrievalDriver::NewEmpty() const
{ return new TDataXtd_Position; }

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================
void MPrsStd_PositionRetrievalDriver::Paste(const Handle(PDF_Attribute)& Source,
							    const Handle(TDF_Attribute)& Target,
							    const Handle(MDF_RRelocationTable)& /*RelocTable*/) const
{
  Handle(PDataXtd_Position) S = Handle(PDataXtd_Position)::DownCast (Source);
  Handle(TDataXtd_Position) T = Handle(TDataXtd_Position)::DownCast (Target);  
  T->SetPosition(S->GetPosition());
}

