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

#include <Foundation/Standard/Standard_DomainError.hxx>
#include <Interface_FileReaderData.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <TColStd_SequenceOfAsciiString.hxx>
#include <Interface_Check.hxx>
#include <Foundation/Standard/Standard_Transient.hxx>
#include <StepData_StepReaderData.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_ReadWriteModule.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepData_ReadWriteModule)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Interface_ReaderModule),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepData_ReadWriteModule)
IMPLEMENT_DOWNCAST(StepData_ReadWriteModule,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepData_ReadWriteModule)
#include <StepData_StepReaderData.hxx>
#include <Interface_Macros.hxx>



Standard_Integer  StepData_ReadWriteModule::CaseNum
  (const Handle(Interface_FileReaderData)& data,
   const Standard_Integer num) const
{
  DeclareAndCast(StepData_StepReaderData,stepdat,data);
  if (stepdat.IsNull()) return 0;
  if (stepdat->IsComplex(num)) {
    TColStd_SequenceOfAsciiString types;
    stepdat->ComplexType (num,types);
    if (types.IsEmpty()) return 0;
    if (types.Length() == 1) return CaseStep (types.Value(1));
    else return CaseStep (types);
  }
  return CaseStep (stepdat->RecordType(num));
}

Standard_Integer  StepData_ReadWriteModule::CaseStep (const TColStd_SequenceOfAsciiString&) const
{  
  return 0;
}        // par defaut

Standard_Boolean  StepData_ReadWriteModule::IsComplex (const Standard_Integer) const
{
    return Standard_False;  
}  // par defaut

TCollection_AsciiString  StepData_ReadWriteModule::ShortType (const Standard_Integer ) const
{
  return TCollection_AsciiString("");  
}  // par defaut vide

Standard_Boolean  StepData_ReadWriteModule::ComplexType (const Standard_Integer ,
                                                         TColStd_SequenceOfAsciiString& ) const
{
  return Standard_False; 
}


//=======================================================================
//function : Read
//purpose  : 
//=======================================================================

void StepData_ReadWriteModule::Read(const Standard_Integer CN,
                                    const Handle(Interface_FileReaderData)& data,
                                    const Standard_Integer num,
                                    Handle(Interface_Check)& ach,
                                    const Handle(Standard_Transient)& ent) const 
{
  DeclareAndCast(StepData_StepReaderData,stepdat,data);
  if (stepdat.IsNull()) return;
  ReadStep (CN,stepdat,num,ach,ent);
}
