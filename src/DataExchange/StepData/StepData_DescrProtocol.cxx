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

#include <StepData_DescrProtocol.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepData_DescrProtocol)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepData_FileProtocol),
  STANDARD_TYPE(StepData_Protocol),
  STANDARD_TYPE(Interface_Protocol),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepData_DescrProtocol)
IMPLEMENT_DOWNCAST(StepData_DescrProtocol,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepData_DescrProtocol)
#include <StepData_DescrGeneral.hxx>
#include <StepData_DescrReadWrite.hxx>
#include <DataExchange/Interface/Interface_GeneralLib.hxx>
#include <DataExchange/Interface/Interface_ReaderLib.hxx>
#include <StepData_WriterLib.hxx>


StepData_DescrProtocol::StepData_DescrProtocol ()    {  }

    void  StepData_DescrProtocol::SetSchemaName (const Standard_CString name)
      {  thename.Clear();  thename.AssignCat (name);  }

    void  StepData_DescrProtocol::LibRecord () const
{
  if (!HasDescr()) return;  // rien a recorder dans la lib ?
  Handle(StepData_DescrGeneral)   gen = new StepData_DescrGeneral   (this);
  Handle(StepData_DescrReadWrite) rwm = new StepData_DescrReadWrite (this);
  Interface_GeneralLib::SetGlobal (gen,this);
  Interface_ReaderLib::SetGlobal   (rwm,this);
  StepData_WriterLib::SetGlobal   (rwm,this);
}

    Standard_CString  StepData_DescrProtocol::SchemaName () const
      {  return thename.ToCString();  }
