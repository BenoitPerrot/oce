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

#include <DataExchange/IGESDimen/IGESDimen_GeneralNote.hxx>
#include <DataExchange/IGESDimen/IGESDimen_LeaderArrow.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
#include <DataExchange/IGESGeom/IGESGeom_CircularArc.hxx>
#include <DataExchange/IGESGeom/IGESGeom_CompositeCurve.hxx>
#include <DataExchange/IGESDimen/IGESDimen_PointDimension.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESDimen_PointDimension)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESDimen_PointDimension)
IMPLEMENT_DOWNCAST(IGESDimen_PointDimension,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESDimen_PointDimension)
#include <DataExchange/Interface/Interface_Macros.hxx>

IGESDimen_PointDimension::IGESDimen_PointDimension ()    {  }


    void IGESDimen_PointDimension::Init
  (const Handle(IGESDimen_GeneralNote)& aNote,
   const Handle(IGESDimen_LeaderArrow)& anArrow,
   const Handle(IGESData_IGESEntity)&   aGeom)
{
  theNote   = aNote;
  theLeader = anArrow;
  theGeom   = aGeom;
  InitTypeAndForm(220,0);
}


    Handle(IGESDimen_GeneralNote) IGESDimen_PointDimension::Note () const
{
  return theNote;
}

    Handle(IGESDimen_LeaderArrow) IGESDimen_PointDimension::LeaderArrow () const
{
  return theLeader;
}

    Handle(IGESGeom_CircularArc) IGESDimen_PointDimension::CircularArc () const
{
  return GetCasted(IGESGeom_CircularArc, theGeom);
}

    Handle(IGESGeom_CompositeCurve) IGESDimen_PointDimension::CompositeCurve () const
{
  return GetCasted(IGESGeom_CompositeCurve, theGeom);
}

    Handle(IGESData_IGESEntity) IGESDimen_PointDimension::Geom () const
{
  return theGeom;
}

    Standard_Integer IGESDimen_PointDimension::GeomCase () const
{
  if (theGeom.IsNull())                     return 0;
  else if (theGeom->TypeNumber() == 100)    return 1;
  else if (theGeom->TypeNumber() == 102)    return 2;
  else                                      return 3;
}
