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
#include <OCAF/TDF/TDF_Attribute.hxx>
#include <OCAF/PDF/PDF_Attribute.hxx>
#include <OCAF/MDF/MDF_RRelocationTable.hxx>
#include <OCAF/MDataStd/MDataStd_ExpressionRetrievalDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDataStd_ExpressionRetrievalDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ARDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDataStd_ExpressionRetrievalDriver)
IMPLEMENT_DOWNCAST(MDataStd_ExpressionRetrievalDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDataStd_ExpressionRetrievalDriver)
#include <OCAF/PDataStd/PDataStd_Expression.hxx>
#include <OCAF/TDataStd/TDataStd_Expression.hxx>
#include <Foundation/TCollection/TCollection_ExtendedString.hxx>
#include <OCAF/PCollection/PCollection_HExtendedString.hxx>
#include <OCAF/TDF/TDF_ListIteratorOfAttributeList.hxx> 
#include <OCAF/PDF/PDF_HAttributeArray1.hxx> 
#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>

//=======================================================================
//function : MDataStd_ExpressionRetrievalDriver
//purpose  : 
//=======================================================================

MDataStd_ExpressionRetrievalDriver::MDataStd_ExpressionRetrievalDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ARDriver(theMsgDriver)
{
}

//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================

Standard_Integer MDataStd_ExpressionRetrievalDriver::VersionNumber() const
{ return 0; }

//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================

Handle(Standard_Type) MDataStd_ExpressionRetrievalDriver::SourceType() const
{ return STANDARD_TYPE(PDataStd_Expression); }

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================

Handle(TDF_Attribute) MDataStd_ExpressionRetrievalDriver::NewEmpty() const
{ return new TDataStd_Expression (); }

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================

void MDataStd_ExpressionRetrievalDriver::Paste(const Handle(PDF_Attribute)& Source,const Handle(TDF_Attribute)& Target,const Handle(MDF_RRelocationTable)& RelocTable) const
{
  Handle(PDataStd_Expression) S = Handle(PDataStd_Expression)::DownCast (Source);
  Handle(TDataStd_Expression) T = Handle(TDataStd_Expression)::DownCast (Target);
  TCollection_ExtendedString Expression = (S->GetName())->Convert ();
  T->SetExpression (Expression);  
  
  Handle(PDF_Attribute) PV; 

  Handle(PDF_HAttributeArray1) PVARS = S->GetVariables ();
  if (PVARS.IsNull()) return;
  for (Standard_Integer i = 1; i <= PVARS->Length (); i++) {
    PV = PVARS->Value (i);
    if (!PV.IsNull ()) {
      Handle(TDF_Attribute) TV;
      if (!RelocTable->HasRelocation (PV, TV)) {
	Standard_NoSuchObject::Raise("MDataStd_ConstraintRetrievalDriver::Paste");
      }
      T->GetVariables().push_back(TV);
    }
  }
}
