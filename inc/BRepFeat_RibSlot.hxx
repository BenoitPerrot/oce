// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFeat_RibSlot_HeaderFile
#define _BRepFeat_RibSlot_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfShapeListOfShape.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <BRepFeat_PerfSelection.hxx>
#include <ModelingData/TopoDS/TopoDS_Wire.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfShapeShape.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <BRepFeat_StatusError.hxx>
#include <ModelingAlgorithms/BRepBuilderAPI/BRepBuilderAPI_MakeShape.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_Geom_Plane.hxx>
#include <Handle_Geom_Curve.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_TopOpeBRepBuild_HBuilder.hxx>
class TopoDS_Shape;
class TopTools_ListOfShape;
class gp_Pnt;
class TopoDS_Edge;
class Geom_Plane;
class gp_Dir;
class TopoDS_Face;
class Geom_Curve;
class TopoDS_Vertex;
class LocOpe_Gluer;
class TopOpeBRepBuild_HBuilder;
class BRepAlgoAPI_BooleanOperation;


//! Provides functions to build mechanical features.
//! Mechanical features include ribs - protrusions and grooves (or slots) - depressions along
//! planar (linear) surfaces or revolution surfaces. The semantics of mechanical features is built
//! around giving thickness to a contour. This thickness can either be unilateral - on one side
//! of the contour - or bilateral - on both sides.
//! As in the semantics of form features, the thickness is defined by construction of shapes
//! in specific contexts. The development contexts differ, however,in case of mechanical features.
//! Here they include extrusion:
//! -   to a limiting face of the basis shape
//! -   to or from a limiting plane
//! -   to a height.
class BRepFeat_RibSlot  : public BRepBuilderAPI_MakeShape
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns true if F a TopoDS_Shape of type edge or face has been deleted.
  Standard_EXPORT virtual   Standard_Boolean IsDeleted (const TopoDS_Shape& F) ;
  
  //! Returns the list of generated Faces F. This list may be empty.
  Standard_EXPORT virtual  const  TopTools_ListOfShape& Modified (const TopoDS_Shape& F) ;
  
  //! Returns a list TopTools_ListOfShape of the faces S created in the shape.
  Standard_EXPORT virtual  const  TopTools_ListOfShape& Generated (const TopoDS_Shape& S) ;
  
  //! Returns the list  of shapes created  at the bottom  of
  //! the created form.  It may be an empty list.
  Standard_EXPORT  const  TopTools_ListOfShape& FirstShape()  const;
  
  //! Returns  the list of shapes  created at the top of the
  //! created form.  It may be an empty list.
  Standard_EXPORT  const  TopTools_ListOfShape& LastShape()  const;
  
  //! Returns a list of the limiting and glueing faces
  //! generated by the feature. These faces did not originally exist in the basis shape.
  //! The list provides the information necessary for
  //! subsequent addition of a draft to a face. It may be an empty list.
  //! If a face has tangent edges, no draft is possible, and the tangent edges must
  //! subsequently be removed if you want to add a draft to the face.
  Standard_EXPORT  const  TopTools_ListOfShape& FacesForDraft()  const;
  
  //! Returns a list of the limiting and glueing edges
  //! generated by the feature. These edges did not originally exist in the basis shape.
  //! The list provides the information necessary for
  //! subsequent addition of fillets. It may be an empty list.
  Standard_EXPORT  const  TopTools_ListOfShape& NewEdges()  const;
  
  //! Returns a list of the tangent edges among the
  //! limiting and glueing edges generated by the
  //! feature. These edges did not originally exist in
  //! the basis shape and are tangent to the face
  //! against which the feature is built.
  //! The list provides the information necessary for
  //! subsequent addition of fillets. It may be an empty list.
  //! If an edge is tangent, no fillet is possible, and
  //! the edge must subsequently be removed if you want to add a fillet.
  Standard_EXPORT  const  TopTools_ListOfShape& TgtEdges()  const;
  
  Standard_EXPORT static   Standard_Real IntPar (const Handle(Geom_Curve)& C, const gp_Pnt& P) ;
  
  Standard_EXPORT static   TopoDS_Face ChoiceOfFaces (TopTools_ListOfShape& faces, const Handle(Geom_Curve)& cc, const Standard_Real par, const Standard_Real bnd, const Handle(Geom_Plane)& Pln) ;
  
  Standard_EXPORT   BRepFeat_StatusError CurrentStatusError()  const;




protected:

  
  //! Redefines the empty constructor.
    BRepFeat_RibSlot();
  
  //! General perform method...
  Standard_EXPORT   void LFPerform() ;
  
  Standard_EXPORT   gp_Pnt CheckPoint (const TopoDS_Edge& e, const Standard_Real bnd, const Handle(Geom_Plane)& Pln) ;
  
  Standard_EXPORT   gp_Dir Normal (const TopoDS_Face& F, const gp_Pnt& P) ;
  
  Standard_EXPORT   void EdgeExtention (TopoDS_Edge& e, const Standard_Real bnd, const Standard_Boolean FirstLast) ;
  
  Standard_EXPORT   Standard_Real HeightMax (const TopoDS_Shape& theSbase, const TopoDS_Shape& theSUntil, gp_Pnt& p1, gp_Pnt& p2) ;
  
  Standard_EXPORT   Standard_Boolean ExtremeFaces (const Standard_Boolean RevolRib, const Standard_Real bnd, const Handle(Geom_Plane)& Pln, TopoDS_Edge& FirstEdge, TopoDS_Edge& LastEdge, TopoDS_Face& FirstFace, TopoDS_Face& LastFace, TopoDS_Vertex& FirstVertex, TopoDS_Vertex& LastVertex, Standard_Boolean& OnFirstFace, Standard_Boolean& OnLastFace, Standard_Boolean& PtOnFirstEdge, Standard_Boolean& PtOnLastEdge, TopoDS_Edge& OnFirstEdge, TopoDS_Edge& OnLastEdge) ;
  
  Standard_EXPORT   void PtOnEdgeVertex (const Standard_Boolean RevolRib, const TopoDS_Shape& shape, const gp_Pnt& point, const TopoDS_Vertex& FirstVertex, const TopoDS_Vertex& LastVertex, Standard_Boolean& PtOnEdge, TopoDS_Edge& OnEdge, Standard_Boolean& PtOnVertex, TopoDS_Vertex& OnVertex) ;
  
  Standard_EXPORT   Standard_Boolean SlidingProfile (TopoDS_Face& Prof, const Standard_Boolean RevolRib, const Standard_Real myTol, Standard_Integer& Concavite, const Handle(Geom_Plane)& myPln, const TopoDS_Face& BndFace, const gp_Pnt& CheckPnt, const TopoDS_Face& FirstFace, const TopoDS_Face& LastFace, const TopoDS_Vertex& FirstVertex, const TopoDS_Vertex& LastVertex, const TopoDS_Edge& FirstEdge, const TopoDS_Edge& LastEdge) ;
  
  Standard_EXPORT   Standard_Boolean NoSlidingProfile (TopoDS_Face& Prof, const Standard_Boolean RevolRib, const Standard_Real myTol, Standard_Integer& Concavite, const Handle(Geom_Plane)& myPln, const Standard_Real bnd, const TopoDS_Face& BndFace, const gp_Pnt& CheckPnt, const TopoDS_Face& FirstFace, const TopoDS_Face& LastFace, const TopoDS_Vertex& FirstVertex, const TopoDS_Vertex& LastVertex, const TopoDS_Edge& FirstEdge, const TopoDS_Edge& LastEdge, const Standard_Boolean OnFirstFace, const Standard_Boolean OnLastFace) ;
  
  //! Updates the data structures of descendant
  //! shapes during the glueing operation.Returns the modified, generated
  //! and deleted faces during the course of the glueing operation.
  Standard_EXPORT   void UpdateDescendants (const LocOpe_Gluer& G) ;
  
  Standard_EXPORT   void UpdateDescendants (const Handle(TopOpeBRepBuild_HBuilder)& B, const TopoDS_Shape& SResult, const Standard_Boolean SkipFace = Standard_False) ;
  
  Standard_EXPORT   void UpdateDescendants (const BRepAlgoAPI_BooleanOperation& aBOP, const TopoDS_Shape& SResult, const Standard_Boolean SkipFace = Standard_False) ;


  gp_Pnt myFirstPnt;
  gp_Pnt myLastPnt;
  Standard_Boolean myFuse;
  Standard_Boolean mySliding;
  TopTools_DataMapOfShapeListOfShape myMap;
  TopTools_DataMapOfShapeListOfShape myLFMap;
  TopoDS_Shape myFShape;
  TopoDS_Shape myLShape;
  BRepFeat_PerfSelection myPerfSelection;
  TopoDS_Wire myWire;
  TopoDS_Shape mySbase;
  TopoDS_Face mySkface;
  TopoDS_Face myPbase;
  TopoDS_Shape myGShape;
  TopoDS_Shape mySUntil;
  TopTools_DataMapOfShapeShape myGluedF;
  TopTools_ListOfShape myNewEdges;
  TopTools_ListOfShape myTgtEdges;
  TopTools_ListOfShape myFacesForDraft;
  BRepFeat_StatusError myStatusError;


private:





};


#include <BRepFeat_RibSlot.lxx>





#endif // _BRepFeat_RibSlot_HeaderFile
