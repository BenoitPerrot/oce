// Copyright (c) 2013-2014 OPEN CASCADE SAS
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

#ifndef _StdPrs_Vertex_H__
#define _StdPrs_Vertex_H__

#include <Visualization/Prs3d/Prs3d_Point.hxx>
#include <Visualization/Prs3d/Prs3d_Drawer.hxx>
#include <ModelingData/TopoDS/TopoDS_Vertex.hxx>
#include <Visualization/StdPrs/StdPrs_ToolVertex.hxx>
#include <Visualization/Prs3d/Prs3d_Presentation.hxx>

typedef Prs3d_Point<TopoDS_Vertex, StdPrs_ToolVertex> StdPrs_Vertex;
#endif
