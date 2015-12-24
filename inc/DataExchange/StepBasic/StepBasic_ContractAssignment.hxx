// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ContractAssignment_HeaderFile
#define _StepBasic_ContractAssignment_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_ContractAssignment.hxx>

#include <DataExchange/StepBasic/Handle_StepBasic_Contract.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class StepBasic_Contract;


//! Representation of STEP entity ContractAssignment
class StepBasic_ContractAssignment : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepBasic_ContractAssignment();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(StepBasic_Contract)& aAssignedContract) ;
  
  //! Returns field AssignedContract
  Standard_EXPORT   Handle(StepBasic_Contract) AssignedContract()  const;
  
  //! Set field AssignedContract
  Standard_EXPORT   void SetAssignedContract (const Handle(StepBasic_Contract)& AssignedContract) ;




  DEFINE_STANDARD_RTTI(StepBasic_ContractAssignment)

protected:




private: 


  Handle(StepBasic_Contract) theAssignedContract;


};







#endif // _StepBasic_ContractAssignment_HeaderFile
