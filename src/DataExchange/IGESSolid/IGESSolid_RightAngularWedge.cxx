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
#include <DataExchange/IGESSolid/IGESSolid_RightAngularWedge.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESSolid_RightAngularWedge)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESSolid_RightAngularWedge)
IMPLEMENT_DOWNCAST(IGESSolid_RightAngularWedge,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESSolid_RightAngularWedge)
#include <Mathematics/Primitives/gp_GTrsf.hxx>


IGESSolid_RightAngularWedge::IGESSolid_RightAngularWedge ()    {  }


    void  IGESSolid_RightAngularWedge::Init
  (const gp_XYZ& aSize,   const Standard_Real LowX,
   const gp_XYZ& aCorner, const gp_XYZ& anXAxis, const gp_XYZ& anZAxis)
{
  theSize         = aSize;
  theXSmallLength = LowX;
  theCorner       = aCorner;         // default (0,0,0)
  theXAxis        = anXAxis;         // default (1,0,0)
  theZAxis        = anZAxis;         // default (0,0,1)
  InitTypeAndForm(152,0);
}

    gp_XYZ  IGESSolid_RightAngularWedge::Size () const
{
  return theSize;
}

    Standard_Real  IGESSolid_RightAngularWedge::XBigLength () const
{
  return theSize.X();
}

    Standard_Real  IGESSolid_RightAngularWedge::XSmallLength () const
{
  return theXSmallLength;
}

    Standard_Real  IGESSolid_RightAngularWedge::YLength () const
{
  return theSize.Y();
}

    Standard_Real  IGESSolid_RightAngularWedge::ZLength () const
{
  return theSize.Z();
}

    gp_Pnt  IGESSolid_RightAngularWedge::Corner () const
{
  return gp_Pnt(theCorner);
}

    gp_Pnt  IGESSolid_RightAngularWedge::TransformedCorner () const
{
  if (!HasTransf()) return gp_Pnt(theCorner);
  else
    {
      gp_XYZ tmp = theCorner;
      Location().Transforms(tmp);
      return gp_Pnt(tmp);
    }
}

    gp_Dir  IGESSolid_RightAngularWedge::XAxis () const
{
  return gp_Dir(theXAxis);
}

    gp_Dir  IGESSolid_RightAngularWedge::TransformedXAxis () const
{
  if (!HasTransf()) return gp_Dir(theXAxis);
  else
    {
      gp_XYZ tmp = theXAxis;
      gp_GTrsf loc = Location();
      loc.SetTranslationPart(gp_XYZ(0.,0.,0.));
      loc.Transforms(tmp);
      return gp_Dir(tmp);
    }
}

    gp_Dir  IGESSolid_RightAngularWedge::YAxis () const
{
  return gp_Dir(theXAxis ^ theZAxis);     // ^ overloaded
}

    gp_Dir  IGESSolid_RightAngularWedge::TransformedYAxis () const
{
  if (!HasTransf()) return gp_Dir(theXAxis ^ theZAxis);
  else
    {
      gp_XYZ tmp = theXAxis ^ theZAxis;
      gp_GTrsf loc = Location();
      loc.SetTranslationPart(gp_XYZ(0.,0.,0.));
      loc.Transforms(tmp);
      return gp_Dir(tmp);
    }
}

    gp_Dir  IGESSolid_RightAngularWedge::ZAxis () const
{
  return gp_Dir(theZAxis);
}

    gp_Dir  IGESSolid_RightAngularWedge::TransformedZAxis () const
{
  if (!HasTransf()) return gp_Dir(theZAxis);
  else
    {
      gp_XYZ tmp = theZAxis;
      gp_GTrsf loc = Location();
      loc.SetTranslationPart(gp_XYZ(0.,0.,0.));
      loc.Transforms(tmp);
      return gp_Dir(tmp);
    }
}
