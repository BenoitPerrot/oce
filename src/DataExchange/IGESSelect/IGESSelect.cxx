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

#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
#include <Interface_Graph.hxx>
#include <IGESSelect.hxx>
#include <DataExchange/IFSelect/IFSelect_Functions.hxx>
#include <DataExchange/IFSelect/IFSelect_SessionPilot.hxx>
#include <IGESSelect_Activator.hxx>
#include <DataExchange/IFSelect/IFSelect_WorkSession.hxx>
#include <DataExchange/IFSelect/IFSelect_ShareOut.hxx>
#include <IGESSelect_WorkLibrary.hxx>

#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
#include <DataExchange/IGESData/IGESData_IGESModel.hxx>
#include <Interface_Macros.hxx>


void  IGESSelect::Run ()
{
//  Handle(IFSelect_BasicActivator) Activator = new IFSelect_BasicActivator;
  IFSelect_Functions::Init();
  Handle(IFSelect_SessionPilot)   pilot = new IFSelect_SessionPilot("XSTEP-IGES>");
  Handle(IGESSelect_Activator)    igesact = new IGESSelect_Activator;
  pilot->SetSession (new IFSelect_WorkSession ( ));
  pilot->SetLibrary (new IGESSelect_WorkLibrary);

  pilot->ReadScript();
}


Standard_Integer  IGESSelect::WhatIges
  (const Handle(IGESData_IGESEntity)& ent, const Interface_Graph& G,
   Handle(IGESData_IGESEntity)& /* sup */, Standard_Integer& /* index */)
{
  DeclareAndCast(IGESData_IGESEntity,igesent,ent);
  if (igesent.IsNull()) return Standard_False;
//  Standard_Integer igt = igesent->TypeNumber();
  DeclareAndCast(IGESData_IGESModel,model,G.Model());
  if (igesent.IsNull() || model.IsNull()) return 0;

//  Plane : de View ? de SingleParent ?  sinon cf TrimmedSurface & cie

    

  return 0;
}
