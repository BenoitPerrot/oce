// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_ThePolygonToolOfInterCSurf_HeaderFile
#define _HLRBRep_ThePolygonToolOfInterCSurf_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_OutOfRange;
class gp_Pnt;
class HLRBRep_ThePolygonOfInterCSurf;
class Bnd_Box;



class HLRBRep_ThePolygonToolOfInterCSurf 
{
public:

  DEFINE_STANDARD_ALLOC

  
    static  const  Bnd_Box& Bounding (const HLRBRep_ThePolygonOfInterCSurf& thePolygon) ;
  
    static   Standard_Real DeflectionOverEstimation (const HLRBRep_ThePolygonOfInterCSurf& thePolygon) ;
  
    static   Standard_Boolean Closed (const HLRBRep_ThePolygonOfInterCSurf& thePolygon) ;
  
    static   Standard_Integer NbSegments (const HLRBRep_ThePolygonOfInterCSurf& thePolygon) ;
  
    static  const  gp_Pnt& BeginOfSeg (const HLRBRep_ThePolygonOfInterCSurf& thePolygon, const Standard_Integer Index) ;
  
    static  const  gp_Pnt& EndOfSeg (const HLRBRep_ThePolygonOfInterCSurf& thePolygon, const Standard_Integer Index) ;
  
  Standard_EXPORT static   void Dump (const HLRBRep_ThePolygonOfInterCSurf& thePolygon) ;




protected:





private:





};

#define ThePoint gp_Pnt
#define ThePoint_hxx <Mathematics/Primitives/gp_Pnt.hxx>
#define ThePolygon HLRBRep_ThePolygonOfInterCSurf
#define ThePolygon_hxx <HLRBRep_ThePolygonOfInterCSurf.hxx>
#define TheBoundingBox Bnd_Box
#define TheBoundingBox_hxx <Mathematics/BoundingVolumes/Bnd_Box.hxx>
#define IntCurveSurface_PolygonTool HLRBRep_ThePolygonToolOfInterCSurf
#define IntCurveSurface_PolygonTool_hxx <HLRBRep_ThePolygonToolOfInterCSurf.hxx>

#include <IntCurveSurface_PolygonTool.lxx>

#undef ThePoint
#undef ThePoint_hxx
#undef ThePolygon
#undef ThePolygon_hxx
#undef TheBoundingBox
#undef TheBoundingBox_hxx
#undef IntCurveSurface_PolygonTool
#undef IntCurveSurface_PolygonTool_hxx




#endif // _HLRBRep_ThePolygonToolOfInterCSurf_HeaderFile
