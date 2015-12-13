// Created on: 1998-07-08
// Created by: Stephanie HUMEAU
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

#include <Adaptor3d_HCurve.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Foundation/Standard/Standard_NotImplemented.hxx>
#include <gp_Pnt.hxx>
#include <GeomFill_TrihedronWithGuide.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(GeomFill_TrihedronWithGuide)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(GeomFill_TrihedronLaw),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(GeomFill_TrihedronWithGuide)
IMPLEMENT_DOWNCAST(GeomFill_TrihedronWithGuide,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(GeomFill_TrihedronWithGuide)


Handle(Adaptor3d_HCurve) GeomFill_TrihedronWithGuide::Guide()const
{
  return myGuide;
}

//=======================================================================
//function : CurrentPointOnGuide
//purpose  : 
//=======================================================================
gp_Pnt GeomFill_TrihedronWithGuide::CurrentPointOnGuide() const
{
  return myCurPointOnGuide;
}

