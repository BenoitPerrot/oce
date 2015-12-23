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

#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
#include <Mathematics/Primitives/gp_XYZ.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <IGESGeom_TabulatedCylinder.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESGeom_TabulatedCylinder)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESGeom_TabulatedCylinder)
IMPLEMENT_DOWNCAST(IGESGeom_TabulatedCylinder,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESGeom_TabulatedCylinder)
#include <Mathematics/Primitives/gp_GTrsf.hxx>


IGESGeom_TabulatedCylinder::IGESGeom_TabulatedCylinder ()    {  }


    void IGESGeom_TabulatedCylinder::Init
  (const Handle(IGESData_IGESEntity)& aDirectrix,
   const gp_XYZ&                      anEnd)
{
  theDirectrix = aDirectrix;
  theEnd       = anEnd;
  InitTypeAndForm(122,0);
}

    Handle(IGESData_IGESEntity) IGESGeom_TabulatedCylinder::Directrix () const 
{
  return theDirectrix;
}

    gp_Pnt IGESGeom_TabulatedCylinder::EndPoint () const
{
  return ( gp_Pnt(theEnd) );
}

    gp_Pnt IGESGeom_TabulatedCylinder::TransformedEndPoint () const
{
  gp_XYZ EndPoint = theEnd;
  if (HasTransf()) Location().Transforms(EndPoint);
  return ( gp_Pnt(EndPoint) );
}
