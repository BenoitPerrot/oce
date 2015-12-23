// Created on: 1997-07-08
// Created by: Sergey RUIN
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

#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
#include <OCAF/PDF/PDF_Attribute.hxx>
#include <OCAF/TDF/TDF_Attribute.hxx>
#include <OCAF/MDF/MDF_SRelocationTable.hxx>
#include <OCAF/MPrsStd/MPrsStd_AISPresentationStorageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MPrsStd_AISPresentationStorageDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MDF_ASDriver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MPrsStd_AISPresentationStorageDriver)
IMPLEMENT_DOWNCAST(MPrsStd_AISPresentationStorageDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MPrsStd_AISPresentationStorageDriver)

#include <OCAF/PPrsStd/PPrsStd_AISPresentation.hxx>
#include <OCAF/PPrsStd/PPrsStd_AISPresentation_1.hxx>
#include <OCAF/TPrsStd/TPrsStd_AISPresentation.hxx>
#include <Visualization/AIS/AIS_InteractiveObject.hxx>
#include <Visualization/AIS/AIS_InteractiveContext.hxx>
#include <Visualization/AIS/AIS_Drawer.hxx>
#include <V3d_Viewer.hxx>
#include <Foundation/TCollection/TCollection_ExtendedString.hxx>
#include <OCAF/PCollection/PCollection_HExtendedString.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>

//=======================================================================
//function : MPrsStd_AISPresentationStorageDriver
//purpose  : 
//=======================================================================

MPrsStd_AISPresentationStorageDriver::MPrsStd_AISPresentationStorageDriver(const Handle(CDM_MessageDriver)& theMsgDriver):MDF_ASDriver(theMsgDriver)
{
}

Standard_Integer MPrsStd_AISPresentationStorageDriver::VersionNumber() const
{ return 0; }

Handle(Standard_Type) MPrsStd_AISPresentationStorageDriver::SourceType() const
{ return STANDARD_TYPE(TPrsStd_AISPresentation); }

Handle(PDF_Attribute) MPrsStd_AISPresentationStorageDriver::NewEmpty() const
{
// return new PPrsStd_AISPresentation; 
  return new PPrsStd_AISPresentation_1;
}

void MPrsStd_AISPresentationStorageDriver::Paste(const Handle(TDF_Attribute)& Source,
						 const Handle(PDF_Attribute)& Target,
						 const Handle(MDF_SRelocationTable)& /*RelocTable*/) const
{
  Handle(TPrsStd_AISPresentation) S = Handle(TPrsStd_AISPresentation)::DownCast (Source);

  // Handle(PPrsStd_AISPresentation) T = Handle(PPrsStd_AISPresentation)::DownCast (Target);
  Handle(PPrsStd_AISPresentation_1) T = Handle(PPrsStd_AISPresentation_1)::DownCast (Target);

  T->SetDisplayed( S->IsDisplayed() );  

  TCollection_ExtendedString  extstr("00000000-0000-0000-0000-000000000000");  //covert GUID into ExtendedString
  Standard_PExtCharacter pStr;
  //
  pStr=(Standard_PExtCharacter)extstr.ToExtString();
  S->GetDriverGUID().ToExtString(pStr); 

  Handle(PCollection_HExtendedString) guid = new PCollection_HExtendedString ( extstr ); 
  T->SetDriverGUID ( guid );    

  if( S->HasOwnColor() ) T->SetColor( (Standard_Integer)(S->Color())  );
  else T->SetColor(-1);

  if( S->HasOwnMaterial() ) T->SetMaterial( (Standard_Integer)(S->Material())  );
  else T->SetMaterial(-1);

  if( S->HasOwnTransparency() ) T->SetTransparency( S->Transparency() );
  else T->SetTransparency(-1.);

  if( S->HasOwnWidth() ) T->SetWidth( S->Width() );
  else T->SetWidth(-1.);  

   T->SetMode(S->Mode());

#ifdef OCCT_DEBUG
  cout << "AISPresentationStorageDriver "  << "storaged DriverGUID ==> "   << guid->Convert() << endl;
#endif
}



