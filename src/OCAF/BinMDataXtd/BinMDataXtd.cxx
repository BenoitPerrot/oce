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

// modified   13.04.2009 Sergey Zaritchny

#include <OCAF/BinMDF/BinMDF_ADriverTable.hxx>
#include <CDM_MessageDriver.hxx>
#include <OCAF/BinMDataXtd/BinMDataXtd.hxx>
#include <OCAF/BinMDataXtd/BinMDataXtd_ConstraintDriver.hxx>
#include <OCAF/BinMDataXtd/BinMDataXtd_GeometryDriver.hxx>
#include <OCAF/BinMDataXtd/BinMDataXtd_PatternStdDriver.hxx>
#include <OCAF/BinMDataXtd/BinMDataXtd_ShapeDriver.hxx>
#include <OCAF/BinMDataXtd/BinMDataXtd_PointDriver.hxx>
#include <OCAF/BinMDataXtd/BinMDataXtd_AxisDriver.hxx>
#include <OCAF/BinMDataXtd/BinMDataXtd_PlaneDriver.hxx>
#include <OCAF/BinMDataXtd/BinMDataXtd_PlacementDriver.hxx>

static Standard_Integer myDocumentVersion = -1;
//=======================================================================
//function : AddDrivers
//purpose  : 
//=======================================================================

void BinMDataXtd::AddDrivers (const Handle(BinMDF_ADriverTable)& theDriverTable,
                              const Handle(CDM_MessageDriver)&   theMsgDriver)
{
  theDriverTable->AddDriver (new BinMDataXtd_ConstraintDriver  (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataXtd_GeometryDriver    (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataXtd_PatternStdDriver  (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataXtd_ShapeDriver       (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataXtd_PointDriver       (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataXtd_AxisDriver        (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataXtd_PlaneDriver       (theMsgDriver) );
  theDriverTable->AddDriver (new BinMDataXtd_PlacementDriver   (theMsgDriver) );

}

//=======================================================================
//function : SetDocumentVersion
//purpose  : Sets current document version
//=======================================================================
void BinMDataXtd::SetDocumentVersion(const Standard_Integer theVersion)
{
  myDocumentVersion = theVersion;
}
//=======================================================================
//function : DocumentVersion
//purpose  : Retrieved document version
//=======================================================================
Standard_Integer BinMDataXtd::DocumentVersion()
{
  return myDocumentVersion;
}
