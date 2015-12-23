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
#include <OCAF/PDF/PDF_Attribute.hxx>
#include <OCAF/MDF/MDF_RRelocationTable.hxx>
#include <OCAF/MDataXtd/MDataXtd_PlacementRetrievalDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDataXtd_PlacementRetrievalDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ARDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDataXtd_PlacementRetrievalDriver)
IMPLEMENT_DOWNCAST(MDataXtd_PlacementRetrievalDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDataXtd_PlacementRetrievalDriver)
#include <OCAF/PDataXtd/PDataXtd_Placement.hxx>
#include <OCAF/TDataXtd/TDataXtd_Placement.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>


//=======================================================================
//function : MDataXtd_PlacementRetrievalDriver
//purpose  : 
//=======================================================================

MDataXtd_PlacementRetrievalDriver::MDataXtd_PlacementRetrievalDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ARDriver(theMsgDriver)
{
}


//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================

Standard_Integer MDataXtd_PlacementRetrievalDriver::VersionNumber() const
{ return 0; }



//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================

Handle(Standard_Type) MDataXtd_PlacementRetrievalDriver::SourceType() const
{ return STANDARD_TYPE(PDataXtd_Placement);
}



//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================

Handle(TDF_Attribute) MDataXtd_PlacementRetrievalDriver::NewEmpty() const
{ return new TDataXtd_Placement; }



//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================

void MDataXtd_PlacementRetrievalDriver::Paste (
//  const Handle(PDF_Attribute)&        Source,
  const Handle(PDF_Attribute)&        ,
//  const Handle(TDF_Attribute)&        Target,
  const Handle(TDF_Attribute)&        ,
//  const Handle(MDF_RRelocationTable)& RelocTable) const
  const Handle(MDF_RRelocationTable)& ) const
{
}
