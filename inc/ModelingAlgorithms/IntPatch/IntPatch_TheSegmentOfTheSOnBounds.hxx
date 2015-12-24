// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPatch_TheSegmentOfTheSOnBounds_HeaderFile
#define _IntPatch_TheSegmentOfTheSOnBounds_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Geometry/Adaptor2d/Handle_Adaptor2d_HCurve2d.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingAlgorithms/IntPatch/IntPatch_ThePathPointOfTheSOnBounds.hxx>
#include <Geometry/Adaptor3d/Handle_Adaptor3d_HVertex.hxx>
class Adaptor2d_HCurve2d;
class Standard_DomainError;
class Adaptor3d_HVertex;
class IntPatch_ThePathPointOfTheSOnBounds;



class IntPatch_TheSegmentOfTheSOnBounds 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IntPatch_TheSegmentOfTheSOnBounds();
  
      void SetValue (const Handle(Adaptor2d_HCurve2d)& A) ;
  
  Standard_EXPORT   void SetLimitPoint (const IntPatch_ThePathPointOfTheSOnBounds& V, const Standard_Boolean First) ;
  
     const  Handle(Adaptor2d_HCurve2d)& Curve()  const;
  
      Standard_Boolean HasFirstPoint()  const;
  
     const  IntPatch_ThePathPointOfTheSOnBounds& FirstPoint()  const;
  
      Standard_Boolean HasLastPoint()  const;
  
     const  IntPatch_ThePathPointOfTheSOnBounds& LastPoint()  const;




protected:





private:



  Handle(Adaptor2d_HCurve2d) arc;
  Standard_Boolean hasfp;
  IntPatch_ThePathPointOfTheSOnBounds thefp;
  Standard_Boolean haslp;
  IntPatch_ThePathPointOfTheSOnBounds thelp;


};

#define TheVertex Handle(Adaptor3d_HVertex)
#define TheVertex_hxx <Geometry/Adaptor3d/Adaptor3d_HVertex.hxx>
#define TheArc Handle(Adaptor2d_HCurve2d)
#define TheArc_hxx <Geometry/Adaptor2d/Adaptor2d_HCurve2d.hxx>
#define ThePathPoint IntPatch_ThePathPointOfTheSOnBounds
#define ThePathPoint_hxx <ModelingAlgorithms/IntPatch/IntPatch_ThePathPointOfTheSOnBounds.hxx>
#define IntStart_Segment IntPatch_TheSegmentOfTheSOnBounds
#define IntStart_Segment_hxx <ModelingAlgorithms/IntPatch/IntPatch_TheSegmentOfTheSOnBounds.hxx>

#include <ModelingAlgorithms/IntStart/IntStart_Segment.lxx>

#undef TheVertex
#undef TheVertex_hxx
#undef TheArc
#undef TheArc_hxx
#undef ThePathPoint
#undef ThePathPoint_hxx
#undef IntStart_Segment
#undef IntStart_Segment_hxx




#endif // _IntPatch_TheSegmentOfTheSOnBounds_HeaderFile
