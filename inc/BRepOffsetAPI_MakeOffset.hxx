// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffsetAPI_MakeOffset_HeaderFile
#define _BRepOffsetAPI_MakeOffset_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <GeomAbs_JoinType.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingAlgorithms/BRepFill/BRepFill_ListOfOffsetWire.hxx>
#include <ModelingAlgorithms/BRepBuilderAPI/BRepBuilderAPI_MakeShape.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class StdFail_NotDone;
class TopoDS_Face;
class TopoDS_Wire;
class TopTools_ListOfShape;
class TopoDS_Shape;


//! Describes algorithms for offsetting wires from a set of
//! wires contained in a planar face.
//! A MakeOffset object provides a framework for:
//! - defining the construction of an offset,
//! - implementing the construction algorithm, and
//! - consulting the result.
class BRepOffsetAPI_MakeOffset  : public BRepBuilderAPI_MakeShape
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Constructs an algorithm for creating an empty offset
  Standard_EXPORT BRepOffsetAPI_MakeOffset();
  
  //! Constructs an algorithm for creating an algorithm
  //! to build parallels to the spine Spine
  Standard_EXPORT BRepOffsetAPI_MakeOffset(const TopoDS_Face& Spine, const GeomAbs_JoinType Join = GeomAbs_Arc, const Standard_Boolean IsOpenResult = Standard_False);
  
  //! Initializes the algorithm to construct parallels to the spine Spine.
  //! Join defines the type of parallel generated by the
  //! salient vertices of the spine.
  //! The default type is GeomAbs_Arc where the vertices generate
  //! sections of a circle.
  //! If join type is GeomAbs_Intersection, the edges that
  //! intersect in a salient vertex generate the edges
  //! prolonged until intersection.
  Standard_EXPORT   void Init (const TopoDS_Face& Spine, const GeomAbs_JoinType Join = GeomAbs_Arc, const Standard_Boolean IsOpenResult = Standard_False) ;
  
  Standard_EXPORT BRepOffsetAPI_MakeOffset(const TopoDS_Wire& Spine, const GeomAbs_JoinType Join = GeomAbs_Arc, const Standard_Boolean IsOpenResult = Standard_False);
  
  //! Initialize the evaluation of Offseting.
  Standard_EXPORT   void Init (const GeomAbs_JoinType Join = GeomAbs_Arc, const Standard_Boolean IsOpenResult = Standard_False) ;
  
  //! Initializes the algorithm to construct parallels to the wire Spine.
  Standard_EXPORT   void AddWire (const TopoDS_Wire& Spine) ;
  
  //! Computes a parallel to the spine at distance Offset and
  //! at an altitude Alt from the plane of the spine in relation
  //! to the normal to the spine.
  //! Exceptions: StdFail_NotDone if the offset is not built.
  Standard_EXPORT   void Perform (const Standard_Real Offset, const Standard_Real Alt = 0.0) ;
  
  //! Builds the resulting shape (redefined from MakeShape).
  Standard_EXPORT virtual   void Build() ;
  
  //! returns a list of the created shapes
  //! from the shape <S>.
  Standard_EXPORT virtual  const  TopTools_ListOfShape& Generated (const TopoDS_Shape& S) ;




protected:





private:



  Standard_Boolean myIsInitialized;
  Standard_Boolean myLastIsLeft;
  GeomAbs_JoinType myJoin;
  Standard_Boolean myIsOpenResult;
  TopoDS_Face myFace;
  TopTools_ListOfShape myWires;
  BRepFill_ListOfOffsetWire myLeft;
  BRepFill_ListOfOffsetWire myRight;


};







#endif // _BRepOffsetAPI_MakeOffset_HeaderFile
