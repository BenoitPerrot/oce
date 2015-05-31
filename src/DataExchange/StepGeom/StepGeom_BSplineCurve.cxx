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

#include <StepGeom_HArray1OfCartesianPoint.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_BSplineCurve.hxx>
#include <Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepGeom_BSplineCurve)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepGeom_BoundedCurve),
  STANDARD_TYPE(StepGeom_Curve),
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepGeom_BSplineCurve)
IMPLEMENT_DOWNCAST(StepGeom_BSplineCurve,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepGeom_BSplineCurve)


StepGeom_BSplineCurve::StepGeom_BSplineCurve ()  {}

void StepGeom_BSplineCurve::Init(
	const Handle(TCollection_HAsciiString)& aName)
{

	StepRepr_RepresentationItem::Init(aName);
}

void StepGeom_BSplineCurve::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Standard_Integer aDegree,
	const Handle(StepGeom_HArray1OfCartesianPoint)& aControlPointsList,
	const StepGeom_BSplineCurveForm aCurveForm,
	const StepData_Logical aClosedCurve,
	const StepData_Logical aSelfIntersect)
{
	// --- classe own fields ---
	degree = aDegree;
	controlPointsList = aControlPointsList;
	curveForm = aCurveForm;
	closedCurve = aClosedCurve;
	selfIntersect = aSelfIntersect;
	// --- classe inherited fields ---
	StepRepr_RepresentationItem::Init(aName);
}


void StepGeom_BSplineCurve::SetDegree(const Standard_Integer aDegree)
{
	degree = aDegree;
}

Standard_Integer StepGeom_BSplineCurve::Degree() const
{
	return degree;
}

void StepGeom_BSplineCurve::SetControlPointsList(const Handle(StepGeom_HArray1OfCartesianPoint)& aControlPointsList)
{
	controlPointsList = aControlPointsList;
}

Handle(StepGeom_HArray1OfCartesianPoint) StepGeom_BSplineCurve::ControlPointsList() const
{
	return controlPointsList;
}

Handle(StepGeom_CartesianPoint) StepGeom_BSplineCurve::ControlPointsListValue(const Standard_Integer num) const
{
	return controlPointsList->Value(num);
}

Standard_Integer StepGeom_BSplineCurve::NbControlPointsList () const
{
	if (controlPointsList.IsNull()) return 0;
	return controlPointsList->Length();
}

void StepGeom_BSplineCurve::SetCurveForm(const StepGeom_BSplineCurveForm aCurveForm)
{
	curveForm = aCurveForm;
}

StepGeom_BSplineCurveForm StepGeom_BSplineCurve::CurveForm() const
{
	return curveForm;
}

void StepGeom_BSplineCurve::SetClosedCurve(const StepData_Logical aClosedCurve)
{
	closedCurve = aClosedCurve;
}

StepData_Logical StepGeom_BSplineCurve::ClosedCurve() const
{
	return closedCurve;
}

void StepGeom_BSplineCurve::SetSelfIntersect(const StepData_Logical aSelfIntersect)
{
	selfIntersect = aSelfIntersect;
}

StepData_Logical StepGeom_BSplineCurve::SelfIntersect() const
{
	return selfIntersect;
}
