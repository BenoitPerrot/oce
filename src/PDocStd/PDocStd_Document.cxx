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

#include <PDF_Data.hxx>
#include <PDocStd_Document.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PDocStd_Document)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(PCDM_Document),
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PDocStd_Document)
IMPLEMENT_DOWNCAST(PDocStd_Document,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PDocStd_Document)



//=======================================================================
//function : PDocStd_Document
//purpose  : 
//=======================================================================

PDocStd_Document::PDocStd_Document () {}


//=======================================================================
//function : PDocStd_Document
//purpose  : 
//=======================================================================

PDocStd_Document::PDocStd_Document(const Handle(PDF_Data)& data)
:myData(data)
{
}


//=======================================================================
//function : SetData
//purpose  : 
//=======================================================================

void PDocStd_Document::SetData(const Handle(PDF_Data)& data)
{
  myData = data;
}



//=======================================================================
//function : GetData
//purpose  : 
//=======================================================================

Handle(PDF_Data) PDocStd_Document::GetData() const
{
 return myData;
}

