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

#include <DataExchange/Interface/Interface_HArray1OfHAsciiString.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <DataExchange/IGESAppli/IGESAppli_FlowLineSpec.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESAppli_FlowLineSpec)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESAppli_FlowLineSpec)
IMPLEMENT_DOWNCAST(IGESAppli_FlowLineSpec,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESAppli_FlowLineSpec)
#include <Foundation/Standard/Standard_DimensionMismatch.hxx>


IGESAppli_FlowLineSpec::IGESAppli_FlowLineSpec ()    {  }

    void  IGESAppli_FlowLineSpec::Init
  (const Handle(Interface_HArray1OfHAsciiString)& allProperties)
{
  if (allProperties->Lower() != 1)
    Standard_DimensionMismatch::Raise("IGESAppli_FlowLineSpec : Init");
  theNameAndModifiers = allProperties;
  InitTypeAndForm(406,14);
}

    Standard_Integer  IGESAppli_FlowLineSpec::NbPropertyValues () const
{
  return theNameAndModifiers->Length();
}

    Handle(TCollection_HAsciiString)  IGESAppli_FlowLineSpec::FlowLineName () const
{
  return theNameAndModifiers->Value(1);
}

    Handle(TCollection_HAsciiString)  IGESAppli_FlowLineSpec::Modifier
  (const Standard_Integer Index) const
{
  return theNameAndModifiers->Value(Index);
}
