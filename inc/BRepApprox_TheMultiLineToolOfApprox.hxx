// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepApprox_TheMultiLineToolOfApprox_HeaderFile
#define _BRepApprox_TheMultiLineToolOfApprox_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <Geometry/Approx/Approx_Status.hxx>
class BRepApprox_TheMultiLineOfApprox;
class ApproxInt_SvSurfaces;
class TColgp_Array1OfPnt;
class TColgp_Array1OfPnt2d;
class TColgp_Array1OfVec;
class TColgp_Array1OfVec2d;



class BRepApprox_TheMultiLineToolOfApprox 
{
public:

  DEFINE_STANDARD_ALLOC

  
    static   Standard_Integer FirstPoint (const BRepApprox_TheMultiLineOfApprox& ML) ;
  
    static   Standard_Integer LastPoint (const BRepApprox_TheMultiLineOfApprox& ML) ;
  
    static   Standard_Integer NbP2d (const BRepApprox_TheMultiLineOfApprox& ML) ;
  
    static   Standard_Integer NbP3d (const BRepApprox_TheMultiLineOfApprox& ML) ;
  
    static   void Value (const BRepApprox_TheMultiLineOfApprox& ML, const Standard_Integer MPointIndex, TColgp_Array1OfPnt& tabPt) ;
  
    static   void Value (const BRepApprox_TheMultiLineOfApprox& ML, const Standard_Integer MPointIndex, TColgp_Array1OfPnt2d& tabPt2d) ;
  
    static   void Value (const BRepApprox_TheMultiLineOfApprox& ML, const Standard_Integer MPointIndex, TColgp_Array1OfPnt& tabPt, TColgp_Array1OfPnt2d& tabPt2d) ;
  
    static   Standard_Boolean Tangency (const BRepApprox_TheMultiLineOfApprox& ML, const Standard_Integer MPointIndex, TColgp_Array1OfVec& tabV) ;
  
    static   Standard_Boolean Tangency (const BRepApprox_TheMultiLineOfApprox& ML, const Standard_Integer MPointIndex, TColgp_Array1OfVec2d& tabV2d) ;
  
    static   Standard_Boolean Tangency (const BRepApprox_TheMultiLineOfApprox& ML, const Standard_Integer MPointIndex, TColgp_Array1OfVec& tabV, TColgp_Array1OfVec2d& tabV2d) ;
  
    static   Standard_Boolean Curvature (const BRepApprox_TheMultiLineOfApprox& ML, const Standard_Integer MPointIndex, TColgp_Array1OfVec& tabV) ;
  
    static   Standard_Boolean Curvature (const BRepApprox_TheMultiLineOfApprox& ML, const Standard_Integer MPointIndex, TColgp_Array1OfVec2d& tabV2d) ;
  
    static   Standard_Boolean Curvature (const BRepApprox_TheMultiLineOfApprox& ML, const Standard_Integer MPointIndex, TColgp_Array1OfVec& tabV, TColgp_Array1OfVec2d& tabV2d) ;
  
    static   BRepApprox_TheMultiLineOfApprox MakeMLBetween (const BRepApprox_TheMultiLineOfApprox& ML, const Standard_Integer I1, const Standard_Integer I2, const Standard_Integer NbPMin) ;
  
    static   Approx_Status WhatStatus (const BRepApprox_TheMultiLineOfApprox& ML, const Standard_Integer I1, const Standard_Integer I2) ;




protected:





private:





};

#define TheMultiLine BRepApprox_TheMultiLineOfApprox
#define TheMultiLine_hxx <BRepApprox_TheMultiLineOfApprox.hxx>
#define TheMultiMPoint ApproxInt_SvSurfaces
#define TheMultiMPoint_hxx <ApproxInt_SvSurfaces.hxx>
#define ApproxInt_MultiLineTool BRepApprox_TheMultiLineToolOfApprox
#define ApproxInt_MultiLineTool_hxx <BRepApprox_TheMultiLineToolOfApprox.hxx>

#include <ApproxInt_MultiLineTool.lxx>

#undef TheMultiLine
#undef TheMultiLine_hxx
#undef TheMultiMPoint
#undef TheMultiMPoint_hxx
#undef ApproxInt_MultiLineTool
#undef ApproxInt_MultiLineTool_hxx




#endif // _BRepApprox_TheMultiLineToolOfApprox_HeaderFile
