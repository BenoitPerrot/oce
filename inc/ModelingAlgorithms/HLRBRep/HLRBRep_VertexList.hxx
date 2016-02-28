// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_VertexList_HeaderFile
#define _HLRBRep_VertexList_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingAlgorithms/HLRAlgo/HLRAlgo_ListIteratorOfInterferenceList.hxx>
#include <ModelingAlgorithms/HLRBRep/HLRBRep_EdgeInterferenceTool.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingData/TopAbs/TopAbs_Orientation.hxx>
class HLRBRep_EdgeInterferenceTool;
class HLRAlgo_Intersection;



class HLRBRep_VertexList 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT HLRBRep_VertexList(const HLRBRep_EdgeInterferenceTool& T, const HLRAlgo_ListIteratorOfInterferenceList& I, const HLRAlgo_ListIteratorOfInterferenceList& End);
  
  //! Returns True when the curve is periodic.
  Standard_EXPORT   Standard_Boolean IsPeriodic()  const;
  
  //! Returns True when there are more vertices.
  Standard_EXPORT   Standard_Boolean More()  const;
  
  //! Proceeds to the next vertex.
  Standard_EXPORT   void Next() ;
  
  //! Returns the current vertex
  Standard_EXPORT  const  HLRAlgo_Intersection& Current()  const;
  
  //! Returns True  if the current  vertex  is is on the
  //! boundary of the edge.
  Standard_EXPORT   Standard_Boolean IsBoundary()  const;
  
  //! Returns  True   if   the current    vertex  is  an
  //! interference.
  Standard_EXPORT   Standard_Boolean IsInterference()  const;
  
  //! Returns the  orientation of the  current vertex if
  //! it is on the boundary of the edge.
  Standard_EXPORT   TopAbs_Orientation Orientation()  const;
  
  //! Returns  the transition  of the  current vertex if
  //! it is an interference.
  Standard_EXPORT   TopAbs_Orientation Transition()  const;
  
  //! Returns  the  transition  of  the  current  vertex
  //! relative to the boundary if it is an interference.
  Standard_EXPORT   TopAbs_Orientation BoundaryTransition()  const;




protected:





private:



  HLRAlgo_ListIteratorOfInterferenceList myIterator;
  HLRAlgo_ListIteratorOfInterferenceList myIteratorEnd;
  HLRBRep_EdgeInterferenceTool myTool;
  Standard_Boolean fromEdge;
  Standard_Boolean fromInterf;


};







#endif // _HLRBRep_VertexList_HeaderFile
