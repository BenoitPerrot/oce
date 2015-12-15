// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_VArrayNodeOfFieldOfHArray1OfXY_HeaderFile
#define _PColgp_VArrayNodeOfFieldOfHArray1OfXY_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PColgp_VArrayNodeOfFieldOfHArray1OfXY.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Mathematics/Primitives/gp_XY.hxx>
#include <PStandard_ArrayNode.hxx>
class gp_XY;
class PColgp_FieldOfHArray1OfXY;
class PColgp_VArrayTNodeOfFieldOfHArray1OfXY;


class PColgp_VArrayNodeOfFieldOfHArray1OfXY : public PStandard_ArrayNode
{

public:

  
  Standard_EXPORT PColgp_VArrayNodeOfFieldOfHArray1OfXY();
  
  Standard_EXPORT PColgp_VArrayNodeOfFieldOfHArray1OfXY(const gp_XY& aValue);
  
  Standard_EXPORT   void SetValue (const gp_XY& aValue) ;
  
  Standard_EXPORT   Standard_Address Value()  const;

PColgp_VArrayNodeOfFieldOfHArray1OfXY(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    const gp_XY& _CSFDB_GetPColgp_VArrayNodeOfFieldOfHArray1OfXYmyValue() const { return myValue; }



  DEFINE_STANDARD_RTTI(PColgp_VArrayNodeOfFieldOfHArray1OfXY)

protected:




private: 


  gp_XY myValue;


};







#endif // _PColgp_VArrayNodeOfFieldOfHArray1OfXY_HeaderFile
