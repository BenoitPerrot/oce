// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_ArrayOfQuadrangleStrips_HeaderFile
#define _Graphic3d_ArrayOfQuadrangleStrips_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Graphic3d_ArrayOfQuadrangleStrips.hxx>

#include <Graphic3d_ArrayOfPrimitives.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>


//! Contains quadrangles strip array definition
class Graphic3d_ArrayOfQuadrangleStrips : public Graphic3d_ArrayOfPrimitives
{

public:

  
  //! Creates an array of quadrangle strips,
  //! a polygon can be filled as:
  //! 1) creating a single strip defined with his vertexs.
  //! i.e:
  //! myArray = Graphic3d_ArrayOfQuadrangleStrips(7)
  //! myArray->AddVertex(x1,y1,z1)
  //! ....
  //! myArray->AddVertex(x7,y7,z7)
  //! 2) creating separate strips defined with a predefined
  //! number of strips and the number of vertex per strip.
  //! i.e:
  //! myArray = Graphic3d_ArrayOfQuadrangleStrips(8,2)
  //! myArray->AddBound(4)
  //! myArray->AddVertex(x1,y1,z1)
  //! ....
  //! myArray->AddVertex(x4,y4,z4)
  //! myArray->AddBound(4)
  //! myArray->AddVertex(x5,y5,z5)
  //! ....
  //! myArray->AddVertex(x8,y8,z8)
  //!
  //! <maxVertexs> defined the maximun allowed vertex number in the array.
  //! <maxStrips> defined the maximun allowed strip number in the array.
  //! The number of quadrangle really drawn is :
  //! VertexNumber()/2-Min(1,BoundNumber())
  Standard_EXPORT Graphic3d_ArrayOfQuadrangleStrips(const Standard_Integer maxVertexs, const Standard_Integer maxStrips = 0, const Standard_Boolean hasVNormals = Standard_False, const Standard_Boolean hasVColors = Standard_False, const Standard_Boolean hasSColors = Standard_False, const Standard_Boolean hasTexels = Standard_False);




  DEFINE_STANDARD_RTTI(Graphic3d_ArrayOfQuadrangleStrips)

protected:




private: 




};







#endif // _Graphic3d_ArrayOfQuadrangleStrips_HeaderFile
