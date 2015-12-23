// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffset_Offset_HeaderFile
#define _BRepOffset_Offset_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <BRepOffset_Status.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfShapeShape.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <GeomAbs_JoinType.hxx>
#include <GeomAbs_Shape.hxx>
class TopoDS_Face;
class TopTools_DataMapOfShapeShape;
class TopoDS_Edge;
class TopoDS_Vertex;
class TopTools_ListOfShape;
class TopoDS_Shape;


//! This class compute elemenary offset surface.
//! Evaluate the offset generated :
//! 1 - from a face.
//! 2 - from an edge.
//! 3 - from a vertex.
class BRepOffset_Offset 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepOffset_Offset();
  
  Standard_EXPORT BRepOffset_Offset(const TopoDS_Face& Face, const Standard_Real Offset, const Standard_Boolean OffsetOutside = Standard_True, const GeomAbs_JoinType JoinType = GeomAbs_Arc);
  
  //! This method will be  called when you want to share
  //! the  edges  soon generated  from  an other  face.
  //! e.g. when two faces are  tangents the common  edge
  //! will generate only one edge ( no pipe).
  //!
  //! The Map  will be fill  as  follow:
  //!
  //! Created(E) = E'
  //! with: E  = an edge of <Face>
  //! E' = the image of E in the offseting  of
  //! another  face  sharing E  with a
  //! continuity at least G1
  Standard_EXPORT BRepOffset_Offset(const TopoDS_Face& Face, const Standard_Real Offset, const TopTools_DataMapOfShapeShape& Created, const Standard_Boolean OffsetOutside = Standard_True, const GeomAbs_JoinType JoinType = GeomAbs_Arc);
  
  Standard_EXPORT BRepOffset_Offset(const TopoDS_Edge& Path, const TopoDS_Edge& Edge1, const TopoDS_Edge& Edge2, const Standard_Real Offset, const Standard_Boolean Polynomial = Standard_False, const Standard_Real Tol = 1.0e-4, const GeomAbs_Shape Conti = GeomAbs_C1);
  
  Standard_EXPORT BRepOffset_Offset(const TopoDS_Edge& Path, const TopoDS_Edge& Edge1, const TopoDS_Edge& Edge2, const Standard_Real Offset, const TopoDS_Edge& FirstEdge, const TopoDS_Edge& LastEdge, const Standard_Boolean Polynomial = Standard_False, const Standard_Real Tol = 1.0e-4, const GeomAbs_Shape Conti = GeomAbs_C1);
  
  //! Tol and Conti are only used if Polynomial is True
  //! (Used to perfrom the approximation)
  Standard_EXPORT BRepOffset_Offset(const TopoDS_Vertex& Vertex, const TopTools_ListOfShape& LEdge, const Standard_Real Offset, const Standard_Boolean Polynomial = Standard_False, const Standard_Real Tol = 1.0e-4, const GeomAbs_Shape Conti = GeomAbs_C1);
  
  Standard_EXPORT   void Init (const TopoDS_Face& Face, const Standard_Real Offset, const Standard_Boolean OffsetOutside = Standard_True, const GeomAbs_JoinType JoinType = GeomAbs_Arc) ;
  
  Standard_EXPORT   void Init (const TopoDS_Face& Face, const Standard_Real Offset, const TopTools_DataMapOfShapeShape& Created, const Standard_Boolean OffsetOutside = Standard_True, const GeomAbs_JoinType JoinType = GeomAbs_Arc) ;
  
  Standard_EXPORT   void Init (const TopoDS_Edge& Path, const TopoDS_Edge& Edge1, const TopoDS_Edge& Edge2, const Standard_Real Offset, const Standard_Boolean Polynomial = Standard_False, const Standard_Real Tol = 1.0e-4, const GeomAbs_Shape Conti = GeomAbs_C1) ;
  
  Standard_EXPORT   void Init (const TopoDS_Edge& Path, const TopoDS_Edge& Edge1, const TopoDS_Edge& Edge2, const Standard_Real Offset, const TopoDS_Edge& FirstEdge, const TopoDS_Edge& LastEdge, const Standard_Boolean Polynomial = Standard_False, const Standard_Real Tol = 1.0e-4, const GeomAbs_Shape Conti = GeomAbs_C1) ;
  
  //! Tol and Conti are only used if Polynomial is True
  //! (Used to perfrom the approximation)
  Standard_EXPORT   void Init (const TopoDS_Vertex& Vertex, const TopTools_ListOfShape& LEdge, const Standard_Real Offset, const Standard_Boolean Polynomial = Standard_False, const Standard_Real Tol = 1.0e-4, const GeomAbs_Shape Conti = GeomAbs_C1) ;
  
  //! Only used in Rolling Ball. Pipe on Free Boundary
  Standard_EXPORT   void Init (const TopoDS_Edge& Edge, const Standard_Real Offset) ;
  
     const  TopoDS_Shape& InitialShape()  const;
  
  Standard_EXPORT  const  TopoDS_Face& Face()  const;
  
  Standard_EXPORT   TopoDS_Shape Generated (const TopoDS_Shape& Shape)  const;
  
  Standard_EXPORT   BRepOffset_Status Status()  const;




protected:





private:



  TopoDS_Shape myShape;
  BRepOffset_Status myStatus;
  TopoDS_Face myFace;
  TopTools_DataMapOfShapeShape myMap;


};


#include <BRepOffset_Offset.lxx>





#endif // _BRepOffset_Offset_HeaderFile
