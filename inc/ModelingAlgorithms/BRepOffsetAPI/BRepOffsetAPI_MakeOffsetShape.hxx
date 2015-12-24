// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffsetAPI_MakeOffsetShape_HeaderFile
#define _BRepOffsetAPI_MakeOffsetShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingAlgorithms/BRepOffset/BRepOffset_MakeOffset.hxx>
#include <ModelingAlgorithms/BRepBuilderAPI/BRepBuilderAPI_MakeShape.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <ModelingAlgorithms/BRepOffset/BRepOffset_Mode.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Geometry/GeomAbs/GeomAbs_JoinType.hxx>
class TopoDS_Shape;
class BRepOffset_MakeOffset;
class TopTools_ListOfShape;


//! Describes functions to build a shell out of a shape. The
//! result is an unlooped shape parallel to the source shape.
//! A MakeOffsetShape object provides a framework for:
//! - defining the construction of a shell
//! - implementing the construction algorithm
//! - consulting the result.
class BRepOffsetAPI_MakeOffsetShape  : public BRepBuilderAPI_MakeShape
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepOffsetAPI_MakeOffsetShape();
  
  //! Constructs a shape parallel to the shape S, where
  //! - S may be a face, a shell, a solid or a compound of these shape kinds;
  //! - Offset is the offset value. The offset shape is constructed:
  //! - outside S, if Offset is positive,
  //! - inside S, if Offset is negative;
  //! - Tol defines the coincidence tolerance criterion for generated shapes;
  //! - Mode defines the construction type of parallels
  //! applied to the free edges of shape S; currently, only one
  //! construction type is implemented, namely the one where the free
  //! edges do not generate parallels; this corresponds to the default
  //! value BRepOffset_Skin;
  //! - Intersection specifies how the algorithm must work in
  //! order to limit the parallels to two adjacent shapes:
  //! - if Intersection is false (default value), the intersection
  //! is calculated with the parallels to the two adjacent shapes,
  //! - if Intersection is true, the intersection is calculated by
  //! taking all generated parallels into account; this computation method is
  //! more general as it avoids some self-intersections generated in the
  //! offset shape from features of small dimensions on shape S, however this
  //! method has not been completely implemented and therefore is not
  //! recommended for use;
  //! - SelfInter tells the algorithm whether a computation
  //! to eliminate self-intersections must be applied to the resulting
  //! shape; however, as this functionality is not yet
  //! implemented, it is recommended to use the default value (false);
  //! - Join defines how to fill the holes that may appear between
  //! parallels to the two adjacent faces. It may take values
  //! GeomAbs_Arc or GeomAbs_Intersection:
  //! - if Join is equal to GeomAbs_Arc, then pipes are generated
  //! between two free edges of two adjacent parallels,
  //! and spheres are generated on "images" of vertices;
  //! it is the default value,
  //! - if Join is equal to GeomAbs_Intersection, then the parallels to the
  //! two adjacent faces are enlarged and intersected,
  //! so that there are no free edges on parallels to faces.
  //! Warnings
  //! 1. All the faces of the shape S should be based on the surfaces
  //! with continuity at least C1.
  //! 2. The offset value should be sufficiently small to avoid
  //! self-intersections in resulting shape. Otherwise these
  //! self-intersections may appear inside an offset face if its
  //! initial surface is not plane or sphere or cylinder, also some
  //! non-adjacent offset faces may intersect each other. Also, some
  //! offset surfaces may "turn inside out".
  //! 3. The algorithm may fail if the shape S contains vertices where
  //! more than 3 edges converge.
  //! 4. Since 3d-offset algorithm involves intersection of surfaces,
  //! it is under limitations of surface intersection algorithm.
  //! 5. A result cannot be generated if the underlying geometry of S is
  //! BSpline with continuity C0.
  //! Exceptions
  //! Geom_UndefinedDerivative if the underlying
  //! geometry of S is BSpline with continuity C0.
  Standard_EXPORT BRepOffsetAPI_MakeOffsetShape(const TopoDS_Shape& S, const Standard_Real Offset, const Standard_Real Tol, const BRepOffset_Mode Mode = BRepOffset_Skin, const Standard_Boolean Intersection = Standard_False, const Standard_Boolean SelfInter = Standard_False, const GeomAbs_JoinType Join = GeomAbs_Arc);
  
  Standard_EXPORT virtual  const  BRepOffset_MakeOffset& MakeOffset()  const;
  
  //! Builds the resulting shape (redefined from MakeShape).
  Standard_EXPORT virtual   void Build() ;
  
  //! Returns the  list   of shapes generated   from the
  //! shape <S>.
  Standard_EXPORT virtual  const  TopTools_ListOfShape& Generated (const TopoDS_Shape& S) ;
  
  //! Returns the list of edges generated from the shape <S>.
  Standard_EXPORT  const  TopTools_ListOfShape& GeneratedEdge (const TopoDS_Shape& S) ;
  
  //! Returns offset join type.
  Standard_EXPORT   GeomAbs_JoinType GetJoinType()  const;




protected:



  BRepOffset_MakeOffset myOffsetShape;


private:





};







#endif // _BRepOffsetAPI_MakeOffsetShape_HeaderFile
