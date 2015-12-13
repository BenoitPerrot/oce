// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draft_DataMapIteratorOfDataMapOfVertexVertexInfo_HeaderFile
#define _Draft_DataMapIteratorOfDataMapOfVertexVertexInfo_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <Handle_Draft_DataMapNodeOfDataMapOfVertexVertexInfo.hxx>
class Standard_NoSuchObject;
class TopoDS_Vertex;
class Draft_VertexInfo;
class TopTools_ShapeMapHasher;
class Draft_DataMapOfVertexVertexInfo;
class Draft_DataMapNodeOfDataMapOfVertexVertexInfo;



class Draft_DataMapIteratorOfDataMapOfVertexVertexInfo  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Draft_DataMapIteratorOfDataMapOfVertexVertexInfo();
  
  Standard_EXPORT Draft_DataMapIteratorOfDataMapOfVertexVertexInfo(const Draft_DataMapOfVertexVertexInfo& aMap);
  
  Standard_EXPORT   void Initialize (const Draft_DataMapOfVertexVertexInfo& aMap) ;
  
  Standard_EXPORT  const  TopoDS_Vertex& Key()  const;
  
  Standard_EXPORT  const  Draft_VertexInfo& Value()  const;




protected:





private:





};







#endif // _Draft_DataMapIteratorOfDataMapOfVertexVertexInfo_HeaderFile
