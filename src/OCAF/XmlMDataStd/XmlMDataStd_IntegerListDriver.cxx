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

#include <CDM_MessageDriver.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <XmlMDataStd_IntegerListDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(XmlMDataStd_IntegerListDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(XmlMDF_ADriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(XmlMDataStd_IntegerListDriver)
IMPLEMENT_DOWNCAST(XmlMDataStd_IntegerListDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(XmlMDataStd_IntegerListDriver)
#include <TDataStd_IntegerList.hxx>
#include <Foundation/TColStd/TColStd_ListIteratorOfListOfInteger.hxx>
#include <Foundation/NCollection/NCollection_LocalArray.hxx>
#include <XmlObjMgt.hxx>

IMPLEMENT_DOMSTRING (FirstIndexString, "first")
IMPLEMENT_DOMSTRING (LastIndexString,  "last")

//=======================================================================
//function : XmlMDataStd_IntegerListDriver
//purpose  : Constructor
//=======================================================================
XmlMDataStd_IntegerListDriver::XmlMDataStd_IntegerListDriver(const Handle(CDM_MessageDriver)& theMsgDriver)
     : XmlMDF_ADriver (theMsgDriver, NULL)
{

}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================
Handle(TDF_Attribute) XmlMDataStd_IntegerListDriver::NewEmpty() const
{
  return new TDataStd_IntegerList();
}

//=======================================================================
//function : Paste
//purpose  : persistent -> transient (retrieve)
//=======================================================================
Standard_Boolean XmlMDataStd_IntegerListDriver::Paste(const XmlObjMgt_Persistent&  theSource,
						      const Handle(TDF_Attribute)& theTarget,
						      XmlObjMgt_RRelocationTable&  ) const
{
  Standard_Integer aFirstInd, aLastInd, aValue, ind;
  const XmlObjMgt_Element& anElement = theSource;

  // Read the FirstIndex; if the attribute is absent initialize to 1
  XmlObjMgt_DOMString aFirstIndex= anElement.getAttribute(::FirstIndexString());
  if (aFirstIndex == NULL)
    aFirstInd = 1;
  else if (!aFirstIndex.GetInteger(aFirstInd)) 
  {
    TCollection_ExtendedString aMessageString =
      TCollection_ExtendedString("Cannot retrieve the first index"
                                 " for IntegerList attribute as \"")
        + aFirstIndex + "\"";
    WriteMessage (aMessageString);
    return Standard_False;
  }

  // Read the LastIndex; the attribute should be present
  if (!anElement.getAttribute(::LastIndexString()).GetInteger(aLastInd)) 
  {
    TCollection_ExtendedString aMessageString =
      TCollection_ExtendedString("Cannot retrieve the last index"
                                 " for IntegerList attribute as \"")
        + aFirstIndex + "\"";
    WriteMessage (aMessageString);
    return Standard_False;
  }

  Handle(TDataStd_IntegerList) anIntList = Handle(TDataStd_IntegerList)::DownCast(theTarget);
  if (aFirstInd == aLastInd) 
  {
    Standard_Integer anInteger;
    if (!XmlObjMgt::GetStringValue(anElement).GetInteger(anInteger)) 
    {
      TCollection_ExtendedString aMessageString =
        TCollection_ExtendedString("Cannot retrieve integer member"
                                   " for IntegerList attribute as \"");
      WriteMessage (aMessageString);
      return Standard_False;
    }
    anIntList->Append(anInteger);
  }
  else 
  {
    Standard_CString aValueStr = Standard_CString(XmlObjMgt::GetStringValue(anElement).GetString());
    for (ind = aFirstInd; ind <= aLastInd; ind++)
    {
      if (!XmlObjMgt::GetInteger(aValueStr, aValue)) 
      {
        TCollection_ExtendedString aMessageString =
          TCollection_ExtendedString("Cannot retrieve integer member"
                                     " for IntegerList attribute as \"")
            + aValueStr + "\"";
        WriteMessage (aMessageString);
        return Standard_False;
      }
      anIntList->Append(aValue);
    }
  }
  
  return Standard_True;
}

//=======================================================================
//function : Paste
//purpose  : transient -> persistent (store)
//=======================================================================
void XmlMDataStd_IntegerListDriver::Paste(const Handle(TDF_Attribute)& theSource,
					  XmlObjMgt_Persistent&        theTarget,
					  XmlObjMgt_SRelocationTable&  ) const
{
  Handle(TDataStd_IntegerList) anIntList = Handle(TDataStd_IntegerList)::DownCast(theSource);

  Standard_Integer anU = anIntList->Extent();
  theTarget.Element().setAttribute(::LastIndexString(), anU);
  if (anU >= 1)
  {
    // Allocation of 12 chars for each integer including the space.
    // An example: -2 147 483 648
    Standard_Integer iChar = 0;
    NCollection_LocalArray<Standard_Character> str(12 * anU + 1);
    TColStd_ListIteratorOfListOfInteger itr(anIntList->List());
    for (; itr.More(); itr.Next())
    {
      const Standard_Integer& intValue = itr.Value();
      iChar += Sprintf(&(str[iChar]), "%d ", intValue);
    }

    // No occurrence of '&', '<' and other irregular XML characters
    XmlObjMgt::SetStringValue (theTarget, (Standard_Character*)str, Standard_True);
  }
}
