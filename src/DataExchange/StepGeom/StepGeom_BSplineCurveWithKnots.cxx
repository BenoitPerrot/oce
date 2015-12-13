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

#include <Foundation/TColStd/TColStd_HArray1OfInteger.hxx>
#include <Foundation/TColStd/TColStd_HArray1OfReal.hxx>
#include <Foundation/TCollection/TCollection_HAsciiString.hxx>
#include <StepGeom_HArray1OfCartesianPoint.hxx>
#include <StepGeom_BSplineCurveWithKnots.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(StepGeom_BSplineCurveWithKnots)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(StepGeom_BSplineCurve),
  STANDARD_TYPE(StepGeom_BoundedCurve),
  STANDARD_TYPE(StepGeom_Curve),
  STANDARD_TYPE(StepGeom_GeometricRepresentationItem),
  STANDARD_TYPE(StepRepr_RepresentationItem),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(StepGeom_BSplineCurveWithKnots)
IMPLEMENT_DOWNCAST(StepGeom_BSplineCurveWithKnots,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(StepGeom_BSplineCurveWithKnots)


StepGeom_BSplineCurveWithKnots::StepGeom_BSplineCurveWithKnots ()  {}

void StepGeom_BSplineCurveWithKnots::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Standard_Integer aDegree,
	const Handle(StepGeom_HArray1OfCartesianPoint)& aControlPointsList,
	const StepGeom_BSplineCurveForm aCurveForm,
	const StepData_Logical aClosedCurve,
	const StepData_Logical aSelfIntersect)
{

	StepGeom_BSplineCurve::Init(aName, aDegree, aControlPointsList, aCurveForm, aClosedCurve, aSelfIntersect);
}

void StepGeom_BSplineCurveWithKnots::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Standard_Integer aDegree,
	const Handle(StepGeom_HArray1OfCartesianPoint)& aControlPointsList,
	const StepGeom_BSplineCurveForm aCurveForm,
	const StepData_Logical aClosedCurve,
	const StepData_Logical aSelfIntersect,
	const Handle(TColStd_HArray1OfInteger)& aKnotMultiplicities,
	const Handle(TColStd_HArray1OfReal)& aKnots,
	const StepGeom_KnotType aKnotSpec)
{
	// --- classe own fields ---
	knotMultiplicities = aKnotMultiplicities;
	knots = aKnots;
	knotSpec = aKnotSpec;
	// --- classe inherited fields ---
	StepGeom_BSplineCurve::Init(aName, aDegree, aControlPointsList, aCurveForm, aClosedCurve, aSelfIntersect);
}


void StepGeom_BSplineCurveWithKnots::SetKnotMultiplicities(const Handle(TColStd_HArray1OfInteger)& aKnotMultiplicities)
{
	knotMultiplicities = aKnotMultiplicities;
}

Handle(TColStd_HArray1OfInteger) StepGeom_BSplineCurveWithKnots::KnotMultiplicities() const
{
	return knotMultiplicities;
}

Standard_Integer StepGeom_BSplineCurveWithKnots::KnotMultiplicitiesValue(const Standard_Integer num) const
{
	return knotMultiplicities->Value(num);
}

Standard_Integer StepGeom_BSplineCurveWithKnots::NbKnotMultiplicities () const
{
	return knotMultiplicities->Length();
}

void StepGeom_BSplineCurveWithKnots::SetKnots(const Handle(TColStd_HArray1OfReal)& aKnots)
{
	knots = aKnots;
}

Handle(TColStd_HArray1OfReal) StepGeom_BSplineCurveWithKnots::Knots() const
{
	return knots;
}

Standard_Real StepGeom_BSplineCurveWithKnots::KnotsValue(const Standard_Integer num) const
{
	return knots->Value(num);
}

Standard_Integer StepGeom_BSplineCurveWithKnots::NbKnots () const
{
	return knots->Length();
}

void StepGeom_BSplineCurveWithKnots::SetKnotSpec(const StepGeom_KnotType aKnotSpec)
{
	knotSpec = aKnotSpec;
}

StepGeom_KnotType StepGeom_BSplineCurveWithKnots::KnotSpec() const
{
	return knotSpec;
}
