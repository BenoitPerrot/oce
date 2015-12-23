// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAlgo_Loop_HeaderFile
#define _BRepAlgo_Loop_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfShapeListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfShapeShape.hxx>
class TopoDS_Face;
class TopoDS_Edge;
class TopTools_ListOfShape;
class TopTools_DataMapOfShapeShape;


//! Builds the loops from a set of edges on a face.
class BRepAlgo_Loop 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepAlgo_Loop();
  
  //! Init with <F> the set of edges must have
  //! pcurves on <F>.
  Standard_EXPORT   void Init (const TopoDS_Face& F) ;
  
  //! Add E with <LV>. <E> will be copied and trim
  //! by vertices in <LV>.
  Standard_EXPORT   void AddEdge (TopoDS_Edge& E, const TopTools_ListOfShape& LV) ;
  
  //! Add <E> as const edge, E can be in the result.
  Standard_EXPORT   void AddConstEdge (const TopoDS_Edge& E) ;
  
  //! Add <LE> as a set of const edges.
  Standard_EXPORT   void AddConstEdges (const TopTools_ListOfShape& LE) ;
  
  //! Make loops.
  Standard_EXPORT   void Perform() ;
  
  //! Cut the  edge <E>  in  several edges  <NE> on the
  //! vertices<VonE>.
  Standard_EXPORT   void CutEdge (const TopoDS_Edge& E, const TopTools_ListOfShape& VonE, TopTools_ListOfShape& NE)  const;
  
  //! Returns the list of wires performed.
  //! can be an empty list.
  Standard_EXPORT  const  TopTools_ListOfShape& NewWires()  const;
  
  //! Build faces from the wires result.
  Standard_EXPORT   void WiresToFaces() ;
  
  //! Returns the list of faces.
  //! Warning: The method <WiresToFaces> as to be called before.
  //! can be an empty list.
  Standard_EXPORT  const  TopTools_ListOfShape& NewFaces()  const;
  
  //! Returns the list of new edges built from an edge <E>
  //! it can be an empty list.
  Standard_EXPORT  const  TopTools_ListOfShape& NewEdges (const TopoDS_Edge& E)  const;
  
  //! Returns the datamap of vertices with their substitutes.
  Standard_EXPORT   void GetVerticesForSubstitute (TopTools_DataMapOfShapeShape& VerVerMap)  const;
  
  Standard_EXPORT   void VerticesForSubstitute (TopTools_DataMapOfShapeShape& VerVerMap) ;




protected:





private:



  TopoDS_Face myFace;
  TopTools_ListOfShape myConstEdges;
  TopTools_DataMapOfShapeListOfShape myVerOnEdges;
  TopTools_ListOfShape myNewWires;
  TopTools_ListOfShape myNewFaces;
  TopTools_DataMapOfShapeListOfShape myNewEdges;
  TopTools_DataMapOfShapeShape myVerticesForSubstitute;


};







#endif // _BRepAlgo_Loop_HeaderFile
