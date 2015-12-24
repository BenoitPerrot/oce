// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Contap_TheSearch_HeaderFile
#define _Contap_TheSearch_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingAlgorithms/Contap/Contap_SequenceOfSegmentOfTheSearch.hxx>
#include <ModelingAlgorithms/Contap/Contap_SequenceOfPathPointOfTheSearch.hxx>
#include <Geometry/Adaptor3d/Handle_Adaptor3d_HVertex.hxx>
#include <Geometry/Adaptor2d/Handle_Adaptor2d_HCurve2d.hxx>
#include <Geometry/Adaptor3d/Handle_Adaptor3d_TopolTool.hxx>
#include <ModelingAlgorithms/Contap/Handle_Contap_SequenceNodeOfSequenceOfPathPointOfTheSearch.hxx>
#include <ModelingAlgorithms/Contap/Handle_Contap_SequenceNodeOfSequenceOfSegmentOfTheSearch.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class StdFail_NotDone;
class Standard_OutOfRange;
class Standard_ConstructionError;
class Adaptor3d_HVertex;
class Adaptor2d_HCurve2d;
class Contap_HCurve2dTool;
class Contap_HContTool;
class Adaptor3d_TopolTool;
class Contap_ArcFunction;
class Contap_ThePathPointOfTheSearch;
class Contap_SequenceOfPathPointOfTheSearch;
class Contap_SequenceNodeOfSequenceOfPathPointOfTheSearch;
class Contap_TheSegmentOfTheSearch;
class Contap_SequenceOfSegmentOfTheSearch;
class Contap_SequenceNodeOfSequenceOfSegmentOfTheSearch;



class Contap_TheSearch 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Contap_TheSearch();
  
  Standard_EXPORT   void Perform (Contap_ArcFunction& F, const Handle(Adaptor3d_TopolTool)& Domain, const Standard_Real TolBoundary, const Standard_Real TolTangency, const Standard_Boolean RecheckOnRegularity = Standard_False) ;
  
      Standard_Boolean IsDone()  const;
  
      Standard_Boolean AllArcSolution()  const;
  
      Standard_Integer NbPoints()  const;
  
     const  Contap_ThePathPointOfTheSearch& Point (const Standard_Integer Index)  const;
  
      Standard_Integer NbSegments()  const;
  
     const  Contap_TheSegmentOfTheSearch& Segment (const Standard_Integer Index)  const;




protected:





private:



  Standard_Boolean done;
  Standard_Boolean all;
  Contap_SequenceOfSegmentOfTheSearch sseg;
  Contap_SequenceOfPathPointOfTheSearch spnt;


};

#define TheVertex Handle(Adaptor3d_HVertex)
#define TheVertex_hxx <Geometry/Adaptor3d/Adaptor3d_HVertex.hxx>
#define TheArc Handle(Adaptor2d_HCurve2d)
#define TheArc_hxx <Geometry/Adaptor2d/Adaptor2d_HCurve2d.hxx>
#define TheArcTool Contap_HCurve2dTool
#define TheArcTool_hxx <ModelingAlgorithms/Contap/Contap_HCurve2dTool.hxx>
#define TheSOBTool Contap_HContTool
#define TheSOBTool_hxx <ModelingAlgorithms/Contap/Contap_HContTool.hxx>
#define Handle_TheTopolTool Handle_Adaptor3d_TopolTool
#define TheTopolTool Adaptor3d_TopolTool
#define TheTopolTool_hxx <Geometry/Adaptor3d/Adaptor3d_TopolTool.hxx>
#define TheFunction Contap_ArcFunction
#define TheFunction_hxx <ModelingAlgorithms/Contap/Contap_ArcFunction.hxx>
#define IntStart_ThePathPoint Contap_ThePathPointOfTheSearch
#define IntStart_ThePathPoint_hxx <ModelingAlgorithms/Contap/Contap_ThePathPointOfTheSearch.hxx>
#define IntStart_SequenceOfPathPoint Contap_SequenceOfPathPointOfTheSearch
#define IntStart_SequenceOfPathPoint_hxx <ModelingAlgorithms/Contap/Contap_SequenceOfPathPointOfTheSearch.hxx>
#define IntStart_SequenceNodeOfSequenceOfPathPoint Contap_SequenceNodeOfSequenceOfPathPointOfTheSearch
#define IntStart_SequenceNodeOfSequenceOfPathPoint_hxx <ModelingAlgorithms/Contap/Contap_SequenceNodeOfSequenceOfPathPointOfTheSearch.hxx>
#define IntStart_SequenceNodeOfSequenceOfPathPoint Contap_SequenceNodeOfSequenceOfPathPointOfTheSearch
#define IntStart_SequenceNodeOfSequenceOfPathPoint_hxx <ModelingAlgorithms/Contap/Contap_SequenceNodeOfSequenceOfPathPointOfTheSearch.hxx>
#define IntStart_TheSegment Contap_TheSegmentOfTheSearch
#define IntStart_TheSegment_hxx <ModelingAlgorithms/Contap/Contap_TheSegmentOfTheSearch.hxx>
#define IntStart_SequenceOfSegment Contap_SequenceOfSegmentOfTheSearch
#define IntStart_SequenceOfSegment_hxx <ModelingAlgorithms/Contap/Contap_SequenceOfSegmentOfTheSearch.hxx>
#define IntStart_SequenceNodeOfSequenceOfSegment Contap_SequenceNodeOfSequenceOfSegmentOfTheSearch
#define IntStart_SequenceNodeOfSequenceOfSegment_hxx <ModelingAlgorithms/Contap/Contap_SequenceNodeOfSequenceOfSegmentOfTheSearch.hxx>
#define IntStart_SequenceNodeOfSequenceOfSegment Contap_SequenceNodeOfSequenceOfSegmentOfTheSearch
#define IntStart_SequenceNodeOfSequenceOfSegment_hxx <ModelingAlgorithms/Contap/Contap_SequenceNodeOfSequenceOfSegmentOfTheSearch.hxx>
#define Handle_IntStart_SequenceNodeOfSequenceOfPathPoint Handle_Contap_SequenceNodeOfSequenceOfPathPointOfTheSearch
#define IntStart_SequenceNodeOfSequenceOfPathPoint_Type_() Contap_SequenceNodeOfSequenceOfPathPointOfTheSearch_Type_()
#define Handle_IntStart_SequenceNodeOfSequenceOfPathPoint Handle_Contap_SequenceNodeOfSequenceOfPathPointOfTheSearch
#define IntStart_SequenceNodeOfSequenceOfPathPoint_Type_() Contap_SequenceNodeOfSequenceOfPathPointOfTheSearch_Type_()
#define Handle_IntStart_SequenceNodeOfSequenceOfSegment Handle_Contap_SequenceNodeOfSequenceOfSegmentOfTheSearch
#define IntStart_SequenceNodeOfSequenceOfSegment_Type_() Contap_SequenceNodeOfSequenceOfSegmentOfTheSearch_Type_()
#define Handle_IntStart_SequenceNodeOfSequenceOfSegment Handle_Contap_SequenceNodeOfSequenceOfSegmentOfTheSearch
#define IntStart_SequenceNodeOfSequenceOfSegment_Type_() Contap_SequenceNodeOfSequenceOfSegmentOfTheSearch_Type_()
#define IntStart_SearchOnBoundaries Contap_TheSearch
#define IntStart_SearchOnBoundaries_hxx <ModelingAlgorithms/Contap/Contap_TheSearch.hxx>

#include <ModelingAlgorithms/IntStart/IntStart_SearchOnBoundaries.lxx>

#undef TheVertex
#undef TheVertex_hxx
#undef TheArc
#undef TheArc_hxx
#undef TheArcTool
#undef TheArcTool_hxx
#undef TheSOBTool
#undef TheSOBTool_hxx
#undef Handle_TheTopolTool
#undef TheTopolTool
#undef TheTopolTool_hxx
#undef TheFunction
#undef TheFunction_hxx
#undef IntStart_ThePathPoint
#undef IntStart_ThePathPoint_hxx
#undef IntStart_SequenceOfPathPoint
#undef IntStart_SequenceOfPathPoint_hxx
#undef IntStart_SequenceNodeOfSequenceOfPathPoint
#undef IntStart_SequenceNodeOfSequenceOfPathPoint_hxx
#undef IntStart_SequenceNodeOfSequenceOfPathPoint
#undef IntStart_SequenceNodeOfSequenceOfPathPoint_hxx
#undef IntStart_TheSegment
#undef IntStart_TheSegment_hxx
#undef IntStart_SequenceOfSegment
#undef IntStart_SequenceOfSegment_hxx
#undef IntStart_SequenceNodeOfSequenceOfSegment
#undef IntStart_SequenceNodeOfSequenceOfSegment_hxx
#undef IntStart_SequenceNodeOfSequenceOfSegment
#undef IntStart_SequenceNodeOfSequenceOfSegment_hxx
#undef Handle_IntStart_SequenceNodeOfSequenceOfPathPoint
#undef IntStart_SequenceNodeOfSequenceOfPathPoint_Type_
#undef Handle_IntStart_SequenceNodeOfSequenceOfPathPoint
#undef IntStart_SequenceNodeOfSequenceOfPathPoint_Type_
#undef Handle_IntStart_SequenceNodeOfSequenceOfSegment
#undef IntStart_SequenceNodeOfSequenceOfSegment_Type_
#undef Handle_IntStart_SequenceNodeOfSequenceOfSegment
#undef IntStart_SequenceNodeOfSequenceOfSegment_Type_
#undef IntStart_SearchOnBoundaries
#undef IntStart_SearchOnBoundaries_hxx




#endif // _Contap_TheSearch_HeaderFile
