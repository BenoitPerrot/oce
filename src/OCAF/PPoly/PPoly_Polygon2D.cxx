// Copyright (c) 1998-1999 Matra Datavision
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

#include <OCAF/PColgp/PColgp_HArray1OfPnt2d.hxx>
#include <OCAF/PPoly/PPoly_Polygon2D.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(PPoly_Polygon2D)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PPoly_Polygon2D)
IMPLEMENT_DOWNCAST(PPoly_Polygon2D,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PPoly_Polygon2D)

PPoly_Polygon2D::PPoly_Polygon2D(const Handle(PColgp_HArray1OfPnt2d)& Nodes,
				 const Standard_Real Defl) :
				 myDeflection(Defl),
				 myNodes(Nodes)
{
}

Standard_Real PPoly_Polygon2D::Deflection() const 
{
  return myDeflection;
}

void PPoly_Polygon2D::Deflection(const Standard_Real Defl)
{
  myDeflection = Defl;
}

Standard_Integer PPoly_Polygon2D::NbNodes() const 
{
  return myNodes->Length();

}

Handle(PColgp_HArray1OfPnt2d) PPoly_Polygon2D::Nodes() const 
{
  return myNodes;
}

void PPoly_Polygon2D::Nodes(const Handle(PColgp_HArray1OfPnt2d)& Nodes)
{
  myNodes = Nodes;
}
