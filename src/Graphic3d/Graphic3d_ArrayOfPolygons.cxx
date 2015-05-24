// Created on: 2001-01-04
// Copyright (c) 2001-2014 OPEN CASCADE SAS
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

#include <Graphic3d_ArrayOfPolygons.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Graphic3d_ArrayOfPolygons)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Graphic3d_ArrayOfPrimitives),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Graphic3d_ArrayOfPolygons)
IMPLEMENT_DOWNCAST(Graphic3d_ArrayOfPolygons,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Graphic3d_ArrayOfPolygons)

Graphic3d_ArrayOfPolygons::Graphic3d_ArrayOfPolygons (const Standard_Integer theMaxVertexs,
                                                      const Standard_Integer theMaxBounds,
                                                      const Standard_Integer theMaxEdges,
                                                      const Standard_Boolean theHasVNormals,
                                                      const Standard_Boolean theHasVColors,
                                                      const Standard_Boolean theHasFColors,
                                                      const Standard_Boolean theHasVTexels)
: Graphic3d_ArrayOfPrimitives (Graphic3d_TOPA_POLYGONS, theMaxVertexs, theMaxBounds, theMaxEdges, theHasVNormals, theHasVColors, theHasFColors, theHasVTexels)
{}
