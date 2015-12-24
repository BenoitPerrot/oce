// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepPrim_FaceBuilder_HeaderFile
#define _BRepPrim_FaceBuilder_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingData/TopoDS/TopoDS_Vertex.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <Geometry/Geom/Handle_Geom_Surface.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_ConstructionError;
class Standard_OutOfRange;
class BRep_Builder;
class Geom_Surface;
class TopoDS_Face;
class TopoDS_Edge;
class TopoDS_Vertex;


//! The  FaceBuilder is an algorithm   to build a BRep
//! Face from a Geom Surface.
//!
//! The  face covers  the  whole surface or  the  area
//! delimited by UMin, UMax, VMin, VMax
class BRepPrim_FaceBuilder 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepPrim_FaceBuilder();
  
  Standard_EXPORT BRepPrim_FaceBuilder(const BRep_Builder& B, const Handle(Geom_Surface)& S);
  
  Standard_EXPORT BRepPrim_FaceBuilder(const BRep_Builder& B, const Handle(Geom_Surface)& S, const Standard_Real UMin, const Standard_Real UMax, const Standard_Real VMin, const Standard_Real VMax);
  
  Standard_EXPORT   void Init (const BRep_Builder& B, const Handle(Geom_Surface)& S) ;
  
  Standard_EXPORT   void Init (const BRep_Builder& B, const Handle(Geom_Surface)& S, const Standard_Real UMin, const Standard_Real UMax, const Standard_Real VMin, const Standard_Real VMax) ;
  
  Standard_EXPORT  const  TopoDS_Face& Face()  const;
Standard_EXPORT operator TopoDS_Face();
  
  //! Returns the edge of index <I>
  //! 1 - Edge VMin
  //! 2 - Edge UMax
  //! 3 - Edge VMax
  //! 4 - Edge UMin
  Standard_EXPORT  const  TopoDS_Edge& Edge (const Standard_Integer I)  const;
  
  //! Returns the vertex of index <I>
  //! 1 - Vertex UMin,VMin
  //! 2 - Vertex UMax,VMin
  //! 3 - Vertex UMax,VMax
  //! 4 - Vertex UMin,VMax
  Standard_EXPORT  const  TopoDS_Vertex& Vertex (const Standard_Integer I)  const;




protected:





private:



  TopoDS_Vertex myVertex[4];
  TopoDS_Edge myEdges[4];
  TopoDS_Face myFace;


};







#endif // _BRepPrim_FaceBuilder_HeaderFile
