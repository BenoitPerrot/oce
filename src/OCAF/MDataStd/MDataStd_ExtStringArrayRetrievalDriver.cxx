// Created on: 2004-09-27
// Created by: Pavel TELKOV
// Copyright (c) 2004-2014 OPEN CASCADE SAS
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
#include <OCAF/MDataStd/MDataStd_ExtStringArrayRetrievalDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDataStd_ExtStringArrayRetrievalDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ARDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDataStd_ExtStringArrayRetrievalDriver)
IMPLEMENT_DOWNCAST(MDataStd_ExtStringArrayRetrievalDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDataStd_ExtStringArrayRetrievalDriver)

#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <OCAF/MDataStd/MDataStd.hxx>
#include <OCAF/PCollection/PCollection_HExtendedString.hxx>
#include <OCAF/PDataStd/PDataStd_ExtStringArray.hxx>
#include <OCAF/TDataStd/TDataStd_ExtStringArray.hxx>

//=======================================================================
//function : MDataStd_ExtStringArrayRetrievalDriver
//purpose  : Constructor
//=======================================================================

MDataStd_ExtStringArrayRetrievalDriver::MDataStd_ExtStringArrayRetrievalDriver
  ( const Handle(CDM_MessageDriver)& theMsgDriver )
 :MDF_ARDriver(theMsgDriver)
{}


//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================

Standard_Integer MDataStd_ExtStringArrayRetrievalDriver::VersionNumber() const
{ return 0; }


//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================

Handle(Standard_Type) MDataStd_ExtStringArrayRetrievalDriver::SourceType() const
{
  static Handle(Standard_Type) sourceType = STANDARD_TYPE(PDataStd_ExtStringArray);
  return sourceType;
}


//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================

Handle(TDF_Attribute) MDataStd_ExtStringArrayRetrievalDriver::NewEmpty() const
{
  return new TDataStd_ExtStringArray ();
}


//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================

void MDataStd_ExtStringArrayRetrievalDriver::Paste
  ( const Handle(PDF_Attribute)& Source,
    const Handle(TDF_Attribute)& Target,
    const Handle(MDF_RRelocationTable)& ) const
{
  Handle(PDataStd_ExtStringArray) S = Handle(PDataStd_ExtStringArray)::DownCast (Source);
  Handle(TDataStd_ExtStringArray) T = Handle(TDataStd_ExtStringArray)::DownCast (Target);

  Standard_Integer i, lower = S->Lower() , upper = S->Upper();
  T->Init(lower, upper);
  
  for(i = lower; i<=upper; i++)
  {
    Handle(PCollection_HExtendedString) aPExtStr = S->Value( i );
    if ( !aPExtStr.IsNull() )
    T->SetValue( i, aPExtStr->Convert() );
  }
}

