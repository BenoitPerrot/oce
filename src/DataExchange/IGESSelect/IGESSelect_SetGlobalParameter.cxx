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

#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <DataExchange/IFSelect/IFSelect_ContextModif.hxx>
#include <DataExchange/IGESData/IGESData_IGESModel.hxx>
#include <Interface_CopyTool.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <IGESSelect_SetGlobalParameter.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESSelect_SetGlobalParameter)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESSelect_ModelModifier),
  STANDARD_TYPE(IFSelect_Modifier),
  STANDARD_TYPE(IFSelect_GeneralModifier),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESSelect_SetGlobalParameter)
IMPLEMENT_DOWNCAST(IGESSelect_SetGlobalParameter,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESSelect_SetGlobalParameter)
#include <DataExchange/IGESData/IGESData_GlobalSection.hxx>
#include <Interface_ParamSet.hxx>
#include <Interface_FileParameter.hxx>
#include <stdio.h>
#include <Interface_Check.hxx>


IGESSelect_SetGlobalParameter::IGESSelect_SetGlobalParameter
  (const Standard_Integer numpar)
    : IGESSelect_ModelModifier (Standard_False)
      {  thenum = numpar;  }

    Standard_Integer  IGESSelect_SetGlobalParameter::GlobalNumber () const
      {  return thenum;  }

    void  IGESSelect_SetGlobalParameter::SetValue
  (const Handle(TCollection_HAsciiString)& text)
      {  theval = text;  }

    Handle(TCollection_HAsciiString)  IGESSelect_SetGlobalParameter::Value
  () const
      {  return theval;  }


    void  IGESSelect_SetGlobalParameter::Performing
  (IFSelect_ContextModif& ctx,
   const Handle(IGESData_IGESModel)& target,
   Interface_CopyTool& ) const
{
  if (theval.IsNull()) {
    ctx.CCheck()->AddWarning("Set IGES Global Parameter, no value defined, ignored");
    return;
  }
  IGESData_GlobalSection GS = target->GlobalSection();
  Handle(Interface_ParamSet) oldset = GS.Params();
  if (thenum <= 0 || thenum > oldset->NbParams()) {
    char mess[80];
    sprintf(mess,"Set IGES Global Parameter : Number %d incorrect",thenum);
    ctx.CCheck()->AddFail(mess);
    return;
  }
  Interface_FileParameter& FP = oldset->ChangeParam (thenum);
  FP.Init (theval->ToCString(),FP.ParamType());
  Handle(Interface_Check) check = new Interface_Check;
  GS.Init (oldset,check);
  ctx.AddCheck(check);
  if (!check->HasFailed()) target->SetGlobalSection(GS);
}

    TCollection_AsciiString  IGESSelect_SetGlobalParameter::Label () const
{
  char mess[80];
  if (theval.IsNull()) sprintf(mess,"Set IGES Global Parameter (undefined)");
  else sprintf(mess,"Set IGES Global Parameter Number %d to %s",
	       thenum,theval->ToCString());
  return TCollection_AsciiString (mess);
}
