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
#include <MDF_SRelocationTable.hxx>
#include <OCAF/MDataXtd/MDataXtd_ConstraintStorageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDataXtd_ConstraintStorageDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ASDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDataXtd_ConstraintStorageDriver)
IMPLEMENT_DOWNCAST(MDataXtd_ConstraintStorageDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDataXtd_ConstraintStorageDriver)
#include <PDataXtd_Constraint.hxx>
#include <TDataXtd_Constraint.hxx>
#include <TNaming_NamedShape.hxx>
#include <PNaming_NamedShape.hxx>
#include <PDF_HAttributeArray1.hxx>
#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <TDataXtd_ConstraintEnum.hxx>
#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <Foundation/Standard/Standard_DomainError.hxx>
#include <OCAF/MDataXtd/MDataXtd.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>



//=======================================================================
//function : MDataXtd_ConstraintStorageDriver
//purpose  : 
//=======================================================================

MDataXtd_ConstraintStorageDriver::MDataXtd_ConstraintStorageDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ASDriver(theMsgDriver)
{
}


//=======================================================================
//function : VersionNumber
//purpose  : 
//=======================================================================

Standard_Integer MDataXtd_ConstraintStorageDriver::VersionNumber() const
{ return 0; }


//=======================================================================
//function : SourceType
//purpose  : 
//=======================================================================

Handle(Standard_Type) MDataXtd_ConstraintStorageDriver::SourceType() const
{ return STANDARD_TYPE (TDataXtd_Constraint); }


//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================

Handle(PDF_Attribute) MDataXtd_ConstraintStorageDriver::NewEmpty() const
{ return new PDataXtd_Constraint; }


//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================

void MDataXtd_ConstraintStorageDriver::Paste (
  const Handle(TDF_Attribute)&        Source,
  const Handle(PDF_Attribute)&        Target,
  const Handle(MDF_SRelocationTable)& RelocTable) const
{
  Handle(TDataXtd_Constraint) S = 
     Handle(TDataXtd_Constraint)::DownCast (Source);
  Handle(PDataXtd_Constraint) T = 
    Handle(PDataXtd_Constraint)::DownCast (Target);

  Handle(PDataStd_Real) TValue;
  Handle(TDataStd_Real) Value = S->GetValue ();
  if (!Value.IsNull ()) {
    if (!RelocTable->HasRelocation (Value, TValue )) {
      Standard_NoSuchObject::Raise("MDataXtd_ConstraintStorageDriver::Paste");
    }
    T->Set (TValue);
  }

  Standard_Integer NbGeom = S->NbGeometries ();
  if (NbGeom >= 1) {
    Handle(PDF_HAttributeArray1) PGeometries = new PDF_HAttributeArray1 (1, NbGeom);
    for (Standard_Integer i = 1; i <= NbGeom; i++) {
      Handle(PDF_Attribute) PG;
      if (!S->GetGeometry (i).IsNull()) {
	if(!RelocTable->HasRelocation (S->GetGeometry (i), PG)) {
	  Standard_NoSuchObject::Raise("MDataXtd_ConstraintStorageDriver::Paste");
	}
      }
      PGeometries->SetValue (i,PG);
    }
    T->SetGeometries (PGeometries);
  }

  Handle(TNaming_NamedShape) TPlane = S->GetPlane();
  Handle(PNaming_NamedShape) PPlane;
  if (!TPlane.IsNull()) {
    if (!RelocTable->HasRelocation (TPlane, PPlane )) {
      Standard_NoSuchObject::Raise("MDataXtd_ConstraintStorageDriver::Paste");
    }
    T->SetPlane(PPlane);
  }
  
  T->SetType (MDataXtd::ConstraintTypeToInteger(S->GetType ()));
  T->Verified(S->Verified());
  T->Inverted(S->Inverted());
  T->Reversed(S->Reversed());
}





