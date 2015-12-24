// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_DimensionalCharacteristicRepresentation_HeaderFile
#define _StepShape_DimensionalCharacteristicRepresentation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepShape/Handle_StepShape_DimensionalCharacteristicRepresentation.hxx>

#include <DataExchange/StepShape/StepShape_DimensionalCharacteristic.hxx>
#include <DataExchange/StepShape/Handle_StepShape_ShapeDimensionRepresentation.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class StepShape_ShapeDimensionRepresentation;
class StepShape_DimensionalCharacteristic;


//! Representation of STEP entity DimensionalCharacteristicRepresentation
class StepShape_DimensionalCharacteristicRepresentation : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepShape_DimensionalCharacteristicRepresentation();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const StepShape_DimensionalCharacteristic& aDimension, const Handle(StepShape_ShapeDimensionRepresentation)& aRepresentation) ;
  
  //! Returns field Dimension
  Standard_EXPORT   StepShape_DimensionalCharacteristic Dimension()  const;
  
  //! Set field Dimension
  Standard_EXPORT   void SetDimension (const StepShape_DimensionalCharacteristic& Dimension) ;
  
  //! Returns field Representation
  Standard_EXPORT   Handle(StepShape_ShapeDimensionRepresentation) Representation()  const;
  
  //! Set field Representation
  Standard_EXPORT   void SetRepresentation (const Handle(StepShape_ShapeDimensionRepresentation)& Representation) ;




  DEFINE_STANDARD_RTTI(StepShape_DimensionalCharacteristicRepresentation)

protected:




private: 


  StepShape_DimensionalCharacteristic theDimension;
  Handle(StepShape_ShapeDimensionRepresentation) theRepresentation;


};







#endif // _StepShape_DimensionalCharacteristicRepresentation_HeaderFile
