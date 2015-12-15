// Created on: 1991-10-07
// Created by: Remi GILET
// Copyright (c) 1991-1999 Matra Datavision
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

#include <Mathematics/Primitives/gp_Lin2d.hxx>
#include <GccInt_BLine.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(GccInt_BLine)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(GccInt_Bisec),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(GccInt_BLine)
IMPLEMENT_DOWNCAST(GccInt_BLine,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(GccInt_BLine)
#include <Foundation/Standard/Standard_DomainError.hxx>
#include <Mathematics/Primitives/gp_Lin2d.hxx>

GccInt_BLine::
   GccInt_BLine(const gp_Lin2d& Line) {
   lin = gp_Lin2d(Line);
 }

GccInt_IType GccInt_BLine::
   ArcType() const { return GccInt_Lin; }

gp_Lin2d GccInt_BLine::
  Line() const { return lin; }
