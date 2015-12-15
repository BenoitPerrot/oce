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

// Modif jcv 14/12/90 suite a la premiere revue de projet

#include <Foundation/Standard/Standard_ConstructionError.hxx>
#include <Foundation/Standard/Standard_DomainError.hxx>
#include <Mathematics/Primitives/gp_Ax2.hxx>
#include <Mathematics/Primitives/gp_Ax1.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Primitives/gp_Trsf.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>
#include <Mathematics/Primitives/gp_Hypr.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(gp_Hypr)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Standard_Storable),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(gp_Hypr)

void gp_Hypr::Mirror (const gp_Pnt& P)
{ pos.Mirror(P); }

gp_Hypr gp_Hypr::Mirrored (const gp_Pnt& P) const
{
  gp_Hypr H = *this;
  H.pos.Mirror(P);
  return H; 
}

void gp_Hypr::Mirror (const gp_Ax1& A1)
{ pos.Mirror(A1); }

gp_Hypr gp_Hypr::Mirrored (const gp_Ax1& A1) const
{
  gp_Hypr H = *this;
  H.pos.Mirror(A1);
  return H; 
}

void gp_Hypr::Mirror (const gp_Ax2& A2)
{ pos.Mirror(A2); }

gp_Hypr gp_Hypr::Mirrored (const gp_Ax2& A2) const
{
  gp_Hypr H = *this;
  H.pos.Mirror(A2);
  return H; 
}

