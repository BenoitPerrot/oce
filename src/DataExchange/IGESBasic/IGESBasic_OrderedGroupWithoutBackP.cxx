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

#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <DataExchange/IGESBasic/IGESBasic_OrderedGroupWithoutBackP.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESBasic_OrderedGroupWithoutBackP)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESBasic_Group),
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESBasic_OrderedGroupWithoutBackP)
IMPLEMENT_DOWNCAST(IGESBasic_OrderedGroupWithoutBackP,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESBasic_OrderedGroupWithoutBackP)


IGESBasic_OrderedGroupWithoutBackP::IGESBasic_OrderedGroupWithoutBackP ()
      {  InitTypeAndForm(402,15);  }
