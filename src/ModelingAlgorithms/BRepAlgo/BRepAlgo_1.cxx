// Created on: 1999-10-21
// Created by: Atelier CAS2000
// Copyright (c) 1999-1999 Matra Datavision
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

#include <ModelingData/TopoDS/TopoDS_Wire.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingAlgorithms/BRepAlgo/BRepAlgo.hxx>

#include <ModelingAlgorithms/BRepCheck/BRepCheck.hxx>
#include <ModelingAlgorithms/BRepCheck/BRepCheck_Analyzer.hxx>
#include <ModelingAlgorithms/BRepCheck/BRepCheck_ListIteratorOfListOfStatus.hxx>
#include <ModelingAlgorithms/BRepCheck/BRepCheck_ListOfStatus.hxx>
#include <ModelingAlgorithms/BRepCheck/BRepCheck_Result.hxx>
#include <ModelingAlgorithms/BRepCheck/BRepCheck_Shell.hxx>
#include <ModelingAlgorithms/BRepLib/BRepLib.hxx>
#include <ModelingData/BRep/BRep_Builder.hxx>
#include <ModelingData/BRep/BRep_Tool.hxx>
#include <ModelingData/BRepTools/BRepTools.hxx>
#include <Mathematics/Precision/Precision.hxx>
#include <ModelingData/TopExp/TopExp_Explorer.hxx>
#include <ModelingData/TopTools/TopTools_ListIteratorOfListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_MapOfShape.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingData/TopoDS/TopoDS_Compound.hxx>
#include <Mathematics/Primitives/gp.hxx>

//=======================================================================
//function : IsValid
//purpose  : 
//=======================================================================
Standard_Boolean BRepAlgo::IsValid(const TopoDS_Shape& S)
{
  BRepCheck_Analyzer ana(S);
  return ana.IsValid(); 
}

//=======================================================================
//function : IsValid
//purpose  : 
//=======================================================================
  Standard_Boolean BRepAlgo::IsValid(const TopTools_ListOfShape& theArgs,
				     const TopoDS_Shape& theResult,
				     const Standard_Boolean closedSolid,
				     const Standard_Boolean GeomCtrl)
{
  if (theResult.IsNull()) return Standard_True;
  Standard_Boolean validate= Standard_False;

  TopTools_MapOfShape allFaces;
  TopExp_Explorer tEx;
  TopTools_ListIteratorOfListOfShape itLOS;
  for (itLOS.Initialize(theArgs);
       itLOS.More(); itLOS.Next()) {
    if (itLOS.Value().IsSame(theResult)) {
      validate = Standard_True;
      break;
    }
    for (tEx.Init(itLOS.Value(), TopAbs_FACE); tEx.More(); tEx.Next()) {
      allFaces.Add(tEx.Current());
    }
  }

  TopoDS_Compound toCheck;

  if (allFaces.IsEmpty()) {
    if (validate) return Standard_True;
    BRepCheck_Analyzer ana(theResult, GeomCtrl);
    if (!ana.IsValid()) return Standard_False;
  }
  else if (!validate) {
    BRep_Builder bB;
    TopoDS_Face curf;
    for (tEx.Init(theResult, TopAbs_FACE); tEx.More(); tEx.Next()) {
      curf=TopoDS::Face(tEx.Current());
      if (!allFaces.Contains(curf)) {
	if (toCheck.IsNull()) bB.MakeCompound(toCheck);
	BRepTools::Update(curf);
	bB.Add(toCheck, curf);
      }
    }
    if (toCheck.IsNull()) {
      validate = Standard_True;
    }
    else {
      BRepCheck_Analyzer ana(toCheck, Standard_True);
      if (!ana.IsValid()) {

// Check if the problem is not just BRepCheck_InvalidSameParameterFlag
	for (tEx.Init(toCheck, TopAbs_FACE); tEx.More(); tEx.Next()) {
	  if  (!ana.Result(tEx.Current()).IsNull()) {
            for (auto sta : ana.Result(tEx.Current())->Status()) {
// If a face is incorrect
	      if (sta != BRepCheck_NoError) {
		TopExp_Explorer exp;
		for (exp.Init(tEx.Current(), TopAbs_EDGE); exp.More(); exp.Next()) {
		  const Handle(BRepCheck_Result)& res = ana.Result(exp.Current());
		  for (res->InitContextIterator(); res->MoreShapeInContext(); res->NextShapeInContext()) {
		    if (res->ContextualShape().IsSame(tEx.Current())) {
                      for (auto sta2 : res->StatusOnShape()) {
// If an edge is BRepCheck_InvalidSameParameterFlag or BRepCheck_InvalidSameRangeFlag, it is forced
			if (sta2 == BRepCheck_InvalidSameParameterFlag ||
			    sta2 == BRepCheck_InvalidSameRangeFlag) {
			  bB.SameRange(TopoDS::Edge(exp.Current()), Standard_False);
			  bB.SameParameter(TopoDS::Edge(exp.Current()), Standard_False);
			  BRepLib::SameParameter(TopoDS::Edge(exp.Current()), 
						 BRep_Tool::Tolerance(TopoDS::Edge(exp.Current())));
			  break;
			}
		      }
		    }
		  }
		}
		break;
	      }
	    }
	  }
	}
// Remake control (there can be a problem of another type orb the one that cannot be corrected
	ana.Init(toCheck, Standard_True);
	if (!ana.IsValid()) return Standard_False;
      }
    }
  }

  Handle(BRepCheck_Shell) HR;
  for (tEx.Init(theResult, TopAbs_SHELL); tEx.More(); tEx.Next()) {
    if (HR.IsNull()) HR = new BRepCheck_Shell(TopoDS::Shell(tEx.Current()));
    else                             HR->Init(tEx.Current());
    if (HR->Status().front() != BRepCheck_NoError) return Standard_False;
    if (HR->Orientation(Standard_False) != BRepCheck_NoError) return Standard_False;
    if (closedSolid) {
      if (HR->Closed() != BRepCheck_NoError) return Standard_False;
    }
  }

  return Standard_True;
}


//=======================================================================
//function : IsTopologicallyValid
//purpose  : 
//=======================================================================
  Standard_Boolean BRepAlgo::IsTopologicallyValid(const TopoDS_Shape& S)
{
//

// if (getenv("DONT_SWITCH_IS_VALID") != NULL) {
//   return Standard_True ; 
// }
// else {
   BRepCheck_Analyzer ana(S,Standard_False);
   return ana.IsValid(); 
 
// }
}



