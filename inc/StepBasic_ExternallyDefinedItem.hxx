// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ExternallyDefinedItem_HeaderFile
#define _StepBasic_ExternallyDefinedItem_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_ExternallyDefinedItem.hxx>

#include <StepBasic_SourceItem.hxx>
#include <Handle_StepBasic_ExternalSource.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class StepBasic_ExternalSource;
class StepBasic_SourceItem;


//! Representation of STEP entity ExternallyDefinedItem
class StepBasic_ExternallyDefinedItem : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepBasic_ExternallyDefinedItem();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const StepBasic_SourceItem& aItemId, const Handle(StepBasic_ExternalSource)& aSource) ;
  
  //! Returns field ItemId
  Standard_EXPORT   StepBasic_SourceItem ItemId()  const;
  
  //! Set field ItemId
  Standard_EXPORT   void SetItemId (const StepBasic_SourceItem& ItemId) ;
  
  //! Returns field Source
  Standard_EXPORT   Handle(StepBasic_ExternalSource) Source()  const;
  
  //! Set field Source
  Standard_EXPORT   void SetSource (const Handle(StepBasic_ExternalSource)& Source) ;




  DEFINE_STANDARD_RTTI(StepBasic_ExternallyDefinedItem)

protected:




private: 


  StepBasic_SourceItem theItemId;
  Handle(StepBasic_ExternalSource) theSource;


};







#endif // _StepBasic_ExternallyDefinedItem_HeaderFile
