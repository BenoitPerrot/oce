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

#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Foundation/Message/Message_Messenger.hxx>
#include <IGESData_SpecificModule.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESData_SpecificModule)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESData_SpecificModule)
IMPLEMENT_DOWNCAST(IGESData_SpecificModule,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESData_SpecificModule)


Standard_Boolean  IGESData_SpecificModule::OwnCorrect
  (const Standard_Integer , const Handle(IGESData_IGESEntity)& ) const
{  return Standard_False;  }    // par defaut, ne fait rien
