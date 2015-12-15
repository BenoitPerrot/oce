// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntCurveSurface_ThePolygonToolOfHInter_HeaderFile
#define _IntCurveSurface_ThePolygonToolOfHInter_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_OutOfRange;
class gp_Pnt;
class IntCurveSurface_ThePolygonOfHInter;
class Bnd_Box;



class IntCurveSurface_ThePolygonToolOfHInter 
{
public:

  DEFINE_STANDARD_ALLOC

  
    static  const  Bnd_Box& Bounding (const IntCurveSurface_ThePolygonOfHInter& thePolygon) ;
  
    static   Standard_Real DeflectionOverEstimation (const IntCurveSurface_ThePolygonOfHInter& thePolygon) ;
  
    static   Standard_Boolean Closed (const IntCurveSurface_ThePolygonOfHInter& thePolygon) ;
  
    static   Standard_Integer NbSegments (const IntCurveSurface_ThePolygonOfHInter& thePolygon) ;
  
    static  const  gp_Pnt& BeginOfSeg (const IntCurveSurface_ThePolygonOfHInter& thePolygon, const Standard_Integer Index) ;
  
    static  const  gp_Pnt& EndOfSeg (const IntCurveSurface_ThePolygonOfHInter& thePolygon, const Standard_Integer Index) ;
  
  Standard_EXPORT static   void Dump (const IntCurveSurface_ThePolygonOfHInter& thePolygon) ;




protected:





private:





};

#define ThePoint gp_Pnt
#define ThePoint_hxx <Mathematics/Primitives/gp_Pnt.hxx>
#define ThePolygon IntCurveSurface_ThePolygonOfHInter
#define ThePolygon_hxx <IntCurveSurface_ThePolygonOfHInter.hxx>
#define TheBoundingBox Bnd_Box
#define TheBoundingBox_hxx <Mathematics/BoundingVolumes/Bnd_Box.hxx>
#define IntCurveSurface_PolygonTool IntCurveSurface_ThePolygonToolOfHInter
#define IntCurveSurface_PolygonTool_hxx <IntCurveSurface_ThePolygonToolOfHInter.hxx>

#include <IntCurveSurface_PolygonTool.lxx>

#undef ThePoint
#undef ThePoint_hxx
#undef ThePolygon
#undef ThePolygon_hxx
#undef TheBoundingBox
#undef TheBoundingBox_hxx
#undef IntCurveSurface_PolygonTool
#undef IntCurveSurface_PolygonTool_hxx




#endif // _IntCurveSurface_ThePolygonToolOfHInter_HeaderFile
