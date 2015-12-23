// Created on: 2008-12-10
// Created by: Pavel TELKOV
// Copyright (c) 2008-2014 OPEN CASCADE SAS
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

#include <OCAF/MDF/MDF_RRelocationTable.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
#include <OCAF/TDF/TDF_Attribute.hxx>
#include <OCAF/PDF/PDF_Attribute.hxx>
#include <OCAF/MDF/MDF_RRelocationTable.hxx>
#include <DataExchange/MXCAFDoc/MXCAFDoc_DimTolToolRetrievalDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MXCAFDoc_DimTolToolRetrievalDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ARDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MXCAFDoc_DimTolToolRetrievalDriver)
IMPLEMENT_DOWNCAST(MXCAFDoc_DimTolToolRetrievalDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MXCAFDoc_DimTolToolRetrievalDriver)
#include <PXCAFDoc_DimTolTool.hxx>
#include <XCAFDoc_DimTolTool.hxx>


//=======================================================================
//function : Constructor
//purpose  : 
//=======================================================================

MXCAFDoc_DimTolToolRetrievalDriver::MXCAFDoc_DimTolToolRetrievalDriver
  (const Handle(CDM_MessageDriver)& theMsgDriver) : MDF_ARDriver (theMsgDriver)
{
}

//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================

Standard_Integer MXCAFDoc_DimTolToolRetrievalDriver::VersionNumber() const
{
  return 0;
}

//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================

Handle(Standard_Type) MXCAFDoc_DimTolToolRetrievalDriver::SourceType() const
{
  static Handle(Standard_Type) sourceType = STANDARD_TYPE(PXCAFDoc_DimTolTool);
  return sourceType;
}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================

Handle(TDF_Attribute) MXCAFDoc_DimTolToolRetrievalDriver::NewEmpty() const
{
  return new XCAFDoc_DimTolTool();
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================

void MXCAFDoc_DimTolToolRetrievalDriver::Paste 
  (const Handle(PDF_Attribute)& /* Source */,
   const Handle(TDF_Attribute)& /* Target */,
   const Handle(MDF_RRelocationTable)& /*RelocTable*/) const
{
}
