// Created on: 1997-08-13
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

#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <OCAF/CDF/CDF_Directory.hxx>
#include <OCAF/CDM/CDM_Document.hxx>
#include <OCAF/CDF/CDF_DirectoryIterator.hxx>
#include <OCAF/CDF/CDF_Session.hxx>
CDF_DirectoryIterator::CDF_DirectoryIterator():
  myIterator(CDF_Session::CurrentSession()->Directory()->List().begin()),
  myEnd(CDF_Session::CurrentSession()->Directory()->List().end())
{}



CDF_DirectoryIterator::CDF_DirectoryIterator(const Handle(CDF_Directory)& aDirectory):
  myIterator(aDirectory->List().begin()),
  myEnd(aDirectory->List().end())
{}




Standard_Boolean CDF_DirectoryIterator::MoreDocument() {
  return myIterator != myEnd;
}
void CDF_DirectoryIterator::NextDocument() {
  ++myIterator;
}

Handle(CDM_Document) CDF_DirectoryIterator::Document() {

  return (*myIterator);
}

