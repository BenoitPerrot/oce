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

#include <Foundation/Standard/Standard_Type.hxx>
#include <DataExchange/MoniTool/MoniTool_AttrList.hxx>
#include <DataExchange/MoniTool/MoniTool_Element.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MoniTool_Element)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MoniTool_Element)
IMPLEMENT_DOWNCAST(MoniTool_Element,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MoniTool_Element)


void  MoniTool_Element::SetHashCode (const Standard_Integer code)
      {  thecode = code;  }

    Standard_Integer  MoniTool_Element::GetHashCode () const
      {  return thecode;  }

    Handle(Standard_Type)  MoniTool_Element::ValueType () const
      {  return DynamicType();  }

    Standard_CString  MoniTool_Element::ValueTypeName () const
      {  return "(finder)";  }


//  ####    ATTRIBUTES    ####


    const MoniTool_AttrList&  MoniTool_Element::ListAttr () const
      {  return theattrib;  }

    MoniTool_AttrList&  MoniTool_Element::ChangeAttr ()
      {  return theattrib;  }
