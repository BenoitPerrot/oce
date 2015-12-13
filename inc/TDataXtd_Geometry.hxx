// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataXtd_Geometry_HeaderFile
#define _TDataXtd_Geometry_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TDataXtd_Geometry.hxx>

#include <TDataXtd_GeometryEnum.hxx>
#include <TDF_Attribute.hxx>
#include <Handle_TNaming_NamedShape.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_TDF_RelocationTable.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class TDF_Label;
class TNaming_NamedShape;
class gp_Pnt;
class gp_Ax1;
class gp_Lin;
class gp_Circ;
class gp_Elips;
class gp_Pln;
class gp_Cylinder;
class Standard_GUID;
class TDF_Attribute;
class TDF_RelocationTable;


//! This class is used to model construction geometry.
//! The specific geometric construction of the
//! attribute is defined by an element of the
//! enumeration TDataXtd_GeometryEnum.
//! This attribute may  also be used to qualify  underlying
//! geometry  of   the  associated NamedShape.     for
//! Constructuion element by example.
class TDataXtd_Geometry : public TDF_Attribute
{

public:

  
  //! API class methods
  //! =================
  //! Finds, or  creates, a Geometry attribute  defined by the label label.
  //! The default type of geometry is the value
  //! ANY_GEOM of the enumeration TDataXtd_GeometryEnum.
  //! To specify another value of this enumeration, use
  //! the function SetType.
  Standard_EXPORT static   Handle(TDataXtd_Geometry) Set (const TDF_Label& label) ;
  

  //! Returns the label L used to define the type of
  //! geometric construction for the geometry attribute.
  Standard_EXPORT static   TDataXtd_GeometryEnum Type (const TDF_Label& L) ;
  
  //! Returns the topological attribute S used to define
  //! the type of geometric construction for the geometry attribute.
  Standard_EXPORT static   TDataXtd_GeometryEnum Type (const Handle(TNaming_NamedShape)& S) ;
  

  //! Returns the point attribute defined by the label L and the point G.
  Standard_EXPORT static   Standard_Boolean Point (const TDF_Label& L, gp_Pnt& G) ;
  

  //! Returns the point attribute defined by the topological attribute S and the point G.
  Standard_EXPORT static   Standard_Boolean Point (const Handle(TNaming_NamedShape)& S, gp_Pnt& G) ;
  

  //! Returns the axis attribute defined by the label L and the axis G.
  Standard_EXPORT static   Standard_Boolean Axis (const TDF_Label& L, gp_Ax1& G) ;
  

  //! Returns the axis attribute defined by the topological attribute S and the axis G.
  Standard_EXPORT static   Standard_Boolean Axis (const Handle(TNaming_NamedShape)& S, gp_Ax1& G) ;
  

  //! Returns the line attribute defined by the label L and the line G.
  Standard_EXPORT static   Standard_Boolean Line (const TDF_Label& L, gp_Lin& G) ;
  

  //! Returns the line attribute defined by the topological attribute S and the line G.
  Standard_EXPORT static   Standard_Boolean Line (const Handle(TNaming_NamedShape)& S, gp_Lin& G) ;
  

  //! Returns the circle attribute defined by the label L and the circle G.
  Standard_EXPORT static   Standard_Boolean Circle (const TDF_Label& L, gp_Circ& G) ;
  

  //! Returns the circle attribute defined by the topological attribute S and the circle G.
  Standard_EXPORT static   Standard_Boolean Circle (const Handle(TNaming_NamedShape)& S, gp_Circ& G) ;
  

  //! Returns the ellipse attribute defined by the label L and the ellipse G.
  Standard_EXPORT static   Standard_Boolean Ellipse (const TDF_Label& L, gp_Elips& G) ;
  

  //! Returns the ellipse attribute defined by the
  //! topological attribute S and the ellipse G.
  Standard_EXPORT static   Standard_Boolean Ellipse (const Handle(TNaming_NamedShape)& S, gp_Elips& G) ;
  

  //! Returns the plane attribute defined by the label L and the plane G.
  Standard_EXPORT static   Standard_Boolean Plane (const TDF_Label& L, gp_Pln& G) ;
  

  //! Returns the plane attribute defined by the
  //! topological attribute S and the plane G.
  Standard_EXPORT static   Standard_Boolean Plane (const Handle(TNaming_NamedShape)& S, gp_Pln& G) ;
  

  //! Returns the cylinder attribute defined by the label L and the cylinder G.
  Standard_EXPORT static   Standard_Boolean Cylinder (const TDF_Label& L, gp_Cylinder& G) ;
  

  //! Returns the cylinder attribute defined by the
  //! topological attribute S and the cylinder G.
  Standard_EXPORT static   Standard_Boolean Cylinder (const Handle(TNaming_NamedShape)& S, gp_Cylinder& G) ;
  
  //! Returns the GUID for geometry attributes.
  Standard_EXPORT static  const  Standard_GUID& GetID() ;
  
  //! This and the next methods are used to  retrieve  underlying geometry of  the
  //! NamedShape, even   if  noone Geometry   Attribute  is
  //! associated  .  if not  found or not compliant geometry return False.
  Standard_EXPORT TDataXtd_Geometry();
  
  //! Returns the type of geometric construction T of this attribute.
  //! T will be a value of the enumeration TDataXtd_GeometryEnum.
  Standard_EXPORT   void SetType (const TDataXtd_GeometryEnum T) ;
  
  //! Returns the type of geometric construction.
  Standard_EXPORT   TDataXtd_GeometryEnum GetType()  const;
  
  Standard_EXPORT  const  Standard_GUID& ID()  const;
  
  Standard_EXPORT   void Restore (const Handle(TDF_Attribute)& with) ;
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& into, const Handle(TDF_RelocationTable)& RT)  const;
  
  Standard_EXPORT virtual   Standard_OStream& Dump (Standard_OStream& anOS)  const;




  DEFINE_STANDARD_RTTI(TDataXtd_Geometry)

protected:




private: 


  TDataXtd_GeometryEnum myType;


};







#endif // _TDataXtd_Geometry_HeaderFile
