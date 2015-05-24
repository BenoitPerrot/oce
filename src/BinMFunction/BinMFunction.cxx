// Created on: 2004-05-13
// Created by: Sergey ZARITCHNY
// Copyright (c) 2004-2014 OPEN CASCADE SAS
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

#include <BinMDF_ADriverTable.hxx>
#include <CDM_MessageDriver.hxx>
#include <BinMFunction.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <CDM_MessageDriver.hxx>
#include <BinMFunction_FunctionDriver.hxx>
#include <BinMFunction_GraphNodeDriver.hxx>
#include <BinMFunction_ScopeDriver.hxx>

//=======================================================================
//function : AddDrivers
//purpose  : 
//=======================================================================

void BinMFunction::AddDrivers (const Handle(BinMDF_ADriverTable)& theDriverTable,
			       const Handle(CDM_MessageDriver)&   theMsgDriver)
{
  theDriverTable->AddDriver (new BinMFunction_FunctionDriver  (theMsgDriver) );
  theDriverTable->AddDriver (new BinMFunction_GraphNodeDriver (theMsgDriver) );
  theDriverTable->AddDriver (new BinMFunction_ScopeDriver     (theMsgDriver) );
}
