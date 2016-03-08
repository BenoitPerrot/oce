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

#include <DataExchange/IGESData/IGESData_HArray1OfIGESEntity.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
#include <DataExchange/IGESGeom/IGESGeom_CompositeCurve.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESGeom_CompositeCurve)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESGeom_CompositeCurve)
IMPLEMENT_DOWNCAST(IGESGeom_CompositeCurve,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESGeom_CompositeCurve)
#include <Foundation/Standard/Standard_DimensionMismatch.hxx>


IGESGeom_CompositeCurve::IGESGeom_CompositeCurve ()    {  }


    void  IGESGeom_CompositeCurve::Init
  (const Handle(IGESData_HArray1OfIGESEntity)& allEntities)
{
  if (!allEntities.IsNull() && allEntities->Lower() != 1)
    Standard_DimensionMismatch::Raise("IGESGeom_CompositeCurve : Init");
  theEntities = allEntities;
  InitTypeAndForm(102,0);
}

    Standard_Integer  IGESGeom_CompositeCurve::NbCurves () const
{
  return (theEntities.IsNull() ? 0 : theEntities->Length());
}

    Handle(IGESData_IGESEntity)  IGESGeom_CompositeCurve::Curve
  (const Standard_Integer Index) const
{
  return theEntities->Value(Index);
}
