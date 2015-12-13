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

#include <TCollection_HAsciiString.hxx>
#include <IGESGraph_NominalSize.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESGraph_NominalSize)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESGraph_NominalSize)
IMPLEMENT_DOWNCAST(IGESGraph_NominalSize,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESGraph_NominalSize)


IGESGraph_NominalSize::IGESGraph_NominalSize ()    {  }


    void IGESGraph_NominalSize::Init
  (const Standard_Integer          nbProps,
   const Standard_Real             aNominalSizeValue,
   const Handle(TCollection_HAsciiString)& aNominalSizeName,
   const Handle(TCollection_HAsciiString)& aStandardName)
{
  theNbPropertyValues = nbProps;
  theNominalSizeValue = aNominalSizeValue;
  theNominalSizeName  = aNominalSizeName;
  theStandardName     = aStandardName;
  InitTypeAndForm(406,13);
}

    Standard_Integer IGESGraph_NominalSize::NbPropertyValues () const
{
  return theNbPropertyValues;
}

    Standard_Real IGESGraph_NominalSize::NominalSizeValue () const
{
  return theNominalSizeValue;
}

    Handle(TCollection_HAsciiString) IGESGraph_NominalSize::NominalSizeName () const
{
  return theNominalSizeName;
}

    Standard_Boolean IGESGraph_NominalSize::HasStandardName () const
{
  return (! theStandardName.IsNull() );
}

    Handle(TCollection_HAsciiString) IGESGraph_NominalSize::StandardName () const
{
  return theStandardName;
}
