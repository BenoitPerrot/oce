// Created on: 1998-01-08
// Created by: Isabelle GRIGNON
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

#include <PTopoDS_Shape1.hxx>
#include <PCDMShape_Document.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PCDMShape_Document)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PCDM_Document),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PCDMShape_Document)
IMPLEMENT_DOWNCAST(PCDMShape_Document,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PCDMShape_Document)


//=======================================================================
//function : PCDMShape_Document
//purpose  : 
//=======================================================================

PCDMShape_Document::PCDMShape_Document()
{}


//=======================================================================
//function : PCDMShape_Document
//purpose  : 
//=======================================================================

PCDMShape_Document::PCDMShape_Document(const PTopoDS_Shape1& T)
: myShape(T)
{}


//=======================================================================
//function : TShape
//purpose  : 
//=======================================================================

const PTopoDS_Shape1 PCDMShape_Document::Shape()const 
{ return myShape; }


//=======================================================================
//function : TShape
//purpose  : 
//=======================================================================

void  PCDMShape_Document::Shape(const PTopoDS_Shape1& T)
{ myShape = T; }
