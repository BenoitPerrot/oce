// Created on: 2007-06-27
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
#include <Foundation/Standard/Standard_Type.hxx>
#include <TDF_Attribute.hxx>
#include <OCAF/PDF/PDF_Attribute.hxx>
#include <OCAF/MDF/MDF_RRelocationTable.hxx>
#include <OCAF/MDataStd/MDataStd_NamedDataRetrievalDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDataStd_NamedDataRetrievalDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ARDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDataStd_NamedDataRetrievalDriver)
IMPLEMENT_DOWNCAST(MDataStd_NamedDataRetrievalDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDataStd_NamedDataRetrievalDriver)
#include <OCAF/PDataStd/PDataStd_NamedData.hxx>
#include <OCAF/TDataStd/TDataStd_NamedData.hxx>
#include <OCAF/MDataStd/MDataStd.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <OCAF/PCollection/PCollection_HExtendedString.hxx>
#include <Foundation/TColStd/TColStd_DataMapOfStringInteger.hxx>
#include <OCAF/TDataStd/TDataStd_DataMapOfStringReal.hxx>
#include <OCAF/TDataStd/TDataStd_DataMapOfStringByte.hxx>
#include <OCAF/TDataStd/TDataStd_DataMapOfStringString.hxx>
#include <OCAF/TDataStd/TDataStd_DataMapOfStringHArray1OfInteger.hxx>
#include <OCAF/TDataStd/TDataStd_DataMapOfStringHArray1OfReal.hxx>
#include <Foundation/TColStd/TColStd_HArray1OfInteger.hxx>
#include <Foundation/TColStd/TColStd_HArray1OfReal.hxx>
#include <OCAF/PColStd/PColStd_HArray1OfInteger.hxx>
#include <OCAF/PColStd/PColStd_HArray1OfReal.hxx>

//=======================================================================
//function : MDataStd_NamedDataRetrievalDriver
//purpose  : 
//=======================================================================
MDataStd_NamedDataRetrievalDriver::MDataStd_NamedDataRetrievalDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ARDriver(theMsgDriver)
{

}

//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================
Standard_Integer MDataStd_NamedDataRetrievalDriver::VersionNumber() const
{ 
  return 0; 
}

//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================
Handle(Standard_Type) MDataStd_NamedDataRetrievalDriver::SourceType() const
{
  static Handle(Standard_Type) sourceType = STANDARD_TYPE(PDataStd_NamedData);
  return sourceType;
}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================
Handle(TDF_Attribute) MDataStd_NamedDataRetrievalDriver::NewEmpty () const 
{
  return new TDataStd_NamedData();
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================
void MDataStd_NamedDataRetrievalDriver::Paste(const Handle(PDF_Attribute)& Source,
						   const Handle(TDF_Attribute)& Target,
						   const Handle(MDF_RRelocationTable)& ) const
{
  Handle(PDataStd_NamedData) S = Handle(PDataStd_NamedData)::DownCast (Source);
  Handle(TDataStd_NamedData) T = Handle(TDataStd_NamedData)::DownCast (Target);
  if(S.IsNull() || T.IsNull()) return;
  Standard_Integer i;
#ifdef OCCT_DEBUG
  cout << "Start: " <<S->LowerI() << " " <<S->UpperI()<<"\t"<<S->LowerR() << " " <<S->UpperR();
  cout << "\t"<<S->LowerS() << " " <<S->UpperS()<< "\t"<<S->LowerB() << " " <<S->UpperB();
  cout << "\t"<<S->LowerAI() << " " <<S->UpperAI()<<"\t"<<S->LowerAR() << " " <<S->UpperAR()<<endl;
#endif
  if(S->HasIntegers()) {
    TColStd_DataMapOfStringInteger aMap;
    for(i=S->LowerI();i<=S->UpperI();i++) {
      Handle(PCollection_HExtendedString) aPKey;
      Standard_Integer aValue = S->IntDataItemValue(i, aPKey);
      const TCollection_ExtendedString& aKey = aPKey->Convert();
      aMap.Bind(aKey, aValue);
    }
    T->ChangeIntegers(aMap);
    }

  if(S->HasReals()) {
    TDataStd_DataMapOfStringReal aMap;
    for(i=S->LowerR();i<=S->UpperR();i++) {
      Handle(PCollection_HExtendedString) aPKey;
      Standard_Real aValue = S->RealDataItemValue(i, aPKey);
      const TCollection_ExtendedString& aKey = aPKey->Convert();
      aMap.Bind(aKey, aValue);
    }
    T->ChangeReals(aMap);
  }
  if(S->HasStrings()) {
    TDataStd_DataMapOfStringString aMap;
    for(i=S->LowerS();i<=S->UpperS();i++) {
      Handle(PCollection_HExtendedString) aPKey;
      const Handle(PCollection_HExtendedString)& aPValue = S->StrDataItemValue(i, aPKey);
      const TCollection_ExtendedString& aKey = aPKey->Convert();
      const TCollection_ExtendedString& aValue = aPValue->Convert();
      aMap.Bind(aKey, aValue);
    }
    T->ChangeStrings(aMap);
  }
  if(S->HasBytes()) {
    TDataStd_DataMapOfStringByte aMap;
    for(i=S->LowerB();i<=S->UpperB();i++) {
      Handle(PCollection_HExtendedString) aPKey;
      Standard_Byte aValue = S->ByteDataItemValue(i, aPKey);
      const TCollection_ExtendedString& aKey = aPKey->Convert();
      aMap.Bind(aKey, aValue);
    }
    T->ChangeBytes(aMap);
  }
  if(S->HasArraysOfIntegers()) {
    TDataStd_DataMapOfStringHArray1OfInteger aMap;
    for(i=S->LowerAI();i<=S->UpperAI();i++) {
      Handle(PCollection_HExtendedString) aPKey;
      Handle(PColStd_HArray1OfInteger) aPValue = S->ArrIntDataItemValue(i, aPKey);
      const TCollection_ExtendedString& aKey = aPKey->Convert();
      Handle(TColStd_HArray1OfInteger) anAr;
      if (aPValue.IsNull()) continue;
      Standard_Integer lower = aPValue->Lower(), upper = aPValue->Upper();
      anAr = new TColStd_HArray1OfInteger(lower, upper);
      for (Standard_Integer j = lower; j <= upper; j++)
	anAr->SetValue(j, aPValue->Value(j));
      aMap.Bind(aKey, anAr);
    }
    T->ChangeArraysOfIntegers(aMap);
  }
  if(S->HasArraysOfReals()) {
    TDataStd_DataMapOfStringHArray1OfReal aMap;
    for(i=S->LowerAR();i<=S->UpperAR();i++) {
      Handle(PCollection_HExtendedString) aPKey;
      Handle(PColStd_HArray1OfReal) aPValue = S->ArrRealDataItemValue(i, aPKey);
      const TCollection_ExtendedString& aKey = aPKey->Convert();
      Handle(TColStd_HArray1OfReal) anAr;
      if (aPValue.IsNull()) continue;
      Standard_Integer lower = aPValue->Lower(), upper = aPValue->Upper();
      anAr = new TColStd_HArray1OfReal(lower, upper);
      for (Standard_Integer j = lower; j <= upper; j++)
	anAr->SetValue(j, aPValue->Value(j));
      aMap.Bind(aKey, anAr);
    }
    T->ChangeArraysOfReals(aMap);
  }
}
