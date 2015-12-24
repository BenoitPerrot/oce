// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_RepresentationRelationship_HeaderFile
#define _StepRepr_RepresentationRelationship_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_RepresentationRelationship.hxx>

#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_Representation.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class TCollection_HAsciiString;
class StepRepr_Representation;



class StepRepr_RepresentationRelationship : public MMgt_TShared
{

public:

  
  //! Returns a RepresentationRelationship
  Standard_EXPORT StepRepr_RepresentationRelationship();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(TCollection_HAsciiString)& aDescription, const Handle(StepRepr_Representation)& aRep1, const Handle(StepRepr_Representation)& aRep2) ;
  
  Standard_EXPORT   void SetName (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Name()  const;
  
  Standard_EXPORT   void SetDescription (const Handle(TCollection_HAsciiString)& aDescription) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Description()  const;
  
  Standard_EXPORT   void SetRep1 (const Handle(StepRepr_Representation)& aRep1) ;
  
  Standard_EXPORT   Handle(StepRepr_Representation) Rep1()  const;
  
  Standard_EXPORT   void SetRep2 (const Handle(StepRepr_Representation)& aRep2) ;
  
  Standard_EXPORT   Handle(StepRepr_Representation) Rep2()  const;




  DEFINE_STANDARD_RTTI(StepRepr_RepresentationRelationship)

protected:




private: 


  Handle(TCollection_HAsciiString) name;
  Handle(TCollection_HAsciiString) description;
  Handle(StepRepr_Representation) rep1;
  Handle(StepRepr_Representation) rep2;


};







#endif // _StepRepr_RepresentationRelationship_HeaderFile
