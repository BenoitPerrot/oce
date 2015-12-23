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
#include <OCAF/BinMFunction/BinMFunction_FunctionDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BinMFunction_FunctionDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(BinMDF_ADriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BinMFunction_FunctionDriver)
IMPLEMENT_DOWNCAST(BinMFunction_FunctionDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BinMFunction_FunctionDriver)
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <OCAF/TDF/TDF_Attribute.hxx>
#include <OCAF/TFunction/TFunction_Function.hxx>
#include <OCAF/BinMDF/BinMDF_ADriver.hxx>
#include <OCAF/BinObjMgt/BinObjMgt_Persistent.hxx>
#include <OCAF/BinObjMgt/BinObjMgt_RRelocationTable.hxx>
#include <OCAF/BinObjMgt/BinObjMgt_SRelocationTable.hxx>
//=======================================================================
//function : BinMFunction_FunctionDriver
//purpose  : 
//=======================================================================

BinMFunction_FunctionDriver::BinMFunction_FunctionDriver
                        (const Handle(CDM_MessageDriver)& theMsgDriver)
     : BinMDF_ADriver (theMsgDriver, STANDARD_TYPE(TFunction_Function)->Name())
{
}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================

Handle(TDF_Attribute) BinMFunction_FunctionDriver::NewEmpty() const
{
  return new TFunction_Function();
}

//=======================================================================
//function : Paste
//purpose  : persistent -> transient (retrieve)
//=======================================================================

Standard_Boolean BinMFunction_FunctionDriver::Paste
                                (const BinObjMgt_Persistent& theSource,
                                 const Handle(TDF_Attribute)& theTarget,
                                 BinObjMgt_RRelocationTable& ) const
{

  Handle(TFunction_Function) anAtt = Handle(TFunction_Function)::DownCast(theTarget);
  Standard_GUID aGUID("00000000-0000-0000-0000-000000000000");
  Standard_Boolean ok = theSource >> aGUID;
  if (ok) {
    anAtt->SetDriverGUID(aGUID);  
    Standard_Integer aValue=0;
    ok = theSource >> aValue;
    if(ok)
      anAtt->SetFailure(aValue); 
  }
  return ok;
}

//=======================================================================
//function : Paste
//purpose  : transient -> persistent (store)
//=======================================================================

void BinMFunction_FunctionDriver::Paste (const Handle(TDF_Attribute)& theSource,
					 BinObjMgt_Persistent& theTarget,
					 BinObjMgt_SRelocationTable&  ) const
{
  Handle(TFunction_Function) aS = Handle(TFunction_Function)::DownCast (theSource);
  theTarget << aS->GetDriverGUID();
  theTarget << aS->GetFailure();
}

