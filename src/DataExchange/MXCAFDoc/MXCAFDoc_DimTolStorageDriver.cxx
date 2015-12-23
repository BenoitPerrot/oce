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

#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
#include <PDF_Attribute.hxx>
#include <TDF_Attribute.hxx>
#include <OCAF/MDF/MDF_SRelocationTable.hxx>
#include <MXCAFDoc_DimTolStorageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MXCAFDoc_DimTolStorageDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ASDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MXCAFDoc_DimTolStorageDriver)
IMPLEMENT_DOWNCAST(MXCAFDoc_DimTolStorageDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MXCAFDoc_DimTolStorageDriver)
#include <XCAFDoc_DimTol.hxx>
#include <PXCAFDoc_DimTol.hxx>

#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <Foundation/TColStd/TColStd_HArray1OfReal.hxx>
#include <OCAF/PCollection/PCollection_HAsciiString.hxx>
#include <OCAF/PColStd/PColStd_HArray1OfReal.hxx>

//=======================================================================
//function : MXCAFDoc_DimTolStorageDriver
//purpose  : 
//=======================================================================

MXCAFDoc_DimTolStorageDriver::MXCAFDoc_DimTolStorageDriver
  (const Handle(CDM_MessageDriver)& theMsgDriver) : MDF_ASDriver (theMsgDriver)
{}

//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================

Standard_Integer MXCAFDoc_DimTolStorageDriver::VersionNumber() const
{ return 0; }

//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================

Handle(Standard_Type) MXCAFDoc_DimTolStorageDriver::SourceType() const
{
  static Handle(Standard_Type) sourceType = STANDARD_TYPE(XCAFDoc_DimTol);
  return sourceType;
}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================

Handle(PDF_Attribute) MXCAFDoc_DimTolStorageDriver::NewEmpty() const
{
  return new PXCAFDoc_DimTol();
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================

void MXCAFDoc_DimTolStorageDriver::Paste(const Handle(TDF_Attribute)& Source,
                                         const Handle(PDF_Attribute)& Target,
                                         const Handle(MDF_SRelocationTable)& /*RelocTable*/) const
{
  Handle(XCAFDoc_DimTol) S = Handle(XCAFDoc_DimTol)::DownCast (Source);
  Handle(PXCAFDoc_DimTol) T = Handle(PXCAFDoc_DimTol)::DownCast (Target);
  Handle(TColStd_HArray1OfReal) aHArr = S->GetVal();
  Handle(PColStd_HArray1OfReal) aVals;
  if ( !aHArr.IsNull() )
  {
    Standard_Integer i = aHArr->Lower(), n = aHArr->Upper();
    aVals = new PColStd_HArray1OfReal( i, n );
     for( ; i <= n; i++ )
       aVals->SetValue( i, aHArr->Value( i ) );
  }
  Handle(TCollection_HAsciiString) aNameStr = S->GetName();
  Handle(TCollection_HAsciiString) aDescrStr = S->GetDescription();
  
  Handle(PCollection_HAsciiString) aName, aDescr;
  if ( !aNameStr.IsNull() )
    aName = new PCollection_HAsciiString (aNameStr->String());
  if ( !aDescrStr.IsNull() )
    aDescr = new PCollection_HAsciiString (aDescrStr->String());

  T->Set(S->GetKind(), aVals, aName, aDescr);
}
