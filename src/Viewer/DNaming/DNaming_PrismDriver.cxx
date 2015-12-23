// Created on: 2009-06-16
// Created by: Sergey ZARITCHNY
// Copyright (c) 2009-2014 OPEN CASCADE SAS
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
#include <OCAF/TDF/TDF_Label.hxx>
#include <ModelingAlgorithms/BRepPrimAPI/BRepPrimAPI_MakePrism.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <DNaming_PrismDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(DNaming_PrismDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TFunction_Driver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(DNaming_PrismDriver)
IMPLEMENT_DOWNCAST(DNaming_PrismDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(DNaming_PrismDriver)
// OCC
#include <Mathematics/Primitives/gp_Dir.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Primitives/gp_Ax2.hxx>
#include <Geometry/Geom/Geom_Line.hxx>

#include <ModelingData/BRep/BRep_Tool.hxx>
#include <ModelingAlgorithms/BRepGProp/BRepGProp.hxx>
#include <ModelingAlgorithms/BRepCheck/BRepCheck_Shell.hxx>
#include <ModelingAlgorithms/BRepCheck/BRepCheck_Analyzer.hxx>
#include <ModelingAlgorithms/BRepPrimAPI/BRepPrimAPI_MakePrism.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <ModelingData/TopoDS/TopoDS_Wire.hxx>
#include <Mathematics/TopLoc/TopLoc_Location.hxx>
#include <ModelingData/TopExp/TopExp_Explorer.hxx>
#include <Geometry/GProp/GProp_GProps.hxx>
#include <Precision.hxx>
#include <ModelingAlgorithms/BRepCheck/BRepCheck_Wire.hxx>
#include <ModelingAlgorithms/BRepPrimAPI/BRepPrimAPI_MakeCylinder.hxx>
#include <ModelingAlgorithms/BRepCheck/BRepCheck_Analyzer.hxx>
#include <Mathematics/TopLoc/TopLoc_Location.hxx>
#include <ModelingData/TopoDS/TopoDS_Solid.hxx>
#include <Foundation/Standard/Standard_GUID.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <ModelingAlgorithms/BRepLib/BRepLib_MakeFace.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfShapeShape.hxx>

// OCAF
#include <OCAF/TDataStd/TDataStd_Integer.hxx>
#include <OCAF/TDataStd/TDataStd_Real.hxx>
#include <OCAF/TNaming/TNaming.hxx>
#include <OCAF/TNaming/TNaming_Builder.hxx>
#include <OCAF/TNaming/TNaming_NamedShape.hxx>
#include <OCAF/TFunction/TFunction_Function.hxx>
#include <OCAF/TFunction/TFunction_Logbook.hxx>
#include <OCAF/TDF/TDF_Label.hxx>
#include <OCAF/TDF/TDF_TagSource.hxx>

#include <DNaming.hxx>
#include <ModelDefinitions.hxx>

//=======================================================================
//function : DNaming_PrismDriver
//purpose  : Constructor
//=======================================================================
DNaming_PrismDriver::DNaming_PrismDriver()
{}

//=======================================================================
//function : Validate
//purpose  : Validates labels of a function in <theLog>.
//=======================================================================
void DNaming_PrismDriver::Validate(TFunction_Logbook&) const
{}

//=======================================================================
//function : MustExecute
//purpose  : Analyses in <theLog> if the loaded function must be executed
//=======================================================================
Standard_Boolean DNaming_PrismDriver::MustExecute(const TFunction_Logbook&) const
{
  return Standard_True;
}

#ifdef OCCT_DEBUG
#include <ModelingData/BRepTools/BRepTools.hxx>
static void Write(const TopoDS_Shape& shape,
		      const Standard_CString filename) 
{
  ofstream save;
  save.open(filename);
  save << "DBRep_DrawableShape" << endl << endl;
  if(!shape.IsNull()) BRepTools::Write(shape, save);
  save.close();
}
#endif
//=======================================================================
//function : Execute
//purpose  : Executes the function 
//=======================================================================
Standard_Integer DNaming_PrismDriver::Execute(TFunction_Logbook& theLog) const {
  Handle(TFunction_Function) aFunction;
  Label().FindAttribute(TFunction_Function::GetID(), aFunction);
  if(aFunction.IsNull()) return -1;

  // Save location
  Handle(TNaming_NamedShape) aPrevPrism = DNaming::GetFunctionResult(aFunction);
  TopLoc_Location aLocation;
  if (!aPrevPrism.IsNull() && !aPrevPrism->IsEmpty()) {
    aLocation = aPrevPrism->Get().Location();
  }

  //Basis for IPrism
  Handle(TDataStd_UAttribute) aBasObject = DNaming::GetObjectArg(aFunction,PRISM_BASIS);
  Handle(TNaming_NamedShape) aBasisNS = DNaming::GetObjectValue(aBasObject);
  if(aBasisNS.IsNull() || aBasisNS->IsEmpty()) {
    aFunction->SetFailure(WRONG_ARGUMENT);
    return -1;
  }
 
  const TopoDS_Shape& aBasis = aBasisNS->Get(); 
  TopoDS_Shape aBASIS;
  if(aBasis.ShapeType() == TopAbs_WIRE) {
    Handle(BRepCheck_Wire) aCheck = new BRepCheck_Wire(TopoDS::Wire(aBasis));
    if(aCheck->Closed(Standard_True) == BRepCheck_NoError) {
      BRepLib_MakeFace aMaker (TopoDS::Wire(aBasis), Standard_True); //Makes planar face
      if(aMaker.IsDone()) 
	aBASIS = aMaker.Face();//aMaker.Face();           
    }
  } else if(aBasis.ShapeType() == TopAbs_FACE)
    aBASIS = aBasis;
  if(aBASIS.IsNull()) {
    aFunction->SetFailure(WRONG_ARGUMENT);
    return -1;
  }


  Handle(TNaming_NamedShape) aContextOfBasis;
  Standard_Boolean anIsAttachment = Standard_False;
  if(DNaming::IsAttachment(aBasObject)) {
    aContextOfBasis = DNaming::GetAttachmentsContext(aBasObject); // a Context of Prism basis
    if(aContextOfBasis.IsNull() || aContextOfBasis->IsEmpty()) {
      aFunction->SetFailure(WRONG_ARGUMENT);
      return -1;
    }
    anIsAttachment = Standard_True;
  }

// Height
  Standard_Real aHeight = DNaming::GetReal(aFunction,PRISM_HEIGHT)->Get();
  if(aHeight <= Precision::Confusion()) {
    aFunction->SetFailure(WRONG_ARGUMENT);
    return -1;
  }

  // Direction
  gp_Ax1 anAxis;  
  DNaming::ComputeSweepDir(aBasis, anAxis);
    
  // Reverse
  Standard_Integer aRev = DNaming::GetInteger(aFunction,PRISM_DIR)->Get();
  if(aRev) anAxis.Reverse();

  // Calculate Vec - direction of extrusion
  gp_Vec aVEC(anAxis.Direction());
  aVEC = aVEC*aHeight;
  
  BRepPrimAPI_MakePrism aMakePrism(aBASIS, aVEC, Standard_True);  
  aMakePrism.Build();
  if (!aMakePrism.IsDone()) {
    aFunction->SetFailure(ALGO_FAILED);
    return -1;
  }
  
  const TopoDS_Shape& aResult = aMakePrism.Shape();
  BRepCheck_Analyzer aCheck(aResult);
  if (!aCheck.IsValid(aResult)) {
    aFunction->SetFailure(RESULT_NOT_VALID);
#ifdef OCCT_DEBUG
    Standard_CString aFileName = "PrismResult.brep";
    Write(aResult, aFileName);
#endif
    return -1;
  }
  Standard_Boolean aVol = Standard_False;

  if(aResult.ShapeType() == TopAbs_SOLID) aVol = Standard_True;
  else if(aResult.ShapeType() == TopAbs_SHELL) {
    Handle(BRepCheck_Shell) aCheck = new BRepCheck_Shell(TopoDS::Shell(aResult));
    if(aCheck->Closed() == BRepCheck_NoError) 
      aVol = Standard_True;
  } 

  if(aVol) {
    GProp_GProps aGProp;
    BRepGProp::VolumeProperties(aResult, aGProp);
    if(aGProp.Mass() <= Precision::Confusion()) {
      aFunction->SetFailure(RESULT_NOT_VALID);
      return -1;
    }
  }

  // Naming  
  if(anIsAttachment)
    LoadNamingDS(RESPOSITION(aFunction), aMakePrism, aBASIS, aContextOfBasis->Get());
  else
    LoadNamingDS(RESPOSITION(aFunction), aMakePrism, aBASIS, aBASIS);

  // restore location
  if(!aLocation.IsIdentity()) 
    TNaming::Displace(RESPOSITION(aFunction), aLocation, Standard_True);

  theLog.SetValid(RESPOSITION(aFunction),Standard_True);  
  aFunction->SetFailure(DONE);
  return 0;
}

//=======================================================================
//function : LoadAndName
//purpose  : 
//=======================================================================
void DNaming_PrismDriver::LoadNamingDS (const TDF_Label& theResultLabel, 
					   BRepPrimAPI_MakePrism& MS,
					   const TopoDS_Shape& Basis,
					   const TopoDS_Shape& Context
					   ) const 
{

  TopTools_DataMapOfShapeShape SubShapes;
  for (TopExp_Explorer Exp(MS.Shape(),TopAbs_FACE); Exp.More(); Exp.Next()) {
    SubShapes.Bind(Exp.Current(),Exp.Current());
  }
  
  Handle(TDF_TagSource) Tagger = TDF_TagSource::Set(theResultLabel);
  if (Tagger.IsNull()) return;
  Tagger->Set(0);

  TNaming_Builder Builder (theResultLabel);
  if(Basis.IsEqual(Context))
    Builder.Generated(MS.Shape());
  else
    Builder.Generated(Context, MS.Shape());
 
  //Insert lateral face : Face from Edge
  TNaming_Builder  LateralFaceBuilder(theResultLabel.NewChild());   
  DNaming::LoadAndOrientGeneratedShapes(MS, Basis, TopAbs_EDGE, LateralFaceBuilder, SubShapes);

  Standard_Boolean makeTopBottom = Standard_True;
  if (Basis.ShapeType() == TopAbs_COMPOUND) {
    TopoDS_Iterator itr(Basis);
    if (itr.More() && itr.Value().ShapeType() == TopAbs_WIRE) makeTopBottom = Standard_False;
  } else if (Basis.ShapeType() == TopAbs_WIRE) {
    makeTopBottom = Standard_False;
  }
  if (makeTopBottom) {
    //Insert bottom face
    TopoDS_Shape BottomFace = MS.FirstShape();
    if (!BottomFace.IsNull()) {
      if (BottomFace.ShapeType() != TopAbs_COMPOUND) {
	TNaming_Builder BottomBuilder(theResultLabel.NewChild());  //2
	if (SubShapes.IsBound(BottomFace)) {
	  BottomFace = SubShapes(BottomFace);
	}
	BottomBuilder.Generated(BottomFace);
      } else {
	TopoDS_Iterator itr(BottomFace);
	for (; itr.More(); itr.Next()) {
	  TNaming_Builder BottomBuilder(theResultLabel.NewChild());  
	  BottomBuilder.Generated(itr.Value());
	}
      }
    }
    
    //Insert top face
    TopoDS_Shape TopFace = MS.LastShape();
    if (!TopFace.IsNull()) {
      if (TopFace.ShapeType() != TopAbs_COMPOUND) {
	TNaming_Builder TopBuilder(theResultLabel.NewChild()); //3
	if (SubShapes.IsBound(TopFace)) {
	  TopFace = SubShapes(TopFace);
	}
	TopBuilder.Generated(TopFace);
      } else {
	TopoDS_Iterator itr(TopFace);
	for (; itr.More(); itr.Next()) {
	  TNaming_Builder TopBuilder(theResultLabel.NewChild());  
	  TopBuilder.Generated(itr.Value());
	}
      }
    }
  }   
}
