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

//:n7 abv 16.02.99: treatment of CARTESIAN_TRSF_OP_3D placed to StepGeom_MkTransformed3d
// sln 23.10.2001. CTS23496: Verifying on error creation of directions is added (StepToTopoDS_MakeTransformed::Compute(...) function)

#include <StepGeom_Axis2Placement3d.hxx>
#include <StepGeom_CartesianTransformationOperator3d.hxx>
#include <Mathematics/Primitives/gp_Trsf.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <StepRepr_MappedItem.hxx>
#include <Transfer_TransientProcess.hxx>
#include <StepToTopoDS_MakeTransformed.hxx>
#include <Transfer_Binder.hxx>
#include <TransferBRep_ShapeBinder.hxx>

#include <StepToGeom_MakeAxis2Placement.hxx>
#include <Geometry/Geom/Geom_Axis2Placement.hxx>
#include <Mathematics/Primitives/gp_Ax3.hxx>
#include <Mathematics/Primitives/gp_TrsfForm.hxx>
#include <Mathematics/TopLoc/TopLoc_Location.hxx>

#include <StepRepr_RepresentationMap.hxx>
#include <StepRepr_Representation.hxx>

//  + pour CartesianOperator3d
#include <Geometry/Geom/Geom_CartesianPoint.hxx>
#include <Geometry/Geom/Geom_Direction.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_Direction.hxx>
#include <StepToGeom_MakeCartesianPoint.hxx>
#include <StepToGeom_MakeDirection.hxx>
#include <StepToGeom_MakeTransformation3d.hxx>


StepToTopoDS_MakeTransformed::StepToTopoDS_MakeTransformed ()
{
}

Standard_Boolean  StepToTopoDS_MakeTransformed::Compute
  (const Handle(StepGeom_Axis2Placement3d)& Origin,
   const Handle(StepGeom_Axis2Placement3d)& Target)
{
  theTrsf = gp_Trsf();  // reinit
  if (Origin.IsNull() || Target.IsNull()) return Standard_False;

  // sln 23.10.2001 : If the directions have not been created do nothing.  
  Handle(Geom_Axis2Placement) theOrig;
  if (!StepToGeom_MakeAxis2Placement::Convert(Origin,theOrig))
    return Standard_False;
  Handle(Geom_Axis2Placement) theTarg;
  if (!StepToGeom_MakeAxis2Placement::Convert(Target,theTarg))
    return Standard_False;

  const gp_Ax3 ax3Orig(theOrig->Ax2());
  const gp_Ax3 ax3Targ(theTarg->Ax2());

  //  ne pas se tromper de sens !
  theTrsf.SetTransformation(ax3Targ, ax3Orig);
  return Standard_True;
}

Standard_Boolean  StepToTopoDS_MakeTransformed::Compute
  (const Handle(StepGeom_CartesianTransformationOperator3d)& Operator)
{
  return StepToGeom_MakeTransformation3d::Convert(Operator,theTrsf);
}

const gp_Trsf&  StepToTopoDS_MakeTransformed::Transformation () const
{
  return theTrsf;
}

Standard_Boolean  StepToTopoDS_MakeTransformed::Transform
  (TopoDS_Shape& shape) const
{
  if (theTrsf.Form() == gp_Identity) return Standard_False;
  TopLoc_Location theLoc(theTrsf);
  shape.Move (theLoc);
//  shape.Location(theLoc);
  return Standard_True;
}

TopoDS_Shape  StepToTopoDS_MakeTransformed::TranslateMappedItem
(const Handle(StepRepr_MappedItem)& mapit,
 const Handle(Transfer_TransientProcess)& TP)
{
  TopoDS_Shape theResult;

  //  Positionnement : 2 formules
  //  1/ Ax2 dans Source et comme Target  : passage de Source a Target
  //  2/ CartesianOperator3d comme Target : on applique

  Handle(StepGeom_Axis2Placement3d) Origin = 
    Handle(StepGeom_Axis2Placement3d)::DownCast(mapit->MappingSource()
					   ->MappingOrigin());
  Handle(StepGeom_Axis2Placement3d) Target = 
    Handle(StepGeom_Axis2Placement3d)::DownCast(mapit->MappingTarget());

  Handle(StepGeom_CartesianTransformationOperator3d) CartOp =
    Handle(StepGeom_CartesianTransformationOperator3d)::DownCast(mapit->MappingTarget());
//  Handle(StepRepr_ItemDefinedTransformation) ItemDef =
//    Handle(StepRepr_ItemDefinedTransformation)::DownCast(mapit->MappingTarget());

  Standard_Boolean ok = Standard_False;
  if (!Origin.IsNull() && !Target.IsNull()) ok = Compute (Origin,Target);
  else if (!CartOp.IsNull()) ok = Compute (CartOp);

  if (!ok) TP->AddWarning (mapit,"Mapped Item, case not recognized, location ignored");

  //  La Shape, et la mise en position
  Handle(StepRepr_Representation) maprep = mapit->MappingSource()->MappedRepresentation();
  Handle(Transfer_Binder) binder = TP->Find(maprep);
  if (binder.IsNull())    binder = TP->Transferring(maprep);
  Handle(TransferBRep_ShapeBinder) shbinder =
    Handle(TransferBRep_ShapeBinder)::DownCast(binder);
  if (shbinder.IsNull())  TP->AddWarning(mapit,"No Shape Produced");
  else {
    theResult = shbinder->Result();
    Transform (theResult);
  }

  return theResult;
}
