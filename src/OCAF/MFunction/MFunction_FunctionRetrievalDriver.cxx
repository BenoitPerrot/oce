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
#include <TDF_Attribute.hxx>
#include <PDF_Attribute.hxx>
#include <OCAF/MDF/MDF_RRelocationTable.hxx>
#include <OCAF/MFunction/MFunction_FunctionRetrievalDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MFunction_FunctionRetrievalDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ARDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MFunction_FunctionRetrievalDriver)
IMPLEMENT_DOWNCAST(MFunction_FunctionRetrievalDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MFunction_FunctionRetrievalDriver)

#include <PFunction_Function.hxx>
#include <TFunction_Function.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <Foundation/Standard/Standard_NoSuchObject.hxx>

MFunction_FunctionRetrievalDriver::MFunction_FunctionRetrievalDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ARDriver(theMsgDriver)
{}

Standard_Integer MFunction_FunctionRetrievalDriver::VersionNumber() const
{ return 0; }

Handle(Standard_Type) MFunction_FunctionRetrievalDriver::SourceType() const
{ return STANDARD_TYPE(PFunction_Function);  }

Handle(TDF_Attribute) MFunction_FunctionRetrievalDriver::NewEmpty() const
{ return new TFunction_Function(); }

void MFunction_FunctionRetrievalDriver::Paste (const Handle(PDF_Attribute)&        Source,
					       const Handle(TDF_Attribute)&        Target,
//					       const Handle(MDF_RRelocationTable)& RelocTable) const
					       const Handle(MDF_RRelocationTable)& ) const
{
  Handle(PFunction_Function) S = Handle(PFunction_Function)::DownCast(Source);
  Handle(TFunction_Function) T = Handle(TFunction_Function)::DownCast(Target);
  T->SetDriverGUID(S->GetDriverGUID());
  T->SetFailure(S->GetFailure()); 
}
