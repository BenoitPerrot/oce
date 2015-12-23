// Created on: 1993-06-17
// Created by: Martine LANGLOIS
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

#include <StepGeom_Line.hxx>
#include <Foundation/StdFail/StdFail_NotDone.hxx>
#include <Mathematics/Primitives/gp_Lin.hxx>
#include <Mathematics/Primitives/gp_Lin2d.hxx>
#include <Geometry/Geom/Geom_Line.hxx>
#include <Geometry/Geom2d/Geom2d_Line.hxx>
#include <DataExchange/GeomToStep/GeomToStep_MakeLine.hxx>
#include <Foundation/StdFail/StdFail_NotDone.hxx>
#include <StepGeom_Line.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_Vector.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>
#include <Mathematics/Primitives/gp_Vec2d.hxx>
#include <DataExchange/GeomToStep/GeomToStep_MakeLine.hxx>
#include <DataExchange/GeomToStep/GeomToStep_MakeCartesianPoint.hxx>
#include <DataExchange/GeomToStep/GeomToStep_MakeVector.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>


//=============================================================================
// Creation d' une line de prostep a partir d' une Lin de gp
//=============================================================================

GeomToStep_MakeLine::GeomToStep_MakeLine( const gp_Lin& L)
{
#define Vec_gen gp_Vec
#include <DataExchange/GeomToStep/GeomToStep_MakeLine_gen.pxx>
#undef Vec_gen
}

//=============================================================================
// Creation d' une line de prostep a partir d' une Lin2d de gp
//=============================================================================

GeomToStep_MakeLine::GeomToStep_MakeLine( const gp_Lin2d& L)
{
#define Vec_gen gp_Vec2d
#include <DataExchange/GeomToStep/GeomToStep_MakeLine_gen.pxx>
#undef Vec_gen
}

//=============================================================================
// Creation d' une line de prostep a partir d' une Line de Geom
//=============================================================================

GeomToStep_MakeLine::GeomToStep_MakeLine ( const Handle(Geom_Line)& Gline)
{
  gp_Lin L;
  L = Gline->Lin();
#define Vec_gen gp_Vec
#include <DataExchange/GeomToStep/GeomToStep_MakeLine_gen.pxx>
#undef Vec_gen
}

//=============================================================================
// Creation d' une line de prostep a partir d' une Line de Geom2d
//=============================================================================

GeomToStep_MakeLine::GeomToStep_MakeLine ( const Handle(Geom2d_Line)& Gline)
{
  gp_Lin2d L;
  L = Gline->Lin2d();
#define Vec_gen gp_Vec2d
#include <DataExchange/GeomToStep/GeomToStep_MakeLine_gen.pxx>
#undef Vec_gen
}

//=============================================================================
// renvoi des valeurs
//=============================================================================

const Handle(StepGeom_Line) &
      GeomToStep_MakeLine::Value() const
{
  StdFail_NotDone_Raise_if(!done == Standard_True,"");
  return theLine;
}

