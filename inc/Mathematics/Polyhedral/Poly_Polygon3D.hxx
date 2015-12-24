// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Poly_Polygon3D_HeaderFile
#define _Poly_Polygon3D_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Mathematics/Polyhedral/Handle_Poly_Polygon3D.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Mathematics/Collections/TColgp_Array1OfPnt.hxx>
#include <Foundation/TColStd/Handle_TColStd_HArray1OfReal.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TColStd_HArray1OfReal;
class Standard_NullObject;
class TColgp_Array1OfPnt;
class TColStd_Array1OfReal;


//! This class Provides a polygon in 3D space. It is generally an approximate representation of a curve.
//! A Polygon3D is defined by a table of nodes. Each node is
//! a 3D point. If the polygon is closed, the point of closure is
//! repeated at the end of the table of nodes.
//! If the polygon is an approximate representation of a curve,
//! you can associate with each of its nodes the value of the
//! parameter of the corresponding point on the curve.
class Poly_Polygon3D : public MMgt_TShared
{

public:

  
  //! onstructs a 3D polygon defined by the table of points, Nodes.
  Standard_EXPORT Poly_Polygon3D(const TColgp_Array1OfPnt& Nodes);
  
  //! Constructs a 3D polygon defined by
  //! the table of points, Nodes, and the parallel table of
  //! parameters, Parameters, where each value of the table
  //! Parameters is the parameter of the corresponding point
  //! on the curve approximated by the constructed polygon.
  //! Warning
  //! Both the Nodes and Parameters tables must have the
  //! same bounds. This property is not checked at construction time.
  Standard_EXPORT Poly_Polygon3D(const TColgp_Array1OfPnt& Nodes, const TColStd_Array1OfReal& Parameters);
  
  //! Returns the deflection of this polygon
  Standard_EXPORT   Standard_Real Deflection()  const;
  
  //! Sets the deflection of this polygon to D. See more on deflection in Poly_Polygon2D
  Standard_EXPORT   void Deflection (const Standard_Real D) ;
  
  //! Returns the number of nodes in this polygon.
  //! Note: If the polygon is closed, the point of closure is
  //! repeated at the end of its table of nodes. Thus, on a closed
  //! triangle the function NbNodes returns 4.
      Standard_Integer NbNodes()  const;
  
  //! Returns the table of nodes for this polygon.
  Standard_EXPORT  const  TColgp_Array1OfPnt& Nodes()  const;
  
  //! Returns the table of the parameters associated with each node in this polygon.
  //! HasParameters function checks if   parameters are associated with the nodes of this polygon.
  Standard_EXPORT   Standard_Boolean HasParameters()  const;
  
  //! Returns true if parameters are associated with the nodes
  //! in this polygon.
  Standard_EXPORT  const  TColStd_Array1OfReal& Parameters()  const;
  
  //! Returns the table of the parameters associated with each node in this polygon.
  //! ChangeParameters function returnes the  array as shared. Therefore if the table is selected by
  //! reference you can, by simply modifying it, directly modify
  //! the data structure of this polygon.
  Standard_EXPORT   TColStd_Array1OfReal& ChangeParameters()  const;




  DEFINE_STANDARD_RTTI(Poly_Polygon3D)

protected:




private: 


  Standard_Real myDeflection;
  TColgp_Array1OfPnt myNodes;
  Handle(TColStd_HArray1OfReal) myParameters;


};


#include <Mathematics/Polyhedral/Poly_Polygon3D.lxx>





#endif // _Poly_Polygon3D_HeaderFile
