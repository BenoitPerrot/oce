// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_Boundary_HeaderFile
#define _GeomFill_Boundary_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/GeomFill/Handle_GeomFill_Boundary.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class gp_Pnt;
class gp_Vec;


//! Root class to define a boundary  which will form part of a
//! contour around a gap requiring filling.
//! Any  new type  of  constrained boundary must inherit this class.
//! The GeomFill package provides two classes to define constrained boundaries:
//! -   GeomFill_SimpleBound to define an unattached boundary
//! -   GeomFill_BoundWithSurf to define a boundary attached to a surface.
//! These objects are used to define the boundaries for a
//! GeomFill_ConstrainedFilling framework.
class GeomFill_Boundary : public MMgt_TShared
{

public:

  
  Standard_EXPORT virtual   gp_Pnt Value (const Standard_Real U)  const = 0;
  
  Standard_EXPORT virtual   void D1 (const Standard_Real U, gp_Pnt& P, gp_Vec& V)  const = 0;
  
  Standard_EXPORT virtual   Standard_Boolean HasNormals()  const;
  
  Standard_EXPORT virtual   gp_Vec Norm (const Standard_Real U)  const;
  
  Standard_EXPORT virtual   void D1Norm (const Standard_Real U, gp_Vec& N, gp_Vec& DN)  const;
  
  Standard_EXPORT virtual   void Reparametrize (const Standard_Real First, const Standard_Real Last, const Standard_Boolean HasDF, const Standard_Boolean HasDL, const Standard_Real DF, const Standard_Real DL, const Standard_Boolean Rev)  = 0;
  
  Standard_EXPORT   void Points (gp_Pnt& PFirst, gp_Pnt& PLast)  const;
  
  Standard_EXPORT virtual   void Bounds (Standard_Real& First, Standard_Real& Last)  const = 0;
  
  Standard_EXPORT virtual   Standard_Boolean IsDegenerated()  const = 0;
  
  Standard_EXPORT   Standard_Real Tol3d()  const;
  
  Standard_EXPORT   void Tol3d (const Standard_Real Tol) ;
  
  Standard_EXPORT   Standard_Real Tolang()  const;
  
  Standard_EXPORT   void Tolang (const Standard_Real Tol) ;




  DEFINE_STANDARD_RTTI(GeomFill_Boundary)

protected:

  
  Standard_EXPORT GeomFill_Boundary(const Standard_Real Tol3d, const Standard_Real Tolang);



private: 


  Standard_Real myT3d;
  Standard_Real myTang;


};







#endif // _GeomFill_Boundary_HeaderFile
