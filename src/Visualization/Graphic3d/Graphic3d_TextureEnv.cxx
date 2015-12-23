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

#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Visualization/Graphic3d/Graphic3d_TextureEnv.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Graphic3d_TextureEnv)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Graphic3d_TextureRoot),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Graphic3d_TextureEnv)
IMPLEMENT_DOWNCAST(Graphic3d_TextureEnv,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Graphic3d_TextureEnv)
#include <Visualization/Graphic3d/Graphic3d_TypeOfTexture.hxx>
#include <Visualization/Graphic3d/Graphic3d_TypeOfTextureMode.hxx>
#include <Visualization/Graphic3d/Graphic3d_TextureParams.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>

static const char *NameOfTexture_to_FileName[] =
{
  "env_clouds.rgb",
  "env_cv.rgb",
  "env_medit.rgb",
  "env_pearl.rgb",
  "env_sky1.rgb",
  "env_sky2.rgb",
  "env_lines.rgb",
  "env_road.rgb"
};

// =======================================================================
// function : Graphic3d_TextureEnv
// purpose  :
// =======================================================================
Graphic3d_TextureEnv::Graphic3d_TextureEnv (const TCollection_AsciiString& theFileName)
: Graphic3d_TextureRoot (theFileName, Graphic3d_TOT_2D_MIPMAP),
  myName (Graphic3d_NOT_ENV_UNKNOWN)
{
  myParams->SetFilter  (Graphic3d_TOTF_TRILINEAR);
  myParams->SetGenMode (Graphic3d_TOTM_SPHERE,
                        Graphic3d_Vec4 (1.0f, 0.0f, 0.0f, 0.0f),
                        Graphic3d_Vec4 (0.0f, 1.0f, 0.0f, 0.0f));
}

// =======================================================================
// function : Graphic3d_TextureEnv
// purpose  :
// =======================================================================
Graphic3d_TextureEnv::Graphic3d_TextureEnv (const Graphic3d_NameOfTextureEnv theNOT)
: Graphic3d_TextureRoot (NameOfTexture_to_FileName[theNOT], Graphic3d_TOT_2D_MIPMAP),
  myName (theNOT)
{
  myPath.SetTrek (Graphic3d_TextureRoot::TexturesFolder());
  myTexId = TCollection_AsciiString ("Graphic3d_TextureEnv_")
          + NameOfTexture_to_FileName[theNOT];

  myParams->SetFilter  (Graphic3d_TOTF_TRILINEAR);
  myParams->SetGenMode (Graphic3d_TOTM_SPHERE,
                        Graphic3d_Vec4 (1.0f, 0.0f, 0.0f, 0.0f),
                        Graphic3d_Vec4 (0.0f, 1.0f, 0.0f, 0.0f));
}

// =======================================================================
// function : Name
// purpose  :
// =======================================================================
Graphic3d_NameOfTextureEnv Graphic3d_TextureEnv::Name() const
{
  return myName;
}

// =======================================================================
// function : NumberOfTextures
// purpose  :
// =======================================================================
Standard_Integer Graphic3d_TextureEnv::NumberOfTextures()
{
  return sizeof(NameOfTexture_to_FileName)/sizeof(char*);
}

// =======================================================================
// function : TextureName
// purpose  :
// =======================================================================
TCollection_AsciiString Graphic3d_TextureEnv::TextureName (const Standard_Integer theRank)
{
  if(theRank < 1 || theRank > NumberOfTextures())
  {
	Standard_OutOfRange::Raise ("BAD index of texture");
  }

  TCollection_AsciiString aFileName (NameOfTexture_to_FileName[theRank - 1]);
  Standard_Integer i = aFileName.SearchFromEnd(".");
  return aFileName.SubString (5, i - 1);
}
