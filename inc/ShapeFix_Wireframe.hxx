// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeFix_Wireframe_HeaderFile
#define _ShapeFix_Wireframe_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_ShapeFix_Wireframe.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <ShapeFix_Root.hxx>
#include <ModelingAlgorithms/ShapeExtend/ShapeExtend_Status.hxx>
class TopoDS_Shape;
class TopTools_MapOfShape;
class TopTools_DataMapOfShapeListOfShape;


//! Provides methods for fixing wireframe of shape
class ShapeFix_Wireframe : public ShapeFix_Root
{

public:

  
  Standard_EXPORT ShapeFix_Wireframe();
  
  Standard_EXPORT ShapeFix_Wireframe(const TopoDS_Shape& shape);
  
  //! Clears all statuses
  Standard_EXPORT virtual   void ClearStatuses() ;
  
  //! Loads a shape, resets statuses
  Standard_EXPORT   void Load (const TopoDS_Shape& shape) ;
  
  //! Fixes gaps between ends of curves of adjacent edges
  //! (both 3d and pcurves) in wires
  //! If precision is 0.0, uses Precision::Confusion().
  Standard_EXPORT   Standard_Boolean FixWireGaps() ;
  
  //! Fixes small edges in shape by merging adjacent edges
  //! If precision is 0.0, uses Precision::Confusion().
  Standard_EXPORT   Standard_Boolean FixSmallEdges() ;
  
  //! Auxiliary tool for FixSmallEdges which checks for small edges and fills the maps.
  //! Returns True if at least one small edge has been found.
  Standard_EXPORT   Standard_Boolean CheckSmallEdges (TopTools_MapOfShape& theSmallEdges, TopTools_DataMapOfShapeListOfShape& theEdgeToFaces, TopTools_DataMapOfShapeListOfShape& theFaceWithSmall, TopTools_MapOfShape& theMultyEdges) ;
  
  //! Auxiliary tool for FixSmallEdges which merges small edges.
  //! If theModeDrop is equal to Standard_True then small edges,
  //! which cannot be connected with adjacent edges are dropped.
  //! Otherwise they are kept.
  //! theLimitAngle specifies maximum allowed tangency
  //! discontinuity between adjacent edges.
  //! If theLimitAngle is equal to -1, this angle is not taken into account.
  Standard_EXPORT   Standard_Boolean MergeSmallEdges (TopTools_MapOfShape& theSmallEdges, TopTools_DataMapOfShapeListOfShape& theEdgeToFaces, TopTools_DataMapOfShapeListOfShape& theFaceWithSmall, TopTools_MapOfShape& theMultyEdges, const Standard_Boolean theModeDrop = Standard_False, const Standard_Real theLimitAngle = -1) ;
  
  //! Decodes the status of the last FixWireGaps.
  //! OK - No gaps were found
  //! DONE1 - Some gaps in 3D were fixed
  //! DONE2 - Some gaps in 2D were fixed
  //! FAIL1 - Failed to fix some gaps in 3D
  //! FAIL2 - Failed to fix some gaps in 2D
      Standard_Boolean StatusWireGaps (const ShapeExtend_Status status)  const;
  
  //! Decodes the status of the last FixSmallEdges.
  //! OK - No small edges were found
  //! DONE1 - Some small edges were fixed
  //! FAIL1 - Failed to fix some small edges
      Standard_Boolean StatusSmallEdges (const ShapeExtend_Status status)  const;
  
      TopoDS_Shape Shape() ;
  
  //! Returns mode managing removing small edges.
      Standard_Boolean& ModeDropSmallEdges() ;
  
  //! Set limit angle for merging edges.
      void SetLimitAngle (const Standard_Real theLimitAngle) ;
  
  //! Get limit angle for merging edges.
      Standard_Real LimitAngle()  const;




  DEFINE_STANDARD_RTTI(ShapeFix_Wireframe)

protected:


  TopoDS_Shape myShape;


private: 


  Standard_Boolean myModeDrop;
  Standard_Real myLimitAngle;
  Standard_Integer myStatusWireGaps;
  Standard_Integer myStatusSmallEdges;


};


#include <ShapeFix_Wireframe.lxx>





#endif // _ShapeFix_Wireframe_HeaderFile
