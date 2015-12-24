// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepDimTol_Datum_HeaderFile
#define _StepDimTol_Datum_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepDimTol/Handle_StepDimTol_Datum.hxx>

#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <DataExchange/StepRepr/StepRepr_ShapeAspect.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_ProductDefinitionShape.hxx>
#include <DataExchange/StepData/StepData_Logical.hxx>
class TCollection_HAsciiString;
class StepRepr_ProductDefinitionShape;


//! Representation of STEP entity Datum
class StepDimTol_Datum : public StepRepr_ShapeAspect
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepDimTol_Datum();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aShapeAspect_Name, const Handle(TCollection_HAsciiString)& aShapeAspect_Description, const Handle(StepRepr_ProductDefinitionShape)& aShapeAspect_OfShape, const StepData_Logical aShapeAspect_ProductDefinitional, const Handle(TCollection_HAsciiString)& aIdentification) ;
  
  //! Returns field Identification
  Standard_EXPORT   Handle(TCollection_HAsciiString) Identification()  const;
  
  //! Set field Identification
  Standard_EXPORT   void SetIdentification (const Handle(TCollection_HAsciiString)& Identification) ;




  DEFINE_STANDARD_RTTI(StepDimTol_Datum)

protected:




private: 


  Handle(TCollection_HAsciiString) theIdentification;


};







#endif // _StepDimTol_Datum_HeaderFile
