// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_MakeFromUsageOption_HeaderFile
#define _StepRepr_MakeFromUsageOption_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_MakeFromUsageOption.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_MeasureWithUnit.hxx>
#include <DataExchange/StepRepr/StepRepr_ProductDefinitionUsage.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_ProductDefinition.hxx>
class TCollection_HAsciiString;
class StepBasic_MeasureWithUnit;
class StepBasic_ProductDefinition;


//! Representation of STEP entity MakeFromUsageOption
class StepRepr_MakeFromUsageOption : public StepRepr_ProductDefinitionUsage
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepRepr_MakeFromUsageOption();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aProductDefinitionRelationship_Id, const Handle(TCollection_HAsciiString)& aProductDefinitionRelationship_Name, const Standard_Boolean hasProductDefinitionRelationship_Description, const Handle(TCollection_HAsciiString)& aProductDefinitionRelationship_Description, const Handle(StepBasic_ProductDefinition)& aProductDefinitionRelationship_RelatingProductDefinition, const Handle(StepBasic_ProductDefinition)& aProductDefinitionRelationship_RelatedProductDefinition, const Standard_Integer aRanking, const Handle(TCollection_HAsciiString)& aRankingRationale, const Handle(StepBasic_MeasureWithUnit)& aQuantity) ;
  
  //! Returns field Ranking
  Standard_EXPORT   Standard_Integer Ranking()  const;
  
  //! Set field Ranking
  Standard_EXPORT   void SetRanking (const Standard_Integer Ranking) ;
  
  //! Returns field RankingRationale
  Standard_EXPORT   Handle(TCollection_HAsciiString) RankingRationale()  const;
  
  //! Set field RankingRationale
  Standard_EXPORT   void SetRankingRationale (const Handle(TCollection_HAsciiString)& RankingRationale) ;
  
  //! Returns field Quantity
  Standard_EXPORT   Handle(StepBasic_MeasureWithUnit) Quantity()  const;
  
  //! Set field Quantity
  Standard_EXPORT   void SetQuantity (const Handle(StepBasic_MeasureWithUnit)& Quantity) ;




  DEFINE_STANDARD_RTTI(StepRepr_MakeFromUsageOption)

protected:




private: 


  Standard_Integer theRanking;
  Handle(TCollection_HAsciiString) theRankingRationale;
  Handle(StepBasic_MeasureWithUnit) theQuantity;


};







#endif // _StepRepr_MakeFromUsageOption_HeaderFile
