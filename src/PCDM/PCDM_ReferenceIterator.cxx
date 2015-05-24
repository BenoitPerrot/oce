// Created on: 1997-12-01
// Created by: Jean-Louis Frenkel
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

#include <CDM_MessageDriver.hxx>
#include <CDM_Document.hxx>
#include <CDM_MetaData.hxx>
#include <CDM_Application.hxx>
#include <PCDM_ReferenceIterator.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PCDM_ReferenceIterator)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PCDM_ReferenceIterator)
IMPLEMENT_DOWNCAST(PCDM_ReferenceIterator,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(PCDM_ReferenceIterator)
#include <Storage_Data.hxx>
#include <UTL.hxx>
#include <CDM_Document.hxx>
#include <CDM_Application.hxx>
#include <PCDM_RetrievalDriver.hxx>
#include <PCDM_Reference.hxx>
#include <OSD_Path.hxx>

#ifdef WNT
# include <tchar.h>
#endif  // WNT

//=======================================================================
//function : PCDM_ReferenceIterator
//purpose  : 
//=======================================================================

PCDM_ReferenceIterator::PCDM_ReferenceIterator (const Handle(CDM_MessageDriver)& theMsgDriver) :
      myIterator(0)
{
  myMessageDriver = theMsgDriver;
}

//=======================================================================
//function : LoadReferences
//purpose  : 
//=======================================================================

void PCDM_ReferenceIterator::LoadReferences(const Handle(CDM_Document)& aDocument, 
					    const Handle(CDM_MetaData)& aMetaData, 
					    const Handle(CDM_Application)& anApplication, 
					    const Standard_Boolean UseStorageConfiguration) {
  for (Init(aMetaData);More();Next()) {
    aDocument->CreateReference(MetaData(UseStorageConfiguration),ReferenceIdentifier(),
			       anApplication,DocumentVersion(),UseStorageConfiguration);
  }
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void PCDM_ReferenceIterator::Init(const Handle(CDM_MetaData)& theMetaData) {

  myReferences.Clear();
  // mod. by szy
  PCDM_RetrievalDriver::References(theMetaData->FileName(), myReferences, 
    myMessageDriver);
  myIterator=1;  
}

//=======================================================================
//function : More
//purpose  : 
//=======================================================================

Standard_Boolean PCDM_ReferenceIterator::More() const {
  return myIterator <= myReferences.Length();
}

//=======================================================================
//function : Next
//purpose  : 
//=======================================================================

void PCDM_ReferenceIterator::Next() {
  myIterator++;
}

//=======================================================================
//function : MetaData
//purpose  : 
//=======================================================================

Handle(CDM_MetaData) PCDM_ReferenceIterator::MetaData(const Standard_Boolean ) const {
  
  TCollection_ExtendedString theFolder,theName;
  TCollection_ExtendedString theFile=myReferences(myIterator).FileName();
  TCollection_ExtendedString f(theFile);
#ifndef WNT
  
  Standard_Integer i= f.SearchFromEnd("/");
  TCollection_ExtendedString n = f.Split(i); 
  f.Trunc(f.Length()-1);
  theFolder = f;
  theName = n;
#else
  OSD_Path p = UTL::Path(f);
  Standard_ExtCharacter      chr;
  TCollection_ExtendedString dir, dirRet, name;
  
  dir = UTL::Disk(p);
  dir += UTL::Trek(p);
  
  for ( int i = 1; i <= dir.Length (); ++i ) {
    
    chr = dir.Value ( i );
    
    switch ( chr ) {
      
    case _TEXT( '|' ):
      dirRet += _TEXT( "/" );
      break;
      
    case _TEXT( '^' ):
      
      dirRet += _TEXT( ".." );
      break;
      
    default:
      dirRet += chr;
      
    }  
  }
  theFolder = dirRet;
  theName   = UTL::Name(p); theName+= UTL::Extension(p);
#endif  // WNT
  
  return CDM_MetaData::LookUp(theFolder,theName,theFile,theFile,UTL::IsReadOnly(theFile));
}
//=======================================================================
//function : ReferenceIdentifier
//purpose  : 
//=======================================================================

Standard_Integer PCDM_ReferenceIterator::ReferenceIdentifier() const {
  return myReferences(myIterator).ReferenceIdentifier();
}
//=======================================================================
//function : DocumentVersion
//purpose  : 
//=======================================================================

Standard_Integer PCDM_ReferenceIterator::DocumentVersion() const {
  return myReferences(myIterator).DocumentVersion();
}
