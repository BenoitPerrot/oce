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

#include <DataExchange/IGESAppli/IGESAppli_HArray1OfNode.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <DataExchange/IGESAppli/IGESAppli_Node.hxx>
#include <DataExchange/IGESAppli/IGESAppli_FiniteElement.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESAppli_FiniteElement)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESAppli_FiniteElement)
IMPLEMENT_DOWNCAST(IGESAppli_FiniteElement,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESAppli_FiniteElement)
#include <Foundation/Standard/Standard_DimensionMismatch.hxx>
#include <DataExchange/IGESAppli/IGESAppli.hxx>

IGESAppli_FiniteElement::IGESAppli_FiniteElement ()    {  }


    void  IGESAppli_FiniteElement::Init
  (const Standard_Integer aType,
   const Handle(IGESAppli_HArray1OfNode)&  allNodes,
   const Handle(TCollection_HAsciiString)& aName)
{
  if (allNodes->Lower() != 1)
    Standard_DimensionMismatch::Raise("IGESAppli_FiniteElement : Init");
  theTopology = aType;
  theNodes    = allNodes;
  theName     = aName;
  InitTypeAndForm(136,0);
}

    Standard_Integer  IGESAppli_FiniteElement::Topology () const
{
  return theTopology;
}

    Handle(IGESAppli_Node)  IGESAppli_FiniteElement::Node
  (const Standard_Integer Index) const
{
  return theNodes->Value(Index);
}

    Handle(TCollection_HAsciiString)  IGESAppli_FiniteElement::Name () const
{
  return theName;
}

    Standard_Integer  IGESAppli_FiniteElement::NbNodes () const
{
  return theNodes->Length();
}
