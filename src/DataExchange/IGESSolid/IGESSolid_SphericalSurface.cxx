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

#include <IGESGeom_Point.hxx>
#include <IGESGeom_Direction.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <IGESSolid_SphericalSurface.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESSolid_SphericalSurface)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESSolid_SphericalSurface)
IMPLEMENT_DOWNCAST(IGESSolid_SphericalSurface,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESSolid_SphericalSurface)
#include <Mathematics/Primitives/gp_GTrsf.hxx>


IGESSolid_SphericalSurface::IGESSolid_SphericalSurface ()    {  }


    void  IGESSolid_SphericalSurface::Init
  (const Handle(IGESGeom_Point)& aCenter,
   const Standard_Real aRadius,
   const Handle(IGESGeom_Direction)& anAxis,
   const Handle(IGESGeom_Direction)& aRefdir)
{
  theCenter     = aCenter;
  theRadius     = aRadius;
  theAxis       = anAxis;
  theRefDir     = aRefdir;
  InitTypeAndForm(196, (theRefDir.IsNull() ? 0 : 1) );
}

    Handle(IGESGeom_Point)  IGESSolid_SphericalSurface::Center () const
{
  return theCenter;
}

    gp_Pnt  IGESSolid_SphericalSurface::TransformedCenter () const
{
  if (!HasTransf()) return theCenter->Value();
  else
    {
      gp_XYZ tmp = (theCenter->Value()).XYZ();
      Location().Transforms(tmp);
      return gp_Pnt(tmp);
    }
}

    Standard_Real  IGESSolid_SphericalSurface::Radius () const
{
  return theRadius;
}

    Handle(IGESGeom_Direction)  IGESSolid_SphericalSurface::Axis () const
{
  return theAxis;
}

    Handle(IGESGeom_Direction)  IGESSolid_SphericalSurface::ReferenceDir () const
{
  return theRefDir;
}

    Standard_Boolean  IGESSolid_SphericalSurface::IsParametrised () const
{
  return !(theRefDir.IsNull());
}
