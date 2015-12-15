// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_VArrayNodeOfFieldOfHArray2OfDir_HeaderFile
#define _PColgp_VArrayNodeOfFieldOfHArray2OfDir_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PColgp_VArrayNodeOfFieldOfHArray2OfDir.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Mathematics/Primitives/gp_Dir.hxx>
#include <PStandard_ArrayNode.hxx>
class gp_Dir;
class PColgp_FieldOfHArray2OfDir;
class PColgp_VArrayTNodeOfFieldOfHArray2OfDir;


class PColgp_VArrayNodeOfFieldOfHArray2OfDir : public PStandard_ArrayNode
{

public:

  
  Standard_EXPORT PColgp_VArrayNodeOfFieldOfHArray2OfDir();
  
  Standard_EXPORT PColgp_VArrayNodeOfFieldOfHArray2OfDir(const gp_Dir& aValue);
  
  Standard_EXPORT   void SetValue (const gp_Dir& aValue) ;
  
  Standard_EXPORT   Standard_Address Value()  const;

PColgp_VArrayNodeOfFieldOfHArray2OfDir(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    const gp_Dir& _CSFDB_GetPColgp_VArrayNodeOfFieldOfHArray2OfDirmyValue() const { return myValue; }



  DEFINE_STANDARD_RTTI(PColgp_VArrayNodeOfFieldOfHArray2OfDir)

protected:




private: 


  gp_Dir myValue;


};







#endif // _PColgp_VArrayNodeOfFieldOfHArray2OfDir_HeaderFile
