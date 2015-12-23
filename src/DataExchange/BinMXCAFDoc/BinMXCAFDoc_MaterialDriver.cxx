// Created on: 2008-12-10
// Created by: Pavel TELKOV
// Copyright (c) 2008-2014 OPEN CASCADE SAS
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
#include <DataExchange/BinMXCAFDoc/BinMXCAFDoc_MaterialDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BinMXCAFDoc_MaterialDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(BinMDF_ADriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BinMXCAFDoc_MaterialDriver)
IMPLEMENT_DOWNCAST(BinMXCAFDoc_MaterialDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BinMXCAFDoc_MaterialDriver)
#include <DataExchange/XCAFDoc/XCAFDoc_Material.hxx>

#include <Foundation/TCollection/TCollection_HAsciiString.hxx>

//=======================================================================
//function : Constructor
//purpose  : 
//=======================================================================
BinMXCAFDoc_MaterialDriver::BinMXCAFDoc_MaterialDriver
  (const Handle(CDM_MessageDriver)& theMsgDriver)
: BinMDF_ADriver(theMsgDriver, STANDARD_TYPE(XCAFDoc_Material)->Name())
{
}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================
Handle(TDF_Attribute) BinMXCAFDoc_MaterialDriver::NewEmpty() const
{
  return new XCAFDoc_Material();
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================
Standard_Boolean BinMXCAFDoc_MaterialDriver::Paste(const BinObjMgt_Persistent& theSource,
                                                 const Handle(TDF_Attribute)& theTarget,
                                                 BinObjMgt_RRelocationTable& /*theRelocTable*/) const 
{
  Handle(XCAFDoc_Material) anAtt = Handle(XCAFDoc_Material)::DownCast(theTarget);
  Standard_Real aDensity;
  TCollection_AsciiString aName, aDescr, aDensName, aDensValType;
  if ( !(theSource >> aName >> aDescr >> aDensity >> aDensName >> aDensValType) )
    return Standard_False;

  anAtt->Set(new TCollection_HAsciiString( aName ),
             new TCollection_HAsciiString( aDescr ),
             aDensity,
             new TCollection_HAsciiString( aDensName ),
             new TCollection_HAsciiString( aDensValType ));
  return Standard_True;
}

static void pasteString( BinObjMgt_Persistent& theTarget,
                         Handle(TCollection_HAsciiString) theStr )
{
  if ( !theStr.IsNull() )
    theTarget << theStr->String();
  else
    theTarget << TCollection_AsciiString("");
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================
void BinMXCAFDoc_MaterialDriver::Paste(const Handle(TDF_Attribute)& theSource,
                                     BinObjMgt_Persistent& theTarget,
                                     BinObjMgt_SRelocationTable& /*theRelocTable*/) const
{
  Handle(XCAFDoc_Material) anAtt = Handle(XCAFDoc_Material)::DownCast(theSource);
  pasteString( theTarget, anAtt->GetName() );
  pasteString( theTarget, anAtt->GetDescription() );
  theTarget << anAtt->GetDensity();
  pasteString( theTarget, anAtt->GetDensName() );
  pasteString( theTarget, anAtt->GetDensValType() );
}
