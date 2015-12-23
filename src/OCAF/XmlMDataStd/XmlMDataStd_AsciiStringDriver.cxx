// Created on: 2007-08-21
// Created by: Sergey ZARITCHNY
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
#include <OCAF/TDF/TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <XmlMDataStd_AsciiStringDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(XmlMDataStd_AsciiStringDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(XmlMDF_ADriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(XmlMDataStd_AsciiStringDriver)
IMPLEMENT_DOWNCAST(XmlMDataStd_AsciiStringDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(XmlMDataStd_AsciiStringDriver)
#include <XmlObjMgt.hxx>
#include <XmlObjMgt_RRelocationTable.hxx>
#include <XmlObjMgt_SRelocationTable.hxx>
#include <OCAF/TDataStd/TDataStd_AsciiString.hxx>

//=======================================================================
//function : XmlMDataStd_AsciiStringDriver
//purpose  : Constructor
//=======================================================================

XmlMDataStd_AsciiStringDriver::XmlMDataStd_AsciiStringDriver
                        (const Handle(CDM_MessageDriver)& theMsgDriver)
      : XmlMDF_ADriver (theMsgDriver, NULL)
{}

//=======================================================================
//function : NewEmpty()
//purpose  : 
//=======================================================================
Handle(TDF_Attribute) XmlMDataStd_AsciiStringDriver::NewEmpty () const
{
  return (new TDataStd_AsciiString());
}

//=======================================================================
//function : Paste()
//purpose  : retrieve
//=======================================================================
Standard_Boolean XmlMDataStd_AsciiStringDriver::Paste
                               (const XmlObjMgt_Persistent&  theSource,
                                const Handle(TDF_Attribute)& theTarget,
                                XmlObjMgt_RRelocationTable&  ) const
{
  if(!theTarget.IsNull()) {
    const TCollection_AsciiString aString = XmlObjMgt::GetStringValue (theSource);
    Handle(TDataStd_AsciiString)::DownCast(theTarget) -> Set (aString);
    return Standard_True;
  }
  WriteMessage("error retrieving AsciiString for type TDataStd_AsciiString");
  return Standard_False;
}

//=======================================================================
//function : Paste()
//purpose  : store
//=======================================================================
void XmlMDataStd_AsciiStringDriver::Paste (const Handle(TDF_Attribute)& theSource,
                                    XmlObjMgt_Persistent&        theTarget,
                                    XmlObjMgt_SRelocationTable&  ) const
{
  Handle(TDataStd_AsciiString) aS = Handle(TDataStd_AsciiString)::DownCast(theSource);
  if (aS.IsNull()) return;
  XmlObjMgt_DOMString aString = aS->Get().ToCString();
  XmlObjMgt::SetStringValue (theTarget, aString);
}
