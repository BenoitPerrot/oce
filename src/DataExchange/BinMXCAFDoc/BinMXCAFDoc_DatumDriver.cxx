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

#include <CDM_MessageDriver.hxx>
#include <TDF_Attribute.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <BinMXCAFDoc_DatumDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(BinMXCAFDoc_DatumDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(BinMDF_ADriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BinMXCAFDoc_DatumDriver)
IMPLEMENT_DOWNCAST(BinMXCAFDoc_DatumDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BinMXCAFDoc_DatumDriver)
#include <XCAFDoc_Datum.hxx>

#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <Foundation/TColStd/TColStd_Array1OfReal.hxx>
#include <Foundation/TColStd/TColStd_HArray1OfReal.hxx>

//=======================================================================
//function : Constructor
//purpose  : 
//=======================================================================
BinMXCAFDoc_DatumDriver::BinMXCAFDoc_DatumDriver
  (const Handle(CDM_MessageDriver)& theMsgDriver)
: BinMDF_ADriver(theMsgDriver, STANDARD_TYPE(XCAFDoc_Datum)->Name())
{
}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================
Handle(TDF_Attribute) BinMXCAFDoc_DatumDriver::NewEmpty() const
{
  return new XCAFDoc_Datum();
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================
Standard_Boolean BinMXCAFDoc_DatumDriver::Paste(const BinObjMgt_Persistent& theSource,
                                                 const Handle(TDF_Attribute)& theTarget,
                                                 BinObjMgt_RRelocationTable& /*theRelocTable*/) const 
{
  Handle(XCAFDoc_Datum) anAtt = Handle(XCAFDoc_Datum)::DownCast(theTarget);
  TCollection_AsciiString aName, aDescr, anId;
  if ( !(theSource >> aName >> aDescr >> anId) )
    return Standard_False;

  anAtt->Set(new TCollection_HAsciiString( aName ),
             new TCollection_HAsciiString( aDescr ),
             new TCollection_HAsciiString( anId ));
  return Standard_True;
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================
void BinMXCAFDoc_DatumDriver::Paste(const Handle(TDF_Attribute)& theSource,
                                     BinObjMgt_Persistent& theTarget,
                                     BinObjMgt_SRelocationTable& /*theRelocTable*/) const
{
  Handle(XCAFDoc_Datum) anAtt = Handle(XCAFDoc_Datum)::DownCast(theSource);
  if ( !anAtt->GetName().IsNull() )
    theTarget << anAtt->GetName()->String();
  else
    theTarget << TCollection_AsciiString("");

  if ( !anAtt->GetDescription().IsNull() )
    theTarget << anAtt->GetDescription()->String();
  else
    theTarget << TCollection_AsciiString("");

  if ( !anAtt->GetIdentification().IsNull() )
    theTarget << anAtt->GetIdentification()->String();
  else
    theTarget << TCollection_AsciiString("");
}
