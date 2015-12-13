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
#include <XmlObjMgt_Persistent.hxx>
#include <XmlMXCAFDoc_DocumentToolDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(XmlMXCAFDoc_DocumentToolDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(XmlMDF_ADriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(XmlMXCAFDoc_DocumentToolDriver)
IMPLEMENT_DOWNCAST(XmlMXCAFDoc_DocumentToolDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(XmlMXCAFDoc_DocumentToolDriver)
#include <XCAFDoc_DocumentTool.hxx>

//=======================================================================
//function :
//purpose  : 
//=======================================================================
XmlMXCAFDoc_DocumentToolDriver::XmlMXCAFDoc_DocumentToolDriver(const Handle(CDM_MessageDriver)& theMsgDriver)
      : XmlMDF_ADriver (theMsgDriver, "xcaf", "DocumentTool")
{
}

//=======================================================================
//function :
//purpose  : 
//=======================================================================
 Handle(TDF_Attribute) XmlMXCAFDoc_DocumentToolDriver::NewEmpty() const {
   return new XCAFDoc_DocumentTool();
}

//=======================================================================
//function :
//purpose  : 
//=======================================================================
 Standard_Boolean XmlMXCAFDoc_DocumentToolDriver::Paste(const XmlObjMgt_Persistent& /*theSource*/,
							const Handle(TDF_Attribute)& theTarget,
							XmlObjMgt_RRelocationTable& /*theRelocTable*/) const
{
  Handle(XCAFDoc_DocumentTool) T = Handle(XCAFDoc_DocumentTool)::DownCast(theTarget);
  T->Init();
  return Standard_True;
}

//=======================================================================
//function :
//purpose  : 
//=======================================================================
void XmlMXCAFDoc_DocumentToolDriver::Paste(const Handle(TDF_Attribute)& /*theSource*/,
					   XmlObjMgt_Persistent& /*theTarget*/,
					   XmlObjMgt_SRelocationTable& /*theRelocTable*/) const
{
}

