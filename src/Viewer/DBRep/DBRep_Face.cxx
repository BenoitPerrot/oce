// Created on: 1993-07-15
// Created by: Remi LEQUETTE
// Copyright (c) 1993-1999 Matra Datavision
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

#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <Viewer/Draw/Draw_Color.hxx>
#include <Viewer/DBRep/DBRep_Face.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(DBRep_Face)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(DBRep_Face)
IMPLEMENT_DOWNCAST(DBRep_Face,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(DBRep_Face)

//=======================================================================
//function : DBRep_Face
//purpose  : 
//=======================================================================

DBRep_Face::DBRep_Face(const TopoDS_Face& F, 
		       const Standard_Integer N,
		       const Draw_Color& C) :
       myFace(F),
       myColor(C),
       myTypes(N ? 1 : 0,N),
       myParams(N ? 1 : 0,3*N)
{
}


