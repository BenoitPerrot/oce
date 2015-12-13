// Created by: CKY / Contract Toubro-Larsen
// Copyright (c) 1993-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
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

//--------------------------------------------------------------------
//--------------------------------------------------------------------

#include <TCollection_HAsciiString.hxx>
#include <Interface_HArray1OfHAsciiString.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <IGESDefs_MacroDef.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESDefs_MacroDef)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESDefs_MacroDef)
IMPLEMENT_DOWNCAST(IGESDefs_MacroDef,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESDefs_MacroDef)
#include <Foundation/Standard/Standard_DimensionMismatch.hxx>


IGESDefs_MacroDef::IGESDefs_MacroDef ()    {  }

    void  IGESDefs_MacroDef::Init
  (const Handle(TCollection_HAsciiString)& macro,
   const Standard_Integer entityTypeID,
   const Handle(Interface_HArray1OfHAsciiString)& langStatements,
   const Handle(TCollection_HAsciiString)& endMacro)
{
  if (langStatements->Lower() != 1)
    Standard_DimensionMismatch::Raise("IGESDefs_MacroDef : Init");
  theMACRO          = macro;
  theEntityTypeID   = entityTypeID;
  theLangStatements = langStatements;
  theENDMACRO       = endMacro;
  InitTypeAndForm(306,0);
}

    Standard_Integer  IGESDefs_MacroDef::NbStatements () const
{
  return theLangStatements->Length();
}

    Handle(TCollection_HAsciiString)  IGESDefs_MacroDef::MACRO () const 
{
  return theMACRO;
}

    Standard_Integer  IGESDefs_MacroDef::EntityTypeID () const 
{
  return theEntityTypeID;
}

    Handle(TCollection_HAsciiString)  IGESDefs_MacroDef::LanguageStatement
  (const Standard_Integer StatNum) const 
{
  return theLangStatements->Value(StatNum);
}

    Handle(TCollection_HAsciiString)  IGESDefs_MacroDef::ENDMACRO () const 
{
  return theENDMACRO;
}
