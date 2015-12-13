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
#include <gp_XYZ.hxx>
#include <IGESBasic_SingularSubfigure.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESBasic_SingularSubfigure)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESBasic_SingularSubfigure)
IMPLEMENT_DOWNCAST(IGESBasic_SingularSubfigure,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESBasic_SingularSubfigure)
#include <gp_GTrsf.hxx>


IGESBasic_SingularSubfigure::IGESBasic_SingularSubfigure ()    {  }


    void  IGESBasic_SingularSubfigure::Init
  (const Handle(IGESBasic_SubfigureDef)& aSubfigureDef,
   const gp_XYZ& aTranslation, const Standard_Boolean hasScale,
   const Standard_Real aScale)
{
  theSubfigureDef = aSubfigureDef;
  theTranslation  = aTranslation;
  hasScaleFactor  = hasScale;
  theScaleFactor  = aScale;
  InitTypeAndForm(408,0);
}

    Handle(IGESBasic_SubfigureDef) IGESBasic_SingularSubfigure::Subfigure () const
{
  return theSubfigureDef;
}

    gp_XYZ  IGESBasic_SingularSubfigure::Translation () const
{
  return theTranslation;
}

    Standard_Boolean  IGESBasic_SingularSubfigure::HasScaleFactor () const
{
  return hasScaleFactor;
}

    Standard_Real  IGESBasic_SingularSubfigure::ScaleFactor () const
{
  return theScaleFactor;
}

    gp_XYZ  IGESBasic_SingularSubfigure::TransformedTranslation () const
{
  gp_XYZ tmp = theTranslation;
  if (HasTransf()) Location().Transforms(tmp);
  return tmp;
}
