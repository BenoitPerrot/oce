// Created on: 2001-08-24
// Created by: Alexnder GRIGORIEV
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

#include <CDM_MessageDriver.hxx>
#include <TDF_Attribute.hxx>
#include <OCAF/BinObjMgt/BinObjMgt_Persistent.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_UAttributeDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BinMDataStd_UAttributeDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(BinMDF_ADriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BinMDataStd_UAttributeDriver)
IMPLEMENT_DOWNCAST(BinMDataStd_UAttributeDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BinMDataStd_UAttributeDriver)
#include <TDataStd_UAttribute.hxx>

//=======================================================================
//function : BinMDataStd_UAttributeDriver
//purpose  : Constructor
//=======================================================================

BinMDataStd_UAttributeDriver::BinMDataStd_UAttributeDriver
                        (const Handle(CDM_MessageDriver)& theMsgDriver)
      : BinMDF_ADriver (theMsgDriver, NULL)
{}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================
Handle(TDF_Attribute) BinMDataStd_UAttributeDriver::NewEmpty() const
{
  return (new TDataStd_UAttribute());
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================
Standard_Boolean BinMDataStd_UAttributeDriver::Paste
                                (const BinObjMgt_Persistent&  theSource,
                                 const Handle(TDF_Attribute)& theTarget,
                                 BinObjMgt_RRelocationTable&  ) const
{
  Handle(TDataStd_UAttribute) anUAttr =
    Handle(TDataStd_UAttribute)::DownCast (theTarget);
  Standard_GUID aGUID;
  Standard_Boolean ok = theSource >> aGUID;
  if (ok)
    anUAttr -> SetID (aGUID);
  return ok;
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================
void BinMDataStd_UAttributeDriver::Paste(const Handle(TDF_Attribute)& theSource,
                                         BinObjMgt_Persistent&        theTarget,
                                         BinObjMgt_SRelocationTable&  ) const
{
  Handle(TDataStd_UAttribute) anUAttr =
    Handle(TDataStd_UAttribute)::DownCast(theSource);
  theTarget << anUAttr->ID();
}
