// Created on: 1992-01-27
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

#include <Foundation/Standard/Standard_DomainError.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <Mathematics/Primitives/gp_Lin2d.hxx>
#include <Mathematics/Primitives/gp_Circ2d.hxx>
#include <Mathematics/Primitives/gp_Hypr2d.hxx>
#include <Mathematics/Primitives/gp_Parab2d.hxx>
#include <Mathematics/Primitives/gp_Elips2d.hxx>
#include <GccInt_Bisec.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(GccInt_Bisec)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(GccInt_Bisec)
IMPLEMENT_DOWNCAST(GccInt_Bisec,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(GccInt_Bisec)
#include <Mathematics/Primitives/gp_Circ2d.hxx>
#include <Mathematics/Primitives/gp_Elips2d.hxx>
#include <Mathematics/Primitives/gp_Hypr2d.hxx>
#include <Mathematics/Primitives/gp_Lin2d.hxx>
#include <Mathematics/Primitives/gp_Parab2d.hxx>
#include <Mathematics/Primitives/gp_Pnt2d.hxx>
#include <Foundation/Standard/Standard_NotImplemented.hxx>

gp_Circ2d GccInt_Bisec::
  Circle() const { 
    Standard_NotImplemented::Raise();
    return gp_Circ2d();
    }

gp_Elips2d GccInt_Bisec::
  Ellipse() const { 
    Standard_NotImplemented::Raise();
    return gp_Elips2d();
    }

gp_Hypr2d GccInt_Bisec::
  Hyperbola() const { 
    Standard_NotImplemented::Raise();
    return gp_Hypr2d();
    }

gp_Lin2d GccInt_Bisec::
  Line() const {
    Standard_NotImplemented::Raise();
    return gp_Lin2d();
    }

gp_Parab2d GccInt_Bisec::
  Parabola() const { 
    Standard_NotImplemented::Raise();
    return gp_Parab2d();
    }

gp_Pnt2d GccInt_Bisec::
  Point() const { 
    Standard_NotImplemented::Raise();
    return gp_Pnt2d();
    }

