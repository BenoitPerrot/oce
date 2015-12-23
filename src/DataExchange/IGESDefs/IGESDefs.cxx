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

#include <DataExchange/IGESDefs/IGESDefs_Protocol.hxx>
#include <DataExchange/IGESDefs/IGESDefs.hxx>
#include <DataExchange/IGESDefs/IGESDefs_Protocol.hxx>
#include <DataExchange/IGESDefs/IGESDefs_GeneralModule.hxx>
#include <DataExchange/IGESDefs/IGESDefs_ReadWriteModule.hxx>
#include <DataExchange/IGESDefs/IGESDefs_SpecificModule.hxx>
#include <DataExchange/Interface/Interface_GeneralLib.hxx>
#include <DataExchange/Interface/Interface_ReaderLib.hxx>
#include <DataExchange/IGESData/IGESData_WriterLib.hxx>
#include <DataExchange/IGESData/IGESData_SpecificLib.hxx>
#include <DataExchange/IGESGraph/IGESGraph.hxx>

//  Ancillary data to work on a Package of IGES Entities with a Protocol
//  (Modules are created and loaded in appropriate libraries, once by Init)

static Handle(IGESDefs_Protocol) protocol;


    void  IGESDefs::Init ()
{
  IGESGraph::Init();
  if (protocol.IsNull()) {
    protocol = new IGESDefs_Protocol;
    Interface_GeneralLib::SetGlobal (new IGESDefs_GeneralModule,  protocol);
    Interface_ReaderLib::SetGlobal  (new IGESDefs_ReadWriteModule,protocol);
    IGESData_WriterLib::SetGlobal   (new IGESDefs_ReadWriteModule,protocol);
    IGESData_SpecificLib::SetGlobal (new IGESDefs_SpecificModule, protocol);
  }
}

    Handle(IGESDefs_Protocol)  IGESDefs::Protocol ()
{
  return protocol;
}
