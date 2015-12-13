// Created on: 1993-03-10
// Created by: JCV
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

#include <Foundation/Standard/Standard_RangeError.hxx>
#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <Geom_UndefinedValue.hxx>
#include <gp_Trsf.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Geom_Curve.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Geom_Curve)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Geom_Geometry),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Geom_Curve)
IMPLEMENT_DOWNCAST(Geom_Curve,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Geom_Curve)

typedef Geom_Curve         Curve;
typedef Handle(Geom_Curve) Handle(Curve);


//=======================================================================
//function : Reversed
//purpose  : 
//=======================================================================

Handle(Curve) Geom_Curve::Reversed () const
{
  Handle(Curve) C = Handle(Curve)::DownCast(Copy());
  C->Reverse();
  return C;
}


//=======================================================================
//function : Period
//purpose  : 
//=======================================================================

Standard_Real Geom_Curve::Period() const
{
  Standard_NoSuchObject_Raise_if
    ( !IsPeriodic(),"Geom_Curve::Period");

  return ( LastParameter() - FirstParameter());
}

//=======================================================================
//function : Value
//purpose  : 
//=======================================================================

gp_Pnt Geom_Curve::Value( const Standard_Real U) const 
{
  gp_Pnt P;
  D0( U, P);
  return P;
}

//=======================================================================
//function : TransformedParameter
//purpose  : 
//=======================================================================

Standard_Real Geom_Curve::TransformedParameter(const Standard_Real U,
					       const gp_Trsf&) const
{
  return U;
}

//=======================================================================
//function : TransformedParameter
//purpose  : 
//=======================================================================

Standard_Real Geom_Curve::ParametricTransformation(const gp_Trsf& ) const
{
  return 1.;
}


