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

#include <DataExchange/StepData/StepData_Protocol.hxx>
#include <Foundation/Standard/Standard_Transient.hxx>
#include <DataExchange/Interface/Interface_EntityIterator.hxx>
#include <DataExchange/Interface/Interface_ShareTool.hxx>
#include <DataExchange/Interface/Interface_Check.hxx>
#include <DataExchange/Interface/Interface_CopyTool.hxx>
#include <DataExchange/StepData/StepData_DescrGeneral.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepData_DescrGeneral)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepData_GeneralModule),
  STANDARD_TYPE(Interface_GeneralModule),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepData_DescrGeneral)
IMPLEMENT_DOWNCAST(StepData_DescrGeneral,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepData_DescrGeneral)
#include <DataExchange/StepData/StepData_EDescr.hxx>
#include <DataExchange/StepData/StepData_Described.hxx>


StepData_DescrGeneral::StepData_DescrGeneral
  (const Handle(StepData_Protocol)& proto)
    :  theproto (proto)    {  }


    void  StepData_DescrGeneral::FillSharedCase
  (const Standard_Integer, const Handle(Standard_Transient)& ent,
   Interface_EntityIterator& iter) const
{
  Handle(StepData_Described) ds = Handle(StepData_Described)::DownCast(ent);
  if (!ds.IsNull()) ds->Shared (iter);
}


void StepData_DescrGeneral::CheckCase(const Standard_Integer ,
                                      const Handle(Standard_Transient)&,
                                      const Interface_ShareTool&,
                                      Handle(Interface_Check)&) const
{
}    // pour l instant


void  StepData_DescrGeneral::CopyCase(const Standard_Integer,
                                      const Handle(Standard_Transient)&,
                                      const Handle(Standard_Transient)&, 
                                      Interface_CopyTool&) const 
{
}    // pour l instant

Standard_Boolean  StepData_DescrGeneral::NewVoid
  (const Standard_Integer CN, Handle(Standard_Transient)& ent) const
{
  ent = theproto->Descr(CN)->NewEntity();
  return (!ent.IsNull());
}
