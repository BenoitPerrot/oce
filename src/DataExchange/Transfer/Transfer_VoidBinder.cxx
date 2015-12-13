// Created on: 1994-06-27
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

//		<design>

#include <Foundation/Standard/Standard_Type.hxx>
#include <Transfer_VoidBinder.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Transfer_VoidBinder)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Transfer_Binder),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Transfer_VoidBinder)
IMPLEMENT_DOWNCAST(Transfer_VoidBinder,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Transfer_VoidBinder)

Transfer_VoidBinder::Transfer_VoidBinder ()    {  }

//    Standard_Boolean  Transfer_VoidBinder::IsMultiple () const
//      { return Standard_False;  }


    Handle(Standard_Type)  Transfer_VoidBinder::ResultType () const
      {  return DynamicType();  }

    Standard_CString  Transfer_VoidBinder::ResultTypeName () const
      {  return "(void)";  }
