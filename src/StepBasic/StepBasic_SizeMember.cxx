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

#include <StepBasic_SizeMember.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepBasic_SizeMember)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepData_SelectReal),
  STANDARD_TYPE(StepData_SelectMember),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepBasic_SizeMember)
IMPLEMENT_DOWNCAST(StepBasic_SizeMember,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepBasic_SizeMember)

StepBasic_SizeMember::StepBasic_SizeMember  ()    {  }

    Standard_Boolean  StepBasic_SizeMember::HasName () const
      {  return Standard_True;  }

    Standard_CString  StepBasic_SizeMember::Name () const
      {  return "POSITIVE_LENGTH_MEASURE";  }

    Standard_Boolean  StepBasic_SizeMember::SetName (const Standard_CString /*name*/)
      {  return Standard_True;  }
