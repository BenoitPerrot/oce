// Created on: 2002-12-12
// Created by: data exchange team
// Copyright (c) 2002-2014 OPEN CASCADE SAS
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

#include <Foundation/TColStd/TColStd_HArray1OfReal.hxx>
#include <DataExchange/StepFEA/StepFEA_CurveElementEndCoordinateSystem.hxx>
#include <DataExchange/StepFEA/StepFEA_CurveElementEndOffset.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepFEA_CurveElementEndOffset)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepFEA_CurveElementEndOffset)
IMPLEMENT_DOWNCAST(StepFEA_CurveElementEndOffset,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepFEA_CurveElementEndOffset)

//=======================================================================
//function : StepFEA_CurveElementEndOffset
//purpose  : 
//=======================================================================

StepFEA_CurveElementEndOffset::StepFEA_CurveElementEndOffset ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepFEA_CurveElementEndOffset::Init (const StepFEA_CurveElementEndCoordinateSystem &aCoordinateSystem,
                                          const Handle(TColStd_HArray1OfReal) &aOffsetVector)
{

  theCoordinateSystem = aCoordinateSystem;

  theOffsetVector = aOffsetVector;
}

//=======================================================================
//function : CoordinateSystem
//purpose  : 
//=======================================================================

StepFEA_CurveElementEndCoordinateSystem StepFEA_CurveElementEndOffset::CoordinateSystem () const
{
  return theCoordinateSystem;
}

//=======================================================================
//function : SetCoordinateSystem
//purpose  : 
//=======================================================================

void StepFEA_CurveElementEndOffset::SetCoordinateSystem (const StepFEA_CurveElementEndCoordinateSystem &aCoordinateSystem)
{
  theCoordinateSystem = aCoordinateSystem;
}

//=======================================================================
//function : OffsetVector
//purpose  : 
//=======================================================================

Handle(TColStd_HArray1OfReal) StepFEA_CurveElementEndOffset::OffsetVector () const
{
  return theOffsetVector;
}

//=======================================================================
//function : SetOffsetVector
//purpose  : 
//=======================================================================

void StepFEA_CurveElementEndOffset::SetOffsetVector (const Handle(TColStd_HArray1OfReal) &aOffsetVector)
{
  theOffsetVector = aOffsetVector;
}
