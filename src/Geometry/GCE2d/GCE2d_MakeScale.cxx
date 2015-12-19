// Created on: 1992-10-02
// Created by: Remi GILET
// Copyright (c) 1992-1999 Matra Datavision
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

#include <Geom2d_Transformation.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <Geometry/GCE2d/GCE2d_MakeScale.hxx>

//=========================================================================
//   Creation d un homothetie de gp de centre Point et de rapport Scale.  +
//=========================================================================

GCE2d_MakeScale::GCE2d_MakeScale(const gp_Pnt2d&     Point ,
				 const Standard_Real Scale ) {
  TheScale = new Geom2d_Transformation();
  TheScale->SetScale(Point,Scale);
}

const Handle(Geom2d_Transformation)& GCE2d_MakeScale::Value() const
{ 
  return TheScale;
}

const Handle(Geom2d_Transformation)& GCE2d_MakeScale::Operator() const 
{
  return TheScale;
}

GCE2d_MakeScale::operator Handle(Geom2d_Transformation) () const
{
  return TheScale;
}

