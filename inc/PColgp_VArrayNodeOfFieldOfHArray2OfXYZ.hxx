// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_VArrayNodeOfFieldOfHArray2OfXYZ_HeaderFile
#define _PColgp_VArrayNodeOfFieldOfHArray2OfXYZ_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PColgp_VArrayNodeOfFieldOfHArray2OfXYZ.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <gp_XYZ.hxx>
#include <PStandard_ArrayNode.hxx>
class gp_XYZ;
class PColgp_FieldOfHArray2OfXYZ;
class PColgp_VArrayTNodeOfFieldOfHArray2OfXYZ;


class PColgp_VArrayNodeOfFieldOfHArray2OfXYZ : public PStandard_ArrayNode
{

public:

  
  Standard_EXPORT PColgp_VArrayNodeOfFieldOfHArray2OfXYZ();
  
  Standard_EXPORT PColgp_VArrayNodeOfFieldOfHArray2OfXYZ(const gp_XYZ& aValue);
  
  Standard_EXPORT   void SetValue (const gp_XYZ& aValue) ;
  
  Standard_EXPORT   Standard_Address Value()  const;

PColgp_VArrayNodeOfFieldOfHArray2OfXYZ(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    const gp_XYZ& _CSFDB_GetPColgp_VArrayNodeOfFieldOfHArray2OfXYZmyValue() const { return myValue; }



  DEFINE_STANDARD_RTTI(PColgp_VArrayNodeOfFieldOfHArray2OfXYZ)

protected:




private: 


  gp_XYZ myValue;


};







#endif // _PColgp_VArrayNodeOfFieldOfHArray2OfXYZ_HeaderFile
