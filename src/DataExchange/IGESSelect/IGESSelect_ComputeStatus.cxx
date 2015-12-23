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

#include <DataExchange/IFSelect/IFSelect_ContextModif.hxx>
#include <DataExchange/IGESData/IGESData_IGESModel.hxx>
#include <DataExchange/Interface/Interface_CopyTool.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <DataExchange/IGESSelect/IGESSelect_ComputeStatus.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESSelect_ComputeStatus)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESSelect_ModelModifier),
  STANDARD_TYPE(IFSelect_Modifier),
  STANDARD_TYPE(IFSelect_GeneralModifier),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESSelect_ComputeStatus)
IMPLEMENT_DOWNCAST(IGESSelect_ComputeStatus,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESSelect_ComputeStatus)
#include <DataExchange/IGESData/IGESData_Protocol.hxx>
#include <DataExchange/IGESData/IGESData_BasicEditor.hxx>
#include <DataExchange/Interface/Interface_Check.hxx>

#include <DataExchange/Interface/Interface_Macros.hxx>

IGESSelect_ComputeStatus::IGESSelect_ComputeStatus ()
    : IGESSelect_ModelModifier (Standard_False)    {  }

    void  IGESSelect_ComputeStatus::Performing
  (IFSelect_ContextModif& ctx,
   const Handle(IGESData_IGESModel)& target,
   Interface_CopyTool& ) const
{
  DeclareAndCast(IGESData_Protocol,protocol,ctx.Protocol());
  if (protocol.IsNull()) {
    ctx.CCheck()->AddFail("IGES Compute Status, Protocol incorrect");
    return;
  }

  IGESData_BasicEditor corrector (target,protocol);
  corrector.ComputeStatus();
}


    TCollection_AsciiString  IGESSelect_ComputeStatus::Label () const
{
  return TCollection_AsciiString ("Compute Status of IGES Entities (Directory Part)");
}
