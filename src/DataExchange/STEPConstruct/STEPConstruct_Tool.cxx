// Created on: 2000-09-29
// Created by: Andrey BETENEV
// Copyright (c) 2000-2014 OPEN CASCADE SAS
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

#include <DataExchange/XSControl/XSControl_WorkSession.hxx>
#include <DataExchange/Transfer/Transfer_FinderProcess.hxx>
#include <DataExchange/Transfer/Transfer_TransientProcess.hxx>
#include <DataExchange/Interface/Interface_HGraph.hxx>
#include <DataExchange/Interface/Interface_InterfaceModel.hxx>
#include <DataExchange/Interface/Interface_Graph.hxx>
#include <DataExchange/STEPConstruct/STEPConstruct_Tool.hxx>
#include <DataExchange/XSControl/XSControl_TransferReader.hxx>
#include <DataExchange/XSControl/XSControl_TransferWriter.hxx>

//=======================================================================
//function : STEPConstruct_Tool
//purpose  : 
//=======================================================================

STEPConstruct_Tool::STEPConstruct_Tool () 
{
}

//=======================================================================
//function : STEPConstruct_Tool
//purpose  : 
//=======================================================================

STEPConstruct_Tool::STEPConstruct_Tool (const Handle(XSControl_WorkSession) &WS) 
{
  SetWS ( WS );
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

Standard_Boolean STEPConstruct_Tool::SetWS (const Handle(XSControl_WorkSession) &WS)
{
  myWS.Nullify();
  myTransientProcess.Nullify();
  myFinderProcess.Nullify();
  
  if ( WS.IsNull() ) return Standard_False;
  myWS = WS;
  myHGraph = myWS->HGraph();
  
  // collect data on reading process
  Handle(XSControl_TransferReader) TR = WS->TransferReader();
  if ( ! TR.IsNull() ) myTransientProcess = TR->TransientProcess();

  // collect data on writing process
  Handle(XSControl_TransferWriter) TW = myWS->TransferWriter();
  if ( ! TW.IsNull() ) myFinderProcess = TW->FinderProcess();

  return ! myTransientProcess.IsNull() && ! myFinderProcess.IsNull();
}

