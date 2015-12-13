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

#include <StepGeom_BezierCurve.hxx>
#include <StepGeom_RationalBSplineCurve.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <StepGeom_HArray1OfCartesianPoint.hxx>
#include <TColStd_HArray1OfReal.hxx>
#include <StepGeom_BezierCurveAndRationalBSplineCurve.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepGeom_BezierCurveAndRationalBSplineCurve)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepGeom_BSplineCurve),
  STANDARD_TYPE(StepGeom_BoundedCurve),
  STANDARD_TYPE(StepGeom_Curve),
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepGeom_BezierCurveAndRationalBSplineCurve)
IMPLEMENT_DOWNCAST(StepGeom_BezierCurveAndRationalBSplineCurve,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepGeom_BezierCurveAndRationalBSplineCurve)

#include <StepGeom_BezierCurve.hxx>

#include <StepGeom_RationalBSplineCurve.hxx>


StepGeom_BezierCurveAndRationalBSplineCurve::StepGeom_BezierCurveAndRationalBSplineCurve ()  {}

void StepGeom_BezierCurveAndRationalBSplineCurve::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Standard_Integer aDegree,
	const Handle(StepGeom_HArray1OfCartesianPoint)& aControlPointsList,
	const StepGeom_BSplineCurveForm aCurveForm,
	const StepData_Logical aClosedCurve,
	const StepData_Logical aSelfIntersect)
{

	StepGeom_BSplineCurve::Init(aName, aDegree, aControlPointsList, aCurveForm, aClosedCurve, aSelfIntersect);
}

void StepGeom_BezierCurveAndRationalBSplineCurve::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Standard_Integer aDegree,
	const Handle(StepGeom_HArray1OfCartesianPoint)& aControlPointsList,
	const StepGeom_BSplineCurveForm aCurveForm,
	const StepData_Logical aClosedCurve,
	const StepData_Logical aSelfIntersect,
	const Handle(StepGeom_BezierCurve)& aBezierCurve,
	const Handle(StepGeom_RationalBSplineCurve)& aRationalBSplineCurve)
{
	// --- classe own fields ---
	bezierCurve = aBezierCurve;
	rationalBSplineCurve = aRationalBSplineCurve;
	// --- classe inherited fields ---
	StepGeom_BSplineCurve::Init(aName, aDegree, aControlPointsList, aCurveForm, aClosedCurve, aSelfIntersect);
}


void StepGeom_BezierCurveAndRationalBSplineCurve::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Standard_Integer aDegree,
	const Handle(StepGeom_HArray1OfCartesianPoint)& aControlPointsList,
	const StepGeom_BSplineCurveForm aCurveForm,
	const StepData_Logical aClosedCurve,
	const StepData_Logical aSelfIntersect,
	const Handle(TColStd_HArray1OfReal)& aWeightsData)
{
	// --- classe inherited fields ---

	StepGeom_BSplineCurve::Init(aName, aDegree, aControlPointsList, aCurveForm, aClosedCurve, aSelfIntersect);

	// --- ANDOR componant fields ---

	bezierCurve = new StepGeom_BezierCurve();
	bezierCurve->Init(aName, aDegree, aControlPointsList, aCurveForm, aClosedCurve, aSelfIntersect);

	// --- ANDOR componant fields ---

	rationalBSplineCurve = new StepGeom_RationalBSplineCurve();
	rationalBSplineCurve->Init(aName, aDegree, aControlPointsList, aCurveForm, aClosedCurve, aSelfIntersect, aWeightsData);
}


void StepGeom_BezierCurveAndRationalBSplineCurve::SetBezierCurve(const Handle(StepGeom_BezierCurve)& aBezierCurve)
{
	bezierCurve = aBezierCurve;
}

Handle(StepGeom_BezierCurve) StepGeom_BezierCurveAndRationalBSplineCurve::BezierCurve() const
{
	return bezierCurve;
}

void StepGeom_BezierCurveAndRationalBSplineCurve::SetRationalBSplineCurve(const Handle(StepGeom_RationalBSplineCurve)& aRationalBSplineCurve)
{
	rationalBSplineCurve = aRationalBSplineCurve;
}

Handle(StepGeom_RationalBSplineCurve) StepGeom_BezierCurveAndRationalBSplineCurve::RationalBSplineCurve() const
{
	return rationalBSplineCurve;
}

	//--- Specific Methods for AND classe field access ---


	//--- Specific Methods for AND classe field access ---


void StepGeom_BezierCurveAndRationalBSplineCurve::SetWeightsData(const Handle(TColStd_HArray1OfReal)& aWeightsData)
{
	rationalBSplineCurve->SetWeightsData(aWeightsData);
}

Handle(TColStd_HArray1OfReal) StepGeom_BezierCurveAndRationalBSplineCurve::WeightsData() const
{
	return rationalBSplineCurve->WeightsData();
}

Standard_Real StepGeom_BezierCurveAndRationalBSplineCurve::WeightsDataValue(const Standard_Integer num) const
{
	return rationalBSplineCurve->WeightsDataValue(num);
}

Standard_Integer StepGeom_BezierCurveAndRationalBSplineCurve::NbWeightsData () const
{
	return rationalBSplineCurve->NbWeightsData();
}
