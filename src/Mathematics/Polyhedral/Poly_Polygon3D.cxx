// Created on: 1995-03-07
// Created by: Laurent PAINNOT
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

#include <Foundation/TColStd/TColStd_HArray1OfReal.hxx>
#include <Foundation/Standard/Standard_NullObject.hxx>
#include <Mathematics/Collections/TColgp_Array1OfPnt.hxx>
#include <Foundation/TColStd/TColStd_Array1OfReal.hxx>
#include <Poly_Polygon3D.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Poly_Polygon3D)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Poly_Polygon3D)
IMPLEMENT_DOWNCAST(Poly_Polygon3D,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Poly_Polygon3D)
#include <gp_Pnt.hxx>

//=======================================================================
//function : Poly_Polygon3D
//purpose  : 
//=======================================================================

Poly_Polygon3D::Poly_Polygon3D(const TColgp_Array1OfPnt& Nodes): 
    myDeflection(0.),
    myNodes(1, Nodes.Length())
{
  Standard_Integer i, j= 1;
  for (i = Nodes.Lower(); i <= Nodes.Upper(); i++)
    myNodes(j++) = Nodes(i);
}

//=======================================================================
//function : Poly_Polygon3D
//purpose  : 
//=======================================================================

Poly_Polygon3D::Poly_Polygon3D(const TColgp_Array1OfPnt&   Nodes,
			       const TColStd_Array1OfReal& P): 
    myDeflection(0.),
    myNodes(1, Nodes.Length())
    
{
  myParameters = new TColStd_HArray1OfReal(1, P.Length());
  Standard_Integer i, j= 1;
  for (i = Nodes.Lower(); i <= Nodes.Upper(); i++) {
    myNodes(j) = Nodes(i);
    myParameters->SetValue(j, P(i));
    j++;
  }
}


//=======================================================================
//function : Deflection
//purpose  : 
//=======================================================================

Standard_Real Poly_Polygon3D::Deflection() const 
{
  return myDeflection;
}

//=======================================================================
//function : Deflection
//purpose  : 
//=======================================================================

void Poly_Polygon3D::Deflection(const Standard_Real D)
{
  myDeflection = D;
}

//=======================================================================
//function : Nodes
//purpose  : 
//=======================================================================

const TColgp_Array1OfPnt& Poly_Polygon3D::Nodes() const 
{
  return myNodes;
}

//=======================================================================
//function : HasParameters
//purpose  : 
//=======================================================================

Standard_Boolean Poly_Polygon3D::HasParameters() const 
{
  return !myParameters.IsNull();
}


//=======================================================================
//function : Parameters
//purpose  : 
//=======================================================================

const TColStd_Array1OfReal& Poly_Polygon3D::Parameters() const 
{
  return myParameters->Array1();
}

//=======================================================================
//function : ChangeParameters
//purpose  : 
//=======================================================================

TColStd_Array1OfReal& Poly_Polygon3D::ChangeParameters() const 
{
  return myParameters->ChangeArray1();
}


