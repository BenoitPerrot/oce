// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntCurve_IConicTool_HeaderFile
#define _IntCurve_IConicTool_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <gp_Ax22d.hxx>
#include <GeomAbs_CurveType.hxx>
#include <gp_Trsf2d.hxx>
class gp_Elips2d;
class gp_Lin2d;
class gp_Circ2d;
class gp_Parab2d;
class gp_Hypr2d;
class gp_Pnt2d;
class gp_Vec2d;


//! Implementation of the ImpTool from IntImpParGen
//! for conics of gp.
class IntCurve_IConicTool 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IntCurve_IConicTool();
  
  Standard_EXPORT IntCurve_IConicTool(const IntCurve_IConicTool& IT);
  
  Standard_EXPORT IntCurve_IConicTool(const gp_Elips2d& E);
  
  Standard_EXPORT IntCurve_IConicTool(const gp_Lin2d& L);
  
  Standard_EXPORT IntCurve_IConicTool(const gp_Circ2d& C);
  
  Standard_EXPORT IntCurve_IConicTool(const gp_Parab2d& P);
  
  Standard_EXPORT IntCurve_IConicTool(const gp_Hypr2d& H);
  
  Standard_EXPORT   gp_Pnt2d Value (const Standard_Real X)  const;
  
  Standard_EXPORT   void D1 (const Standard_Real U, gp_Pnt2d& P, gp_Vec2d& T)  const;
  
  Standard_EXPORT   void D2 (const Standard_Real U, gp_Pnt2d& P, gp_Vec2d& T, gp_Vec2d& N)  const;
  
  //! Computes the value of the signed  distance between
  //! the point P and the implicit curve.
  Standard_EXPORT   Standard_Real Distance (const gp_Pnt2d& P)  const;
  
  //! Computes  the   Gradient  of  the  Signed Distance
  //! between  a  point and  the  implicit curve, at the
  //! point P.
  Standard_EXPORT   gp_Vec2d GradDistance (const gp_Pnt2d& P)  const;
  
  //! Returns the   parameter  U of   the point  on  the
  //! implicit curve corresponding to  the point P.  The
  //! correspondance between P and the point P(U) on the
  //! implicit curve must be coherent  with the  way  of
  //! determination of the signed distance.
  Standard_EXPORT   Standard_Real FindParameter (const gp_Pnt2d& P)  const;




protected:





private:



  Standard_Real prm1;
  Standard_Real prm2;
  Standard_Real prm3;
  gp_Ax22d Axis;
  GeomAbs_CurveType type;
  gp_Trsf2d Abs_To_Object;


};







#endif // _IntCurve_IConicTool_HeaderFile
