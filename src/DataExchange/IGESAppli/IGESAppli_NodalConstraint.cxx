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

#include <IGESAppli_Node.hxx>
#include <IGESDefs_HArray1OfTabularData.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <IGESDefs_TabularData.hxx>
#include <IGESAppli_NodalConstraint.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESAppli_NodalConstraint)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESAppli_NodalConstraint)
IMPLEMENT_DOWNCAST(IGESAppli_NodalConstraint,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESAppli_NodalConstraint)
#include <Foundation/Standard/Standard_DimensionMismatch.hxx>


IGESAppli_NodalConstraint::IGESAppli_NodalConstraint ()    {  }


    void  IGESAppli_NodalConstraint::Init
  (const Standard_Integer aType,
   const Handle(IGESAppli_Node)& aNode,
   const Handle(IGESDefs_HArray1OfTabularData)& allTabData)
{
  if (allTabData->Lower() != 1)
    Standard_DimensionMismatch::Raise("IGESAppli_NodalConstraint : Init");
  theType = aType;
  theNode = aNode;
  theTabularDataProps = allTabData;
  InitTypeAndForm(418,0);
}

    Standard_Integer  IGESAppli_NodalConstraint::NbCases () const
{
  return theTabularDataProps->Length();
}

    Standard_Integer  IGESAppli_NodalConstraint::Type () const
{
  return theType;
}

    Handle(IGESAppli_Node)  IGESAppli_NodalConstraint::NodeEntity () const
{
  return theNode;
}

    Handle(IGESDefs_TabularData)  IGESAppli_NodalConstraint::TabularData
  (const Standard_Integer Index) const
{
  return theTabularDataProps->Value(Index);
}
