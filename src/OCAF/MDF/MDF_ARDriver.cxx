// Created by: DAUTRY Philippe
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

//      	----------------

// Version:	0.0
//Version	Date		Purpose
//		0.0	Apr 28 1997	Creation



#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
#include <TDF_Attribute.hxx>
#include <OCAF/PDF/PDF_Attribute.hxx>
#include <OCAF/MDF/MDF_RRelocationTable.hxx>
#include <Foundation/TCollection/TCollection_ExtendedString.hxx>
#include <OCAF/MDF/MDF_ARDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(MDF_ARDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MDF_ARDriver)
IMPLEMENT_DOWNCAST(MDF_ARDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MDF_ARDriver)
#include <Foundation/TCollection/TCollection_ExtendedString.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>
//=======================================================================
//function : MDF_ARDriver
//purpose  : 
//=======================================================================

MDF_ARDriver::MDF_ARDriver (const Handle(CDM_MessageDriver)& theMsgDriver)
     : myMessageDriver (theMsgDriver) {}

//=======================================================================
//function : WriteMessage
//purpose  : 
//=======================================================================

void MDF_ARDriver::WriteMessage(const TCollection_ExtendedString& theMessage) const {
  myMessageDriver->Write (theMessage.ToExtString());
}
