// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _QANewModTopOpe_Tools_HeaderFile
#define _QANewModTopOpe_Tools_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <BOPAlgo_PPaveFiller.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <BOPAlgo_PBuilder.hxx>
#include <ModelingData/TopAbs/TopAbs_State.hxx>
class TopoDS_Shape;
class TopTools_ListOfShape;
class TopoDS_Edge;
class TopTools_IndexedDataMapOfShapeListOfShape;


//! to  provide  several  tools  for  porting  to  OCC  5.0  (mkk)
class QANewModTopOpe_Tools 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   Standard_Integer NbPoints (const BOPAlgo_PPaveFiller& theDSFiller) ;
  
  Standard_EXPORT static   TopoDS_Shape NewVertex (const BOPAlgo_PPaveFiller& theDSFiller, const Standard_Integer theIndex) ;
  
  Standard_EXPORT static   Standard_Boolean HasSameDomain (const BOPAlgo_PBuilder& theBuilder, const TopoDS_Shape& theFace) ;
  
  Standard_EXPORT static   void SameDomain (const BOPAlgo_PBuilder& theBuilder, const TopoDS_Shape& theFace, TopTools_ListOfShape& theResultList) ;
  
  Standard_EXPORT static   Standard_Boolean IsSplit (const BOPAlgo_PPaveFiller& theDSFiller, const TopoDS_Shape& theEdge, const TopAbs_State theState) ;
  
  Standard_EXPORT static   void Splits (const BOPAlgo_PPaveFiller& theDSFiller, const TopoDS_Shape& theEdge, const TopAbs_State theState, TopTools_ListOfShape& theResultList) ;
  
  Standard_EXPORT static   Standard_Boolean SplitE (const TopoDS_Edge& theEdge, TopTools_ListOfShape& theSplits) ;
  
  Standard_EXPORT static   Standard_Boolean EdgeCurveAncestors (const BOPAlgo_PPaveFiller& theDSFiller, const TopoDS_Shape& theEdge, TopoDS_Shape& theFace1, TopoDS_Shape& theFace2) ;
  
  Standard_EXPORT static   Standard_Boolean EdgeSectionAncestors (const BOPAlgo_PPaveFiller& theDSFiller, const TopoDS_Shape& theEdge, TopTools_ListOfShape& LF1, TopTools_ListOfShape& LF2, TopTools_ListOfShape& LE1, TopTools_ListOfShape& LE2) ;
  
  Standard_EXPORT static   Standard_Boolean BoolOpe (const TopoDS_Shape& theFace1, const TopoDS_Shape& theFace2, Standard_Boolean& IsCommonFound, TopTools_IndexedDataMapOfShapeListOfShape& theHistoryMap) ;




protected:





private:





};







#endif // _QANewModTopOpe_Tools_HeaderFile
