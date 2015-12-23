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

#include <Mathematics/Primitives/gp_GTrsf.hxx>
#include <DataExchange/IGESData/IGESData_TransfEntity.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESData_TransfEntity)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESData_TransfEntity)
IMPLEMENT_DOWNCAST(IGESData_TransfEntity,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESData_TransfEntity)
// TransfEntity ne sert que pour controle de Type, et fourniture par Value
// de la GTrsf correspondante
