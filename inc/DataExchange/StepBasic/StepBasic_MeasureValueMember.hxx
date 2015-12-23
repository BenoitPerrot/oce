// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_MeasureValueMember_HeaderFile
#define _StepBasic_MeasureValueMember_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepBasic_MeasureValueMember.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <DataExchange/StepData/StepData_SelectReal.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_CString.hxx>


//! for Select MeasureValue, i.e. :
//! length_measure,time_measure,plane_angle_measure,
//! solid_angle_measure,ratio_measure,parameter_value,
//! context_dependent_measure,positive_length_measure,
//! positive_plane_angle_measure,positive_ratio_measure,
//! area_measure,volume_measure
class StepBasic_MeasureValueMember : public StepData_SelectReal
{

public:

  
  Standard_EXPORT StepBasic_MeasureValueMember();
  
  Standard_EXPORT virtual   Standard_Boolean HasName()  const;
  
  Standard_EXPORT virtual   Standard_CString Name()  const;
  
  Standard_EXPORT virtual   Standard_Boolean SetName (const Standard_CString name) ;




  DEFINE_STANDARD_RTTI(StepBasic_MeasureValueMember)

protected:




private: 


  Standard_Integer thecase;


};







#endif // _StepBasic_MeasureValueMember_HeaderFile
