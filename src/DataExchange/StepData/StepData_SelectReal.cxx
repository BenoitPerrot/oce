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

#include <StepData_SelectReal.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepData_SelectReal)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepData_SelectMember),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepData_SelectReal)
IMPLEMENT_DOWNCAST(StepData_SelectReal,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepData_SelectReal)

//  Definitions : cf Field
#define KindReal 5

StepData_SelectReal::StepData_SelectReal  ()    {  theval = 0.0;  }

Standard_Integer  StepData_SelectReal::Kind () const    {  return KindReal;  }

Standard_Real  StepData_SelectReal::Real () const    { return theval;  }
void  StepData_SelectReal::SetReal (const Standard_Real val)    {  theval = val;  }
