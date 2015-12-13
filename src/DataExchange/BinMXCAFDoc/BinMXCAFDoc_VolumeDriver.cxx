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

#include <CDM_MessageDriver.hxx>
#include <TDF_Attribute.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <BinMXCAFDoc_VolumeDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BinMXCAFDoc_VolumeDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(BinMDF_ADriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BinMXCAFDoc_VolumeDriver)
IMPLEMENT_DOWNCAST(BinMXCAFDoc_VolumeDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BinMXCAFDoc_VolumeDriver)
#include <XCAFDoc_Volume.hxx>

//=======================================================================
//function :
//purpose  : 
//=======================================================================
BinMXCAFDoc_VolumeDriver::BinMXCAFDoc_VolumeDriver(const Handle(CDM_MessageDriver)& theMsgDriver)
     : BinMDF_ADriver(theMsgDriver, STANDARD_TYPE(XCAFDoc_Volume)->Name()) {
}

//=======================================================================
//function :
//purpose  : 
//=======================================================================
Handle(TDF_Attribute) BinMXCAFDoc_VolumeDriver::NewEmpty() const {
  return new XCAFDoc_Volume();
}

//=======================================================================
//function :
//purpose  : 
//=======================================================================
Standard_Boolean BinMXCAFDoc_VolumeDriver::Paste(const BinObjMgt_Persistent& theSource,
						 const Handle(TDF_Attribute)& theTarget,
						 BinObjMgt_RRelocationTable& /*theRelocTable*/) const
{
  Handle(XCAFDoc_Volume) anAtt = Handle(XCAFDoc_Volume)::DownCast(theTarget);
  Standard_Real aVol=0.0;
  Standard_Boolean isOk = theSource >> aVol;
  if(isOk)
    anAtt->Set(aVol);
  return isOk;
}

//=======================================================================
//function :
//purpose  : 
//=======================================================================
void BinMXCAFDoc_VolumeDriver::Paste(const Handle(TDF_Attribute)& theSource,
				     BinObjMgt_Persistent& theTarget,
				     BinObjMgt_SRelocationTable& /*theRelocTable*/) const
{
  Handle(XCAFDoc_Volume) anAtt = Handle(XCAFDoc_Volume)::DownCast(theSource);
  theTarget << anAtt->Get();
}

