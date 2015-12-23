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

#include <DataExchange/IFSelect/IFSelect_Selection.hxx>
#include <DataExchange/IFSelect/IFSelect_Dispatch.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <DataExchange/IFSelect/IFSelect_GeneralModifier.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IFSelect_GeneralModifier)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IFSelect_GeneralModifier)
IMPLEMENT_DOWNCAST(IFSelect_GeneralModifier,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IFSelect_GeneralModifier)



IFSelect_GeneralModifier::IFSelect_GeneralModifier
  (const Standard_Boolean maychangegraph)    {  thechgr = maychangegraph;  }

    Standard_Boolean  IFSelect_GeneralModifier::MayChangeGraph () const
      {  return thechgr;  }

    void  IFSelect_GeneralModifier::SetDispatch
  (const Handle(IFSelect_Dispatch)& disp)
      {  thedisp = disp;  }

    Handle(IFSelect_Dispatch)  IFSelect_GeneralModifier::Dispatch () const
      {  return thedisp;  }

    Standard_Boolean  IFSelect_GeneralModifier::Applies
  (const Handle(IFSelect_Dispatch)& disp) const
{
  if (thedisp.IsNull()) return Standard_True;
  if (thedisp != disp) return Standard_False;
  return Standard_True;
}


    void  IFSelect_GeneralModifier::SetSelection
  (const Handle(IFSelect_Selection)& sel)
      {  thesel = sel;  }

    void  IFSelect_GeneralModifier::ResetSelection ()
      {  thesel.Nullify();  }

    Standard_Boolean  IFSelect_GeneralModifier::HasSelection () const 
      {  return !thesel.IsNull();  }

    Handle(IFSelect_Selection)  IFSelect_GeneralModifier::Selection () const 
      {  return thesel;  }
