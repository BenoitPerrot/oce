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

#include <DataExchange/StepData/StepData_EDescr.hxx>
#include <DataExchange/Interface/Interface_InterfaceMismatch.hxx>
#include <DataExchange/StepData/StepData_Simple.hxx>
#include <DataExchange/StepData/StepData_Field.hxx>
#include <DataExchange/Interface/Interface_Check.hxx>
#include <DataExchange/Interface/Interface_EntityIterator.hxx>
#include <DataExchange/StepData/StepData_Described.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepData_Described)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepData_Described)
IMPLEMENT_DOWNCAST(StepData_Described,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepData_Described)

StepData_Described::StepData_Described  (const Handle(StepData_EDescr)& descr)
: thedescr (descr)    {  }

Handle(StepData_EDescr)  StepData_Described::Description () const
{  return thedescr;  }
