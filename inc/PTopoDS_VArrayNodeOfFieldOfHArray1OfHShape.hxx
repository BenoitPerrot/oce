// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTopoDS_VArrayNodeOfFieldOfHArray1OfHShape_HeaderFile
#define _PTopoDS_VArrayNodeOfFieldOfHArray1OfHShape_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PTopoDS_VArrayNodeOfFieldOfHArray1OfHShape.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Handle_PTopoDS_HShape.hxx>
#include <OCAF/PStandard/PStandard_ArrayNode.hxx>
class PTopoDS_HShape;
class PTopoDS_FieldOfHArray1OfHShape;
class PTopoDS_VArrayTNodeOfFieldOfHArray1OfHShape;


class PTopoDS_VArrayNodeOfFieldOfHArray1OfHShape : public PStandard_ArrayNode
{

public:

  
  Standard_EXPORT PTopoDS_VArrayNodeOfFieldOfHArray1OfHShape();
  
  Standard_EXPORT PTopoDS_VArrayNodeOfFieldOfHArray1OfHShape(const Handle(PTopoDS_HShape)& aValue);
  
  Standard_EXPORT   void SetValue (const Handle(PTopoDS_HShape)& aValue) ;
  
  Standard_EXPORT   Standard_Address Value()  const;

PTopoDS_VArrayNodeOfFieldOfHArray1OfHShape(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    Handle(PTopoDS_HShape) _CSFDB_GetPTopoDS_VArrayNodeOfFieldOfHArray1OfHShapemyValue() const { return myValue; }
    void _CSFDB_SetPTopoDS_VArrayNodeOfFieldOfHArray1OfHShapemyValue(const Handle(PTopoDS_HShape)& p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PTopoDS_VArrayNodeOfFieldOfHArray1OfHShape)

protected:




private: 


  Handle(PTopoDS_HShape) myValue;


};







#endif // _PTopoDS_VArrayNodeOfFieldOfHArray1OfHShape_HeaderFile
