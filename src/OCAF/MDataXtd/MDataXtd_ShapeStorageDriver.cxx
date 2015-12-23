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
#include <OCAF/MDataXtd/MDataXtd_ShapeStorageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDataXtd_ShapeStorageDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ASDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDataXtd_ShapeStorageDriver)
IMPLEMENT_DOWNCAST(MDataXtd_ShapeStorageDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDataXtd_ShapeStorageDriver)
#include <OCAF/PDataXtd/PDataXtd_Shape.hxx>
#include <TDataXtd_Shape.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>

MDataXtd_ShapeStorageDriver::MDataXtd_ShapeStorageDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ASDriver(theMsgDriver)
{
}

Standard_Integer MDataXtd_ShapeStorageDriver::VersionNumber() const
{ return 0; }

Handle(Standard_Type) MDataXtd_ShapeStorageDriver::SourceType() const
{ return STANDARD_TYPE(TDataXtd_Shape); }

Handle(PDF_Attribute) MDataXtd_ShapeStorageDriver::NewEmpty() const
{ return new PDataXtd_Shape; }

//void MDataXtd_ShapeStorageDriver::Paste(const Handle(TDF_Attribute)& Source,const Handle(PDF_Attribute)& Target,const Handle(MDF_SRelocationTable)& RelocTable) const
void MDataXtd_ShapeStorageDriver::Paste(const Handle(TDF_Attribute)& ,const Handle(PDF_Attribute)& ,const Handle(MDF_SRelocationTable)& ) const
{
}

