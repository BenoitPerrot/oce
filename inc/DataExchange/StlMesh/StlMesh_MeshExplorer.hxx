// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StlMesh_MeshExplorer_HeaderFile
#define _StlMesh_MeshExplorer_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StlMesh/Handle_StlMesh_Mesh.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Mathematics/Collections/TColgp_SequenceOfXYZ.hxx>
#include <DataExchange/StlMesh/StlMesh_SequenceOfMeshTriangle.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class StlMesh_Mesh;
class Standard_OutOfRange;
class Standard_NoMoreObject;
class Standard_NoSuchObject;


//! Provides  facilities to explore  the triangles  of
//! each mesh domain.
class StlMesh_MeshExplorer 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT StlMesh_MeshExplorer(const Handle(StlMesh_Mesh)& M);
  
  //! Returns the mesh deflection of the current domain.
  Standard_EXPORT   Standard_Real Deflection()  const;
  
  //! Initializes the exploration  of the  triangles  of
  //! the mesh domain of range <DomainIndex>.
  //! Raised if <DomainIndex> is lower than 1 or greater
  //! than the number of domains.
  Standard_EXPORT   void InitTriangle (const Standard_Integer DomainIndex = 1) ;
  
      Standard_Boolean MoreTriangle()  const;
  
  //! Raised if there is no more triangle in the current
  //! domain.
  Standard_EXPORT   void NextTriangle() ;
  
  //! Raised if there is no more triangle in the current
  //! domain.
  Standard_EXPORT   void TriangleVertices (Standard_Real& X1, Standard_Real& Y1, Standard_Real& Z1, Standard_Real& X2, Standard_Real& Y2, Standard_Real& Z2, Standard_Real& X3, Standard_Real& Y3, Standard_Real& Z3)  const;
  
  //! Raised if there is no more triangle in the current
  //! domain.
  Standard_EXPORT   void TriangleOrientation (Standard_Real& Xn, Standard_Real& Yn, Standard_Real& Zn)  const;




protected:





private:



  Handle(StlMesh_Mesh) mesh;
  Standard_Real xn;
  Standard_Real yn;
  Standard_Real zn;
  Standard_Integer v1;
  Standard_Integer v2;
  Standard_Integer v3;
  Standard_Integer domainIndex;
  Standard_Integer nbTriangles;
  Standard_Integer triangleIndex;
  TColgp_SequenceOfXYZ trianglesVertex;
  StlMesh_SequenceOfMeshTriangle trianglesdef;


};


#include <DataExchange/StlMesh/StlMesh_MeshExplorer.lxx>





#endif // _StlMesh_MeshExplorer_HeaderFile
