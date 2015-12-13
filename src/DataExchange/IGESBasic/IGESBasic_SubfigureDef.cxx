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
#include <IGESData_HArray1OfIGESEntity.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Foundation/Standard/Standard_Transient.hxx>
#include <IGESBasic_SubfigureDef.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESBasic_SubfigureDef)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESBasic_SubfigureDef)
IMPLEMENT_DOWNCAST(IGESBasic_SubfigureDef,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESBasic_SubfigureDef)
#include <Foundation/Standard/Standard_DimensionMismatch.hxx>


IGESBasic_SubfigureDef::IGESBasic_SubfigureDef ()    {  }


    void  IGESBasic_SubfigureDef::Init
  (const Standard_Integer aDepth,
   const Handle(TCollection_HAsciiString)& aName,
   const Handle(IGESData_HArray1OfIGESEntity)& allAssocEntities)
{
  if (!allAssocEntities.IsNull() && allAssocEntities->Lower() != 1)
    Standard_DimensionMismatch::Raise("IGESBasic_SubfigureDef : Init");
  theDepth         = aDepth;
  theName          = aName;
  theAssocEntities = allAssocEntities;
  InitTypeAndForm(308,0);
}

    Standard_Integer  IGESBasic_SubfigureDef::Depth () const
{
  return theDepth;
}

    Handle(TCollection_HAsciiString)  IGESBasic_SubfigureDef::Name () const
{
  return theName;
}

    Standard_Integer  IGESBasic_SubfigureDef::NbEntities () const
{
  return (theAssocEntities.IsNull() ? 0 : theAssocEntities->Length());
}

    Handle(IGESData_IGESEntity)  IGESBasic_SubfigureDef::AssociatedEntity
  (const Standard_Integer Index) const
{
  return theAssocEntities->Value(Index);
}

    Handle(Standard_Transient) IGESBasic_SubfigureDef::Value
  (const Standard_Integer Index) const
{
  return theAssocEntities->Value(Index);
}
