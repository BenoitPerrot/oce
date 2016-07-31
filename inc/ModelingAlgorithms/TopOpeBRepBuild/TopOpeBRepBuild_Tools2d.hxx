// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_Tools2d_HeaderFile
#define _TopOpeBRepBuild_Tools2d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>

class TopoDS_Wire;
class TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo;



class TopOpeBRepBuild_Tools2d 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   void MakeMapOfShapeVertexInfo (const TopoDS_Wire& aWire, TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo& aMap) ;
  
  Standard_EXPORT static   void DumpMapOfShapeVertexInfo (const TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo& aMap) ;
  
  Standard_EXPORT static   void Path (const TopoDS_Wire& aWire, TopTools_ListOfShape& aResList) ;




protected:





private:





};







#endif // _TopOpeBRepBuild_Tools2d_HeaderFile
