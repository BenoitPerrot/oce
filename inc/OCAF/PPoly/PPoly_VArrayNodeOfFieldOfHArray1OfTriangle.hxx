// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PPoly_VArrayNodeOfFieldOfHArray1OfTriangle_HeaderFile
#define _PPoly_VArrayNodeOfFieldOfHArray1OfTriangle_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PPoly_VArrayNodeOfFieldOfHArray1OfTriangle.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <OCAF/PPoly/PPoly_Triangle.hxx>
#include <OCAF/PStandard/PStandard_ArrayNode.hxx>
class PPoly_Triangle;
class PPoly_FieldOfHArray1OfTriangle;
class PPoly_VArrayTNodeOfFieldOfHArray1OfTriangle;


class PPoly_VArrayNodeOfFieldOfHArray1OfTriangle : public PStandard_ArrayNode
{

public:

  
  Standard_EXPORT PPoly_VArrayNodeOfFieldOfHArray1OfTriangle();
  
  Standard_EXPORT PPoly_VArrayNodeOfFieldOfHArray1OfTriangle(const PPoly_Triangle& aValue);
  
  Standard_EXPORT   void SetValue (const PPoly_Triangle& aValue) ;
  
  Standard_EXPORT   Standard_Address Value()  const;

PPoly_VArrayNodeOfFieldOfHArray1OfTriangle(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    const PPoly_Triangle& _CSFDB_GetPPoly_VArrayNodeOfFieldOfHArray1OfTrianglemyValue() const { return myValue; }



  DEFINE_STANDARD_RTTI(PPoly_VArrayNodeOfFieldOfHArray1OfTriangle)

protected:




private: 


  PPoly_Triangle myValue;


};







#endif // _PPoly_VArrayNodeOfFieldOfHArray1OfTriangle_HeaderFile
