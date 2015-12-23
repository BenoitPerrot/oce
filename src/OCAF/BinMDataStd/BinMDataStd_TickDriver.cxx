// Created on: 2007-05-29
// Created by: Vlad Romashko
// Copyright (c) 2007-2014 OPEN CASCADE SAS
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
#include <TDF_Attribute.hxx>
#include <OCAF/BinObjMgt/BinObjMgt_Persistent.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_TickDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BinMDataStd_TickDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(BinMDF_ADriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BinMDataStd_TickDriver)
IMPLEMENT_DOWNCAST(BinMDataStd_TickDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BinMDataStd_TickDriver)
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <TDF_Attribute.hxx>
#include <TDataStd_Tick.hxx>
#include <OCAF/BinMDF/BinMDF_ADriver.hxx>
#include <OCAF/BinObjMgt/BinObjMgt_Persistent.hxx>
#include <OCAF/BinObjMgt/BinObjMgt_RRelocationTable.hxx>
#include <OCAF/BinObjMgt/BinObjMgt_SRelocationTable.hxx>

//=======================================================================
//function : BinMDataStd_TickDriver
//purpose  : 
//=======================================================================
BinMDataStd_TickDriver::BinMDataStd_TickDriver(const Handle(CDM_MessageDriver)& theMsgDriver)
: BinMDF_ADriver (theMsgDriver, STANDARD_TYPE(TDataStd_Tick)->Name())
{
}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================
Handle(TDF_Attribute) BinMDataStd_TickDriver::NewEmpty() const
{
  return new TDataStd_Tick();
}

//=======================================================================
//function : Paste
//purpose  : persistent -> transient (retrieve)
//=======================================================================
Standard_Boolean BinMDataStd_TickDriver::Paste(const BinObjMgt_Persistent&,
						    const Handle(TDF_Attribute)&,
						    BinObjMgt_RRelocationTable& ) const
{
  return Standard_True;
}

//=======================================================================
//function : Paste
//purpose  : transient -> persistent (store)
//=======================================================================
void BinMDataStd_TickDriver::Paste(const Handle(TDF_Attribute)&,
					BinObjMgt_Persistent&,
					BinObjMgt_SRelocationTable&  ) const
{
}
