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

#include <OCAF/TDocStd/TDocStd_Document.hxx>
#include <Draw_Display.hxx>
#include <Draw_Drawable3D.hxx>
#include <Viewer/DDocStd/DDocStd_DrawDocument.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(DDocStd_DrawDocument)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(DDF_Data),
  STANDARD_TYPE(Draw_Drawable3D),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(DDocStd_DrawDocument)
IMPLEMENT_DOWNCAST(DDocStd_DrawDocument,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(DDocStd_DrawDocument)

#include <OCAF/TDocStd/TDocStd_Document.hxx>
#include <OCAF/TDF/TDF_Tool.hxx>
#include <OCAF/TDF/TDF_Data.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>


//=======================================================================
//function : Find
//purpose  : 
//=======================================================================

Handle(DDocStd_DrawDocument) DDocStd_DrawDocument::Find (const Handle(TDocStd_Document)& /*Doc*/) 
{
Handle(DDocStd_DrawDocument)  adoc;
  return adoc;
}


//=======================================================================
//function : DDocStd_DrawDocument
//purpose  : 
//=======================================================================

DDocStd_DrawDocument::DDocStd_DrawDocument (const Handle(TDocStd_Document)& Doc) 
: DDF_Data(new TDF_Data), // Doc->GetData())
  myDocument(Doc)
{
  DataFramework(Doc->GetData());
}

//=======================================================================
//function : GetDocument
//purpose  : 
//=======================================================================

Handle(TDocStd_Document) DDocStd_DrawDocument::GetDocument() const
{
  return myDocument;
}

//=======================================================================
//function : DrawOn
//purpose  : 
//=======================================================================

void DDocStd_DrawDocument::DrawOn(Draw_Display& /*dis*/) const
{
}

//=======================================================================
//function : Copy
//purpose  : 
//=======================================================================

Handle(Draw_Drawable3D) DDocStd_DrawDocument::Copy() const
{
  Handle(DDocStd_DrawDocument) D = new DDocStd_DrawDocument (myDocument);
  return D;
}

//=======================================================================
//function : Dump
//purpose  : 
//=======================================================================

void DDocStd_DrawDocument::Dump (Standard_OStream& S) const
{
  Handle(TDocStd_Document) STDDOC =  Handle(TDocStd_Document)::DownCast(myDocument);
  if (!STDDOC.IsNull()) {
    S << "TDocStd_Document\n";
    DDF_Data::Dump(S);
  }
  else {  
    S << myDocument->DynamicType()->Name() << " is not a CAF document" << endl;
  }
}

//=======================================================================
//function : Whatis
//purpose  : 
//=======================================================================

void DDocStd_DrawDocument::Whatis(Draw_Interpretor& I) const
{ 
  I << myDocument->DynamicType()->Name();
}


