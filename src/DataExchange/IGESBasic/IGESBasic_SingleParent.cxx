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
#include <DataExchange/IGESData/IGESData_HArray1OfIGESEntity.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <DataExchange/IGESBasic/IGESBasic_SingleParent.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESBasic_SingleParent)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_SingleParentEntity),
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESBasic_SingleParent)
IMPLEMENT_DOWNCAST(IGESBasic_SingleParent,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESBasic_SingleParent)
#include <Foundation/Standard/Standard_DimensionMismatch.hxx>


IGESBasic_SingleParent::IGESBasic_SingleParent ()    {  }


    void  IGESBasic_SingleParent::Init
  (const Standard_Integer nbParentEntities,
   const Handle(IGESData_IGESEntity)& aParentEntity,
   const Handle(IGESData_HArray1OfIGESEntity)& allChildren)
{
  if (!allChildren.IsNull() && allChildren->Lower() != 1)
    Standard_DimensionMismatch::Raise("IGESBasic_SingleParent : Init");
  theParentEntity     = aParentEntity;
  theChildren         = allChildren;
  theNbParentEntities = nbParentEntities;
  InitTypeAndForm(402,9);
}


    Standard_Integer  IGESBasic_SingleParent::NbChildren () const
{
  return(theChildren.IsNull() ? 0 : theChildren->Length());
}

    Handle(IGESData_IGESEntity)  IGESBasic_SingleParent::Child
  (const Standard_Integer Index) const
{
  return theChildren->Value(Index);
}

    Standard_Integer  IGESBasic_SingleParent::NbParentEntities () const
{
  return theNbParentEntities;
}
    Handle(IGESData_IGESEntity)  IGESBasic_SingleParent::SingleParent () const
{  return theParentEntity;  }

