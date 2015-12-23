// Created on: 2005-05-17
// Created by: Eugeny NAPALKOV
// Copyright (c) 2005-2014 OPEN CASCADE SAS
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
#include <DataExchange/BinMXCAFDoc/BinMXCAFDoc_AreaDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BinMXCAFDoc_AreaDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(BinMDF_ADriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BinMXCAFDoc_AreaDriver)
IMPLEMENT_DOWNCAST(BinMXCAFDoc_AreaDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BinMXCAFDoc_AreaDriver)
#include <DataExchange/XCAFDoc/XCAFDoc_Area.hxx>

//=======================================================================
//function :
//purpose  : 
//=======================================================================
BinMXCAFDoc_AreaDriver::BinMXCAFDoc_AreaDriver(const Handle(CDM_MessageDriver)& theMsgDriver) 
     : BinMDF_ADriver(theMsgDriver, STANDARD_TYPE(XCAFDoc_Area)->Name()) {
}

//=======================================================================
//function :
//purpose  : 
//=======================================================================
Handle(TDF_Attribute) BinMXCAFDoc_AreaDriver::NewEmpty() const {
  return new XCAFDoc_Area();
}

//=======================================================================
//function :
//purpose  : 
//=======================================================================
Standard_Boolean BinMXCAFDoc_AreaDriver::Paste(const BinObjMgt_Persistent& theSource,
					       const Handle(TDF_Attribute)& theTarget,
					       BinObjMgt_RRelocationTable& ) const 
{
  Handle(XCAFDoc_Area) anAtt = Handle(XCAFDoc_Area)::DownCast(theTarget);
  Standard_Real aValue = 0.0;
  Standard_Boolean isOk = theSource >> aValue;
  if(isOk)
    anAtt->Set(aValue);
  return isOk;
}

//=======================================================================
//function :
//purpose  : 
//=======================================================================
void BinMXCAFDoc_AreaDriver::Paste(const Handle(TDF_Attribute)& theSource,
				   BinObjMgt_Persistent& theTarget,
				   BinObjMgt_SRelocationTable& ) const 
{
  Handle(XCAFDoc_Area) anAtt = Handle(XCAFDoc_Area)::DownCast(theSource);
  theTarget << anAtt->Get();
}

