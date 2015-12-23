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
#include <IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <IGESSelect_UpdateFileName.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESSelect_UpdateFileName)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESSelect_ModelModifier),
  STANDARD_TYPE(IFSelect_Modifier),
  STANDARD_TYPE(IFSelect_GeneralModifier),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESSelect_UpdateFileName)
IMPLEMENT_DOWNCAST(IGESSelect_UpdateFileName,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESSelect_UpdateFileName)
#include <IGESData_GlobalSection.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <Interface_Check.hxx>


IGESSelect_UpdateFileName::IGESSelect_UpdateFileName  ()
    : IGESSelect_ModelModifier (Standard_False)    {  }

void  IGESSelect_UpdateFileName::Performing (IFSelect_ContextModif& ctx, 
                                             const Handle(IGESData_IGESModel)& target,
                                             Interface_CopyTool& /*TC*/) const
{
  if (!ctx.HasFileName()) {
    ctx.CCheck(0)->AddWarning("New File Name unknown, former one is kept");
    return;
  }
  IGESData_GlobalSection GS = target->GlobalSection();
  GS.SetFileName (new TCollection_HAsciiString (ctx.FileName()) );
  target->SetGlobalSection(GS);
  Handle(Interface_Check) check = new Interface_Check;
  target->VerifyCheck(check);
  ctx.AddCheck(check);
}

    TCollection_AsciiString  IGESSelect_UpdateFileName::Label () const
{ return TCollection_AsciiString("Updates IGES File Name to new current one"); }
