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
#include <DataExchange/IGESGeom/IGESGeom_CurveOnSurface.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESGeom_CurveOnSurface)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESGeom_CurveOnSurface)
IMPLEMENT_DOWNCAST(IGESGeom_CurveOnSurface,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESGeom_CurveOnSurface)


IGESGeom_CurveOnSurface::IGESGeom_CurveOnSurface ()    {  }


    void IGESGeom_CurveOnSurface::Init
  (const Standard_Integer aMode,
   const Handle(IGESData_IGESEntity)& aSurface,
   const Handle(IGESData_IGESEntity)& aCurveUV,
   const Handle(IGESData_IGESEntity)& aCurve3D,
   const Standard_Integer aPreference)
{
  theCreationMode   = aMode;
  theSurface        = aSurface;
  theCurveUV        = aCurveUV;
  theCurve3D        = aCurve3D;
  thePreferenceMode = aPreference;
  InitTypeAndForm(142,0);
}

    Standard_Integer IGESGeom_CurveOnSurface::CreationMode () const
{
  return theCreationMode;
}

    Handle(IGESData_IGESEntity) IGESGeom_CurveOnSurface::Surface () const
{
  return theSurface;
}

    Handle(IGESData_IGESEntity) IGESGeom_CurveOnSurface::CurveUV () const
{
  return theCurveUV;
}

    Handle(IGESData_IGESEntity) IGESGeom_CurveOnSurface::Curve3D () const
{
  return theCurve3D;
}

    Standard_Integer IGESGeom_CurveOnSurface::PreferenceMode () const
{
  return thePreferenceMode;
}
