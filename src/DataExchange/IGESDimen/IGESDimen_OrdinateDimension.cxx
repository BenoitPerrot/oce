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

#include <DataExchange/IGESDimen/IGESDimen_GeneralNote.hxx>
#include <DataExchange/IGESDimen/IGESDimen_WitnessLine.hxx>
#include <DataExchange/IGESDimen/IGESDimen_LeaderArrow.hxx>
#include <DataExchange/IGESDimen/IGESDimen_OrdinateDimension.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESDimen_OrdinateDimension)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESDimen_OrdinateDimension)
IMPLEMENT_DOWNCAST(IGESDimen_OrdinateDimension,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESDimen_OrdinateDimension)


IGESDimen_OrdinateDimension::IGESDimen_OrdinateDimension ()    {  }


    void IGESDimen_OrdinateDimension::Init
  (const Handle(IGESDimen_GeneralNote)& aNote,
   const Standard_Boolean isLine,
   const Handle(IGESDimen_WitnessLine)& aLine,
   const Handle(IGESDimen_LeaderArrow)& anArrow)
{
  theNote        = aNote;
  isItLine       = isLine;
  theWitnessLine = aLine;
  theLeader      = anArrow;
  if ( (aLine.IsNull()) || (anArrow.IsNull()) ) InitTypeAndForm(218,0);
  else                                          InitTypeAndForm(218,1);
}


    Handle(IGESDimen_GeneralNote) IGESDimen_OrdinateDimension::Note () const
{
  return theNote;
}

    Handle(IGESDimen_WitnessLine) IGESDimen_OrdinateDimension::WitnessLine () const
{
  return theWitnessLine;
}

    Handle(IGESDimen_LeaderArrow) IGESDimen_OrdinateDimension::Leader () const
{
  return theLeader;
}

    Standard_Boolean IGESDimen_OrdinateDimension::IsLine () const
{
  return isItLine;
}

    Standard_Boolean IGESDimen_OrdinateDimension::IsLeader () const
{
  return !isItLine;
}
