// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_Builder1_HeaderFile
#define _TopOpeBRepBuild_Builder1_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TopTools_IndexedMapOfShape.hxx>
#include <TopoDS_Shape.hxx>
#include <TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#include <TopTools_DataMapOfOrientedShapeInteger.hxx>
#include <TopTools_IndexedMapOfOrientedShape.hxx>
#include <TopTools_IndexedDataMapOfShapeShape.hxx>
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#include <TopOpeBRepBuild_Builder.hxx>
#include <Handle_TopOpeBRepDS_HDataStructure.hxx>
#include <TopAbs_State.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class TopOpeBRepBuild_HBuilder;
class TopOpeBRepDS_BuildTool;
class TopOpeBRepDS_HDataStructure;
class TopoDS_Shape;
class TopTools_ListOfShape;
class TopOpeBRepBuild_GTopo;
class TopOpeBRepBuild_ShellFaceSet;
class TopOpeBRepBuild_WireEdgeSet;
class TopTools_IndexedMapOfShape;
class TopOpeBRepDS_DataMapOfShapeState;
class TopOpeBRepBuild_PaveSet;
class TopoDS_Edge;
class TopoDS_Face;
class TopTools_SequenceOfShape;


//! extension  of  the  class  TopOpeBRepBuild_Builder  dedicated
//! to  avoid  bugs  in  "Rebuilding Result" algorithm  for  the  case  of  SOLID/SOLID  Boolean  Operations
class TopOpeBRepBuild_Builder1  : public TopOpeBRepBuild_Builder
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepBuild_Builder1(const TopOpeBRepDS_BuildTool& BT);
  
  Standard_EXPORT virtual   void Destroy() ;
Standard_EXPORT virtual ~TopOpeBRepBuild_Builder1()  {  Destroy() ; }
  
  //! Removes all splits and merges already performed.
  //! Does NOT clear the handled DS  (except  ShapeWithStatesMaps).
  Standard_EXPORT virtual   void Clear() ;
  
  Standard_EXPORT virtual   void Perform (const Handle(TopOpeBRepDS_HDataStructure)& HDS) ;
  
  Standard_EXPORT virtual   void Perform (const Handle(TopOpeBRepDS_HDataStructure)& HDS, const TopoDS_Shape& S1, const TopoDS_Shape& S2) ;
  
  Standard_EXPORT virtual   void MergeKPart() ;
  
  Standard_EXPORT virtual   void MergeKPart (const TopAbs_State TB1, const TopAbs_State TB2) ;
  
  Standard_EXPORT virtual   void GFillSolidSFS (const TopoDS_Shape& SO1, const TopTools_ListOfShape& LSO2, const TopOpeBRepBuild_GTopo& G, TopOpeBRepBuild_ShellFaceSet& SFS) ;
  
  Standard_EXPORT virtual   void GFillShellSFS (const TopoDS_Shape& SH1, const TopTools_ListOfShape& LSO2, const TopOpeBRepBuild_GTopo& G, TopOpeBRepBuild_ShellFaceSet& SFS) ;
  
  Standard_EXPORT virtual   void GWESMakeFaces (const TopoDS_Shape& FF, TopOpeBRepBuild_WireEdgeSet& WES, TopTools_ListOfShape& LOF) ;
  
  Standard_EXPORT   void GFillSplitsPVS (const TopoDS_Shape& anEdge, const TopOpeBRepBuild_GTopo& G1, TopOpeBRepBuild_PaveSet& PVS) ;
  
  Standard_EXPORT   void GFillFaceNotSameDomSFS (const TopoDS_Shape& F1, const TopTools_ListOfShape& LSO2, const TopOpeBRepBuild_GTopo& G, TopOpeBRepBuild_ShellFaceSet& SFS) ;
  
  Standard_EXPORT   void GFillFaceNotSameDomWES (const TopoDS_Shape& F1, const TopTools_ListOfShape& LSO2, const TopOpeBRepBuild_GTopo& G, TopOpeBRepBuild_WireEdgeSet& WES) ;
  
  Standard_EXPORT   void GFillWireNotSameDomWES (const TopoDS_Shape& W1, const TopTools_ListOfShape& LSO2, const TopOpeBRepBuild_GTopo& G, TopOpeBRepBuild_WireEdgeSet& WES) ;
  
  Standard_EXPORT   void GFillEdgeNotSameDomWES (const TopoDS_Shape& E1, const TopTools_ListOfShape& LSO2, const TopOpeBRepBuild_GTopo& G, TopOpeBRepBuild_WireEdgeSet& WES) ;
  
  Standard_EXPORT   void GFillFaceSameDomSFS (const TopoDS_Shape& F1, const TopTools_ListOfShape& LSO2, const TopOpeBRepBuild_GTopo& G, TopOpeBRepBuild_ShellFaceSet& SFS) ;
  
  Standard_EXPORT   void GFillFaceSameDomWES (const TopoDS_Shape& F1, const TopTools_ListOfShape& LSO2, const TopOpeBRepBuild_GTopo& G, TopOpeBRepBuild_WireEdgeSet& WES) ;
  
  Standard_EXPORT   void GFillWireSameDomWES (const TopoDS_Shape& W1, const TopTools_ListOfShape& LSO2, const TopOpeBRepBuild_GTopo& G, TopOpeBRepBuild_WireEdgeSet& WES) ;
  
  Standard_EXPORT   void GFillEdgeSameDomWES (const TopoDS_Shape& E1, const TopTools_ListOfShape& LSO2, const TopOpeBRepBuild_GTopo& G, TopOpeBRepBuild_WireEdgeSet& WES) ;
  
  Standard_EXPORT   void PerformONParts (const TopoDS_Shape& F, const TopTools_IndexedMapOfShape& SDfaces, const TopOpeBRepBuild_GTopo& G, TopOpeBRepBuild_WireEdgeSet& WES) ;
  
  Standard_EXPORT   void PerformPieceIn2D (const TopoDS_Edge& aPieceToPerform, const TopoDS_Edge& aOriginalEdge, const TopoDS_Face& edgeFace, const TopoDS_Face& toFace, const TopOpeBRepBuild_GTopo& G, Standard_Boolean& keep) ;
  
  Standard_EXPORT   Standard_Integer PerformPieceOn2D (const TopoDS_Shape& aPieceObj, const TopoDS_Shape& aFaceObj, const TopoDS_Shape& aEdgeObj, TopTools_ListOfShape& aListOfPieces, TopTools_ListOfShape& aListOfFaces, TopTools_ListOfShape& aListOfPiecesOut2d) ;
  
  Standard_EXPORT   Standard_Integer TwoPiecesON (const TopTools_SequenceOfShape& aSeq, TopTools_ListOfShape& aListOfPieces, TopTools_ListOfShape& aListOfFaces, TopTools_ListOfShape& aListOfPiecesOut2d) ;
  
  Standard_EXPORT   Standard_Integer CorrectResult2d (TopoDS_Shape& aResult) ;


friend class TopOpeBRepBuild_HBuilder;


protected:

  
  Standard_EXPORT   void PerformShapeWithStates() ;
  
  Standard_EXPORT   void PerformShapeWithStates (const TopoDS_Shape& anObj, const TopoDS_Shape& aTool) ;
  
  Standard_EXPORT   void StatusEdgesToSplit (const TopoDS_Shape& anObj, const TopTools_IndexedMapOfShape& anEdgesToSplitMap, const TopTools_IndexedMapOfShape& anEdgesToRestMap) ;
  
  Standard_EXPORT   void SplitEdge (const TopoDS_Shape& anEdge, TopTools_ListOfShape& aLNew, TopOpeBRepDS_DataMapOfShapeState& aDataMapOfShapeState) ;
  
  Standard_EXPORT   void PerformFacesWithStates (const TopoDS_Shape& anObj, const TopTools_IndexedMapOfShape& aFaces, TopOpeBRepDS_DataMapOfShapeState& aSplF) ;
  
  Standard_EXPORT   Standard_Integer IsSame2d (const TopTools_SequenceOfShape& aSeq, TopTools_ListOfShape& aListOfPiecesOut2d) ;
  
  Standard_EXPORT   void OrientateEdgeOnFace (TopoDS_Edge& EdgeToPerform, const TopoDS_Face& baseFace, const TopoDS_Face& edgeFace, const TopOpeBRepBuild_GTopo& G1, Standard_Boolean& stateOfFaceOri)  const;


  TopTools_DataMapOfShapeListOfShape myFSplits;
  TopTools_DataMapOfShapeListOfShape myESplits;


private:



  TopTools_IndexedMapOfShape mySameDomMap;
  TopoDS_Shape mySDFaceToFill;
  TopoDS_Shape myBaseFaceToFill;
  TopTools_IndexedDataMapOfShapeListOfShape myMapOfEdgeFaces;
  TopTools_DataMapOfOrientedShapeInteger myMapOfEdgeWithFaceState;
  TopTools_IndexedMapOfShape myProcessedPartsOut2d;
  TopTools_IndexedMapOfShape myProcessedPartsON2d;
  TopTools_IndexedMapOfShape mySplitsONtoKeep;
  TopTools_IndexedMapOfOrientedShape mySourceShapes;
  TopTools_IndexedDataMapOfShapeShape myMapOfCorrect2dEdges;


};







#endif // _TopOpeBRepBuild_Builder1_HeaderFile
