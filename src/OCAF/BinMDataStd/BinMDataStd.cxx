// Created on: 2002-10-30
// Created by: Michael SAZONOV
// Copyright (c) 2002-2014 OPEN CASCADE SAS
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

#include <OCAF/BinMDF/BinMDF_ADriverTable.hxx>
#include <CDM_MessageDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_IntegerDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_RealDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_IntegerArrayDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_RealArrayDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_NameDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_CommentDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_ExpressionDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_RelationDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_TreeNodeDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_UAttributeDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_VariableDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_DirectoryDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_NoteBookDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_ExtStringArrayDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_TickDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_IntegerListDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_RealListDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_ExtStringListDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_BooleanListDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_ReferenceListDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_BooleanArrayDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_ReferenceArrayDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_ByteArrayDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_NamedDataDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_AsciiStringDriver.hxx>
#include <OCAF/BinMDataStd/BinMDataStd_IntPackedMapDriver.hxx>

static Standard_Integer myDocumentVersion = -1;
//=======================================================================
//function : AddDrivers
//purpose  : 
//=======================================================================

void BinMDataStd::AddDrivers (const Handle(BinMDF_ADriverTable)& theDriverTable,
                              const Handle(CDM_MessageDriver)&   theMsgDriver)
{
  theDriverTable->AddDriver (new BinMDataStd_CommentDriver     (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_ExpressionDriver  (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_IntegerArrayDriver(theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_IntegerDriver     (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_NameDriver        (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_RealArrayDriver   (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_RealDriver        (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_RelationDriver    (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_TreeNodeDriver    (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_UAttributeDriver  (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_VariableDriver    (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_DirectoryDriver   (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_NoteBookDriver    (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_ExtStringArrayDriver(theMsgDriver) );

  theDriverTable->AddDriver (new BinMDataStd_TickDriver          (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_IntegerListDriver   (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_RealListDriver      (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_ExtStringListDriver (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_BooleanListDriver   (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_ReferenceListDriver (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_BooleanArrayDriver  (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_ReferenceArrayDriver(theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_ByteArrayDriver     (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_NamedDataDriver     (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_AsciiStringDriver   (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataStd_IntPackedMapDriver  (theMsgDriver) );
}

//=======================================================================
//function : SetDocumentVersion
//purpose  : Sets current document version
//=======================================================================
void BinMDataStd::SetDocumentVersion(const Standard_Integer theVersion)
{
  myDocumentVersion = theVersion;
}
//=======================================================================
//function : DocumentVersion
//purpose  : Retrieved document version
//=======================================================================
Standard_Integer BinMDataStd::DocumentVersion()
{
  return myDocumentVersion;
}
