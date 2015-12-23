// Copyright (c) 1995-1999 Matra Datavision
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

#define IMP120100	//GG 01/01/00 Add SetColor() methods

#include <Visualization/Graphic3d/Graphic3d_AspectLine3d.hxx>
#include <Prs3d_InvalidAngle.hxx>
#include <Foundation/Quantity/Quantity_Color.hxx>
#include <Prs3d_ArrowAspect.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Prs3d_ArrowAspect)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Prs3d_BasicAspect),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Prs3d_ArrowAspect)
IMPLEMENT_DOWNCAST(Prs3d_ArrowAspect,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Prs3d_ArrowAspect)

Prs3d_ArrowAspect::Prs3d_ArrowAspect () 
     : myAngle(M_PI/180.*10), myLength(1.) {
#ifdef IMP120100
  myArrowAspect = 
	new Graphic3d_AspectLine3d (
		Quantity_Color(Quantity_NOC_WHITE), Aspect_TOL_SOLID, 1.0);
#endif
}


Prs3d_ArrowAspect::Prs3d_ArrowAspect (const Quantity_PlaneAngle anAngle,
				      const Quantity_Length aLength) 
     : myAngle(anAngle), myLength(aLength) {
#ifdef IMP120100
  myArrowAspect = 
	new Graphic3d_AspectLine3d (
		Quantity_Color(Quantity_NOC_WHITE), Aspect_TOL_SOLID, 1.0);
#endif
}

void Prs3d_ArrowAspect::SetAngle ( const Quantity_PlaneAngle anAngle) {
  Prs3d_InvalidAngle_Raise_if ( anAngle <= 0.  ||
                              anAngle >= M_PI /2. , "");
  myAngle = anAngle;
}
Quantity_PlaneAngle Prs3d_ArrowAspect::Angle () const
{
return myAngle;
}

void Prs3d_ArrowAspect::SetLength ( const Quantity_Length aLength)
{
  myLength = aLength;
}
Quantity_Length Prs3d_ArrowAspect::Length () const
{
return myLength;
}

#ifdef IMP120100
void Prs3d_ArrowAspect::SetColor(const Quantity_Color &aColor) {
  myArrowAspect->SetColor(aColor);
}

void Prs3d_ArrowAspect::SetColor(const Quantity_NameOfColor aColor) {
  SetColor(Quantity_Color(aColor));
}

Handle(Graphic3d_AspectLine3d) Prs3d_ArrowAspect::Aspect() const {
  return myArrowAspect;
}
#endif
