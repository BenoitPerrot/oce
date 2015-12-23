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
#include <OCAF/PDF/PDF_Attribute.hxx>
#include <TDF_Attribute.hxx>
#include <OCAF/MDF/MDF_SRelocationTable.hxx>
#include <OCAF/MPrsStd/MPrsStd_PositionStorageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MPrsStd_PositionStorageDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ASDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MPrsStd_PositionStorageDriver)
IMPLEMENT_DOWNCAST(MPrsStd_PositionStorageDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MPrsStd_PositionStorageDriver)

#include <OCAF/PDataXtd/PDataXtd_Position.hxx>
#include <OCAF/TDataXtd/TDataXtd_Position.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>

//=======================================================================
//function : MPrsStd_PositionStorageDriver
//purpose  : 
//=======================================================================
MPrsStd_PositionStorageDriver::MPrsStd_PositionStorageDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ASDriver(theMsgDriver)
{
}

//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================
Standard_Integer MPrsStd_PositionStorageDriver::VersionNumber() const
{ return 0; }

//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================
Handle(Standard_Type) MPrsStd_PositionStorageDriver::SourceType() const
{ return STANDARD_TYPE(TDataXtd_Position); }

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================
Handle(PDF_Attribute) MPrsStd_PositionStorageDriver::NewEmpty() const
{ return new PDataXtd_Position; }

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================
void MPrsStd_PositionStorageDriver::Paste(const Handle(TDF_Attribute)& Source,
							  const Handle(PDF_Attribute)& Target,
							  const Handle(MDF_SRelocationTable)& /*RelocTable*/) const
{
  Handle(TDataXtd_Position) S = Handle(TDataXtd_Position)::DownCast (Source);
  Handle(PDataXtd_Position) T = Handle(PDataXtd_Position)::DownCast (Target);  
  T->SetPosition(S->GetPosition());
}


