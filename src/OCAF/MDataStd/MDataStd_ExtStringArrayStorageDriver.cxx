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
#include <PDF_Attribute.hxx>
#include <TDF_Attribute.hxx>
#include <MDF_SRelocationTable.hxx>
#include <OCAF/MDataStd/MDataStd_ExtStringArrayStorageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDataStd_ExtStringArrayStorageDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ASDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDataStd_ExtStringArrayStorageDriver)
IMPLEMENT_DOWNCAST(MDataStd_ExtStringArrayStorageDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDataStd_ExtStringArrayStorageDriver)

#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <OCAF/MDataStd/MDataStd.hxx>
#include <PCollection_HExtendedString.hxx>
#include <PDataStd_ExtStringArray.hxx>
#include <PDataStd_ExtStringArray_1.hxx>
#include <TDataStd_ExtStringArray.hxx>

//=======================================================================
//function : MDataStd_ExtStringArrayStorageDriver
//purpose  : Constructor
//=======================================================================

MDataStd_ExtStringArrayStorageDriver::MDataStd_ExtStringArrayStorageDriver
  ( const Handle(CDM_MessageDriver)& theMsgDriver )
 :MDF_ASDriver(theMsgDriver)
{}

//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================

Standard_Integer MDataStd_ExtStringArrayStorageDriver::VersionNumber() const
{ return 0; }


//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================

Handle(Standard_Type) MDataStd_ExtStringArrayStorageDriver::SourceType() const
{
  static Handle(Standard_Type) sourceType = STANDARD_TYPE(TDataStd_ExtStringArray);
  return sourceType;
}


//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================

Handle(PDF_Attribute) MDataStd_ExtStringArrayStorageDriver::NewEmpty() const
{
  return new PDataStd_ExtStringArray_1 ();
}


//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================

void MDataStd_ExtStringArrayStorageDriver::Paste ( 
			      const Handle(TDF_Attribute)&  Source,
			      const Handle(PDF_Attribute)&  Target,
			      const Handle(MDF_SRelocationTable)& ) const
{
  Handle(TDataStd_ExtStringArray)   S = 
    Handle(TDataStd_ExtStringArray)::DownCast (Source);
  Handle(PDataStd_ExtStringArray_1) T = 
    Handle(PDataStd_ExtStringArray_1)::DownCast (Target);
  
  Standard_Integer i, lower = S->Lower(), upper = S->Upper();
  T->Init(lower, upper);
  
  for(i = lower; i<=upper; i++)
  {
    Handle(PCollection_HExtendedString) aPExtStr =
      new PCollection_HExtendedString( S->Value( i ) );
    T->SetValue( i, aPExtStr );
  }
  T->SetDelta(S->GetDelta());
}
