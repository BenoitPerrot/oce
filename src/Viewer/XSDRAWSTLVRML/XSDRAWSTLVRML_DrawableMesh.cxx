// Created on: 2004-06-11
// Created by: Alexander SOLOVYOV
// Copyright (c) 2004-2014 OPEN CASCADE SAS
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

#include <Visualization/MeshVS/MeshVS_Mesh.hxx>
#include <Draw_Display.hxx>
#include <XSDRAWSTLVRML_DrawableMesh.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(XSDRAWSTLVRML_DrawableMesh)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Draw_Drawable3D),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(XSDRAWSTLVRML_DrawableMesh)
IMPLEMENT_DOWNCAST(XSDRAWSTLVRML_DrawableMesh,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(XSDRAWSTLVRML_DrawableMesh)

//================================================================
// Function : DrawOn
// Purpose  :
//================================================================
XSDRAWSTLVRML_DrawableMesh::XSDRAWSTLVRML_DrawableMesh( const Handle( MeshVS_Mesh )& aMesh )
{
  myMesh = aMesh;
}

//================================================================
// Function :
// Purpose  :
//================================================================
void XSDRAWSTLVRML_DrawableMesh::DrawOn(Draw_Display& /*d*/) const
{
}

//================================================================
// Function :
// Purpose  :
//================================================================
Handle( MeshVS_Mesh ) XSDRAWSTLVRML_DrawableMesh::GetMesh() const
{
  return myMesh;
}
