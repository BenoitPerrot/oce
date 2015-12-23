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

#include <Mathematics/Primitives/gp_XYZ.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Primitives/gp_Dir.hxx>
#include <DataExchange/IGESSolid/IGESSolid_ConeFrustum.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESSolid_ConeFrustum)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESSolid_ConeFrustum)
IMPLEMENT_DOWNCAST(IGESSolid_ConeFrustum,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESSolid_ConeFrustum)
#include <Mathematics/Primitives/gp_GTrsf.hxx>


IGESSolid_ConeFrustum::IGESSolid_ConeFrustum ()    {  }


    void IGESSolid_ConeFrustum::Init
  (const Standard_Real Ht, const Standard_Real R1,     const Standard_Real R2,
   const gp_XYZ& Center,   const gp_XYZ&       anAxis)
{
  theHeight     = Ht;
  theR1         = R1;
  theR2         = R2;                 // default 0
  theFaceCenter = Center;             // default (0,0,0)
  theAxis       = anAxis;             // default (0,0,1)
  InitTypeAndForm(156,0);
}

    Standard_Real IGESSolid_ConeFrustum::Height () const
{
  return theHeight;
}

    Standard_Real IGESSolid_ConeFrustum::LargerRadius () const
{
  return theR1;
}

    Standard_Real IGESSolid_ConeFrustum::SmallerRadius () const
{
  return theR2;
}

    gp_Pnt IGESSolid_ConeFrustum::FaceCenter () const
{
  return gp_Pnt(theFaceCenter);
}

    gp_Pnt IGESSolid_ConeFrustum::TransformedFaceCenter () const
{
  if (!HasTransf()) return gp_Pnt(theFaceCenter);
  else
    {
      gp_XYZ tmp = theFaceCenter;
      Location().Transforms(tmp);
      return gp_Pnt(tmp);
    }
}

    gp_Dir IGESSolid_ConeFrustum::Axis () const
{
  return gp_Dir(theAxis);
}

    gp_Dir IGESSolid_ConeFrustum::TransformedAxis () const
{
  if (!HasTransf()) return gp_Dir(theAxis);
  else
    {
      gp_XYZ xyz = theAxis;
      gp_GTrsf loc = Location();
      loc.SetTranslationPart(gp_XYZ(0.,0.,0.));
      loc.Transforms(xyz);
      return gp_Dir(xyz);
    }
}
