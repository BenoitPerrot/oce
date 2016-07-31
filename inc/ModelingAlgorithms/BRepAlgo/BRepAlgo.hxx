// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAlgo_HeaderFile
#define _BRepAlgo_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Geometry/GeomAbs/GeomAbs_Shape.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
class TopoDS_Wire;
class TopoDS_Edge;
class TopoDS_Shape;
class BRepAlgo_BooleanOperation;
class BRepAlgo_Fuse;
class BRepAlgo_Cut;
class BRepAlgo_Common;
class BRepAlgo_Section;
class BRepAlgo_Loop;
class BRepAlgo_Tool;
class BRepAlgo_Image;
class BRepAlgo_AsDes;
class BRepAlgo_FaceRestrictor;
class BRepAlgo_BooleanOperations;
class BRepAlgo_DSAccess;
class BRepAlgo_EdgeConnector;
class BRepAlgo_NormalProjection;
class BRepAlgo_DataMapOfShapeBoolean;
class BRepAlgo_DataMapOfShapeInterference;
class BRepAlgo_SequenceOfSequenceOfInteger;
class BRepAlgo_DataMapNodeOfDataMapOfShapeBoolean;
class BRepAlgo_DataMapIteratorOfDataMapOfShapeBoolean;
class BRepAlgo_DataMapNodeOfDataMapOfShapeInterference;
class BRepAlgo_DataMapIteratorOfDataMapOfShapeInterference;
class BRepAlgo_SequenceNodeOfSequenceOfSequenceOfInteger;



//! The BRepAlgo package provides a full range of
//! services to perform Old Boolean Operations in Open CASCADE.
//! Attention:
//! The New Boolean Operation has replaced the Old
//! Boolean Operations algorithm in the BrepAlgoAPI
//! package in Open CASCADE.
class BRepAlgo 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! this method makes a wire whose edges are C1 from
  //! a Wire whose edges could be G1. It removes a vertex
  //! between G1 edges.
  //! Option can be G1 or C1.
  Standard_EXPORT static   TopoDS_Wire ConcatenateWire (const TopoDS_Wire& Wire, const GeomAbs_Shape Option, const Standard_Real AngularTolerance = 1.0e-4) ;
  
  //! this method makes an edge from a wire.
  //! Junction points between edges of wire may be sharp,
  //! resulting curve of the resulting edge may be C0.
  Standard_EXPORT static   TopoDS_Edge ConcatenateWireC0 (const TopoDS_Wire& Wire) ;
  
  //! Checks if the  shape is "correct". If not, returns
  //! <Standard_False>, else returns <Standard_True>.
  Standard_EXPORT static   Standard_Boolean IsValid (const TopoDS_Shape& S) ;
  
  //! Checks if  the  Generated and Modified Faces  from
  //! the shapes <arguments> in  the shape <result>  are
  //! "correct". The args   may be empty, then all faces
  //! will be checked.
  //! If <Closed> is True,  only  closed shape are valid.
  //! If <GeomCtrl>  is    False the geometry  of   new
  //! vertices and edges   are   not verified and  the
  //! auto-intersection of new wires are not searched.
  Standard_EXPORT static   Standard_Boolean IsValid (const TopTools_ListOfShape& theArgs, const TopoDS_Shape& theResult, const Standard_Boolean closedSolid = Standard_False, const Standard_Boolean GeomCtrl = Standard_True) ;
  
  //! Checks if the shape is  "correct". If not, returns
  //! <Standard_False>,  else   returns <Standard_True>.
  //! This method differs from  the previous one in  the
  //! fact that no   geometric contols (intersection  of
  //! wires, pcurve validity) are performed.
  Standard_EXPORT static   Standard_Boolean IsTopologicallyValid (const TopoDS_Shape& S) ;




protected:





private:




friend class BRepAlgo_BooleanOperation;
friend class BRepAlgo_Fuse;
friend class BRepAlgo_Cut;
friend class BRepAlgo_Common;
friend class BRepAlgo_Section;
friend class BRepAlgo_Loop;
friend class BRepAlgo_Tool;
friend class BRepAlgo_Image;
friend class BRepAlgo_AsDes;
friend class BRepAlgo_FaceRestrictor;
friend class BRepAlgo_BooleanOperations;
friend class BRepAlgo_DSAccess;
friend class BRepAlgo_EdgeConnector;
friend class BRepAlgo_NormalProjection;
friend class BRepAlgo_DataMapOfShapeBoolean;
friend class BRepAlgo_DataMapOfShapeInterference;
friend class BRepAlgo_SequenceOfSequenceOfInteger;
friend class BRepAlgo_DataMapNodeOfDataMapOfShapeBoolean;
friend class BRepAlgo_DataMapIteratorOfDataMapOfShapeBoolean;
friend class BRepAlgo_DataMapNodeOfDataMapOfShapeInterference;
friend class BRepAlgo_DataMapIteratorOfDataMapOfShapeInterference;
friend class BRepAlgo_SequenceNodeOfSequenceOfSequenceOfInteger;

};







#endif // _BRepAlgo_HeaderFile
