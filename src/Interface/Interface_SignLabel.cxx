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

#include <TCollection_AsciiString.hxx>
#include <Standard_Transient.hxx>
#include <Interface_SignLabel.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Interface_SignLabel)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MoniTool_SignText),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Interface_SignLabel)
IMPLEMENT_DOWNCAST(Interface_SignLabel,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Interface_SignLabel)
#include <Interface_InterfaceModel.hxx>
#include <TCollection_HAsciiString.hxx>


Interface_SignLabel::Interface_SignLabel  ()    {  }

    Standard_CString  Interface_SignLabel::Name () const
      {  return "Entity Label";  }

    TCollection_AsciiString  Interface_SignLabel::Text
  (const Handle(Standard_Transient)& ent,
   const Handle(Standard_Transient)& context) const
{
  TCollection_AsciiString atext;
  Handle(Interface_InterfaceModel) model =
    Handle(Interface_InterfaceModel)::DownCast(context);
  if (ent.IsNull() || model.IsNull()) return atext;
  Handle(TCollection_HAsciiString) lab = model->StringLabel (ent);
  if (!lab.IsNull()) atext = lab->String();
  return atext;
}
