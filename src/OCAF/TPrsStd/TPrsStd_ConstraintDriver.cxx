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

#include <OCAF/TDF/TDF_Label.hxx>
#include <Visualization/AIS/AIS_InteractiveObject.hxx>
#include <TPrsStd_ConstraintDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(TPrsStd_ConstraintDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TPrsStd_Driver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TPrsStd_ConstraintDriver)
IMPLEMENT_DOWNCAST(TPrsStd_ConstraintDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TPrsStd_ConstraintDriver)

#include <OCAF/TDF/TDF_Label.hxx>
#include <OCAF/TDataXtd/TDataXtd_Constraint.hxx>
#include <TPrsStd_ConstraintTools.hxx>
#include <Foundation/Standard/Standard_ProgramError.hxx>
#include <Foundation/Standard/Standard_GUID.hxx>
#include <OCAF/TDataStd/TDataStd_Real.hxx>
#include <OCAF/TDataXtd/TDataXtd_Position.hxx>
#include <Visualization/AIS/AIS_Drawer.hxx>
#include <Visualization/AIS/AIS_InteractiveContext.hxx>
#include <Visualization/AIS/AIS_Relation.hxx>

//=======================================================================
//function :
//purpose  : 
//=======================================================================
TPrsStd_ConstraintDriver::TPrsStd_ConstraintDriver()
{
}

//=======================================================================
//function :
//purpose  : 
//=======================================================================
Standard_Boolean TPrsStd_ConstraintDriver::Update (const TDF_Label& aLabel,
						  Handle(AIS_InteractiveObject)& anAISObject) 
{
  Handle(TDataXtd_Constraint) apConstraint;
  if( !aLabel.FindAttribute(TDataXtd_Constraint::GetID(), apConstraint) ) {
   return Standard_False;
  }
   
  if (!anAISObject.IsNull() && anAISObject->HasInteractiveContext()) {
    if (!apConstraint->Verified()) {
      TPrsStd_ConstraintTools::UpdateOnlyValue(apConstraint,anAISObject);
      if (anAISObject->Color() != Quantity_NOC_RED) anAISObject->SetColor(Quantity_NOC_RED);
      return Standard_True;
    }
  }

  Handle(AIS_InteractiveObject) anAIS = anAISObject;

  // recuperation 
  TDataXtd_ConstraintEnum thetype = apConstraint->GetType();
  
  switch (thetype)  {
  case TDataXtd_DISTANCE:
    {
      TPrsStd_ConstraintTools::ComputeDistance(apConstraint,anAIS);
      break;
    }
  case TDataXtd_PARALLEL:
    {
      TPrsStd_ConstraintTools::ComputeParallel(apConstraint,anAIS);
      break;
    }
  case TDataXtd_PERPENDICULAR:
    {
      TPrsStd_ConstraintTools::ComputePerpendicular(apConstraint,anAIS);
      break;
    }
  case TDataXtd_CONCENTRIC:
    {
      TPrsStd_ConstraintTools::ComputeConcentric(apConstraint,anAIS);
      break;
    }
  case TDataXtd_SYMMETRY:
    {
      TPrsStd_ConstraintTools::ComputeSymmetry(apConstraint,anAIS);
      break;
    }
  case TDataXtd_MIDPOINT:
    {
      TPrsStd_ConstraintTools::ComputeMidPoint(apConstraint,anAIS);
      break;
    }
  case TDataXtd_TANGENT:
    {
      TPrsStd_ConstraintTools::ComputeTangent(apConstraint,anAIS);
      break;
    }
  case TDataXtd_ANGLE:
    {
      TPrsStd_ConstraintTools::ComputeAngle(apConstraint,anAIS);
      break;
    }
  case TDataXtd_RADIUS:
    {
      TPrsStd_ConstraintTools::ComputeRadius(apConstraint,anAIS);
      break;
    }
  case TDataXtd_MINOR_RADIUS:
    {
      TPrsStd_ConstraintTools::ComputeMinRadius(apConstraint,anAIS);
      break;
    }
  case TDataXtd_MAJOR_RADIUS:
    {
      TPrsStd_ConstraintTools::ComputeMaxRadius(apConstraint,anAIS);
      break; 
    }
  case TDataXtd_DIAMETER:
    {
      TPrsStd_ConstraintTools::ComputeDiameter(apConstraint,anAIS);
      break;
    }
  case TDataXtd_FIX:
    {
      TPrsStd_ConstraintTools::ComputeFix(apConstraint,anAIS);
      break;
    } 
  case TDataXtd_OFFSET:
    {
      TPrsStd_ConstraintTools::ComputeOffset(apConstraint,anAIS);
      break;
    }
  case TDataXtd_COINCIDENT:
    {
      TPrsStd_ConstraintTools::ComputeCoincident(apConstraint,anAIS); 
      break;
    }
  case TDataXtd_ROUND:
    {
      TPrsStd_ConstraintTools::ComputeRound(apConstraint,anAIS); 
      break;
    }

  case TDataXtd_MATE:
  case TDataXtd_ALIGN_FACES:
  case TDataXtd_ALIGN_AXES:
  case TDataXtd_AXES_ANGLE:
    {
      TPrsStd_ConstraintTools::ComputePlacement(apConstraint,anAIS);
      break;
    }
  case TDataXtd_EQUAL_DISTANCE :
    {
      TPrsStd_ConstraintTools::ComputeEqualDistance(apConstraint,anAIS);
      break;
    }
  case  TDataXtd_EQUAL_RADIUS:
    {
      TPrsStd_ConstraintTools::ComputeEqualRadius(apConstraint,anAIS);
      break;
    }
  default:
    {
      TPrsStd_ConstraintTools::ComputeOthers(apConstraint,anAIS);
      break;
    }
  }
  if (anAIS.IsNull()) return Standard_False;
 
  anAIS->ResetTransformation();
  anAIS->SetToUpdate();
  anAIS->UpdateSelection();
  
  anAISObject = anAIS;
  
  Handle(TDataXtd_Position) Position;
  if (aLabel.FindAttribute(TDataXtd_Position::GetID(),Position)) {
    Handle(AIS_Relation)::DownCast(anAISObject)->SetPosition(Position->GetPosition());
  }

  if (anAISObject->HasInteractiveContext()) {
    Quantity_NameOfColor originColor = anAISObject->Color();
    if (!apConstraint->Verified()) {
      if (originColor != Quantity_NOC_RED)
	anAISObject->SetColor(Quantity_NOC_RED);
    }
    else if (apConstraint->IsDimension() && apConstraint->GetValue()->IsCaptured()) {
      if (originColor != Quantity_NOC_PURPLE)
	anAISObject->SetColor(Quantity_NOC_PURPLE);
    }
    else if (!apConstraint->IsPlanar() && (originColor != Quantity_NOC_YELLOW)) 
      anAISObject->SetColor(Quantity_NOC_YELLOW);
  }
  else {
    if (!apConstraint->Verified()) {
      anAISObject->SetColor(Quantity_NOC_RED);
    }
    else if (apConstraint->IsDimension() && apConstraint->GetValue()->IsCaptured()) {
      anAISObject->SetColor(Quantity_NOC_PURPLE);
    }
    else if (!apConstraint->IsPlanar()) anAISObject->SetColor(Quantity_NOC_YELLOW);
  }
  return Standard_True;
}

