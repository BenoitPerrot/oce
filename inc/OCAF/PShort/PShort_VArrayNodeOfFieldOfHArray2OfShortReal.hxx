// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PShort_VArrayNodeOfFieldOfHArray2OfShortReal_HeaderFile
#define _PShort_VArrayNodeOfFieldOfHArray2OfShortReal_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PShort_VArrayNodeOfFieldOfHArray2OfShortReal.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_ShortReal.hxx>
#include <OCAF/PStandard/PStandard_ArrayNode.hxx>
class PShort_FieldOfHArray2OfShortReal;
class PShort_VArrayTNodeOfFieldOfHArray2OfShortReal;


class PShort_VArrayNodeOfFieldOfHArray2OfShortReal : public PStandard_ArrayNode
{

public:

  
  Standard_EXPORT PShort_VArrayNodeOfFieldOfHArray2OfShortReal();
  
  Standard_EXPORT PShort_VArrayNodeOfFieldOfHArray2OfShortReal(const Standard_ShortReal& aValue);
  
  Standard_EXPORT   void SetValue (const Standard_ShortReal& aValue) ;
  
  Standard_EXPORT   Standard_Address Value()  const;

PShort_VArrayNodeOfFieldOfHArray2OfShortReal(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    Standard_ShortReal _CSFDB_GetPShort_VArrayNodeOfFieldOfHArray2OfShortRealmyValue() const { return myValue; }
    void _CSFDB_SetPShort_VArrayNodeOfFieldOfHArray2OfShortRealmyValue(const Standard_ShortReal p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PShort_VArrayNodeOfFieldOfHArray2OfShortReal)

protected:




private: 


  Standard_ShortReal myValue;


};







#endif // _PShort_VArrayNodeOfFieldOfHArray2OfShortReal_HeaderFile
