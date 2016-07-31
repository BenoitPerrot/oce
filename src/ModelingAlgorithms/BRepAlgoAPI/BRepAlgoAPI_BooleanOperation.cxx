// Created on: 1993-10-15
// Created by: Remi LEQUETTE
// Copyright (c) 1993-1999 Matra Datavision
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

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingAlgorithms/BOPAlgo/BOPAlgo_PaveFiller.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingAlgorithms/BRepAlgoAPI/BRepAlgoAPI_BooleanOperation.hxx>

#include <ModelingAlgorithms/BRepAlgoAPI/BRepAlgoAPI.hxx>
#include <ModelingAlgorithms/BRepAlgoAPI/BRepAlgoAPI_Check.hxx>

#include <ModelingAlgorithms/BRepLib/BRepLib_FuseEdges.hxx>
#include <ModelingData/TopExp/TopExp.hxx>
#include <ModelingData/TopTools/TopTools_MapOfShape.hxx>
#include <ModelingData/TopTools/TopTools_ListIteratorOfListOfShape.hxx>

#include <ModelingAlgorithms/BOPDS/BOPDS_DS.hxx>

#include <ModelingAlgorithms/BOPAlgo/BOPAlgo_PaveFiller.hxx>
#include <ModelingAlgorithms/BOPAlgo/BOPAlgo_BOP.hxx>
#include <ModelingAlgorithms/BOPAlgo/BOPAlgo_Section.hxx>


//=======================================================================
//function : BRepAlgoAPI_BooleanOperation
//purpose  : 
//=======================================================================
BRepAlgoAPI_BooleanOperation::BRepAlgoAPI_BooleanOperation
  (const TopoDS_Shape& aS1, 
   const TopoDS_Shape& aS2,
   const BOPAlgo_Operation anOp)
: 
  myS1(aS1),
  myS2(aS2),
  myBuilderCanWork(Standard_False),
  myOperation(anOp),
  myErrorStatus(1),
  myDSFiller(NULL),
  myBuilder(NULL),
  myEntryType(1),
  myFuseEdges(Standard_False)
{
}
//=======================================================================
//function : BRepAlgoAPI_BooleanOperation
//purpose  : 
//=======================================================================
  BRepAlgoAPI_BooleanOperation::BRepAlgoAPI_BooleanOperation(const TopoDS_Shape& aS1, 
                                                             const TopoDS_Shape& aS2,
                                                             const BOPAlgo_PaveFiller& aDSFiller,
                                                             const BOPAlgo_Operation anOp)
: 
  myS1(aS1),
  myS2(aS2),
  myBuilderCanWork(Standard_False),
  myOperation(anOp),
  myErrorStatus(1),
  myDSFiller(NULL),
  myBuilder(NULL),
  myEntryType(0),
  myFuseEdges(Standard_False)
{
  if ((Standard_Address) &aDSFiller!=NULL) {
    myDSFiller=(BOPAlgo_PaveFiller*)&aDSFiller;
  }
}
//=======================================================================
//function : Destroy
//purpose  : 
//=======================================================================
  void BRepAlgoAPI_BooleanOperation::Destroy()
{
  if (myBuilder!=NULL) {
    delete myBuilder;
    myBuilder=NULL;
  }
  if (myDSFiller!=NULL && myEntryType) {
    delete myDSFiller;
    myDSFiller=NULL;
  }

  //
  myModifFaces.Clear();
  myEdgeMap.Clear();
}
//=======================================================================
//function : SetOperation
//purpose  : 
//=======================================================================
  void BRepAlgoAPI_BooleanOperation::SetOperation (const BOPAlgo_Operation anOp)
{
  myOperation=anOp;
}
//=======================================================================
//function : Operation
//purpose  : 
//=======================================================================
  BOPAlgo_Operation BRepAlgoAPI_BooleanOperation::Operation ()const
{
  return myOperation;
}

//=======================================================================
//function : FuseEdges
//purpose  : 
//=======================================================================
  Standard_Boolean BRepAlgoAPI_BooleanOperation::FuseEdges ()const
{
  return myFuseEdges;
}

//=======================================================================
//function : Shape1
//purpose  : 
//=======================================================================
  const TopoDS_Shape& BRepAlgoAPI_BooleanOperation::Shape1() const 
{
  return myS1;
}

//=======================================================================
//function : Shape2
//purpose  : 
//=======================================================================
  const TopoDS_Shape& BRepAlgoAPI_BooleanOperation::Shape2() const 
{
  return myS2;
}

//=======================================================================
//function : BuilderCanWork
//purpose  : 
//=======================================================================
  Standard_Boolean BRepAlgoAPI_BooleanOperation::BuilderCanWork() const
{
  return myBuilderCanWork;
}
//=======================================================================
//function : ErrorStatus
//purpose  : 
//=======================================================================
  Standard_Integer BRepAlgoAPI_BooleanOperation::ErrorStatus()const
{
  return myErrorStatus;    
}
//=======================================================================
//function : Modified
//purpose  : 
//=======================================================================
const TopTools_ListOfShape& BRepAlgoAPI_BooleanOperation::Modified(const TopoDS_Shape& aS) 
{
  if (myBuilder==NULL) {
    myGenerated.clear();
    return myGenerated;
  }
  else {
    myGenerated = myBuilder->Modified(aS);

    if(myFuseEdges) {
      TopTools_ListOfShape theLS;
      theLS.assign(begin(myGenerated), end(myGenerated));
      //
      RefinedList(theLS);
    }
    return myGenerated;
  }
}

//=======================================================================
//function : IsDeleted
//purpose  : 
//=======================================================================
  Standard_Boolean BRepAlgoAPI_BooleanOperation::IsDeleted(const TopoDS_Shape& aS) 
{
  Standard_Boolean bDeleted = Standard_True; 
  if (myBuilder != NULL) {
    bDeleted=myBuilder->IsDeleted(aS);
  }
  return bDeleted; 
}

//=======================================================================
//function : PrepareFiller
//purpose  : 
//=======================================================================
  Standard_Boolean BRepAlgoAPI_BooleanOperation::PrepareFiller()
{
  Standard_Boolean bIsNewFiller=Standard_False;
  myErrorStatus=1;
  //
  if (myS1.IsNull() || myS2.IsNull()) {
    myErrorStatus=2;
    return bIsNewFiller;
  }
  //
  if (myOperation==BOPAlgo_UNKNOWN) {
    myErrorStatus=6;
    return bIsNewFiller;
  }
  //
  if (myDSFiller==NULL) {
    bIsNewFiller=!bIsNewFiller;

    myDSFiller=new BOPAlgo_PaveFiller;
    //
    if (myDSFiller==NULL) {
      myErrorStatus=4;
      return bIsNewFiller;
    }
    //
    BOPCol_ListOfShape aLS;
    aLS.Append(myS1);
    aLS.Append(myS2);
    //
    myDSFiller->SetArguments(aLS);
  }

  return bIsNewFiller;
}
//=======================================================================
//function : Build
//purpose  : 
//=======================================================================
  void BRepAlgoAPI_BooleanOperation::Build()
{
  Standard_Boolean bIsNewFiller;
  Standard_Integer iErr;
  //
  //dump arguments and result of boolean operation in tcl script
  char *pathdump = getenv("CSF_DEBUG_BOP");
  Standard_Boolean isDump = (pathdump != NULL),
                   isDumpArgs = Standard_False,
                   isDumpRes = Standard_False;
  Standard_CString aPath = pathdump;
  //
  myBuilderCanWork=Standard_False;
  NotDone();
  //
  bIsNewFiller=PrepareFiller();
  //
  if (myErrorStatus!=1) {
    // there was errors during the preparation 
    return;
  }
  //
  if (bIsNewFiller) {
    //Prepare the DS
    myDSFiller->Perform();
  }
  //
  if (myBuilder!=NULL) {
    delete myBuilder;
    myBuilder=NULL;
  }
  //
  const TopoDS_Shape& aS1 = myS1;
  const TopoDS_Shape& aS2 = myS2;
  //
  if (isDump) {
    BRepAlgoAPI_Check aChekArgs(aS1, aS2, myOperation);
    isDumpArgs = !aChekArgs.IsValid();
  }
  //
  myShape.Nullify();
  //
  if (myOperation==BOPAlgo_SECTION) {
    myBuilder=new BOPAlgo_Section;
    myBuilder->AddArgument(aS1);
    myBuilder->AddArgument(aS2);
  }
  else {
    BOPAlgo_BOP *pBOP;
    //
    pBOP=new BOPAlgo_BOP;
    myBuilder=pBOP;
    pBOP->AddArgument(aS1);
    pBOP->AddTool(aS2);
    pBOP->SetOperation(myOperation);
  }
  //
  myBuilder->PerformWithFiller(*myDSFiller);
  iErr = myBuilder->ErrorStatus();
  if (!iErr) {
    myErrorStatus=0;
    myBuilderCanWork=Standard_True;
    myShape=myBuilder->Shape();
    //
    if (isDump) {
      BRepAlgoAPI_Check aCheckRes(myShape);
      isDumpRes = !aCheckRes.IsValid();
      if (isDumpArgs || isDumpRes) {
        BRepAlgoAPI::DumpOper(aPath, 
                              aS1, 
                              aS2, 
                              myShape, 
                              myOperation, 
                              isDumpArgs);
      }
    }
    //
    Done(); 
  } 
  else {
    myErrorStatus=100+iErr;
    NotDone();
  }
}

//
//=======================================================================
//function : SectionEdges
//purpose  : 
//=======================================================================
const  TopTools_ListOfShape& BRepAlgoAPI_BooleanOperation::SectionEdges()
{
  if (myBuilder==NULL) {
    myGenerated.clear();
    return myGenerated;
  }
  //
  Standard_Integer aNb, i, j, aNbCurves, nE;
  BOPDS_ListIteratorOfListOfPaveBlock anIt;
  //
  const BOPDS_PDS& pDS = myDSFiller->PDS();
  BOPDS_VectorOfInterfFF& aFFs=pDS->InterfFF();
  myGenerated.clear();
  //
  aNb=aFFs.Extent();
  for (i = 0; i < aNb; i++) {
    BOPDS_InterfFF& aFFi=aFFs(i);
    const BOPDS_VectorOfCurve& aSeqOfCurve=aFFi.Curves();
    //
    aNbCurves=aSeqOfCurve.Extent();
    for (j=0; j<aNbCurves; j++) {
      const BOPDS_Curve& aCurve=aSeqOfCurve(j);
      const BOPDS_ListOfPaveBlock& aSectEdges = aCurve.PaveBlocks();
      //
      anIt.Initialize(aSectEdges);
      for(; anIt.More(); anIt.Next()) {
        const Handle(BOPDS_PaveBlock)& aPB = anIt.Value();
        nE = aPB->Edge();
        const TopoDS_Shape& aE = pDS->Shape(nE);
        myGenerated.push_back(aE);
      }
    }
  }
  //
  if(myFuseEdges) {
    TopTools_ListOfShape theLS;
    theLS.assign(begin(myGenerated), end(myGenerated));
    //
    RefinedList(theLS);
  }
  //
  return myGenerated;
}

// ================================================================================================
// function: Generated
// purpose:
// ================================================================================================
const TopTools_ListOfShape& BRepAlgoAPI_BooleanOperation::Generated(const TopoDS_Shape& S) 
{
  if (myBuilder==NULL) {
    myGenerated.clear();
    return myGenerated;
  }
  //
  if(myFuseEdges) {
    const TopTools_ListOfShape& aL = myBuilder->Generated(S);
    return RefinedList(aL);
  }
  
  return myBuilder->Generated(S);
}

// ================================================================================================
// function: HasModified
// purpose:
// ================================================================================================
Standard_Boolean BRepAlgoAPI_BooleanOperation::HasModified() const
{
  if (myBuilder==NULL) {
    return Standard_False;
  }
  return myBuilder->HasModified();
}

// ================================================================================================
// function: HasGenerated
// purpose:
// ================================================================================================
Standard_Boolean BRepAlgoAPI_BooleanOperation::HasGenerated() const
{
  if (myBuilder==NULL) {
    return Standard_False;
  }
  return myBuilder->HasGenerated();
}

// ================================================================================================
// function: HasDeleted
// purpose:
// ================================================================================================
Standard_Boolean BRepAlgoAPI_BooleanOperation::HasDeleted() const
{
  if (myBuilder==NULL) {
    return Standard_False;
  }
  return myBuilder->HasDeleted();
}
//=======================================================================
//function : RefineEdges
//purpose  : 
//=======================================================================

  void BRepAlgoAPI_BooleanOperation::RefineEdges ()
{
  if(myFuseEdges) return; //Edges have been refined yet

  BRepLib_FuseEdges FE(myShape);
  FE.SetConcatBSpl(Standard_True);

  // avoid fusing old edges
  TopTools_IndexedMapOfShape mapOldEdges;
  TopExp::MapShapes (myS1, TopAbs_EDGE, mapOldEdges);
  TopExp::MapShapes (myS2, TopAbs_EDGE, mapOldEdges);
  FE.AvoidEdges (mapOldEdges);

  // Get List of edges that have been fused
  myFuseEdges = Standard_False;
  myModifFaces.Clear();
  myEdgeMap.Clear();
  TopTools_DataMapOfIntegerListOfShape aFusedEdges;

  FE.Edges(aFusedEdges);
  Standard_Integer nle = aFusedEdges.Extent();
  if (nle != 0) {
    FE.Perform();
    myShape = FE.Shape();

    TopTools_DataMapOfIntegerShape aResultEdges;

    FE.ResultEdges(aResultEdges);
    FE.Faces(myModifFaces);
    myFuseEdges = Standard_True;
    
    Standard_Integer i;
    for(i = 1; i <= nle; ++i) {
      const TopoDS_Shape& aNewE = aResultEdges(i);
      for (auto S : aFusedEdges(i)) {
        myEdgeMap.Bind(S, aNewE);
      }
    }
  }
}

//=======================================================================
//function : RefinedList
//purpose  : 
//=======================================================================
const TopTools_ListOfShape& 
  BRepAlgoAPI_BooleanOperation::RefinedList(const TopTools_ListOfShape& theL) 
{
  myGenerated.clear();
  TopTools_MapOfShape aMap;

  for (auto anS : theL) {

    if(anS.ShapeType() == TopAbs_EDGE) {
      if(myEdgeMap.IsBound(anS)) {
        const TopoDS_Shape& aNewEdge = myEdgeMap.Find(anS);
        if(aMap.Add(aNewEdge)) {
          myGenerated.push_back(aNewEdge);
        }
      }
      else {
        myGenerated.push_back(anS);
      }
    }
    else if (anS.ShapeType() == TopAbs_FACE) {
      if(myModifFaces.IsBound(anS)) {
        myGenerated.push_back(myModifFaces.Find(anS));
      }
      else {
        myGenerated.push_back(anS);
      }
    }
    else {
      myGenerated.push_back(anS);
    }
  }

  return myGenerated;

}
