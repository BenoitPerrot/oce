// Created on: 1994-11-30
// Created by: Frederic MAUPAS
// Copyright (c) 1994-1999 Matra Datavision
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

#include <DataExchange/StepShape/StepShape_TopologicalRepresentationItem.hxx>
#include <Foundation/StdFail/StdFail_NotDone.hxx>
#include <ModelingData/TopoDS/TopoDS_Vertex.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDSToStep_MakeStepVertex.hxx>

#include <DataExchange/GeomToStep/GeomToStep_MakeCartesianPoint.hxx>

#include <ModelingData/BRep/BRep_Tool.hxx>

#include <DataExchange/StepGeom/StepGeom_CartesianPoint.hxx>
#include <DataExchange/StepShape/StepShape_VertexPoint.hxx>

#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <TransferBRep_ShapeMapper.hxx>

#include <Foundation/TCollection/TCollection_HAsciiString.hxx>

// Processing of non-manifold topology (ssv; 11.11.2010)
#include <TransferBRep.hxx>
#include <DataExchange/Interface/Interface_Static.hxx>

// ----------------------------------------------------------------------------
// Constructors
// ----------------------------------------------------------------------------

TopoDSToStep_MakeStepVertex::TopoDSToStep_MakeStepVertex()
{
  done = Standard_False;
}

TopoDSToStep_MakeStepVertex::TopoDSToStep_MakeStepVertex
(const TopoDS_Vertex& V, 
 TopoDSToStep_Tool& T,
 const Handle(Transfer_FinderProcess)& FP)
{
  done = Standard_False;
  Init(V, T, FP);
}

// ----------------------------------------------------------------------------
// Method  : Init
// Purpose :
// ----------------------------------------------------------------------------

void TopoDSToStep_MakeStepVertex::Init(const TopoDS_Vertex& aVertex, 
                                       TopoDSToStep_Tool& aTool,
                                       const Handle(Transfer_FinderProcess)& FP)
{

  aTool.SetCurrentVertex(aVertex);

  // [BEGIN] Processing non-manifold topology (ssv; 11.11.2010)
  Standard_Boolean isNMMode = (0 != Interface_Static::IVal("write.step.nonmanifold"));
  if (isNMMode) {
    Handle(StepShape_VertexPoint) aVP;
    Handle(TransferBRep_ShapeMapper) aSTEPMapper = TransferBRep::ShapeMapper(FP, aVertex);
    if ( FP->FindTypedTransient(aSTEPMapper, STANDARD_TYPE(StepShape_VertexPoint), aVP) ) {
      // Non-manifold topology detected
      myError  = TopoDSToStep_VertexOther;
      myResult = aVP;
      done     = Standard_True;
      return;
    }
  }
  // [END] Processing non-manifold topology (ssv; 11.11.2010)
  
  if (aTool.IsBound(aVertex)) {
    myError  = TopoDSToStep_VertexOther;
    done     = Standard_True;
    myResult = aTool.Find(aVertex);  
    return;
  } 

  gp_Pnt P;
  
  P = BRep_Tool::Pnt(aVertex);
  GeomToStep_MakeCartesianPoint MkPoint(P);
  Handle(StepGeom_CartesianPoint) Gpms = MkPoint.Value();
  Handle(StepShape_VertexPoint) Vpms =
    new StepShape_VertexPoint();
  Handle(TCollection_HAsciiString) aName = 
    new TCollection_HAsciiString("");

  Vpms->Init(aName, Gpms);

  aTool.Bind(aVertex,Vpms);
  myError  = TopoDSToStep_VertexDone;
  done     = Standard_True;
  myResult = Vpms;
}


// ----------------------------------------------------------------------------
// Method  : Value
// Purpose :
// ----------------------------------------------------------------------------

const Handle(StepShape_TopologicalRepresentationItem)& TopoDSToStep_MakeStepVertex::Value() const 
{
  StdFail_NotDone_Raise_if(!done,"");
  return myResult;
}

// ----------------------------------------------------------------------------
// Method  : Error
// Purpose :
// ----------------------------------------------------------------------------

TopoDSToStep_MakeVertexError TopoDSToStep_MakeStepVertex::Error() const 
{
  return myError;
}

