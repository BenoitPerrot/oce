// Created by: DAUTRY Philippe
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

//      	-----------------------------

// Version:	0.0
//Version	Date		Purpose
//		0.0	Sep 17 1997	Creation



#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
#include <OCAF/TDF/TDF_Attribute.hxx>
#include <OCAF/PDF/PDF_Attribute.hxx>
#include <OCAF/MDF/MDF_RRelocationTable.hxx>
#include <OCAF/MDocStd/MDocStd_XLinkRetrievalDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDocStd_XLinkRetrievalDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ARDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDocStd_XLinkRetrievalDriver)
IMPLEMENT_DOWNCAST(MDocStd_XLinkRetrievalDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDocStd_XLinkRetrievalDriver)
#include <TDocStd_XLink.hxx>
#include <OCAF/PDocStd/PDocStd_XLink.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <OCAF/PCollection/PCollection_HAsciiString.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>

#define DeclareAndSpeedCast(V,T,Vdown) Handle(T) Vdown = *((Handle(T)*)& V)
#define DeclareConstAndSpeedCast(V,T,Vdown) const Handle(T)& Vdown = (Handle(T)&) V
#define SpeedCast(V,T,Vdown) Vdown = *((Handle(T)*)& V)

//=======================================================================
//function : MDocStd_XLinkRetrievalDriver
//purpose  : 
//=======================================================================

MDocStd_XLinkRetrievalDriver::MDocStd_XLinkRetrievalDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ARDriver(theMsgDriver)
{}


//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================

Standard_Integer MDocStd_XLinkRetrievalDriver::VersionNumber() const
{ return 0; }


//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================

Handle(Standard_Type) MDocStd_XLinkRetrievalDriver::SourceType() const
{ return STANDARD_TYPE(PDocStd_XLink); }


//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================

Handle(TDF_Attribute) MDocStd_XLinkRetrievalDriver::NewEmpty() const
{ return new TDocStd_XLink(); }


//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================

void MDocStd_XLinkRetrievalDriver::Paste
(const Handle(PDF_Attribute)& aSource,
 const Handle(TDF_Attribute)& aTarget,
// const Handle(MDF_RRelocationTable)& aRelocTable) const
 const Handle(MDF_RRelocationTable)& ) const
{
  DeclareConstAndSpeedCast(aSource,PDocStd_XLink,pxref);
  DeclareConstAndSpeedCast(aTarget,TDocStd_XLink,txref);
  txref->DocumentEntry(pxref->DocumentEntry()->Convert());
  txref->LabelEntry(pxref->LabelEntry()->Convert());
}

