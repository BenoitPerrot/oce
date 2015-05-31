// Created on: 2003-06-04
// Created by: Galina KULIKOVA
// Copyright (c) 2003-2014 OPEN CASCADE SAS
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

// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.2

#include <StepDimTol_Datum.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepDimTol_CommonDatum.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepDimTol_CommonDatum)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepRepr_CompositeShapeAspect),
  STANDARD_TYPE(StepRepr_ShapeAspect),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepDimTol_CommonDatum)
IMPLEMENT_DOWNCAST(StepDimTol_CommonDatum,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepDimTol_CommonDatum)

//=======================================================================
//function : StepDimTol_CommonDatum
//purpose  : 
//=======================================================================

StepDimTol_CommonDatum::StepDimTol_CommonDatum ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepDimTol_CommonDatum::Init (const Handle(TCollection_HAsciiString) &aShapeAspect_Name,
                                   const Handle(TCollection_HAsciiString) &aShapeAspect_Description,
                                   const Handle(StepRepr_ProductDefinitionShape) &aShapeAspect_OfShape,
                                   const StepData_Logical aShapeAspect_ProductDefinitional,
                                   const Handle(TCollection_HAsciiString) &aDatum_Name,
                                   const Handle(TCollection_HAsciiString) &aDatum_Description,
                                   const Handle(StepRepr_ProductDefinitionShape) &aDatum_OfShape,
                                   const StepData_Logical aDatum_ProductDefinitional,
                                   const Handle(TCollection_HAsciiString) &aDatum_Identification)
{
    StepRepr_CompositeShapeAspect::Init(aShapeAspect_Name,
                                        aShapeAspect_Description,
                                        aShapeAspect_OfShape,
                                        aShapeAspect_ProductDefinitional);
    theDatum->Init(aDatum_Name,
                   aDatum_Description,
                   aDatum_OfShape,
                   aDatum_ProductDefinitional,
                   aDatum_Identification);
}

//=======================================================================
//function : Datum
//purpose  : 
//=======================================================================

Handle(StepDimTol_Datum) StepDimTol_CommonDatum::Datum () const
{
  return theDatum;
}

//=======================================================================
//function : SetDatum
//purpose  : 
//=======================================================================

void StepDimTol_CommonDatum::SetDatum (const Handle(StepDimTol_Datum) &aDatum)
{
  theDatum = aDatum;
}
