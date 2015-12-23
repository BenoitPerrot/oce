// Created on: 1997-07-28
// Created by: Pierre CHALAMET
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

#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Visualization/Graphic3d/Graphic3d_Texture2Dmanual.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Graphic3d_Texture2Dmanual)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Graphic3d_Texture2D),
  STANDARD_TYPE(Graphic3d_TextureMap),
  STANDARD_TYPE(Graphic3d_TextureRoot),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Graphic3d_Texture2Dmanual)
IMPLEMENT_DOWNCAST(Graphic3d_Texture2Dmanual,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Graphic3d_Texture2Dmanual)
#include <Visualization/Graphic3d/Graphic3d_TypeOfTextureMode.hxx>
#include <Visualization/Graphic3d/Graphic3d_TextureParams.hxx>

// =======================================================================
// function : Graphic3d_Texture2Dmanual
// purpose  :
// =======================================================================
Graphic3d_Texture2Dmanual::Graphic3d_Texture2Dmanual (const TCollection_AsciiString& theFileName)
: Graphic3d_Texture2D (theFileName, Graphic3d_TOT_2D_MIPMAP)
{
  myParams->SetModulate (Standard_True);
  myParams->SetRepeat   (Standard_True);
  myParams->SetFilter   (Graphic3d_TOTF_TRILINEAR);
}

// =======================================================================
// function : Graphic3d_Texture2Dmanual
// purpose  :
// =======================================================================
Graphic3d_Texture2Dmanual::Graphic3d_Texture2Dmanual (const Graphic3d_NameOfTexture2D theNOT)
: Graphic3d_Texture2D (theNOT, Graphic3d_TOT_2D_MIPMAP)
{
  myParams->SetModulate (Standard_True);
  myParams->SetRepeat   (Standard_True);
  myParams->SetFilter   (Graphic3d_TOTF_TRILINEAR);
}

// =======================================================================
// function : Graphic3d_Texture2Dmanual
// purpose  :
// =======================================================================
Graphic3d_Texture2Dmanual::Graphic3d_Texture2Dmanual (const Handle(Image_PixMap)& thePixMap)
: Graphic3d_Texture2D (thePixMap, Graphic3d_TOT_2D_MIPMAP)
{
  myParams->SetModulate (Standard_True);
  myParams->SetRepeat   (Standard_True);
  myParams->SetFilter   (Graphic3d_TOTF_TRILINEAR);
}
