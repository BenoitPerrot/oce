// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_VArrayNodeOfFieldOfHArray2OfLin2d_HeaderFile
#define _PColgp_VArrayNodeOfFieldOfHArray2OfLin2d_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PColgp_VArrayNodeOfFieldOfHArray2OfLin2d.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Mathematics/Primitives/gp_Lin2d.hxx>
#include <OCAF/PStandard/PStandard_ArrayNode.hxx>
class gp_Lin2d;
class PColgp_FieldOfHArray2OfLin2d;
class PColgp_VArrayTNodeOfFieldOfHArray2OfLin2d;


class PColgp_VArrayNodeOfFieldOfHArray2OfLin2d : public PStandard_ArrayNode
{

public:

  
  Standard_EXPORT PColgp_VArrayNodeOfFieldOfHArray2OfLin2d();
  
  Standard_EXPORT PColgp_VArrayNodeOfFieldOfHArray2OfLin2d(const gp_Lin2d& aValue);
  
  Standard_EXPORT   void SetValue (const gp_Lin2d& aValue) ;
  
  Standard_EXPORT   Standard_Address Value()  const;

PColgp_VArrayNodeOfFieldOfHArray2OfLin2d(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    const gp_Lin2d& _CSFDB_GetPColgp_VArrayNodeOfFieldOfHArray2OfLin2dmyValue() const { return myValue; }



  DEFINE_STANDARD_RTTI(PColgp_VArrayNodeOfFieldOfHArray2OfLin2d)

protected:




private: 


  gp_Lin2d myValue;


};







#endif // _PColgp_VArrayNodeOfFieldOfHArray2OfLin2d_HeaderFile
