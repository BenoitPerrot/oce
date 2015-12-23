// Created on: 2001-08-27
// Created by: Alexander GRIGORIEV
// Copyright (c) 2001-2014 OPEN CASCADE SAS
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

// modified     20.04.2009 Sergey Zaritchny

#include <XmlMDF_ADriverTable.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd.hxx>

#include <OCAF/XmlMDataStd/XmlMDataStd_DirectoryDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_UAttributeDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_IntegerArrayDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_RealArrayDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_ExtStringArrayDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_NameDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_CommentDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_IntegerDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_RealDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_VariableDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_ExpressionDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_RelationDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_NoteBookDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_TreeNodeDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_TickDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_IntegerListDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_RealListDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_ExtStringListDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_BooleanListDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_ReferenceListDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_BooleanArrayDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_ReferenceArrayDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_ByteArrayDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_NamedDataDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_AsciiStringDriver.hxx>
#include <OCAF/XmlMDataStd/XmlMDataStd_IntPackedMapDriver.hxx>

static Standard_Integer myDocumentVersion = -1;
//=======================================================================
//function : AddDrivers
//purpose  : 
//=======================================================================
void XmlMDataStd::AddDrivers (const Handle(XmlMDF_ADriverTable)& aDriverTable,
                              const Handle(CDM_MessageDriver)&   anMsgDrv)
{
  aDriverTable-> AddDriver (new XmlMDataStd_DirectoryDriver     (anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_IntegerArrayDriver  (anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_RealArrayDriver     (anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_UAttributeDriver    (anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_NameDriver          (anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_CommentDriver       (anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_IntegerDriver       (anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_RealDriver          (anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_VariableDriver      (anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_ExpressionDriver    (anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_RelationDriver      (anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_NoteBookDriver      (anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_TreeNodeDriver      (anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_ExtStringArrayDriver(anMsgDrv));

  aDriverTable-> AddDriver (new XmlMDataStd_TickDriver          (anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_IntegerListDriver   (anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_RealListDriver      (anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_ExtStringListDriver (anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_BooleanListDriver   (anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_ReferenceListDriver (anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_BooleanArrayDriver  (anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_ReferenceArrayDriver(anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_ByteArrayDriver     (anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_NamedDataDriver     (anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_AsciiStringDriver   (anMsgDrv));
  aDriverTable-> AddDriver (new XmlMDataStd_IntPackedMapDriver  (anMsgDrv));
}

//=======================================================================
//function : SetDocumentVersion
//purpose  : Sets current document version
//=======================================================================
void XmlMDataStd::SetDocumentVersion(const Standard_Integer theVersion)
{
  myDocumentVersion = theVersion;
}
//=======================================================================
//function : DocumentVersion
//purpose  : Retrieved document version
//=======================================================================
Standard_Integer XmlMDataStd::DocumentVersion()
{
  return myDocumentVersion;
}
