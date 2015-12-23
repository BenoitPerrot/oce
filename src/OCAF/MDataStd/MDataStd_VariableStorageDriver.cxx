// Created on: 1997-04-10
// Created by: PASCAL Denis
// Copyright (c) 1997-1999 Matra Datavision
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

#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
#include <PDF_Attribute.hxx>
#include <TDF_Attribute.hxx>
#include <OCAF/MDF/MDF_SRelocationTable.hxx>
#include <OCAF/MDataStd/MDataStd_VariableStorageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDataStd_VariableStorageDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ASDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDataStd_VariableStorageDriver)
IMPLEMENT_DOWNCAST(MDataStd_VariableStorageDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDataStd_VariableStorageDriver)
#include <OCAF/PDataStd/PDataStd_Variable.hxx>
#include <TDataStd_Variable.hxx>
#include <OCAF/MDataStd/MDataStd.hxx>
#include <OCAF/PCollection/PCollection_HAsciiString.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>


//=======================================================================
//function : MDataStd_VariableStorageDriver
//purpose  : 
//=======================================================================

MDataStd_VariableStorageDriver::MDataStd_VariableStorageDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ASDriver(theMsgDriver)
{}


//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================

Standard_Integer MDataStd_VariableStorageDriver::VersionNumber() const
{ return 0; }


//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================

Handle(Standard_Type) MDataStd_VariableStorageDriver::SourceType() const
{
  static Handle(Standard_Type) sourceType = STANDARD_TYPE(TDataStd_Variable);
  return sourceType;
}


//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================

Handle(PDF_Attribute) MDataStd_VariableStorageDriver::NewEmpty () const {

  return new PDataStd_Variable ();
}


//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================

void MDataStd_VariableStorageDriver::Paste (
  const Handle(TDF_Attribute)&  Source,
  const Handle(PDF_Attribute)&        Target,
//  const Handle(MDF_SRelocationTable)& RelocTable) const
  const Handle(MDF_SRelocationTable)& ) const
{
  Handle(TDataStd_Variable) S = Handle(TDataStd_Variable)::DownCast (Source);
  Handle(PDataStd_Variable) T = Handle(PDataStd_Variable)::DownCast (Target);
  T->Constant (S->IsConstant ());  
  T->Unit(new PCollection_HAsciiString(S->Unit()));
}

