// Created on: 1999-09-24
// Created by: Sergey ZARITCHNY
// Copyright (c) 1999-1999 Matra Datavision
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

#include <OCAF/TDF/TDF_Label.hxx>
#include <QANewBRepNaming_TopNaming.hxx>

#include <OCAF/TDF/TDF_Label.hxx>

#include <Foundation/Standard/Standard_NullObject.hxx>

//=======================================================================
//function : QANewBRepNaming_TopNaming
//purpose  : 
//=======================================================================

QANewBRepNaming_TopNaming::QANewBRepNaming_TopNaming()
{}

//=======================================================================
//function : QANewBRepNaming_TopNaming
//purpose  : 
//=======================================================================

QANewBRepNaming_TopNaming::QANewBRepNaming_TopNaming(const TDF_Label& Label)
{
  if(Label.IsNull())
    Standard_NullObject::Raise("QANewBRepNaming_TopNaming:: The Result label is Null ..."); 
  myResultLabel = Label;
}

