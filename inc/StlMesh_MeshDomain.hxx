// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StlMesh_MeshDomain_HeaderFile
#define _StlMesh_MeshDomain_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StlMesh_MeshDomain.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <TColgp_SequenceOfXYZ.hxx>
#include <StlMesh_SequenceOfMeshTriangle.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NegativeValue;
class Standard_NullValue;
class StlMesh_SequenceOfMeshTriangle;
class TColgp_SequenceOfXYZ;


//! A  mesh domain is  a set of triangles defined with
//! three geometric vertices and a given orientation.
//! The  mesh domain has its own deflection.
//! Internal class used to classify the triangles of each domain.
class StlMesh_MeshDomain : public MMgt_TShared
{

public:

  
  //! The mesh deflection is defaulted to Confusion from
  //! package Precision.
  Standard_EXPORT StlMesh_MeshDomain();
  
  //! Raised if the deflection is lower than zero
  //! Raised if the deflection  is lower than  Confusion
  //! from package Precision
  Standard_EXPORT StlMesh_MeshDomain(const Standard_Real Deflection);
  
  //! Build a triangle with the triplet of vertices (V1,
  //! V2, V3).  This triplet defines  the indexes of the
  //! vertex in the  current domain The coordinates  Xn,
  //! Yn,  Zn  defines   the normal  direction   to  the
  //! triangle.  Returns  the  range of  the triangle in
  //! the current domain.
  Standard_EXPORT virtual   Standard_Integer AddTriangle (const Standard_Integer V1, const Standard_Integer V2, const Standard_Integer V3, const Standard_Real Xn, const Standard_Real Yn, const Standard_Real Zn) ;
  
  //! Returns the range of the vertex in the current
  //! domain.
  Standard_EXPORT virtual   Standard_Integer AddVertex (const Standard_Real X, const Standard_Real Y, const Standard_Real Z) ;
  
  //! Returns  the range of   the vertex in  the current
  //! domain.  The current vertex is not inserted in the
  //! mesh if it already exist.
  Standard_EXPORT virtual   Standard_Integer AddOnlyNewVertex (const Standard_Real X, const Standard_Real Y, const Standard_Real Z, Standard_Boolean& IsNew) ;
  
    virtual   Standard_Real Deflection()  const;
  
  //! Number of triangles in the mesh.
    virtual   Standard_Integer NbTriangles()  const;
  
  //! Number of vertices in the mesh.
    virtual   Standard_Integer NbVertices()  const;
  
  //! Returns the set of triangles of the  current mesh domain
    virtual  const  StlMesh_SequenceOfMeshTriangle& Triangles()  const;
  
  //! Returns  the coordinates   of the  vertices of the
  //! mesh domain   of range <DomainIndex>.   {XV1, YV1,
  //! ZV1, XV2, YV2, ZV2, XV3,.....}
    virtual  const  TColgp_SequenceOfXYZ& Vertices()  const;




  DEFINE_STANDARD_RTTI(StlMesh_MeshDomain)

protected:




private: 


  Standard_Real deflection;
  Standard_Integer nbVertices;
  Standard_Integer nbTriangles;
  TColgp_SequenceOfXYZ vertexCoords;
  StlMesh_SequenceOfMeshTriangle trianglesVertex;


};


#include <StlMesh_MeshDomain.lxx>





#endif // _StlMesh_MeshDomain_HeaderFile
