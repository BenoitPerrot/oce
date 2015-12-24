// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_C0RegularityFilter_HeaderFile
#define _AIS_C0RegularityFilter_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Visualization/AIS/Handle_AIS_C0RegularityFilter.hxx>

#include <ModelingData/TopTools/TopTools_MapOfShape.hxx>
#include <Visualization/SelectMgr/SelectMgr_Filter.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingData/TopAbs/TopAbs_ShapeEnum.hxx>
#include <Visualization/SelectMgr/Handle_SelectMgr_EntityOwner.hxx>
class TopoDS_Shape;
class SelectMgr_EntityOwner;



class AIS_C0RegularityFilter : public SelectMgr_Filter
{

public:

  
  Standard_EXPORT AIS_C0RegularityFilter(const TopoDS_Shape& aShape);
  
  Standard_EXPORT virtual   Standard_Boolean ActsOn (const TopAbs_ShapeEnum aType)  const;
  
  Standard_EXPORT virtual   Standard_Boolean IsOk (const Handle(SelectMgr_EntityOwner)& EO)  const;




  DEFINE_STANDARD_RTTI(AIS_C0RegularityFilter)

protected:




private: 


  TopTools_MapOfShape myMapOfEdges;


};







#endif // _AIS_C0RegularityFilter_HeaderFile
