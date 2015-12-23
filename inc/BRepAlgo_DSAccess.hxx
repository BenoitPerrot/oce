// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAlgo_DSAccess_HeaderFile
#define _BRepAlgo_DSAccess_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRep_DSFiller.hxx>
#include <Handle_TopOpeBRepBuild_HBuilder.hxx>
#include <Handle_BRepAlgo_EdgeConnector.hxx>
#include <TopoDS_Shape.hxx>
#include <ModelingData/TopAbs/TopAbs_State.hxx>
#include <TopTools_ListOfShape.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <TopoDS_Wire.hxx>
#include <Foundation/TColStd/TColStd_ListOfInteger.hxx>
#include <TopTools_DataMapOfShapeShape.hxx>
#include <Foundation/TColStd/TColStd_PackedMapOfInteger.hxx>
#include <BRepAlgo_CheckStatus.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <TopOpeBRepDS_Kind.hxx>
class TopOpeBRepDS_HDataStructure;
class TopOpeBRepBuild_HBuilder;
class BRepAlgo_EdgeConnector;
class BRepAlgo_BooleanOperations;
class TopoDS_Shape;
class TopTools_ListOfShape;
class TopoDS_Vertex;
class TColStd_ListOfInteger;



class BRepAlgo_DSAccess 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepAlgo_DSAccess();
  
  //! Clears the internal data structure, including the
  Standard_EXPORT   void Init() ;
  
  //! Loads the shape in DS.
  Standard_EXPORT   void Load (const TopoDS_Shape& S) ;
  
  //! Loads two shapes in the DS without intersecting them.
  Standard_EXPORT   void Load (TopoDS_Shape& S1, TopoDS_Shape& S2) ;
  
  //! Intersects two shapes at input and loads the DS with
  //! their intersection. Clears the TopOpeBRepBuild_HBuilder if
  //! necessary
  Standard_EXPORT   void Intersect() ;
  
  //! Intersects the faces contained in two given shapes
  //! and loads them in the DS. Clears the TopOpeBRepBuild_HBuilder
  //! if necessary
  Standard_EXPORT   void Intersect (const TopoDS_Shape& S1, const TopoDS_Shape& S2) ;
  
  //! This method does the same thing as the previous,
  //! but faster. There is no intersection face/face 3D.
  //! The faces have the same support(surface). No test of
  //! tangency (that is why it is faster). Intersects in 2d
  //! the faces tangent F1 anf F2.
  Standard_EXPORT   void SameDomain (const TopoDS_Shape& S1, const TopoDS_Shape& S2) ;
  
  //! returns compounds of Edge connected with section, which
  //! contains sections between faces contained in S1 and S2.
  //! returns an empty list of Shape if S1 or S2 do not contain
  //! face.
  //! calls GetSectionEdgeSet() if it has not already been done
  Standard_EXPORT  const  TopTools_ListOfShape& GetSectionEdgeSet (const TopoDS_Shape& S1, const TopoDS_Shape& S2) ;
  
  //! returns all compounds of edges connected with section
  //! contained in the DS
  Standard_EXPORT  const  TopTools_ListOfShape& GetSectionEdgeSet() ;
  
  //! NYI
  Standard_EXPORT   Standard_Boolean IsWire (const TopoDS_Shape& Compound) ;
  
  //! NYI
  Standard_EXPORT  const  TopoDS_Shape& Wire (const TopoDS_Shape& Compound) ;
  
  //! NYI
  //! returns the vertex of section, which contains the section
  //! between face S1 and edge S2 (returns an empty Shape
  //! if S1 is not a face or if S2 is not an edge)
  Standard_EXPORT  const  TopTools_ListOfShape& SectionVertex (const TopoDS_Shape& S1, const TopoDS_Shape& S2) ;
  
  //! Invalidates a complete line of section. All
  //! Edges connected by Vertex or a Wire. Can be
  //! a group of connected Edges, which do not form a
  //! standard Wire.
  Standard_EXPORT   void SuppressEdgeSet (const TopoDS_Shape& Compound) ;
  
  //! Modifies a line of section.  <New> -- should be a
  //! Group of Edges connected by Vertex.  -- Can be a
  //! Wire.  Can be a group of connected Edges that do not
  //! form a standard Wire.   <New> should be sub-groupn of <Old>
  Standard_EXPORT   void ChangeEdgeSet (const TopoDS_Shape& Old, const TopoDS_Shape& New) ;
  
  //! NYI
  //! Make invalid a Vertex of section. The Vertex shoud be
  //! reconstructed from a point.
  Standard_EXPORT   void SuppressSectionVertex (const TopoDS_Vertex& V) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Merge (const TopAbs_State state1, const TopAbs_State state2) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Merge (const TopAbs_State state1) ;
  
  //! NYI   Propagation  of a state starting from the shape
  //! FromShape = edge or vertex of section, face or
  //! Coumpound de section. LoadShape is either S1,
  //! or S2  (see the method Load).   Propagation   from
  //! FromShape, on the states <what> of LoadShape.
  //! Return a Wire in 2d, a Shell in 3d.
  //! Specifications are incomplete, to be redefined for the typologies
  //! correpsonding to  <FromShape> and the result :
  //! exemple :    FromShape        resultat
  //! vertex           wire (or edge)
  //! edge of section       face (or shell)
  //! compound of section   shell
  //! ...                  ...
  Standard_EXPORT  const  TopoDS_Shape& Propagate (const TopAbs_State what, const TopoDS_Shape& FromShape, const TopoDS_Shape& LoadShape) ;
  
  //! SectionShape est soit un Vertex de section(NYI), soit
  //! une Edge de section. Propagation  des shapes
  //! de section en partant de SectionShape.
  //! return un Compound de section.
  Standard_EXPORT  const  TopoDS_Shape& PropagateFromSection (const TopoDS_Shape& SectionShape) ;
  
  //! Returns the list of the descendant shapes of the shape <S>.
  Standard_EXPORT  const  TopTools_ListOfShape& Modified (const TopoDS_Shape& S) ;
  
  //! Returns the fact that the shape <S> has been deleted or not
  //! by the boolean operation.
  Standard_EXPORT   Standard_Boolean IsDeleted (const TopoDS_Shape& S) ;
  
  //! NYI
  //! coherence of the internal Data Structure.
  Standard_EXPORT   BRepAlgo_CheckStatus Check() ;
  
  Standard_EXPORT  const  Handle(TopOpeBRepDS_HDataStructure)& DS()  const;
  
  Standard_EXPORT   Handle(TopOpeBRepDS_HDataStructure)& ChangeDS() ;
  
  Standard_EXPORT  const  Handle(TopOpeBRepBuild_HBuilder)& Builder()  const;
  
  Standard_EXPORT   Handle(TopOpeBRepBuild_HBuilder)& ChangeBuilder() ;


friend class BRepAlgo_BooleanOperations;


protected:





private:

  
  Standard_EXPORT   void Suppress (const TopoDS_Shape& Compound, const TopoDS_Shape& KeepComp) ;
  
  Standard_EXPORT   void RemoveEdgeInterferences (const Standard_Integer iF1, const Standard_Integer iF2, const Standard_Integer iCurve) ;
  
  Standard_EXPORT   void RemoveEdgeInterferences (const Standard_Integer iE1, const Standard_Integer iE2, const TopoDS_Shape& SectEdge) ;
  
  Standard_EXPORT   void RemoveFaceInterferences (const Standard_Integer iF1, const Standard_Integer iF2, const Standard_Integer iE1, const Standard_Integer iE2) ;
  
  Standard_EXPORT   void RemoveFaceInterferences (const Standard_Integer iF1, const Standard_Integer iF2, const Standard_Integer iCurve) ;
  
  Standard_EXPORT   void RemoveEdgeInterferencesFromFace (const Standard_Integer iF1, const Standard_Integer iF2, const Standard_Integer ipv1, const TopOpeBRepDS_Kind kind1, const Standard_Integer ipv2, const TopOpeBRepDS_Kind kind2) ;
  
  Standard_EXPORT   void RemoveEdgeFromFace (const Standard_Integer iF, const Standard_Integer iV) ;
  
  Standard_EXPORT   void PntVtxOnCurve (const Standard_Integer iCurve, Standard_Integer& ipv1, TopOpeBRepDS_Kind& ik1, Standard_Integer& ipv2, TopOpeBRepDS_Kind& ik2) ;
  
  Standard_EXPORT   void PntVtxOnSectEdge (const TopoDS_Shape& SectEdge, Standard_Integer& ipv1, TopOpeBRepDS_Kind& ik1, Standard_Integer& ipv2, TopOpeBRepDS_Kind& ik2) ;
  
  Standard_EXPORT   void RemoveEdgeSameDomain (const Standard_Integer iE1, const Standard_Integer iE2) ;
  
  Standard_EXPORT   void RemoveFaceSameDomain (const TopoDS_Shape& C) ;
  
  Standard_EXPORT   TColStd_ListOfInteger& FindGoodFace (const Standard_Integer iE, Standard_Integer& iF1, Standard_Boolean& b) ;
  
  Standard_EXPORT   void RemoveFaceSameDomain (const Standard_Integer iF1, const Standard_Integer iF2) ;
  
  Standard_EXPORT   Standard_Boolean GoodInterf (const TopoDS_Shape& SectEdge, const TopOpeBRepDS_Kind kind, const Standard_Integer iPointVertex) ;


  Handle(TopOpeBRepDS_HDataStructure) myHDS;
  TopOpeBRep_DSFiller myDSFiller;
  Handle(TopOpeBRepBuild_HBuilder) myHB;
  Handle(BRepAlgo_EdgeConnector) myEC;
  TopoDS_Shape myS1;
  TopoDS_Shape myS2;
  TopAbs_State myState1;
  TopAbs_State myState2;
  TopTools_ListOfShape myListOfCompoundOfEdgeConnected;
  TopTools_ListOfShape myCurrentList;
  Standard_Boolean myRecomputeBuilderIsDone;
  Standard_Boolean myGetSectionIsDone;
  TopoDS_Shape myResultShape;
  TopoDS_Wire myWire;
  TopTools_ListOfShape myListOfVertex;
  TopTools_ListOfShape myModified;
  TopoDS_Shape myEmptyShape;
  TopTools_ListOfShape myEmptyListOfShape;
  TColStd_ListOfInteger myEmptyListOfInteger;
  TopTools_DataMapOfShapeShape myCompoundWireMap;
  TColStd_PackedMapOfInteger mySetOfKeepPoint;


};







#endif // _BRepAlgo_DSAccess_HeaderFile
