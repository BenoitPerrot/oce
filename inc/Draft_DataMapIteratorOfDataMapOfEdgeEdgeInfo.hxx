// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draft_DataMapIteratorOfDataMapOfEdgeEdgeInfo_HeaderFile
#define _Draft_DataMapIteratorOfDataMapOfEdgeEdgeInfo_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <Handle_Draft_DataMapNodeOfDataMapOfEdgeEdgeInfo.hxx>
class Standard_NoSuchObject;
class TopoDS_Edge;
class Draft_EdgeInfo;
class TopTools_ShapeMapHasher;
class Draft_DataMapOfEdgeEdgeInfo;
class Draft_DataMapNodeOfDataMapOfEdgeEdgeInfo;



class Draft_DataMapIteratorOfDataMapOfEdgeEdgeInfo  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Draft_DataMapIteratorOfDataMapOfEdgeEdgeInfo();
  
  Standard_EXPORT Draft_DataMapIteratorOfDataMapOfEdgeEdgeInfo(const Draft_DataMapOfEdgeEdgeInfo& aMap);
  
  Standard_EXPORT   void Initialize (const Draft_DataMapOfEdgeEdgeInfo& aMap) ;
  
  Standard_EXPORT  const  TopoDS_Edge& Key()  const;
  
  Standard_EXPORT  const  Draft_EdgeInfo& Value()  const;




protected:





private:





};







#endif // _Draft_DataMapIteratorOfDataMapOfEdgeEdgeInfo_HeaderFile
