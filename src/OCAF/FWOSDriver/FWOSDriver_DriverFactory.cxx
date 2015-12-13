// Created on: 1997-03-04
// Created by: Mister rmi
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

#include <CDF_MetaDataDriver.hxx>
#include <FWOSDriver_DriverFactory.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(FWOSDriver_DriverFactory)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(CDF_MetaDataDriverFactory),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(FWOSDriver_DriverFactory)
IMPLEMENT_DOWNCAST(FWOSDriver_DriverFactory,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(FWOSDriver_DriverFactory)

#include <CDF_FWOSDriver.hxx>
FWOSDriver_DriverFactory::FWOSDriver_DriverFactory(){}


Handle(CDF_MetaDataDriver) FWOSDriver_DriverFactory::Build() const {
  static Handle(CDF_FWOSDriver) d =  new CDF_FWOSDriver();
  return d;
}
