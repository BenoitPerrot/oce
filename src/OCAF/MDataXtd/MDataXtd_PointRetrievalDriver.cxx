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
#include <TDF_Attribute.hxx>
#include <PDF_Attribute.hxx>
#include <MDF_RRelocationTable.hxx>
#include <OCAF/MDataXtd/MDataXtd_PointRetrievalDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDataXtd_PointRetrievalDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ARDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDataXtd_PointRetrievalDriver)
IMPLEMENT_DOWNCAST(MDataXtd_PointRetrievalDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDataXtd_PointRetrievalDriver)
#include <PDataXtd_Point.hxx>
#include <TDataXtd_Point.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>

MDataXtd_PointRetrievalDriver::MDataXtd_PointRetrievalDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ARDriver(theMsgDriver)
{
}

Standard_Integer MDataXtd_PointRetrievalDriver::VersionNumber() const
{ return 0; }

Handle(Standard_Type) MDataXtd_PointRetrievalDriver::SourceType() const
{ return STANDARD_TYPE(PDataXtd_Point); }

Handle(TDF_Attribute) MDataXtd_PointRetrievalDriver::NewEmpty() const
{ return new TDataXtd_Point (); }

//void MDataXtd_PointRetrievalDriver::Paste(const Handle(PDF_Attribute)& Source,const Handle(TDF_Attribute)& Target,const Handle(MDF_RRelocationTable)& RelocTable) const
void MDataXtd_PointRetrievalDriver::Paste(const Handle(PDF_Attribute)& ,const Handle(TDF_Attribute)& ,const Handle(MDF_RRelocationTable)& ) const
{
}

