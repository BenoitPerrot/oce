// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_RepresentationItem_HeaderFile
#define _StepRepr_RepresentationItem_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_RepresentationItem.hxx>

#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class TCollection_HAsciiString;



class StepRepr_RepresentationItem : public MMgt_TShared
{

public:

  
  //! Returns a RepresentationItem
  Standard_EXPORT StepRepr_RepresentationItem();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   void SetName (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Name()  const;




  DEFINE_STANDARD_RTTI(StepRepr_RepresentationItem)

protected:




private: 


  Handle(TCollection_HAsciiString) name;


};







#endif // _StepRepr_RepresentationItem_HeaderFile
