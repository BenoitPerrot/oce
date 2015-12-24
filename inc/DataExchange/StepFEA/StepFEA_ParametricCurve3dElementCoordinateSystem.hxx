// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_ParametricCurve3dElementCoordinateSystem_HeaderFile
#define _StepFEA_ParametricCurve3dElementCoordinateSystem_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepFEA/Handle_StepFEA_ParametricCurve3dElementCoordinateSystem.hxx>

#include <DataExchange/StepFEA/Handle_StepFEA_ParametricCurve3dElementCoordinateDirection.hxx>
#include <DataExchange/StepFEA/StepFEA_FeaRepresentationItem.hxx>
#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
class StepFEA_ParametricCurve3dElementCoordinateDirection;
class TCollection_HAsciiString;


//! Representation of STEP entity ParametricCurve3dElementCoordinateSystem
class StepFEA_ParametricCurve3dElementCoordinateSystem : public StepFEA_FeaRepresentationItem
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepFEA_ParametricCurve3dElementCoordinateSystem();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aRepresentationItem_Name, const Handle(StepFEA_ParametricCurve3dElementCoordinateDirection)& aDirection) ;
  
  //! Returns field Direction
  Standard_EXPORT   Handle(StepFEA_ParametricCurve3dElementCoordinateDirection) Direction()  const;
  
  //! Set field Direction
  Standard_EXPORT   void SetDirection (const Handle(StepFEA_ParametricCurve3dElementCoordinateDirection)& Direction) ;




  DEFINE_STANDARD_RTTI(StepFEA_ParametricCurve3dElementCoordinateSystem)

protected:




private: 


  Handle(StepFEA_ParametricCurve3dElementCoordinateDirection) theDirection;


};







#endif // _StepFEA_ParametricCurve3dElementCoordinateSystem_HeaderFile
