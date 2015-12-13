// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Poly_Polygon2D_HeaderFile
#define _Poly_Polygon2D_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Poly_Polygon2D.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <TColgp_Array1OfPnt2d.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NullObject;
class TColgp_Array1OfPnt2d;


//! Provides a polygon in 2D space (for example, in the
//! parametric space of a surface). It is generally an
//! approximate representation of a curve.
//! A Polygon2D is defined by a table of nodes. Each node is
//! a 2D point. If the polygon is closed, the point of closure is
//! repeated at the end of the table of nodes.
class Poly_Polygon2D : public MMgt_TShared
{

public:

  
  //! Constructs a 2D polygon defined by the table of points, <Nodes>.
  Standard_EXPORT Poly_Polygon2D(const TColgp_Array1OfPnt2d& Nodes);
  
  //! Returns the deflection of this polygon.
  //! Deflection is used in cases where the polygon is an
  //! approximate representation of a curve. Deflection
  //! represents the maximum distance permitted between any
  //! point on the curve and the corresponding point on the polygon.
  //! By default the deflection value is equal to 0. An algorithm
  //! using this 2D polygon with a deflection value equal to 0
  //! considers that it is working with a true polygon and not with
  //! an approximate representation of a curve. The Deflection
  //! function is used to modify the deflection value of this polygon.
  //! The deflection value can be used by any algorithm working  with 2D polygons.
  //! For example:
  //! -   An algorithm may use a unique deflection value for all
  //! its polygons. In this case it is not necessary to use the
  //! Deflection function.
  //! -   Or an algorithm may want to attach a different
  //! deflection to each polygon. In this case, the Deflection
  //! function is used to set a value on each polygon, and
  //! later to fetch the value.
  Standard_EXPORT   Standard_Real Deflection()  const;
  
  //! Sets the deflection of this polygon to D
  Standard_EXPORT   void Deflection (const Standard_Real D) ;
  
  //! Returns the number of nodes in this polygon.
  //! Note: If the polygon is closed, the point of closure is
  //! repeated at the end of its table of nodes. Thus, on a closed
  //! triangle, the function NbNodes returns 4.
      Standard_Integer NbNodes()  const;
  
  //! Returns the table of nodes for this polygon.
  Standard_EXPORT  const  TColgp_Array1OfPnt2d& Nodes()  const;




  DEFINE_STANDARD_RTTI(Poly_Polygon2D)

protected:




private: 


  Standard_Real myDeflection;
  TColgp_Array1OfPnt2d myNodes;


};


#include <Poly_Polygon2D.lxx>





#endif // _Poly_Polygon2D_HeaderFile
