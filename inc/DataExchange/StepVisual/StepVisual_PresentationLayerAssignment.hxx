// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_PresentationLayerAssignment_HeaderFile
#define _StepVisual_PresentationLayerAssignment_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepVisual/Handle_StepVisual_PresentationLayerAssignment.hxx>

#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <DataExchange/StepVisual/Handle_StepVisual_HArray1OfLayeredItem.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class TCollection_HAsciiString;
class StepVisual_HArray1OfLayeredItem;
class StepVisual_LayeredItem;



class StepVisual_PresentationLayerAssignment : public MMgt_TShared
{

public:

  
  //! Returns a PresentationLayerAssignment
  Standard_EXPORT StepVisual_PresentationLayerAssignment();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(TCollection_HAsciiString)& aDescription, const Handle(StepVisual_HArray1OfLayeredItem)& aAssignedItems) ;
  
  Standard_EXPORT   void SetName (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Name()  const;
  
  Standard_EXPORT   void SetDescription (const Handle(TCollection_HAsciiString)& aDescription) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Description()  const;
  
  Standard_EXPORT   void SetAssignedItems (const Handle(StepVisual_HArray1OfLayeredItem)& aAssignedItems) ;
  
  Standard_EXPORT   Handle(StepVisual_HArray1OfLayeredItem) AssignedItems()  const;
  
  Standard_EXPORT   StepVisual_LayeredItem AssignedItemsValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbAssignedItems()  const;




  DEFINE_STANDARD_RTTI(StepVisual_PresentationLayerAssignment)

protected:




private: 


  Handle(TCollection_HAsciiString) name;
  Handle(TCollection_HAsciiString) description;
  Handle(StepVisual_HArray1OfLayeredItem) assignedItems;


};







#endif // _StepVisual_PresentationLayerAssignment_HeaderFile
