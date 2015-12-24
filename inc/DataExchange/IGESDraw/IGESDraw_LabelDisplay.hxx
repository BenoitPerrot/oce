// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDraw_LabelDisplay_HeaderFile
#define _IGESDraw_LabelDisplay_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IGESDraw/Handle_IGESDraw_LabelDisplay.hxx>

#include <DataExchange/IGESDraw/Handle_IGESDraw_HArray1OfViewKindEntity.hxx>
#include <Mathematics/Collections/Handle_TColgp_HArray1OfXYZ.hxx>
#include <DataExchange/IGESDimen/Handle_IGESDimen_HArray1OfLeaderArrow.hxx>
#include <Foundation/TColStd/Handle_TColStd_HArray1OfInteger.hxx>
#include <DataExchange/IGESData/Handle_IGESData_HArray1OfIGESEntity.hxx>
#include <DataExchange/IGESData/IGESData_LabelDisplayEntity.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <DataExchange/IGESData/Handle_IGESData_ViewKindEntity.hxx>
#include <DataExchange/IGESDimen/Handle_IGESDimen_LeaderArrow.hxx>
#include <DataExchange/IGESData/Handle_IGESData_IGESEntity.hxx>
class IGESDraw_HArray1OfViewKindEntity;
class TColgp_HArray1OfXYZ;
class IGESDimen_HArray1OfLeaderArrow;
class TColStd_HArray1OfInteger;
class IGESData_HArray1OfIGESEntity;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class IGESData_ViewKindEntity;
class gp_Pnt;
class IGESDimen_LeaderArrow;
class IGESData_IGESEntity;


//! defines IGESLabelDisplay, Type <402> Form <5>
//! in package IGESDraw
//!
//! Permits one or more displays for the
//! entity labels of an entity
class IGESDraw_LabelDisplay : public IGESData_LabelDisplayEntity
{

public:

  
  Standard_EXPORT IGESDraw_LabelDisplay();
  
  //! This method is used to set the fields of the class
  //! LabelDisplay
  //! - allViews             : Pointers to View Entities
  //! - allTextLocations     : Coordinates of text locations in the views
  //! - allLeaderEntities    : Pointers to Leader Entities in the views
  //! - allLabelLevels       : Entity label level numbers in the views
  //! - allDisplayedEntities : Pointers to the entities being displayed
  //! raises exception if Lengths of allViews, allTextLocations,
  //! allLeaderEntities, allLabelLevels and allDisplayedEntities are
  //! not same.
  Standard_EXPORT   void Init (const Handle(IGESDraw_HArray1OfViewKindEntity)& allViews, const Handle(TColgp_HArray1OfXYZ)& allTextLocations, const Handle(IGESDimen_HArray1OfLeaderArrow)& allLeaderEntities, const Handle(TColStd_HArray1OfInteger)& allLabelLevels, const Handle(IGESData_HArray1OfIGESEntity)& allDisplayedEntities) ;
  
  //! returns the number of label placements in <me>
  Standard_EXPORT   Standard_Integer NbLabels()  const;
  
  //! returns the View entity indicated by ViewIndex
  //! raises an exception if ViewIndex <= 0 or ViewIndex > NbLabels().
  Standard_EXPORT   Handle(IGESData_ViewKindEntity) ViewItem (const Standard_Integer ViewIndex)  const;
  
  //! returns the 3d-Point coordinates of the text location, in the
  //! view indicated by ViewIndex
  //! raises an exception if ViewIndex <= 0 or ViewIndex > NbLabels().
  Standard_EXPORT   gp_Pnt TextLocation (const Standard_Integer ViewIndex)  const;
  
  //! returns the Leader entity in the view indicated by ViewIndex
  //! raises an exception if ViewIndex <= 0 or ViewIndex > NbLabels().
  Standard_EXPORT   Handle(IGESDimen_LeaderArrow) LeaderEntity (const Standard_Integer ViewIndex)  const;
  
  //! returns the Entity label level number in the view indicated
  //! by ViewIndex
  //! raises an exception if ViewIndex <= 0 or ViewIndex > NbLabels().
  Standard_EXPORT   Standard_Integer LabelLevel (const Standard_Integer ViewIndex)  const;
  
  //! returns the entity indicated by EntityIndex
  //! raises an exception if EntityIndex <= 0 or EntityIndex > NbLabels().
  Standard_EXPORT   Handle(IGESData_IGESEntity) DisplayedEntity (const Standard_Integer EntityIndex)  const;
  
  //! returns the transformed 3d-Point coordinates of the text
  //! location, in the view indicated by ViewIndex
  //! raises an exception if ViewIndex <= 0 or ViewIndex > NbLabels().
  Standard_EXPORT   gp_Pnt TransformedTextLocation (const Standard_Integer ViewIndex)  const;




  DEFINE_STANDARD_RTTI(IGESDraw_LabelDisplay)

protected:




private: 


  Handle(IGESDraw_HArray1OfViewKindEntity) theViews;
  Handle(TColgp_HArray1OfXYZ) theTextLocations;
  Handle(IGESDimen_HArray1OfLeaderArrow) theLeaderEntities;
  Handle(TColStd_HArray1OfInteger) theLabelLevels;
  Handle(IGESData_HArray1OfIGESEntity) theDisplayedEntities;


};







#endif // _IGESDraw_LabelDisplay_HeaderFile
