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

#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <OCAF/TDF/TDF_Attribute.hxx>
#include <OCAF/BinObjMgt/BinObjMgt_Persistent.hxx>
#include <OCAF/BinMDataXtd/BinMDataXtd_PointDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BinMDataXtd_PointDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(BinMDF_ADriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BinMDataXtd_PointDriver)
IMPLEMENT_DOWNCAST(BinMDataXtd_PointDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BinMDataXtd_PointDriver)
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <OCAF/TDF/TDF_Attribute.hxx>
#include <OCAF/TDataXtd/TDataXtd_Point.hxx>
#include <OCAF/BinMDF/BinMDF_ADriver.hxx>
#include <OCAF/BinObjMgt/BinObjMgt_Persistent.hxx>
#include <OCAF/BinObjMgt/BinObjMgt_RRelocationTable.hxx>
#include <OCAF/BinObjMgt/BinObjMgt_SRelocationTable.hxx>
//=======================================================================
//function : BinMDataXtd_PointDriver
//purpose  : 
//=======================================================================

BinMDataXtd_PointDriver::BinMDataXtd_PointDriver
                        (const Handle(CDM_MessageDriver)& theMsgDriver)
     : BinMDF_ADriver (theMsgDriver, STANDARD_TYPE(TDataXtd_Point)->Name())
{
}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================

Handle(TDF_Attribute) BinMDataXtd_PointDriver::NewEmpty() const
{
  return new TDataXtd_Point();
}

//=======================================================================
//function : Paste
//purpose  : persistent -> transient (retrieve)
//=======================================================================

Standard_Boolean BinMDataXtd_PointDriver::Paste
                                (const BinObjMgt_Persistent&,
                                 const Handle(TDF_Attribute)&,
                                 BinObjMgt_RRelocationTable& ) const
{return Standard_True;}

//=======================================================================
//function : Paste
//purpose  : transient -> persistent (store)
//=======================================================================

void BinMDataXtd_PointDriver::Paste (const Handle(TDF_Attribute)&,
                                       BinObjMgt_Persistent&,
                                       BinObjMgt_SRelocationTable&  ) const
{}


