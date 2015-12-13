// Copyright (c) 1998-1999 Matra Datavision
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

#include <Foundation/Storage/Storage_BaseDriver.hxx>
#include <Foundation/Storage/Storage_StreamExtCharParityError.hxx>
#include <Foundation/Storage/Storage_StreamFormatError.hxx>
#include <Foundation/Storage/Storage_StreamTypeMismatchError.hxx>
#include <Foundation/Storage/Storage_StreamWriteError.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Foundation/TCollection/TCollection_ExtendedString.hxx>
#include <Foundation/TColStd/TColStd_SequenceOfAsciiString.hxx>
#include <Foundation/TColStd/TColStd_SequenceOfExtendedString.hxx>

Storage_BaseDriver::Storage_BaseDriver() : myOpenMode(Storage_VSNone)
{
}
void Storage_BaseDriver::Delete()
{}

