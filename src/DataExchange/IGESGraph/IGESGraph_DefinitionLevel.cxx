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

#include <TColStd_HArray1OfInteger.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <IGESGraph_DefinitionLevel.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESGraph_DefinitionLevel)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_LevelListEntity),
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESGraph_DefinitionLevel)
IMPLEMENT_DOWNCAST(IGESGraph_DefinitionLevel,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESGraph_DefinitionLevel)
#include <Foundation/Standard/Standard_DimensionMismatch.hxx>


IGESGraph_DefinitionLevel::IGESGraph_DefinitionLevel ()    {  }


    void IGESGraph_DefinitionLevel::Init
  (const Handle(TColStd_HArray1OfInteger)& allLevelNumbers)
{
  if (allLevelNumbers->Lower() != 1)
    Standard_DimensionMismatch::Raise("IGESGraph_DefinitionLevel : Init");
  theLevelNumbers = allLevelNumbers;
  InitTypeAndForm(406,1);
}

    Standard_Integer IGESGraph_DefinitionLevel::NbPropertyValues () const
{
  return ( theLevelNumbers->Length() );
}

    Standard_Integer IGESGraph_DefinitionLevel::NbLevelNumbers () const
{
  return ( theLevelNumbers->Length() );
}

    Standard_Integer IGESGraph_DefinitionLevel::LevelNumber
  (const Standard_Integer LevelIndex) const
{
  return ( theLevelNumbers->Value(LevelIndex) );
}
