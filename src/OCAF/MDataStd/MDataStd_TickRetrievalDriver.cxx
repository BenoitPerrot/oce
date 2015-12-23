// Created on: 2007-05-29
// Created by: Vlad Romashko
// Copyright (c) 2007-2014 OPEN CASCADE SAS
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
#include <OCAF/TDF/TDF_Attribute.hxx>
#include <OCAF/PDF/PDF_Attribute.hxx>
#include <OCAF/MDF/MDF_RRelocationTable.hxx>
#include <OCAF/MDataStd/MDataStd_TickRetrievalDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDataStd_TickRetrievalDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ARDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDataStd_TickRetrievalDriver)
IMPLEMENT_DOWNCAST(MDataStd_TickRetrievalDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDataStd_TickRetrievalDriver)
#include <OCAF/PDataStd/PDataStd_Tick.hxx>
#include <OCAF/TDataStd/TDataStd_Tick.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>

//=======================================================================
//function : MDataStd_TickRetrievalDriver
//purpose  : 
//=======================================================================
MDataStd_TickRetrievalDriver::MDataStd_TickRetrievalDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ARDriver(theMsgDriver)
{
}

//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================
Standard_Integer MDataStd_TickRetrievalDriver::VersionNumber() const
{ 
  return 0; 
}

//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================
Handle(Standard_Type) MDataStd_TickRetrievalDriver::SourceType() const
{ 
  return STANDARD_TYPE(PDataStd_Tick);
}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================
Handle(TDF_Attribute) MDataStd_TickRetrievalDriver::NewEmpty() const
{ 
  return new TDataStd_Tick; 
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================
void MDataStd_TickRetrievalDriver::Paste (const Handle(PDF_Attribute)& ,
					  const Handle(TDF_Attribute)& ,
					  const Handle(MDF_RRelocationTable)& ) const
{
}
