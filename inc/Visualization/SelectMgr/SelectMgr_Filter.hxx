// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectMgr_Filter_HeaderFile
#define _SelectMgr_Filter_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Visualization/SelectMgr/Handle_SelectMgr_Filter.hxx>

#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Visualization/SelectMgr/Handle_SelectMgr_EntityOwner.hxx>
#include <ModelingData/TopAbs/TopAbs_ShapeEnum.hxx>
class SelectMgr_EntityOwner;


//! The root class to define filter objects for selection.
//! Advance handling of objects requires the services of
//! filters. These only allow dynamic detection and
//! selection of objects which correspond to the criteria defined in each.
//! Eight standard filters inheriting SelectMgr_Filter are
//! defined in Open CASCADE.
//! You can create your own filters by defining new filter
//! classes inheriting this framework. You use these
//! filters by loading them into an AIS interactive context.
class SelectMgr_Filter : public MMgt_TShared
{

public:

  
  //! Indicates that the selected Interactive Object
  //! passes the filter. The owner, anObj, can be either
  //! direct or user. A direct owner is the corresponding
  //! construction element, whereas a user is the
  //! compound shape of which the entity forms a part.
  //! When an object is detected by the mouse - in AIS,
  //! this is done through a context selector - its owner
  //! is passed to the filter as an argument.
  //! If the object returns Standard_True, it is kept; if
  //! not, it is rejected.
  //! If you are creating a filter class inheriting this
  //! framework, and the daughter class is to be used in
  //! an AIS local context, you will need to implement the
  //! virtual function ActsOn.
  Standard_EXPORT virtual   Standard_Boolean IsOk (const Handle(SelectMgr_EntityOwner)& anObj)  const = 0;
  
  //! Returns true in an AIS local context, if this filter
  //! operates on a type of subshape defined in a filter
  //! class inheriting this framework.
  //! This function completes IsOk in an AIS local context.
  Standard_EXPORT virtual   Standard_Boolean ActsOn (const TopAbs_ShapeEnum aStandardMode)  const;




  DEFINE_STANDARD_RTTI(SelectMgr_Filter)

protected:




private: 




};







#endif // _SelectMgr_Filter_HeaderFile
