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

#include <gp_XYZ.hxx>
#include <gp_Pnt.hxx>
#include <IGESSolid_Sphere.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESSolid_Sphere)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESSolid_Sphere)
IMPLEMENT_DOWNCAST(IGESSolid_Sphere,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESSolid_Sphere)
#include <gp_GTrsf.hxx>


IGESSolid_Sphere::IGESSolid_Sphere ()    {  }


    void  IGESSolid_Sphere::Init
  (const Standard_Real aRadius, const gp_XYZ& aCenter)
{
  theRadius = aRadius;
  theCenter = aCenter;            // default (0,0,0)
  InitTypeAndForm(158,0);
}

    Standard_Real  IGESSolid_Sphere::Radius () const
{
  return theRadius;
}

    gp_Pnt  IGESSolid_Sphere::Center () const
{
  return gp_Pnt(theCenter);
}

    gp_Pnt  IGESSolid_Sphere::TransformedCenter () const
{
  if (!HasTransf()) return gp_Pnt(theCenter);
  else
    {
      gp_XYZ tmp = theCenter;
      Location().Transforms(tmp);
      return gp_Pnt(tmp);
    }
}
