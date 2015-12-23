// Created on: 2001-09-04
// Created by: Julia DOROVSKIKH
// Copyright (c) 2001-2014 OPEN CASCADE SAS
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
#include <OCAF/XmlObjMgt/XmlObjMgt_Persistent.hxx>
#include <OCAF/XmlMDocStd/XmlMDocStd_XLinkDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(XmlMDocStd_XLinkDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(XmlMDF_ADriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(XmlMDocStd_XLinkDriver)
IMPLEMENT_DOWNCAST(XmlMDocStd_XLinkDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(XmlMDocStd_XLinkDriver)

#include <OCAF/XmlObjMgt/XmlObjMgt.hxx>

#include <OCAF/TDocStd/TDocStd_XLink.hxx>
#include <OCAF/TDF/TDF_Tool.hxx>
#include <OCAF/TDF/TDF_Label.hxx>

IMPLEMENT_DOMSTRING (DocEntryString, "documentEntry")

//=======================================================================
//function : XmlMDocStd_XLinkDriver
//purpose  : Constructor
//=======================================================================
XmlMDocStd_XLinkDriver::XmlMDocStd_XLinkDriver
                        (const Handle(CDM_MessageDriver)& theMsgDriver)
      : XmlMDF_ADriver (theMsgDriver, NULL)
{}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================
Handle(TDF_Attribute) XmlMDocStd_XLinkDriver::NewEmpty() const
{
  return (new TDocStd_XLink());
}

//=======================================================================
//function : Paste
//purpose  : persistent -> transient (retrieve)
//=======================================================================
Standard_Boolean XmlMDocStd_XLinkDriver::Paste
                (const XmlObjMgt_Persistent&  theSource,
                 const Handle(TDF_Attribute)& theTarget,
                 XmlObjMgt_RRelocationTable&  ) const
{
  XmlObjMgt_DOMString anXPath = XmlObjMgt::GetStringValue (theSource);

  if (anXPath == NULL)
  {
    WriteMessage ("XLink: Cannot retrieve reference string from element");
    return Standard_False;
  }

  TCollection_AsciiString anEntry;
  if (XmlObjMgt::GetTagEntryString (anXPath, anEntry) == Standard_False)
  {
    TCollection_ExtendedString aMessage =
      TCollection_ExtendedString ("Cannot retrieve XLink reference from \"")
        + anXPath + '\"';
    WriteMessage (aMessage);
    return Standard_False;
  }

  Handle(TDocStd_XLink) aRef = Handle(TDocStd_XLink)::DownCast(theTarget);

  // set referenced label
  aRef->LabelEntry(anEntry);

  // document entry
  aRef->DocumentEntry(theSource.Element().getAttribute(::DocEntryString()));

  return Standard_True;
}

//=======================================================================
//function : Paste
//purpose  : transient -> persistent (store)
//           <label tag='1'>     <This is label entry 0:4:1>
//           ...
//           <label tag='8'>     <This is label entry 0:4:1:8>
//
//           <TDocStd_XLink id="621"> /document/label/label[@tag="4"]/label[@tag="1"]
//           </TDocStd_XLink>    <This is reference to label 0:4:1>
//=======================================================================
void XmlMDocStd_XLinkDriver::Paste (const Handle(TDF_Attribute)& theSource,
                                    XmlObjMgt_Persistent&        theTarget,
                                    XmlObjMgt_SRelocationTable&  ) const
{
  Handle(TDocStd_XLink) aRef = Handle(TDocStd_XLink)::DownCast(theSource);
  if (!aRef.IsNull())
  {
    // reference
    TCollection_AsciiString anEntry = aRef->LabelEntry();
    XmlObjMgt_DOMString aDOMString;
    XmlObjMgt::SetTagEntryString (aDOMString, anEntry);
    XmlObjMgt::SetStringValue (theTarget, aDOMString);

    // document entry
    theTarget.Element().setAttribute(::DocEntryString(),
                                      aRef->DocumentEntry().ToCString());
  }
}
