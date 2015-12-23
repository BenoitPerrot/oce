// Created on: 2010-02-25
// Created by: Sergey ZARITCHNY
// Copyright (c) 2010-2014 OPEN CASCADE SAS
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

#include <OCAF/TFunction/TFunction_Logbook.hxx>
#include <DNaming_PointDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(DNaming_PointDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TFunction_Driver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(DNaming_PointDriver)
IMPLEMENT_DOWNCAST(DNaming_PointDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(DNaming_PointDriver)
//OCCT
#include <ModelingAlgorithms/BRepLib/BRepLib_MakeVertex.hxx>
#include <Mathematics/TopLoc/TopLoc_Location.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopoDS/TopoDS_Vertex.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>
#include <ModelingData/BRep/BRep_Tool.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Foundation/Standard/Standard_GUID.hxx>
// OCAF
#include <TNaming.hxx>
#include <OCAF/TDF/TDF_Label.hxx>
#include <OCAF/TDataStd/TDataStd_Real.hxx>
#include <OCAF/TFunction/TFunction_Logbook.hxx>
#include <OCAF/TFunction/TFunction_Function.hxx>
#include <TNaming_NamedShape.hxx>
#include <TNaming_Builder.hxx>

#include <DNaming.hxx>
#include <ModelDefinitions.hxx>

//=======================================================================
//function : DNaming_PointDriver
//purpose  : Constructor
//=======================================================================
DNaming_PointDriver::DNaming_PointDriver()
{}

//=======================================================================
//function : Validate
//purpose  : Validates labels of a function in <log>.
//=======================================================================
void DNaming_PointDriver::Validate(TFunction_Logbook&) const
{}

//=======================================================================
//function : MustExecute
//purpose  : Analyse in <log> if the loaded function must be executed
//=======================================================================
Standard_Boolean DNaming_PointDriver::MustExecute(const TFunction_Logbook&) const
{
  return Standard_True;
}

//=======================================================================
//function : Execute
//purpose  : Execute the function and push in <log> the impacted labels
//=======================================================================
Standard_Integer DNaming_PointDriver::Execute(TFunction_Logbook& theLog) const
{
  Handle(TFunction_Function) aFunction;
  Label().FindAttribute(TFunction_Function::GetID(),aFunction);
  if(aFunction.IsNull()) return -1;
      
// perform calculations

  Standard_Real aDX = DNaming::GetReal(aFunction,PNT_DX)->Get();
  Standard_Real aDY = DNaming::GetReal(aFunction,PNT_DY)->Get();
  Standard_Real aDZ = DNaming::GetReal(aFunction,PNT_DZ)->Get();

  Handle(TNaming_NamedShape) aPrevPnt = DNaming::GetFunctionResult(aFunction);
// Save location
  TopLoc_Location aLocation;
  if (!aPrevPnt.IsNull() && !aPrevPnt->IsEmpty()) {
    aLocation = aPrevPnt->Get().Location();
  }
  gp_Pnt aPoint;
  if(aFunction->GetDriverGUID() == PNTRLT_GUID) {
    Handle(TDataStd_UAttribute) aRefPnt = DNaming::GetObjectArg(aFunction,PNTRLT_REF);
    Handle(TNaming_NamedShape) aRefPntNS = DNaming::GetObjectValue(aRefPnt);
    if (aRefPntNS.IsNull() || aRefPntNS->IsEmpty()) {
#ifdef OCCT_DEBUG
      cout<<"PointDriver:: Ref Point is empty"<<endl;
#endif
      aFunction->SetFailure(WRONG_ARGUMENT);
      return -1;
    }
    TopoDS_Shape aRefPntShape = aRefPntNS->Get();
    TopoDS_Vertex aVertex = TopoDS::Vertex(aRefPntShape);
    aPoint = BRep_Tool::Pnt(aVertex);
    aPoint.SetX(aPoint.X()+aDX);
    aPoint.SetY(aPoint.Y()+aDY);
    aPoint.SetZ(aPoint.Z()+aDZ);
  } else 
    aPoint = gp_Pnt(aDX, aDY, aDZ);

  BRepLib_MakeVertex aMakeVertex(aPoint);

  if(!aMakeVertex.IsDone()) {
    aFunction->SetFailure(ALGO_FAILED);
    return -1;
  }

  // Naming
  const TDF_Label& aResultLabel = RESPOSITION(aFunction);
  TNaming_Builder aBuilder(aResultLabel);
  aBuilder.Generated(aMakeVertex.Shape());
  
  // restore location
  if(!aLocation.IsIdentity())
    TNaming::Displace(aResultLabel, aLocation, Standard_True);

  theLog.SetValid(aResultLabel, Standard_True);  
  
  aFunction->SetFailure(DONE);
  return 0;
}
