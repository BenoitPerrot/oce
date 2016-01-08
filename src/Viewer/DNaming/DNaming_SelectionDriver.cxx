// Created on: 2009-05-05
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
#include <Viewer/DNaming/DNaming_SelectionDriver.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(DNaming_SelectionDriver)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TFunction_Driver),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(DNaming_SelectionDriver)
IMPLEMENT_DOWNCAST(DNaming_SelectionDriver,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(DNaming_SelectionDriver)
#include <ModelingData/TopAbs/TopAbs.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <OCAF/TDF/TDF_Label.hxx>
#include <OCAF/TDF/TDF_LabelMap.hxx>
#include <OCAF/TFunction/TFunction_Logbook.hxx>
#include <OCAF/TNaming/TNaming_NamedShape.hxx>
#include <OCAF/TNaming/TNaming_Builder.hxx>
#include <OCAF/TNaming/TNaming_Selector.hxx>
#include <OCAF/TNaming/TNaming_Tool.hxx>
#include <OCAF/TFunction/TFunction_Function.hxx>
#include <OCAF/TDataStd/TDataStd_Integer.hxx>
#include <Viewer/DNaming/ModelDefinitions.hxx>

//#define SEL_DEB 1
#ifdef OCCT_DEBUG
#include <OCAF/TDF/TDF_Tool.hxx>
#include <OCAF/TDF/TDF_MapIteratorOfLabelMap.hxx>
#endif
//=======================================================================
//function : DNaming_SelectionDriver
//purpose  : Constructor
//=======================================================================
DNaming_SelectionDriver::DNaming_SelectionDriver()
{}

//=======================================================================
//function : Validate
//purpose  : Validates labels of a function in <theLog>.
//=======================================================================
void DNaming_SelectionDriver::Validate(TFunction_Logbook& ) const
{}

//=======================================================================
//function : MustExecute
//purpose  : Analyse in <theLog> if the loaded function must be
//           executed (i.e.arguments are modified) or not.
//=======================================================================
Standard_Boolean DNaming_SelectionDriver::MustExecute(const TFunction_Logbook& ) const {
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
//purpose  : Execute the function and push in <theLog> the impacted
//           labels (see method SetImpacted).
//=======================================================================
#include <OCAF/TNaming/TNaming_ListOfNamedShape.hxx>
#include <OCAF/TDF/TDF_AttributeMap.hxx>
#include <OCAF/TDF/TDF_IDFilter.hxx>
#include <OCAF/TDF/TDF_Tool.hxx>
#include <OCAF/TDF/TDF_MapIteratorOfAttributeMap.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <OCAF/TDF/TDF_ChildIterator.hxx>

Standard_Integer DNaming_SelectionDriver::Execute(TFunction_Logbook& theLog) const
{
  Handle(TFunction_Function) aFunction;
  Label().FindAttribute(TFunction_Function::GetID(),aFunction);
  if(aFunction.IsNull()) return -1;


  TDF_Label aRLabel = RESPOSITION(aFunction);
  if(aRLabel.IsNull()) return -1;

  Standard_Boolean aIsWire = Standard_False;
  TopAbs_ShapeEnum aPrevShapeType = TopAbs_SHAPE;
  Handle(TNaming_NamedShape) aNShape; 
  if(aRLabel.FindAttribute(TNaming_NamedShape::GetID(),aNShape)) {
    if(!aNShape.IsNull() && !aNShape->IsEmpty()) {
      aPrevShapeType = aNShape->Get().ShapeType();
      if (aPrevShapeType == TopAbs_WIRE) aIsWire = Standard_True;      
    }
  }

  TNaming_Selector aSelector(aRLabel);

  TDF_LabelMap aMap;
  aMap = theLog.ChangeValid();
#ifdef OCCT_DEBUG
  cout <<"#E_DNaming_SelectionDriver:: Valid Label Map:"<<endl;
  TDF_MapIteratorOfLabelMap anItr(aMap);
  for (; anItr.More(); anItr.Next()) {
    const TDF_Label& aLabel = anItr.Key();
    TCollection_AsciiString anEntry;
    TDF_Tool::Entry(aLabel, anEntry);
    cout << "\tLabel = " << anEntry << endl;
  }
#endif
//***
//  TDF_IDFilter aFilterForReferers;
//  aFilterForReferers.Keep(TNaming_NamedShape::GetID());
//  TDF_IDFilter aFilterForReferences;
//  aFilterForReferences.Keep(TNaming_NamedShape::GetID());
//   TDF_LabelMap aMap1;
//  TDF_Tool::OutReferences(aLabel, /*aFilterForReferers, aFilterForReferences, */outRefs);
//***

  if(aSelector.Solve(aMap)) {
    theLog.SetValid(aRLabel);    
    Handle(TNaming_NamedShape) aNS;
    if(!aRLabel.FindAttribute(TNaming_NamedShape::GetID(),aNS)) {
      cout <<"%%%WARNING: DNaming_SelectionDriver::NamedShape is not found"<<endl;
    }
    else {
      if(aNS.IsNull()) {
	cout << "%%%WARNING: DNaming_SelectionDriver::NamedShape is NULL" <<endl;
      } else 
	if(aNS->IsEmpty()) {
	  cout << "%%%WARNING: DNaming_SelectionDriver::NamedShape is EMPTY on Label = ";
	  aNS->Label().EntryDump(cout); cout << endl;
	  
	} else {
#ifdef OCCT_DEBUG
	  Write(aNS->Get(), "Selection_Result.brep");
	  Handle(TopoDS_TShape) aTS = aNS->Get().TShape();
	  cout << "TShape = " << (Standard_Address)aTS <<endl;
#endif 
	  if(aIsWire && aNS->Get().ShapeType()== TopAbs_COMPOUND) {
	    TopoDS_Shape aWireShape;
	    TNaming_Tool::FindShape(aMap, aMap, aNS, aWireShape);
	    TNaming_Builder aBuilder(aRLabel);
	    aBuilder.Select(aWireShape, aWireShape);
	    aFunction->SetFailure(DONE);
	  } else
	    if(aPrevShapeType == aNS->Get().ShapeType()) {
	      aFunction->SetFailure(DONE);
	    } else {
#ifdef OCCT_DEBUG	    
	      cout <<"%%%WARNING: DNaming_SelectionDriver::Execute: The Shape after solving changed type = "<<aNS->Get().ShapeType()<< endl;
#endif
	      aFunction->SetFailure(DONE);
	    }
	}
    }
  }
  else {
    aFunction->SetFailure(NOTDONE);
    cout << "%%%WARNING: DNaming_SelectionDriver::Execute: Selection is Not solved !!!" << endl;
    return 1;
  }
  return 0;
}
