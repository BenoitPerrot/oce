// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_CompositeTextWithExtent_HeaderFile
#define _StepVisual_CompositeTextWithExtent_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepVisual/Handle_StepVisual_CompositeTextWithExtent.hxx>

#include <DataExchange/StepVisual/Handle_StepVisual_PlanarExtent.hxx>
#include <DataExchange/StepVisual/StepVisual_CompositeText.hxx>
#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <DataExchange/StepVisual/Handle_StepVisual_HArray1OfTextOrCharacter.hxx>
class StepVisual_PlanarExtent;
class TCollection_HAsciiString;
class StepVisual_HArray1OfTextOrCharacter;



class StepVisual_CompositeTextWithExtent : public StepVisual_CompositeText
{

public:

  
  //! Returns a CompositeTextWithExtent
  Standard_EXPORT StepVisual_CompositeTextWithExtent();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepVisual_HArray1OfTextOrCharacter)& aCollectedText) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepVisual_HArray1OfTextOrCharacter)& aCollectedText, const Handle(StepVisual_PlanarExtent)& aExtent) ;
  
  Standard_EXPORT   void SetExtent (const Handle(StepVisual_PlanarExtent)& aExtent) ;
  
  Standard_EXPORT   Handle(StepVisual_PlanarExtent) Extent()  const;




  DEFINE_STANDARD_RTTI(StepVisual_CompositeTextWithExtent)

protected:




private: 


  Handle(StepVisual_PlanarExtent) extent;


};







#endif // _StepVisual_CompositeTextWithExtent_HeaderFile
