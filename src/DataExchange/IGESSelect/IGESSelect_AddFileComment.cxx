// Created on: 1994-08-26
// Created by: Christian CAILLET
// Copyright (c) 1994-1999 Matra Datavision
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

#include <Foundation/TColStd/TColStd_HSequenceOfHAsciiString.hxx>
#include <DataExchange/IFSelect/IFSelect_ContextWrite.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <IGESSelect_AddFileComment.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESSelect_AddFileComment)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESSelect_FileModifier),
  STANDARD_TYPE(IFSelect_GeneralModifier),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESSelect_AddFileComment)
IMPLEMENT_DOWNCAST(IGESSelect_AddFileComment,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESSelect_AddFileComment)
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <stdio.h>


IGESSelect_AddFileComment::IGESSelect_AddFileComment  ()
      {  thelist = new TColStd_HSequenceOfHAsciiString();  }

    void  IGESSelect_AddFileComment::Clear ()
      {  thelist->Clear();  }


    void  IGESSelect_AddFileComment::AddLine (const Standard_CString line)
      {  thelist->Append (new TCollection_HAsciiString(line)); }

    void  IGESSelect_AddFileComment::AddLines
  (const Handle(TColStd_HSequenceOfHAsciiString)& lines)
      {  thelist->Append (lines);  }

    Standard_Integer  IGESSelect_AddFileComment::NbLines () const
      {  return thelist->Length();  }

    Standard_CString  IGESSelect_AddFileComment::Line
  (const Standard_Integer num) const
      {  return thelist->Value(num)->ToCString();  }

    Handle(TColStd_HSequenceOfHAsciiString)  IGESSelect_AddFileComment::Lines
  () const
      {  return thelist;  }

    void  IGESSelect_AddFileComment::Perform
  (IFSelect_ContextWrite& ,
   IGESData_IGESWriter& writer) const
{
  Standard_Integer i, nb = NbLines();
  for (i = 1; i <= nb; i ++) {
    writer.SendStartLine (Line(i));
  }
}

    TCollection_AsciiString  IGESSelect_AddFileComment::Label () const
{
  Standard_Integer nb = NbLines();
  char labl[80];
  sprintf (labl, "Add %d Comment Lines (Start Section)",nb);
  return TCollection_AsciiString (labl);
}
