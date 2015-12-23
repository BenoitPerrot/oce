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
#include <Interface_Check.hxx>
#include <Foundation/Standard/Standard_Transient.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
#include <DataExchange/IGESData/IGESData_IGESReaderData.hxx>
#include <DataExchange/IGESData/IGESData_ParamReader.hxx>
#include <DataExchange/IGESData/IGESData_IGESWriter.hxx>
#include <DataExchange/IGESData/IGESData_ReadWriteModule.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESData_ReadWriteModule)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Interface_ReaderModule),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESData_ReadWriteModule)
IMPLEMENT_DOWNCAST(IGESData_ReadWriteModule,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESData_ReadWriteModule)
#include <DataExchange/IGESData/IGESData_IGESType.hxx>
#include <Interface_Macros.hxx>




Standard_Integer  IGESData_ReadWriteModule::CaseNum
  (const Handle(Interface_FileReaderData)& data,
   const Standard_Integer num) const 
{
  IGESData_IGESType DT = GetCasted(IGESData_IGESReaderData,data)->DirType(num);
  return CaseIGES (DT.Type() , DT.Form());
}


void  IGESData_ReadWriteModule::Read
  (const Standard_Integer ,
   const Handle(Interface_FileReaderData)& , const Standard_Integer ,
   Handle(Interface_Check)& , const Handle(Standard_Transient)& ) const 
{
#ifdef OCCT_DEBUG
  cout<<"IGESData_ReadWriteModule, Read called"<<endl;
#endif
}
  // IGESReaderTool fait tout
