// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Poly_PolygonOnTriangulation_HeaderFile
#define _Poly_PolygonOnTriangulation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Poly_PolygonOnTriangulation.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/TColStd/TColStd_Array1OfInteger.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TColStd_HArray1OfReal;
class Standard_NullObject;
class TColStd_Array1OfInteger;
class TColStd_Array1OfReal;


//! This class provides a polygon in 3D space, based on the triangulation
//! of a surface. It may be the approximate representation of a
//! curve on the surface, or more generally the shape.
//! A PolygonOnTriangulation is defined by a table of
//! nodes. Each node is an index in the table of nodes specific
//! to a triangulation, and represents a point on the surface. If
//! the polygon is closed, the index of the point of closure is
//! repeated at the end of the table of nodes.
//! If the polygon is an approximate representation of a curve
//! on a surface, you can associate with each of its nodes the
//! value of the parameter of the corresponding point on the
//! curve.represents a 3d Polygon
class Poly_PolygonOnTriangulation : public MMgt_TShared
{

public:

  
  //! Constructs a 3D polygon on the triangulation of a shape,
  //! defined by the table of nodes, <Nodes>.
  Standard_EXPORT Poly_PolygonOnTriangulation(const TColStd_Array1OfInteger& Nodes);
  

  //! Constructs a 3D polygon on the triangulation of a shape, defined by:
  //! -   the table of nodes, Nodes, and the table of parameters, <Parameters>.
  //! where:
  //! -   a node value is an index in the table of nodes specific
  //! to an existing triangulation of a shape
  //! -   and a parameter value is the value of the parameter of
  //! the corresponding point on the curve approximated by
  //! the constructed polygon.
  //! Warning
  //! The tables Nodes and Parameters must be the same size.
  //! This property is not checked at construction time.
  Standard_EXPORT Poly_PolygonOnTriangulation(const TColStd_Array1OfInteger& Nodes, const TColStd_Array1OfReal& Parameters);
  
  //! Returns the deflection of this polygon
  Standard_EXPORT   Standard_Real Deflection()  const;
  
  //! Sets the deflection of this polygon to D.
  //! See more on deflection in Poly_Polygones2D.
  Standard_EXPORT   void Deflection (const Standard_Real D) ;
  

  //! Returns the number of nodes for this polygon.
  //! Note: If the polygon is closed, the point of closure is
  //! repeated at the end of its table of nodes. Thus, on a closed
  //! triangle, the function NbNodes returns 4.
      Standard_Integer NbNodes()  const;
  
  //! Returns the table of nodes for this polygon. A node value
  //! is an index in the table of nodes specific to an existing
  //! triangulation of a shape.
  Standard_EXPORT  const  TColStd_Array1OfInteger& Nodes()  const;
  

  //! Returns true if parameters are associated with the nodes in this polygon.
  Standard_EXPORT   Standard_Boolean HasParameters()  const;
  
  //! Returns the table of the parameters associated with each node in this polygon.
  //! Warning
  //! Use the function HasParameters to check if parameters
  //! are associated with the nodes in this polygon.
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) Parameters()  const;




  DEFINE_STANDARD_RTTI(Poly_PolygonOnTriangulation)

protected:




private: 


  Standard_Real myDeflection;
  TColStd_Array1OfInteger myNodes;
  Handle(TColStd_HArray1OfReal) myParameters;


};


#include <Poly_PolygonOnTriangulation.lxx>





#endif // _Poly_PolygonOnTriangulation_HeaderFile
