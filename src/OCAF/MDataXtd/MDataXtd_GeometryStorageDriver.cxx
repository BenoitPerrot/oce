// Created on: 1997-11-19
// Created by: Denis PASCAL
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
#include <OCAF/PDF/PDF_Attribute.hxx>
#include <OCAF/TDF/TDF_Attribute.hxx>
#include <OCAF/MDF/MDF_SRelocationTable.hxx>
#include <OCAF/MDataXtd/MDataXtd_GeometryStorageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDataXtd_GeometryStorageDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ASDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDataXtd_GeometryStorageDriver)
IMPLEMENT_DOWNCAST(MDataXtd_GeometryStorageDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDataXtd_GeometryStorageDriver)
#include <OCAF/TDataXtd/TDataXtd_GeometryEnum.hxx>
#include <OCAF/MDataXtd/MDataXtd.hxx>
#include <OCAF/TDataXtd/TDataXtd_Geometry.hxx>
#include <OCAF/PDataXtd/PDataXtd_Geometry.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>


//=======================================================================
//function : MDataXtd_GeometryStorageDriver
//purpose  : 
//=======================================================================

MDataXtd_GeometryStorageDriver::MDataXtd_GeometryStorageDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ASDriver(theMsgDriver)
{
}


//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================

Standard_Integer MDataXtd_GeometryStorageDriver::VersionNumber() const
{ return 0; }


//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================

Handle(Standard_Type) MDataXtd_GeometryStorageDriver::SourceType() const
{ return STANDARD_TYPE (TDataXtd_Geometry); }


//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================

Handle(PDF_Attribute) MDataXtd_GeometryStorageDriver::NewEmpty() const
{ return new PDataXtd_Geometry; }


//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================

void MDataXtd_GeometryStorageDriver::Paste (
  const Handle(TDF_Attribute)&        Source,
  const Handle(PDF_Attribute)&        Target,
//  const Handle(MDF_SRelocationTable)& RelocTable) const
  const Handle(MDF_SRelocationTable)& ) const
{
  Handle(TDataXtd_Geometry) S = 
     Handle(TDataXtd_Geometry)::DownCast (Source);
  Handle(PDataXtd_Geometry) T = 
    Handle(PDataXtd_Geometry)::DownCast (Target);
  
  T->SetType (MDataXtd::GeometryTypeToInteger(S->GetType ()));

}





