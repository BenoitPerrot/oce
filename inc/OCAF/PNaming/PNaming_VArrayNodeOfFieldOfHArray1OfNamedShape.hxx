// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PNaming_VArrayNodeOfFieldOfHArray1OfNamedShape_HeaderFile
#define _PNaming_VArrayNodeOfFieldOfHArray1OfNamedShape_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <OCAF/PNaming/Handle_PNaming_VArrayNodeOfFieldOfHArray1OfNamedShape.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <OCAF/PNaming/Handle_PNaming_NamedShape.hxx>
#include <OCAF/PStandard/PStandard_ArrayNode.hxx>
class PNaming_NamedShape;
class PNaming_FieldOfHArray1OfNamedShape;
class PNaming_VArrayTNodeOfFieldOfHArray1OfNamedShape;


class PNaming_VArrayNodeOfFieldOfHArray1OfNamedShape : public PStandard_ArrayNode
{

public:

  
  Standard_EXPORT PNaming_VArrayNodeOfFieldOfHArray1OfNamedShape();
  
  Standard_EXPORT PNaming_VArrayNodeOfFieldOfHArray1OfNamedShape(const Handle(PNaming_NamedShape)& aValue);
  
  Standard_EXPORT   void SetValue (const Handle(PNaming_NamedShape)& aValue) ;
  
  Standard_EXPORT   Standard_Address Value()  const;

PNaming_VArrayNodeOfFieldOfHArray1OfNamedShape(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    Handle(PNaming_NamedShape) _CSFDB_GetPNaming_VArrayNodeOfFieldOfHArray1OfNamedShapemyValue() const { return myValue; }
    void _CSFDB_SetPNaming_VArrayNodeOfFieldOfHArray1OfNamedShapemyValue(const Handle(PNaming_NamedShape)& p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PNaming_VArrayNodeOfFieldOfHArray1OfNamedShape)

protected:




private: 


  Handle(PNaming_NamedShape) myValue;


};







#endif // _PNaming_VArrayNodeOfFieldOfHArray1OfNamedShape_HeaderFile
