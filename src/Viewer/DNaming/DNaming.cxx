// Created on: 1997-01-09
// Created by: VAUTHIER Jean-Claude & Fricaud Yves
// Copyright (c) 1997-1999 Matra Datavision
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

#include <OCAF/TDataStd/TDataStd_Real.hxx>
#include <OCAF/TFunction/TFunction_Function.hxx>
#include <OCAF/TDataStd/TDataStd_Integer.hxx>
#include <OCAF/TDataStd/TDataStd_Name.hxx>
#include <OCAF/TNaming/TNaming_NamedShape.hxx>
#include <Mathematics/Primitives/gp_Ax1.hxx>
#include <OCAF/TDataStd/TDataStd_UAttribute.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingAlgorithms/BRepBuilderAPI/BRepBuilderAPI_MakeShape.hxx>
#include <OCAF/TNaming/TNaming_Builder.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfShapeShape.hxx>
#include <OCAF/TDF/TDF_Label.hxx>
#include <ModelingAlgorithms/BRepAlgoAPI/BRepAlgoAPI_BooleanOperation.hxx>
#include <OCAF/TDF/TDF_Data.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Viewer/DNaming/DNaming.hxx>

#include <Viewer/DDF/DDF.hxx>
#include <Viewer/DDF/DDF_Data.hxx>
#include <Viewer/Draw/Draw.hxx>
#include <Foundation/TColStd/TColStd_HArray1OfInteger.hxx>
#include <Foundation/TColStd/TColStd_ListIteratorOfListOfInteger.hxx>
#include <Foundation/TColStd/TColStd_ListOfInteger.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <OCAF/TDF/TDF_ChildIterator.hxx>
#include <OCAF/TDF/TDF_LabelList.hxx>
#include <OCAF/TDF/TDF_LabelMap.hxx>
#include <OCAF/TDF/TDF_Tool.hxx>
#include <OCAF/TDF/TDF_TagSource.hxx>
#include <OCAF/TNaming/TNaming_Iterator.hxx>
#include <OCAF/TNaming/TNaming_Tool.hxx>
#include <OCAF/TNaming/TNaming_NamedShape.hxx>
#include <OCAF/TNaming/TNaming_Builder.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_ListIteratorOfListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_IndexedMapOfShape.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfShapeShape.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfShapeListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_DataMapIteratorOfDataMapOfShapeListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_DataMapIteratorOfDataMapOfShapeShape.hxx>
#include <ModelingData/TopTools/TopTools_MapOfShape.hxx>
#include <ModelingData/TopTools/TopTools_MapIteratorOfMapOfShape.hxx>
#include <ModelingData/TopExp/TopExp_Explorer.hxx>
#include <ModelingData/TopExp/TopExp.hxx>
#include <ModelingData/TopoDS/TopoDS.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingData/BRepTools/BRepTools.hxx>
#include <OCAF/TDF/TDF_Reference.hxx>
#include <OCAF/TDataStd/TDataStd_TreeNode.hxx>
#include <ModelingAlgorithms/BRepAlgoAPI/BRepAlgoAPI_BooleanOperation.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>
#include <Mathematics/Primitives/gp_Ax1.hxx>
#include <Mathematics/Primitives/gp_Pln.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <Geometry/Geom/Geom_Curve.hxx>
#include <ModelingData/BRep/BRep_Tool.hxx>
#include <Geometry/Geom/Geom_Line.hxx>
#include <Geometry/Geom/Geom_Plane.hxx>
#include <Geometry/Geom/Geom_Surface.hxx>
#include <ModelingAlgorithms/BRepLib/BRepLib_FindSurface.hxx>
#include <Geometry/Geom/Geom_RectangularTrimmedSurface.hxx>
#include <Viewer/DNaming/ModelDefinitions.hxx>

//=======================================================================
//function : DNaming_DFandUS
//purpose  : 
//=======================================================================

// Standard_Boolean DNaming_DFandUS(char* a,
// 				 Handle(TDF_Data)&           ND,
// 				 Handle(TNaming_UsedShapes)& US) 
// {
//   Handle(DDF_Data) DND = Handle(DDF_Data)::DownCast (Draw::Get(a));
//   if (DND.IsNull ()) return 0;
//   ND = DND->DataFramework ();
//   ND->Root().FindAttribute(TNaming_UsedShapes::GetID(),US);
//   return 1;
// }

//=======================================================================
//function : GetShape
//purpose  : 
//=======================================================================

void DNaming::GetShape (const Standard_CString      LabelName,
			const Handle(TDF_Data)&     DF,
			TopTools_ListOfShape&       L)
{
  L.clear();
  TDF_Label Label;
  Standard_Boolean Found = DDF::AddLabel (DF, LabelName, Label);
  if (Found) {
    TNaming_Iterator it (Label, DF->Transaction ());
    for (; it.More(); it.Next()) {
      L.push_back(it.NewShape());
    }
  }
}

//=======================================================================
//function : BuildMap
//purpose  : 
//=======================================================================

void DNaming_BuildMap(TDF_LabelMap& Updated, 
		      const TDF_Label& Lab)
{
  TDF_ChildIterator it(Lab);
  for (; it.More(); it.Next()) {
    Updated.Add(it.Value());
    DNaming_BuildMap(Updated,it.Value());
  }
}

//=======================================================================
//function : CurrentShape
//purpose  : 
//=======================================================================

TopoDS_Shape DNaming::CurrentShape (const Standard_CString  LabelName,
				    const Handle(TDF_Data)& DF)
{
  TopoDS_Shape S;
  TDF_Label Label; 
  Standard_Boolean Found =  DDF::AddLabel (DF, LabelName, Label);
  if (!Found) {
#ifdef OCCT_DEBUG
    cout <<"no labels"<<endl;
#endif
    return S;
  }
  if (Found) { 
    Handle(TNaming_NamedShape)  NS;
    Label.FindAttribute(TNaming_NamedShape::GetID(),NS);
    S =  TNaming_Tool::CurrentShape(NS);
    if (S.IsNull())
#ifdef OCCT_DEBUG
      cout <<"current shape from "<< LabelName <<" is deleted"<<endl;
#endif
    return S;
  }
  return S;
}


//=======================================================================
//function : GetEntry
//purpose  : 
//=======================================================================

TCollection_AsciiString DNaming::GetEntry (const TopoDS_Shape&         Shape,
					   const Handle(TDF_Data)&     DF,
					   Standard_Integer&           Status)
{
  Status = 0;
  //Handle(TNaming_UsedShapes) US;
  //DF->Root().FindAttribute(TNaming_UsedShapes::GetID(),US);

  if (!TNaming_Tool::HasLabel (DF->Root(), Shape)) {
    return TCollection_AsciiString ();
  }
  Standard_Integer Transdef;
  TDF_Label Lab = TNaming_Tool::Label (DF->Root(), Shape,Transdef);
  TCollection_AsciiString entry; TDF_Tool::Entry(Lab,entry);
  //Update Status;
  TNaming_Iterator it(Lab,DF->Transaction());
  for (; it.More(); it.Next()) {
    Status++;
    if (Status == 2) break;
  }
  return entry;
}

//=======================================================================
//function : AllCommands
//purpose  : 
//=======================================================================

void  DNaming::AllCommands(Draw_Interpretor& theCommands)
{
  static Standard_Boolean done = Standard_False;
  if (done) return;
  done = Standard_True;

  DNaming::BasicCommands     (theCommands); 
  DNaming::ToolsCommands     (theCommands);  
  DNaming::SelectionCommands (theCommands);
  DNaming::ModelingCommands  (theCommands);
  // define the TCL variable Draw_NamingData
  const char* com = "set Draw_NamingData 1";
  theCommands.Eval(com);
}

//=======================================================================
//=======================================================================
//function : LoadC0Vertices
//purpose  : Method for internal use. It is used by Load() method.
//=======================================================================

static void LoadC0Vertices(const TopoDS_Shape& S,
			   const Handle(TDF_TagSource)& Tagger)
{
  TopTools_DataMapOfShapeListOfShape vertexNaborFaces;
  TopTools_ListOfShape empty;
  TopExp_Explorer explF(S, TopAbs_FACE);
  for (; explF.More(); explF.Next()) {
    const TopoDS_Shape& aFace = explF.Current();
    TopExp_Explorer explV(aFace, TopAbs_VERTEX);
    for (; explV.More(); explV.Next()) {
      const TopoDS_Shape& aVertex = explV.Current();
      if (!vertexNaborFaces.IsBound(aVertex)) vertexNaborFaces.Bind(aVertex, empty);
      Standard_Boolean faceIsNew = Standard_True;
#warning find
      for (auto X : vertexNaborFaces.Find(aVertex)) {
	if (X.IsSame(aFace)) {
	  faceIsNew = Standard_False;
	  break;
	}
      }
      if (faceIsNew) {
	vertexNaborFaces.ChangeFind(aVertex).push_back(aFace);
      }
    }
  }

  TopTools_DataMapIteratorOfDataMapOfShapeListOfShape itr(vertexNaborFaces);
  for (; itr.More(); itr.Next()) {
    const TopTools_ListOfShape& naborFaces = itr.Value();
    if (naborFaces.size() < 3) {
      TNaming_Builder bC0Vertex(Tagger->NewChild());
      bC0Vertex.Generated(itr.Key());
    }
  }
}

//=======================================================================
//function : LoadC0Edges
//purpose  : Method for internal use. It is used by Load() method.
//=======================================================================

static void LoadC0Edges(const TopoDS_Shape& S,
			const Handle(TDF_TagSource)& Tagger)
{
  TopTools_DataMapOfShapeListOfShape edgeNaborFaces;
  TopTools_ListOfShape empty;
  TopExp_Explorer explF(S, TopAbs_FACE);
  for (; explF.More(); explF.Next()) {
    const TopoDS_Shape& aFace = explF.Current();
    TopExp_Explorer explV(aFace, TopAbs_EDGE);
    for (; explV.More(); explV.Next()) {
      const TopoDS_Shape& anEdge = explV.Current();
      if (!edgeNaborFaces.IsBound(anEdge)) edgeNaborFaces.Bind(anEdge, empty);
#warning find
      Standard_Boolean faceIsNew = Standard_True;
      for (auto X : edgeNaborFaces.Find(anEdge)) {
	if (X.IsSame(aFace)) {
	  faceIsNew = Standard_False;
	  break;
	}
      }
      if (faceIsNew) {
	edgeNaborFaces.ChangeFind(anEdge).push_back(aFace);
      }
    }
  }
  
  TopTools_MapOfShape anEdgesToDelete;
  TopExp_Explorer anEx(S,TopAbs_EDGE); // mpv: new explorer iterator becouse we need keep edges order
  for(;anEx.More();anEx.Next()) {
    Standard_Boolean aC0 = Standard_False;
    TopoDS_Shape anEdge1 = anEx.Current();
    if (edgeNaborFaces.IsBound(anEdge1)) {
      const TopTools_ListOfShape& aList1 = edgeNaborFaces.Find(anEdge1);
      if (aList1.size()<2) continue; // mpv (06.09.2002): these edges already was loaded
      TopTools_DataMapIteratorOfDataMapOfShapeListOfShape itr(edgeNaborFaces);
      for (; itr.More(); itr.Next()) {
	TopoDS_Shape anEdge2 = itr.Key();
	if(anEdgesToDelete.Contains(anEdge2)) continue;
	if (anEdge1.IsSame(anEdge2)) continue;
	const TopTools_ListOfShape& aList2 = itr.Value();
	// compare lists of the neighbour faces of edge1 and edge2
	if (aList1.size() == aList2.size()) {
#warning multi_count?
	  Standard_Integer aMatches = 0;
	  for (auto S1 : aList1)
	    for (auto S2 : aList2)
	      if (S1.IsSame(S2))
		aMatches++;
	  if (aMatches == aList1.size()) {
	    aC0=Standard_True;
	    TNaming_Builder bC0Edge(Tagger->NewChild());
	    bC0Edge.Generated(anEdge2);
	    //edgeNaborFaces.UnBind(anEdge2);
	    anEdgesToDelete.Add(anEdge2);
	  }
	}
      }
      //VUN (10/2/2005) avoid UnBind during iterating -^
      TopTools_MapIteratorOfMapOfShape itDelete(anEdgesToDelete);
      for(;itDelete.More();itDelete.Next()) {
	edgeNaborFaces.UnBind(itDelete.Key());
      }
      edgeNaborFaces.UnBind(anEdge1);
    }
    if (aC0) {
      TNaming_Builder bC0Edge(Tagger->NewChild());
      bC0Edge.Generated(anEdge1);
    }
  }
}
//
//=======================================================================
//function : GetDangleShapes
//purpose  : Returns dangle sub shapes Generator - Dangle.
//=======================================================================

static Standard_Boolean GetDangleShapes(const TopoDS_Shape& ShapeIn,
				 const TopAbs_ShapeEnum GeneratedFrom,
				 TopTools_DataMapOfShapeShape& Dangles) 
{
  Dangles.Clear();
  TopTools_IndexedDataMapOfShapeListOfShape subShapeAndAncestors;
  TopAbs_ShapeEnum GeneratedTo;
  if (GeneratedFrom == TopAbs_FACE) GeneratedTo = TopAbs_EDGE;
  else if (GeneratedFrom == TopAbs_EDGE) GeneratedTo = TopAbs_VERTEX;
  else return Standard_False;
  TopExp::MapShapesAndAncestors(ShapeIn, GeneratedTo, GeneratedFrom, subShapeAndAncestors);
  for (Standard_Integer i = 1; i <= subShapeAndAncestors.Extent(); i++) {
    const TopoDS_Shape& mayBeDangle = subShapeAndAncestors.FindKey(i);
    const TopTools_ListOfShape& ancestors = subShapeAndAncestors.FindFromIndex(i);
    if (ancestors.size() == 1) Dangles.Bind(ancestors.front(), mayBeDangle);
  }
  return !Dangles.IsEmpty();
}

//=======================================================================
//function : LoadGeneratedDangleShapes
//purpose  : 
//=======================================================================

static void LoadGeneratedDangleShapes(const TopoDS_Shape&          ShapeIn,
				      const TopAbs_ShapeEnum       GeneratedFrom,
				      TNaming_Builder&             Builder)
{
  TopTools_DataMapOfShapeShape dangles;
  if (!GetDangleShapes(ShapeIn, GeneratedFrom, dangles)) return;
  TopTools_DataMapIteratorOfDataMapOfShapeShape itr(dangles);
  for (; itr.More(); itr.Next()) Builder.Generated(itr.Key(), itr.Value());
}

//=======================================================================
//function : LoadNextLevels
//purpose  : Method for internal use. Is used by LoadFirstLevel()
//=======================================================================

static void LoadNextLevels(const TopoDS_Shape& S,
			   const Handle(TDF_TagSource)& Tagger)
{
  
  if (S.ShapeType() == TopAbs_SOLID) {		    
    TopExp_Explorer expl(S, TopAbs_FACE);
    for (; expl.More(); expl.Next()) {
      TNaming_Builder bFace(Tagger->NewChild());
      bFace.Generated(expl.Current());
    }
  } else if (S.ShapeType() == TopAbs_SHELL || S.ShapeType() == TopAbs_FACE) {
    // load faces and all the free edges
    TopTools_IndexedMapOfShape Faces;
    TopExp::MapShapes(S, TopAbs_FACE, Faces);
    if (Faces.Extent() > 1 || (S.ShapeType() == TopAbs_SHELL && Faces.Extent() == 1)) {
      TopExp_Explorer expl(S, TopAbs_FACE);
      for (; expl.More(); expl.Next()) {
	TNaming_Builder bFace(Tagger->NewChild());
	bFace.Generated(expl.Current());
      }
    }
    TopTools_IndexedDataMapOfShapeListOfShape anEdgeAndNeighbourFaces;
    TopExp::MapShapesAndAncestors(S, TopAbs_EDGE, TopAbs_FACE, anEdgeAndNeighbourFaces);
    for (Standard_Integer i = 1; i <= anEdgeAndNeighbourFaces.Extent(); i++) {
      const TopTools_ListOfShape& aLL = anEdgeAndNeighbourFaces.FindFromIndex(i);
      if (aLL.size() < 2) {
	TNaming_Builder bFreeEdges(Tagger->NewChild());
	bFreeEdges.Generated(anEdgeAndNeighbourFaces.FindKey(i));
      } else {
	const TopoDS_Face& aFace = TopoDS::Face(aLL.front());
	if(aFace.IsEqual(*next(begin(aLL)))) {
	  TNaming_Builder bFreeEdges(Tagger->NewChild());
	  bFreeEdges.Generated(anEdgeAndNeighbourFaces.FindKey(i));
	}
      }
    }
  } else if (S.ShapeType() == TopAbs_WIRE) {
    TopTools_IndexedMapOfShape Edges;
    BRepTools::Map3DEdges(S, Edges);
    if (Edges.Extent() == 1) {
      TNaming_Builder bEdge(Tagger->NewChild());
      bEdge.Generated(Edges.FindKey(1));
      TopExp_Explorer expl(S, TopAbs_VERTEX);
      for (; expl.More(); expl.Next()) {
	TNaming_Builder bVertex(Tagger->NewChild());
	bVertex.Generated(expl.Current());    
      }
    } else {
      TopExp_Explorer expl(S, TopAbs_EDGE); 
      for (; expl.More(); expl.Next()) {
	TNaming_Builder bEdge(Tagger->NewChild());
	bEdge.Generated(expl.Current());
      }   
      // and load generated vertices.
      TopTools_DataMapOfShapeShape generated;
      if (GetDangleShapes(S, TopAbs_EDGE, generated)) {
	TNaming_Builder bGenVertices(Tagger->NewChild());
	LoadGeneratedDangleShapes(S, TopAbs_EDGE, bGenVertices);
      }
    }
  } else if (S.ShapeType() == TopAbs_EDGE) {
    TopExp_Explorer expl(S, TopAbs_VERTEX);
    for (; expl.More(); expl.Next()) {
      TNaming_Builder bVertex(Tagger->NewChild());
      bVertex.Generated(expl.Current());    
    }
  }
}

//=======================================================================
//function : LoadFirstLevel
//purpose  : Method for internal use. Is used by Load()
//=======================================================================

static void LoadFirstLevel(const TopoDS_Shape& S,
			   const Handle(TDF_TagSource)& Tagger)
{
  if (S.ShapeType() == TopAbs_COMPOUND || S.ShapeType() == TopAbs_COMPSOLID) {
    TopoDS_Iterator itr(S);
    for (; itr.More(); itr.Next()) {
      TNaming_Builder bIndependantShapes(Tagger->NewChild());
      bIndependantShapes.Generated(itr.Value());
      if (itr.Value().ShapeType() == TopAbs_COMPOUND || itr.Value().ShapeType() == TopAbs_COMPSOLID) {
	LoadFirstLevel(itr.Value(), Tagger);
      } else LoadNextLevels(itr.Value(), Tagger);
    }
  } else LoadNextLevels(S, Tagger); 
} 

//=======================================================================
//function : Load
//purpose  : To load an ImportShape
//           Use this method for a topological naming of an imported shape
//=======================================================================

void DNaming::LoadImportedShape(const TDF_Label& theResultLabel, 
				const TopoDS_Shape& theShape) {
  theResultLabel.ForgetAllAttributes();
  TNaming_Builder aBuilder(theResultLabel);
  aBuilder.Generated(theShape);

  Handle(TDF_TagSource) aTagger = TDF_TagSource::Set(theResultLabel);
  if (aTagger.IsNull()) return;
  aTagger->Set(0);

  LoadFirstLevel(theShape, aTagger);
  LoadC0Edges(theShape, aTagger);
  LoadC0Vertices(theShape, aTagger);
}  

//=======================================================================
//function : LoadPrime
//purpose  : 
//=======================================================================

void DNaming::LoadPrime(const TDF_Label& theResultLabel, 
			const TopoDS_Shape& theShape) {

  Handle(TDF_TagSource) aTagger = TDF_TagSource::Set(theResultLabel);
  if (aTagger.IsNull()) return;
  aTagger->Set(0);

  LoadFirstLevel(theShape, aTagger);
  LoadC0Edges(theShape,    aTagger);
  LoadC0Vertices(theShape, aTagger);
}  
    
//
//=======================================================================
//function : Real
//purpose  : Gives the access to a real argument
//=======================================================================
Handle(TDataStd_Real) DNaming::GetReal(const Handle(TFunction_Function)& theFunction,
			      const Standard_Integer thePosition) {
  Handle(TDataStd_Real) aReal;
  if (!POSITION(theFunction, thePosition).FindAttribute(TDataStd_Real::GetID(),aReal))
    aReal = TDataStd_Real::Set(POSITION(theFunction,thePosition),0.0);
  return aReal;
}



//=======================================================================
//function : Integer
//purpose  : Give an access to integer attribute
//=======================================================================
Handle(TDataStd_Integer) DNaming::GetInteger(const Handle(TFunction_Function)& theFunction,
				    const Standard_Integer thePosition) {
  Handle(TDataStd_Integer) anInteger;
  if (!POSITION(theFunction,thePosition).FindAttribute(TDataStd_Integer::GetID(),anInteger))
     anInteger = TDataStd_Integer::Set(POSITION(theFunction,thePosition),0);
  return anInteger;
}

//=======================================================================
//function : String
//purpose  : Returns Name attribute
//=======================================================================
Handle(TDataStd_Name) DNaming::GetString(const Handle(TFunction_Function)& theFunction,
						 const Standard_Integer thePosition) {
  Handle(TDataStd_Name) aString;
  if (!POSITION(theFunction,thePosition).FindAttribute(TDataStd_Name::GetID(),aString))
     aString = TDataStd_Name::Set(POSITION(theFunction,thePosition),"");
  return aString;
}

//=======================================================================
//function : GetResult
//purpose  : Returns a result of a function, which is stored on a second label
//=======================================================================
Handle(TNaming_NamedShape) DNaming::GetFunctionResult(const Handle(TFunction_Function)& theFunction)
{
  Handle(TNaming_NamedShape) aNShape;
  theFunction->Label().FindChild(FUNCTION_RESULT_LABEL).FindAttribute(TNaming_NamedShape::GetID(),aNShape);
  return aNShape;
}
//=======================================================================
//function : Object
//purpose  : Returns UAttribute associated with Object
//=======================================================================
Handle(TDataStd_UAttribute) DNaming::GetObjectArg(const Handle(TFunction_Function)& theFunction,
						 const Standard_Integer thePosition) {
  Handle(TDataStd_UAttribute) anObject;
  Handle(TDF_Reference) aReference;
  if (POSITION(theFunction,thePosition).FindAttribute(TDF_Reference::GetID(), aReference))
    aReference->Get().FindAttribute(GEOMOBJECT_GUID, anObject);
  return anObject;
}

//=======================================================================
//function : SetObject
//purpose  : Replace the argument by new value.
//=======================================================================
void DNaming::SetObjectArg (const Handle(TFunction_Function)& theFunction,
			 const Standard_Integer thePosition,
			 const Handle(TDataStd_UAttribute)& theNewValue) 
{  

  if(theNewValue.IsNull()) return;
  TDF_Reference::Set(POSITION(theFunction, thePosition),theNewValue->Label());

}

//=======================================================================
//function : GetObjectValue
//purpose  : Returns NamedShape of the Object
//=======================================================================
Handle(TNaming_NamedShape) DNaming::GetObjectValue(const Handle(TDataStd_UAttribute)& theObject)
{
  Handle(TNaming_NamedShape) aNS;

  if(!theObject.IsNull() && theObject->ID() == GEOMOBJECT_GUID) {
    
    Handle(TDF_Reference) aReference;
    if(theObject->FindAttribute(TDF_Reference::GetID(), aReference))
      aReference->Get().FindAttribute(TNaming_NamedShape::GetID(), aNS);
  }
  return aNS;

/*
  Handle(TFunction_Function) aFun;
  Handle(TDataStd_TreeNode) aNode;
  objLabel.FindAttribute(TDataStd_TreeNode::GetDefaultTreeID(), aNode);
  if(aNode.IsNull()) return aFun;
  if(!aNode->HasFirst()) return aFun;
  else 
    aNode = aNode->First();
  while(!aNode.IsNull()) {      
    if(aNode->FindAttribute(TFunction_Function::GetID(), aFun)) {
      const Standard_GUID& aGUID = aFun->GetDriverGUID();
      if(aGUID == funGUID) break;
      else aFun.Nullify();
    }
    aNode = aNode->Next();
  }
*/

}

//=======================================================================
//function : GetPrevFunction
//purpose  : Returns previus function
//=======================================================================
Handle(TFunction_Function) DNaming::GetPrevFunction(const Handle(TFunction_Function)& theFunction)
{
  Handle(TFunction_Function) aPrevFun;
  if(!theFunction.IsNull() ) {    
    Handle(TDataStd_TreeNode) aNode;
    theFunction->FindAttribute(TDataStd_TreeNode::GetDefaultTreeID(), aNode);
    while(!aNode.IsNull()) {
      if(!aNode->HasPrevious()) return aPrevFun;
      else 
	aNode = aNode->Previous();
      aNode->FindAttribute(TFunction_Function::GetID(),aPrevFun );
      if(!aPrevFun.IsNull())
	break;
    }
  }
  return aPrevFun;
/*
    while(!aNode.IsNull()) {      
    if(aNode->FindAttribute(TFunction_Function::GetID(), aFun)) {
      const Standard_GUID& aGUID = aFun->GetDriverGUID();
      if(aGUID == funGUID) break;
      else aFun.Nullify();
    }
    aNode = aNode->Next();
  }
*/

}

//=======================================================================
//function : GetFirstFunction
//purpose  : Returns first function
//=======================================================================
Handle(TFunction_Function) DNaming::GetFirstFunction(const Handle(TDataStd_UAttribute)& theObject)
{
  Handle(TFunction_Function) aFirstFun;
  if(!theObject.IsNull() ) {    
    Handle(TDataStd_TreeNode) aNode;
    theObject->FindAttribute(TDataStd_TreeNode::GetDefaultTreeID(), aNode);
    if(aNode.IsNull()) return aFirstFun;
    if(!aNode->HasFirst()) return aFirstFun;
    else 
      aNode = aNode->First();

    while(!aNode.IsNull()) {
      aNode->FindAttribute(TFunction_Function::GetID(), aFirstFun );
      if(!aFirstFun.IsNull())
	break;
      aNode = aNode->Next();
    }
  }
  return aFirstFun;
}

//=======================================================================
//function : GetLastFunction
//purpose  : Returns Last function
//=======================================================================
Handle(TFunction_Function) DNaming::GetLastFunction(const Handle(TDataStd_UAttribute)& theObject)
{
  Handle(TFunction_Function) aLastFun;
  if(!theObject.IsNull() ) {    
    Handle(TDataStd_TreeNode) aNode;
    theObject->FindAttribute(TDataStd_TreeNode::GetDefaultTreeID(), aNode);
    if(aNode.IsNull()) return aLastFun;
    if(!aNode->HasFirst()) return aLastFun;
    else 
      aNode = aNode->First();

    while(!aNode.IsNull()) {
      if(aNode->IsAttribute(TFunction_Function::GetID()))
	aNode->FindAttribute(TFunction_Function::GetID(), aLastFun);
      aNode = aNode->Next();
    }
  }
  return aLastFun;
}

//=======================================================================
//function : GetObjectFromFunction
//purpose  : Returns Object
//=======================================================================
Handle(TDataStd_UAttribute) DNaming::GetObjectFromFunction(const Handle(TFunction_Function)& theFunction)
{
  Handle(TDataStd_UAttribute) anObject;
  if(!theFunction.IsNull() ) {    
    Handle(TDataStd_TreeNode) aNode;
    theFunction->FindAttribute(TDataStd_TreeNode::GetDefaultTreeID(), aNode);
    if(!aNode.IsNull()) {
      if(!aNode->HasFather()) return anObject;
      else 
	aNode = aNode->Father();
      aNode->FindAttribute(GEOMOBJECT_GUID,  anObject);
    }
  }
  return anObject;
/*
    while(!aNode.IsNull()) {      
    if(aNode->FindAttribute(TFunction_Function::GetID(), aFun)) {
      const Standard_GUID& aGUID = aFun->GetDriverGUID();
      if(aGUID == funGUID) break;
      else aFun.Nullify();
    }
    aNode = aNode->Next();
  }
*/

}
//=======================================================================
//function : LoadResult
//purpose  : 
//=======================================================================
void DNaming::LoadResult(const TDF_Label& ResultLabel, BRepAlgoAPI_BooleanOperation& MS) 
{
  Handle(TDF_TagSource) Tagger = TDF_TagSource::Set(ResultLabel);
  if (Tagger.IsNull()) return;
  Tagger->Set(0);
  TNaming_Builder Builder (ResultLabel);
  TopoDS_Shape aResult = MS.Shape();
  if (aResult.ShapeType() == TopAbs_COMPOUND) {
    Standard_Integer nbSubResults = 0;
    TopoDS_Iterator itr(aResult);
    for (; itr.More(); itr.Next()) nbSubResults++;
    if (nbSubResults == 1) {
      itr.Initialize(aResult);
      if (itr.More()) aResult = itr.Value();
    }
  }
  if (MS.Shape1().IsNull()) Builder.Generated(aResult);
  else {
    Builder.Modify(MS.Shape1(), aResult);
  }
}
//=======================================================================
//function : LoadAndOrientModifiedShapes
//purpose  : 
//=======================================================================
void DNaming::LoadAndOrientModifiedShapes (BRepBuilderAPI_MakeShape&    MS,
					   const TopoDS_Shape&     ShapeIn,
					   const TopAbs_ShapeEnum  KindOfShape,
					   TNaming_Builder&        Builder,
					   const TopTools_DataMapOfShapeShape& SubShapes)
{ 
  TopTools_MapOfShape View;
  TopExp_Explorer ShapeExplorer (ShapeIn, KindOfShape);
  TopTools_ListOfShape Shapes;
  for (; ShapeExplorer.More(); ShapeExplorer.Next ()) {
    const TopoDS_Shape& Root = ShapeExplorer.Current ();
    if (!View.Add(Root)) continue;
    const TopTools_ListOfShape& Shapes = MS.Modified (Root);
    for (TopoDS_Shape newShape : Shapes) {
      if (SubShapes.IsBound(newShape)) {
	newShape.Orientation((SubShapes(newShape)).Orientation());
      }
      if (!Root.IsSame (newShape)) Builder.Modify (Root, newShape );      
    }
  }
}
//=======================================================================
//function : LoadDeletedShapes
//purpose  : 
//=======================================================================
void DNaming::LoadDeletedShapes (BRepBuilderAPI_MakeShape& MS,
			       const TopoDS_Shape&     ShapeIn,
			       const TopAbs_ShapeEnum  KindOfShape,
			       TNaming_Builder&        Builder)
{  
  TopTools_MapOfShape View;
  TopExp_Explorer ShapeExplorer (ShapeIn, KindOfShape);
  for (; ShapeExplorer.More(); ShapeExplorer.Next ()) {
    const TopoDS_Shape& Root = ShapeExplorer.Current ();
    if (!View.Add(Root)) continue;
    if (MS.IsDeleted (Root)) {
      Builder.Delete (Root);      
    }
  }
}

//=======================================================================
//function : LoadAndOrientGeneratedShapes
//purpose  : 
//=======================================================================

void DNaming::LoadAndOrientGeneratedShapes (BRepBuilderAPI_MakeShape&     MS,
					    const TopoDS_Shape&           ShapeIn,
					    const TopAbs_ShapeEnum        KindOfShape,
					    TNaming_Builder&              Builder,
					    const TopTools_DataMapOfShapeShape& SubShapes)
{
  TopTools_MapOfShape View;
  TopExp_Explorer ShapeExplorer (ShapeIn, KindOfShape);
  for (; ShapeExplorer.More(); ShapeExplorer.Next ()) {
    const TopoDS_Shape& Root = ShapeExplorer.Current ();
    if (!View.Add(Root)) continue;
    const TopTools_ListOfShape& Shapes = MS.Generated (Root);
    for (TopoDS_Shape newShape : Shapes) {
      if (SubShapes.IsBound(newShape)) {
	newShape.Orientation((SubShapes(newShape)).Orientation());
      }
      if (!Root.IsSame (newShape)) Builder.Generated (Root,newShape );
    }
  }
}

//=======================================================================
//function : ComputeNormalizedVector
//purpose  : Computes normalized vector from shape if it is possible
//=======================================================================
Standard_Boolean DNaming::ComputeAxis (const Handle(TNaming_NamedShape)& theNS,
						   gp_Ax1& theAx1)
{
  if(theNS.IsNull() || theNS->IsEmpty()) return Standard_False;
  TopoDS_Shape aShape = theNS->Get();
  if(aShape.IsNull()) return Standard_False;
  if(aShape.ShapeType() == TopAbs_EDGE || aShape.ShapeType() == TopAbs_WIRE) {
    if (aShape.ShapeType() == TopAbs_WIRE) {
      TopExp_Explorer anExplorer(aShape, TopAbs_EDGE);
      aShape = anExplorer.Current();
    }
    const TopoDS_Edge& anEdge = TopoDS::Edge(aShape);
    Standard_Real aFirst, aLast;
    Handle(Geom_Curve) aCurve = BRep_Tool::Curve(anEdge,aFirst,aLast) ;
    if (aCurve->IsKind (STANDARD_TYPE(Geom_Line)) ) {
      Handle(Geom_Line) aLine = Handle(Geom_Line)::DownCast(aCurve) ;
      if(!aLine.IsNull()) {
	theAx1  = aLine->Position() ;
	return Standard_True;
      }
    }
  }  
  return Standard_False; 
}

//=======================================================================
//function : IsAttachment
//purpose  : 
//=======================================================================
Standard_Boolean DNaming::IsAttachment(const Handle(TDataStd_UAttribute)& anObj) 
{

  Handle(TFunction_Function) aFun = GetFirstFunction(anObj);
  if(!aFun.IsNull()) {
    const Standard_GUID& aGUID = aFun->GetDriverGUID();
    if(aGUID == ATTCH_GUID || aGUID == XTTCH_GUID) { 
      return 
	aFun->Label().FindChild(FUNCTION_ARGUMENTS_LABEL).FindChild(ATTACH_ARG).IsAttribute(TDF_Reference::GetID());
    }
  }
  return Standard_False;
}

//=======================================================================
//function : GetAttachmentsContext
//purpose  : 
//=======================================================================
Handle(TNaming_NamedShape) DNaming::GetAttachmentsContext(const Handle(TDataStd_UAttribute)& anObj) 
{
  Handle(TNaming_NamedShape) aNS;
  Handle(TFunction_Function) aFun = GetFirstFunction(anObj);
  if(!aFun.IsNull()) {
    const Standard_GUID& aGUID = aFun->GetDriverGUID();
    if(aGUID == ATTCH_GUID) {      
      const TDF_Label& aLabel = aFun->Label().FindChild(FUNCTION_ARGUMENTS_LABEL).FindChild(ATTACH_ARG);
      Handle(TDF_Reference) aRef;
      Handle(TFunction_Function) aFunCnt;
      if(aLabel.FindAttribute(TDF_Reference::GetID(), aRef)) {
	if(aRef->Get().FindAttribute(TFunction_Function::GetID(), aFunCnt)) {
	  const TDF_Label& aResultLabel =  aFunCnt->Label().FindChild(FUNCTION_RESULT_LABEL, Standard_True); 
	  aResultLabel.FindAttribute(TNaming_NamedShape::GetID(), aNS);
	}
      }
    }
  }
  return aNS;
}

//=======================================================================
//function : ComputeSweepDir
//purpose  : Computes direction for extrusion
//=======================================================================
Standard_Boolean DNaming::ComputeSweepDir (const TopoDS_Shape& theShape,
						   gp_Ax1& theAxis)
{
  // Find surface
  TopLoc_Location aLocation = theShape.Location();    
  Handle(Geom_Plane) aPlane;

  if (theShape.ShapeType() == TopAbs_FACE) {
    Handle(Geom_Surface) aSurf = BRep_Tool::Surface(TopoDS::Face(theShape));
#ifdef OCCT_DEBUG
    Standard_CString s = aSurf->DynamicType()->Name();
    cout<<"Surface Dynamic TYPE = "<<s<<endl;
#endif
    if (aSurf->DynamicType() == STANDARD_TYPE(Geom_RectangularTrimmedSurface)) 
      aSurf = ((Handle(Geom_RectangularTrimmedSurface)&) aSurf)->BasisSurface();
    aPlane = Handle(Geom_Plane)::DownCast(aSurf);
  }

  if(aPlane.IsNull()) {
    BRepLib_FindSurface aFinder (theShape, 0., Standard_True);
    if (!aFinder.Found()) return Standard_False;
    aPlane = Handle(Geom_Plane)::DownCast(aFinder.Surface());
  }

  if (aPlane.IsNull())  return  Standard_False;
    
  theAxis = aPlane->Pln().Axis();
  if (!aPlane->Pln().Direct()) theAxis.Reverse();
    
  if (theShape.Orientation() == TopAbs_REVERSED) theAxis.Reverse();
    
  return Standard_True;
}
