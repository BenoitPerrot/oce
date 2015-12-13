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

#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <IGESAppli_ReferenceDesignator.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESAppli_ReferenceDesignator)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESAppli_ReferenceDesignator)
IMPLEMENT_DOWNCAST(IGESAppli_ReferenceDesignator,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESAppli_ReferenceDesignator)
#include <IGESData_LevelListEntity.hxx>


IGESAppli_ReferenceDesignator::IGESAppli_ReferenceDesignator ()    {  }


    void  IGESAppli_ReferenceDesignator::Init
  (const Standard_Integer nbPropVal,
   const Handle(TCollection_HAsciiString)& aText)
{
  theRefDesigText     = aText;
  theNbPropertyValues = nbPropVal;
  InitTypeAndForm(406,7);
}


    Standard_Integer  IGESAppli_ReferenceDesignator::NbPropertyValues () const
{
  return theNbPropertyValues;
}

    Handle(TCollection_HAsciiString)
    IGESAppli_ReferenceDesignator::RefDesignatorText () const
{
  return theRefDesigText;
}
