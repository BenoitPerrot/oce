// Created by: CKY / Contract Toubro-Larsen
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

//--------------------------------------------------------------------
//--------------------------------------------------------------------

#include <IGESBasic_SubfigureDef.hxx>
#include <Mathematics/Primitives/gp_XYZ.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <IGESGeom_Point.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESGeom_Point)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESGeom_Point)
IMPLEMENT_DOWNCAST(IGESGeom_Point,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESGeom_Point)
#include <Mathematics/Primitives/gp_GTrsf.hxx>


IGESGeom_Point::IGESGeom_Point ()     {  }


    void IGESGeom_Point::Init
  (const gp_XYZ& aPoint, 
   const Handle(IGESBasic_SubfigureDef)& aSymbol)
{
  thePoint  = aPoint;
  theSymbol = aSymbol;
  InitTypeAndForm(116,0);
}

    gp_Pnt IGESGeom_Point::Value () const
{
  return gp_Pnt(thePoint);
}

    gp_Pnt IGESGeom_Point::TransformedValue () const
{
  gp_XYZ Val = thePoint;
  if (HasTransf()) Location().Transforms(Val);
  gp_Pnt transVal(Val);
  return transVal;
}

    Standard_Boolean IGESGeom_Point::HasDisplaySymbol () const
{
  return (!theSymbol.IsNull());
}

    Handle(IGESBasic_SubfigureDef) IGESGeom_Point::DisplaySymbol () const
{
  return theSymbol;
}
