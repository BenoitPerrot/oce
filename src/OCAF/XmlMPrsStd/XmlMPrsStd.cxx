// Created on: 2001-07-09
// Created by: Julia DOROVSKIKH
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

#include <OCAF/XmlMDF/XmlMDF_ADriverTable.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <OCAF/XmlMPrsStd/XmlMPrsStd.hxx>

#include <OCAF/XmlMPrsStd/XmlMPrsStd_PositionDriver.hxx>
#include <OCAF/XmlMPrsStd/XmlMPrsStd_AISPresentationDriver.hxx>

///=======================================================================
//function : AddDrivers
//purpose  : 
//=======================================================================
void XmlMPrsStd::AddDrivers (const Handle(XmlMDF_ADriverTable)& aDriverTable,
                             const Handle(CDM_MessageDriver)&   aMessageDriver)
{
  aDriverTable->AddDriver(new XmlMPrsStd_PositionDriver(aMessageDriver)); 
  aDriverTable->AddDriver(new XmlMPrsStd_AISPresentationDriver(aMessageDriver));
}
