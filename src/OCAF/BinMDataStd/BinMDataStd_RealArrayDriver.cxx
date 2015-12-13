// Created on: 2002-10-31
// Created by: Michael SAZONOV
// Copyright (c) 2002-2014 OPEN CASCADE SAS
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
#include <BinMDataStd_RealArrayDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BinMDataStd_RealArrayDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(BinMDF_ADriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BinMDataStd_RealArrayDriver)
IMPLEMENT_DOWNCAST(BinMDataStd_RealArrayDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BinMDataStd_RealArrayDriver)
#include <TDataStd_RealArray.hxx>
#include <Foundation/TColStd/TColStd_HArray1OfReal.hxx>
#include <BinMDataStd.hxx>

//=======================================================================
//function : BinMDataStd_RealArrayDriver
//purpose  : Constructor
//=======================================================================

BinMDataStd_RealArrayDriver::BinMDataStd_RealArrayDriver
                        (const Handle(CDM_MessageDriver)& theMsgDriver)
     : BinMDF_ADriver (theMsgDriver, STANDARD_TYPE(TDataStd_RealArray)->Name())
{
}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================

Handle(TDF_Attribute) BinMDataStd_RealArrayDriver::NewEmpty() const
{
  return new TDataStd_RealArray();
}

//=======================================================================
//function : Paste
//purpose  : persistent -> transient (retrieve)
//=======================================================================

Standard_Boolean BinMDataStd_RealArrayDriver::Paste
                                (const BinObjMgt_Persistent&  theSource,
                                 const Handle(TDF_Attribute)& theTarget,
                                 BinObjMgt_RRelocationTable&  ) const
{
  Standard_Integer aFirstInd, aLastInd;
  if (! (theSource >> aFirstInd >> aLastInd))
    return Standard_False;
  const Standard_Integer aLength = aLastInd - aFirstInd + 1;
  if (aLength <= 0)
    return Standard_False;

  Handle(TDataStd_RealArray) anAtt =
    Handle(TDataStd_RealArray)::DownCast(theTarget);
  anAtt->Init(aFirstInd, aLastInd);
  TColStd_Array1OfReal& aTargetArray = anAtt->Array()->ChangeArray1();
  if(!theSource.GetRealArray (&aTargetArray(aFirstInd), aLength))
    return Standard_False;

  Standard_Boolean aDelta(Standard_False);
  if(BinMDataStd::DocumentVersion() > 2) {
    Standard_Byte aDeltaValue;
    if (! (theSource >> aDeltaValue))
      return Standard_False;
    else
      aDelta = (0 != aDeltaValue);
  }
  anAtt->SetDelta(aDelta);
  return Standard_True; 
}

//=======================================================================
//function : Paste
//purpose  : transient -> persistent (store)
//=======================================================================

void BinMDataStd_RealArrayDriver::Paste
                                (const Handle(TDF_Attribute)& theSource,
                                 BinObjMgt_Persistent&        theTarget,
                                 BinObjMgt_SRelocationTable&  ) const
{
  Handle(TDataStd_RealArray) anAtt =
    Handle(TDataStd_RealArray)::DownCast(theSource);
  const TColStd_Array1OfReal& aSourceArray = anAtt->Array()->Array1();
  const Standard_Integer aFirstInd = aSourceArray.Lower();
  const Standard_Integer aLastInd  = aSourceArray.Upper();
  const Standard_Integer aLength   = aLastInd - aFirstInd + 1;
  theTarget << aFirstInd << aLastInd;
  Standard_Real *aPtr = (Standard_Real *) &aSourceArray(aFirstInd);
  theTarget.PutRealArray (aPtr, aLength);
  theTarget << (Standard_Byte)anAtt->GetDelta(); 
}
