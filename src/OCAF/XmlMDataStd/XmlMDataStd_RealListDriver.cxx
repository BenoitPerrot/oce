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
#include <XmlObjMgt_Persistent.hxx>
#include <XmlMDataStd_RealListDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(XmlMDataStd_RealListDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(XmlMDF_ADriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(XmlMDataStd_RealListDriver)
IMPLEMENT_DOWNCAST(XmlMDataStd_RealListDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(XmlMDataStd_RealListDriver)
#include <TDataStd_RealList.hxx>
#include <Foundation/TColStd/TColStd_ListIteratorOfListOfReal.hxx>
#include <Foundation/NCollection/NCollection_LocalArray.hxx>
#include <XmlObjMgt.hxx>

IMPLEMENT_DOMSTRING (FirstIndexString, "first")
IMPLEMENT_DOMSTRING (LastIndexString,  "last")

//=======================================================================
//function : XmlMDataStd_RealListDriver
//purpose  : Constructor
//=======================================================================
XmlMDataStd_RealListDriver::XmlMDataStd_RealListDriver(const Handle(CDM_MessageDriver)& theMsgDriver)
     : XmlMDF_ADriver (theMsgDriver, NULL)
{

}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================
Handle(TDF_Attribute) XmlMDataStd_RealListDriver::NewEmpty() const
{
  return new TDataStd_RealList();
}

//=======================================================================
//function : Paste
//purpose  : persistent -> transient (retrieve)
//=======================================================================
Standard_Boolean XmlMDataStd_RealListDriver::Paste(const XmlObjMgt_Persistent&  theSource,
						   const Handle(TDF_Attribute)& theTarget,
						   XmlObjMgt_RRelocationTable&  ) const
{
  Standard_Real aValue;
  Standard_Integer aFirstInd, aLastInd, ind;
  const XmlObjMgt_Element& anElement = theSource;

  // Read the FirstIndex; if the attribute is absent initialize to 1
  XmlObjMgt_DOMString aFirstIndex= anElement.getAttribute(::FirstIndexString());
  if (aFirstIndex == NULL)
    aFirstInd = 1;
  else if (!aFirstIndex.GetInteger(aFirstInd)) 
  {
    TCollection_ExtendedString aMessageString =
      TCollection_ExtendedString("Cannot retrieve the first index"
                                 " for RealList attribute as \"")
        + aFirstIndex + "\"";
    WriteMessage (aMessageString);
    return Standard_False;
  }

  // Read the LastIndex; the attribute should be present
  if (!anElement.getAttribute(::LastIndexString()).GetInteger(aLastInd)) 
  {
    TCollection_ExtendedString aMessageString =
      TCollection_ExtendedString("Cannot retrieve the last index"
                                 " for RealList attribute as \"")
        + aFirstIndex + "\"";
    WriteMessage (aMessageString);
    return Standard_False;
  }

  Handle(TDataStd_RealList) aRealList = Handle(TDataStd_RealList)::DownCast(theTarget);

  // Check the type of LDOMString
  const XmlObjMgt_DOMString& aString = XmlObjMgt::GetStringValue(anElement);
  if (aString.Type() == LDOMBasicString::LDOM_Integer) 
  {
    if (aFirstInd == aLastInd) 
    {
      Standard_Integer anIntValue;
      if (aString.GetInteger(anIntValue))
        aRealList->Append(Standard_Real(anIntValue));
    } 
    else 
    {
      TCollection_ExtendedString aMessageString =
        TCollection_ExtendedString("Cannot retrieve array of real members"
                                   " for RealList attribute from Integer \"")
        + aString + "\"";
      WriteMessage (aMessageString);
      return Standard_False;
    }
  } 
  else 
  {
    Standard_CString aValueStr = Standard_CString(aString.GetString());
    for (ind = aFirstInd; ind <= aLastInd; ind++)
    {
      if (!XmlObjMgt::GetReal(aValueStr, aValue)) {
        TCollection_ExtendedString aMessageString =
          TCollection_ExtendedString("Cannot retrieve real member"
                                     " for RealList attribute as \"")
            + aValueStr + "\"";
        WriteMessage (aMessageString);
        return Standard_False;
      }
      aRealList->Append(aValue);
    }
  }

  return Standard_True;
}

//=======================================================================
//function : Paste
//purpose  : transient -> persistent (store)
//=======================================================================
void XmlMDataStd_RealListDriver::Paste(const Handle(TDF_Attribute)& theSource,
				       XmlObjMgt_Persistent&        theTarget,
				       XmlObjMgt_SRelocationTable&  ) const
{
  Handle(TDataStd_RealList) aRealList = Handle(TDataStd_RealList)::DownCast(theSource);

  Standard_Integer anU = aRealList->Extent();
  theTarget.Element().setAttribute(::LastIndexString(), anU);
  if (anU >= 1)
  {
    // Allocation of 25 chars for each double value including the space:
    // An example: -3.1512678732195273e+020
    Standard_Integer iChar = 0;
    NCollection_LocalArray<Standard_Character> str(25 * anU + 1);
    TColStd_ListIteratorOfListOfReal itr(aRealList->List());
    for (; itr.More(); itr.Next())
    {
      const Standard_Real& realValue = itr.Value();
      iChar += Sprintf(&(str[iChar]), "%.17g ", realValue);
    }
    XmlObjMgt::SetStringValue (theTarget, (Standard_Character*)str, Standard_True);
  }
}
