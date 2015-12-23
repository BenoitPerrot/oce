// Created on: 1999-06-17
// Created by: Vladislav ROMASHKO
// Copyright (c) 1999-1999 Matra Datavision
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
#include <OCAF/MFunction/MFunction_FunctionStorageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MFunction_FunctionStorageDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ASDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MFunction_FunctionStorageDriver)
IMPLEMENT_DOWNCAST(MFunction_FunctionStorageDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MFunction_FunctionStorageDriver)

#include <TFunction_Function.hxx>
#include <OCAF/PFunction/PFunction_Function.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <Foundation/Standard/Standard_NoSuchObject.hxx>

MFunction_FunctionStorageDriver::MFunction_FunctionStorageDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ASDriver(theMsgDriver)
{}

Standard_Integer MFunction_FunctionStorageDriver::VersionNumber() const
{ return 0; }

Handle(Standard_Type) MFunction_FunctionStorageDriver::SourceType() const
{ return STANDARD_TYPE(TFunction_Function); }

Handle(PDF_Attribute) MFunction_FunctionStorageDriver::NewEmpty() const
{ return new PFunction_Function(); }

void MFunction_FunctionStorageDriver::Paste(const Handle(TDF_Attribute)&        Source,
					    const Handle(PDF_Attribute)&        Target,
//					    const Handle(MDF_SRelocationTable)& RelocTable) const
					    const Handle(MDF_SRelocationTable)& ) const
{
  Handle(TFunction_Function) S = Handle(TFunction_Function)::DownCast (Source);
  Handle(PFunction_Function) T = Handle(PFunction_Function)::DownCast (Target);
  T->SetDriverGUID(S->GetDriverGUID());
  T->SetFailure(S->GetFailure());
}
