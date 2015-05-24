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

#include <IGESBasic_Hierarchy.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESBasic_Hierarchy)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESBasic_Hierarchy)
IMPLEMENT_DOWNCAST(IGESBasic_Hierarchy,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESBasic_Hierarchy)

IGESBasic_Hierarchy::IGESBasic_Hierarchy ()    {  }


    void  IGESBasic_Hierarchy::Init
  (const Standard_Integer nbPropVal,
   const Standard_Integer aLineFont,     const Standard_Integer aView,
   const Standard_Integer anEntityLevel, const Standard_Integer aBlankStatus,
   const Standard_Integer aLineWt,       const Standard_Integer aColorNum)
{
  theLineFont         = aLineFont;
  theView             = aView;
  theEntityLevel      = anEntityLevel;
  theBlankStatus      = aBlankStatus;
  theLineWeight       = aLineWt;
  theColorNum         = aColorNum;
  theNbPropertyValues = nbPropVal;
  InitTypeAndForm(406,10);
}


    Standard_Integer  IGESBasic_Hierarchy::NbPropertyValues () const
{
  return theNbPropertyValues;
}

    Standard_Integer  IGESBasic_Hierarchy::NewLineFont () const
{
  return theLineFont;
}

    Standard_Integer  IGESBasic_Hierarchy::NewView () const
{
  return theView;
}

    Standard_Integer  IGESBasic_Hierarchy::NewEntityLevel () const
{
  return theEntityLevel;
}

    Standard_Integer  IGESBasic_Hierarchy::NewBlankStatus () const
{
  return theBlankStatus;
}

    Standard_Integer  IGESBasic_Hierarchy::NewLineWeight () const
{
  return theLineWeight;
}

    Standard_Integer  IGESBasic_Hierarchy::NewColorNum () const
{
  return theColorNum;
}
