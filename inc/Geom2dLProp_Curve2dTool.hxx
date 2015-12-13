// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dLProp_Curve2dTool_HeaderFile
#define _Geom2dLProp_Curve2dTool_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_Geom2d_Curve.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Geom2d_Curve;
class gp_Pnt2d;
class gp_Vec2d;



class Geom2dLProp_Curve2dTool 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Computes the point <P> of parameter <U> on the curve <C>.
  Standard_EXPORT static   void Value (const Handle(Geom2d_Curve)& C, const Standard_Real U, gp_Pnt2d& P) ;
  
  //! Computes the point <P> and first derivative <V1> of
  //! parameter <U> on the curve <C>.
  Standard_EXPORT static   void D1 (const Handle(Geom2d_Curve)& C, const Standard_Real U, gp_Pnt2d& P, gp_Vec2d& V1) ;
  
  //! Computes the point <P>, the first derivative <V1> and second
  //! derivative <V2> of parameter <U> on the curve <C>.
  Standard_EXPORT static   void D2 (const Handle(Geom2d_Curve)& C, const Standard_Real U, gp_Pnt2d& P, gp_Vec2d& V1, gp_Vec2d& V2) ;
  
  //! Computes the point <P>, the first derivative <V1>, the
  //! second derivative <V2> and third derivative <V3> of
  //! parameter <U> on the curve <C>.
  Standard_EXPORT static   void D3 (const Handle(Geom2d_Curve)& C, const Standard_Real U, gp_Pnt2d& P, gp_Vec2d& V1, gp_Vec2d& V2, gp_Vec2d& V3) ;
  
  //! returns the order of continuity of the curve <C>.
  //! returns 1 : first derivative only is computable
  //! returns 2 : first and second derivative only are computable.
  //! returns 3 : first, second and third are computable.
  Standard_EXPORT static   Standard_Integer Continuity (const Handle(Geom2d_Curve)& C) ;
  
  //! returns the first parameter bound of the curve.
  Standard_EXPORT static   Standard_Real FirstParameter (const Handle(Geom2d_Curve)& C) ;
  
  //! returns the last parameter bound of the curve.
  //! FirstParameter must be less than LastParameter.
  Standard_EXPORT static   Standard_Real LastParameter (const Handle(Geom2d_Curve)& C) ;




protected:





private:





};







#endif // _Geom2dLProp_Curve2dTool_HeaderFile
