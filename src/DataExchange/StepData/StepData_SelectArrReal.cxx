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

#include <Foundation/TColStd/TColStd_HArray1OfReal.hxx>
#include <DataExchange/StepData/StepData_SelectArrReal.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepData_SelectArrReal)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepData_SelectNamed),
  STANDARD_TYPE(StepData_SelectMember),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepData_SelectArrReal)
IMPLEMENT_DOWNCAST(StepData_SelectArrReal,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepData_SelectArrReal)

//  Definitions : cf Field
#define myKindArrReal 8


//=======================================================================
//function : StepData_SelectSeqReal
//purpose  : 
//=======================================================================

StepData_SelectArrReal::StepData_SelectArrReal ()
{
}




//=======================================================================
//function : Kind
//purpose  : 
//=======================================================================

Standard_Integer StepData_SelectArrReal::Kind () const
{
  return myKindArrReal;  
}


//=======================================================================
//function : ArrReal
//purpose  : 
//=======================================================================

Handle(TColStd_HArray1OfReal) StepData_SelectArrReal::ArrReal () const
{
 return theArr;  
}


//=======================================================================
//function : SetArrReal
//purpose  : 
//=======================================================================

void StepData_SelectArrReal::SetArrReal (const Handle(TColStd_HArray1OfReal)& arr)
{
  theArr = arr;  
}
