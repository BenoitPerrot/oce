// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_VArrayNodeOfFieldOfHArray1OfVec_HeaderFile
#define _PColgp_VArrayNodeOfFieldOfHArray1OfVec_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PColgp_VArrayNodeOfFieldOfHArray1OfVec.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <gp_Vec.hxx>
#include <PStandard_ArrayNode.hxx>
class gp_Vec;
class PColgp_FieldOfHArray1OfVec;
class PColgp_VArrayTNodeOfFieldOfHArray1OfVec;


class PColgp_VArrayNodeOfFieldOfHArray1OfVec : public PStandard_ArrayNode
{

public:

  
  Standard_EXPORT PColgp_VArrayNodeOfFieldOfHArray1OfVec();
  
  Standard_EXPORT PColgp_VArrayNodeOfFieldOfHArray1OfVec(const gp_Vec& aValue);
  
  Standard_EXPORT   void SetValue (const gp_Vec& aValue) ;
  
  Standard_EXPORT   Standard_Address Value()  const;

PColgp_VArrayNodeOfFieldOfHArray1OfVec(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    const gp_Vec& _CSFDB_GetPColgp_VArrayNodeOfFieldOfHArray1OfVecmyValue() const { return myValue; }



  DEFINE_STANDARD_RTTI(PColgp_VArrayNodeOfFieldOfHArray1OfVec)

protected:




private: 


  gp_Vec myValue;


};







#endif // _PColgp_VArrayNodeOfFieldOfHArray1OfVec_HeaderFile
