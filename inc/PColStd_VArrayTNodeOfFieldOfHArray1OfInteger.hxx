// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_VArrayTNodeOfFieldOfHArray1OfInteger_HeaderFile
#define _PColStd_VArrayTNodeOfFieldOfHArray1OfInteger_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_PColStd_VArrayNodeOfFieldOfHArray1OfInteger.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class PColStd_FieldOfHArray1OfInteger;
class PColStd_VArrayNodeOfFieldOfHArray1OfInteger;



class PColStd_VArrayTNodeOfFieldOfHArray1OfInteger 
{
public:

  DEFINE_STANDARD_ALLOC

  
    PColStd_VArrayTNodeOfFieldOfHArray1OfInteger();
  
    PColStd_VArrayTNodeOfFieldOfHArray1OfInteger(const Standard_Integer& aValue);
  
      void SetValue (const Standard_Integer& aValue) ;
  
      Standard_Address Value()  const;




protected:





private:



  Standard_Integer myValue;


};

#define Item Standard_Integer
#define Item_hxx <Foundation/Standard/Standard_Integer.hxx>
#define DBC_VArrayNode PColStd_VArrayNodeOfFieldOfHArray1OfInteger
#define DBC_VArrayNode_hxx <PColStd_VArrayNodeOfFieldOfHArray1OfInteger.hxx>
#define DBC_VArrayTNode PColStd_VArrayTNodeOfFieldOfHArray1OfInteger
#define DBC_VArrayTNode_hxx <PColStd_VArrayTNodeOfFieldOfHArray1OfInteger.hxx>
#define Handle_DBC_VArrayNode Handle_PColStd_VArrayNodeOfFieldOfHArray1OfInteger
#define DBC_VArrayNode_Type_() PColStd_VArrayNodeOfFieldOfHArray1OfInteger_Type_()
#define DBC_VArray PColStd_FieldOfHArray1OfInteger
#define DBC_VArray_hxx <PColStd_FieldOfHArray1OfInteger.hxx>

#include <DBC_VArrayTNode.lxx>

#undef Item
#undef Item_hxx
#undef DBC_VArrayNode
#undef DBC_VArrayNode_hxx
#undef DBC_VArrayTNode
#undef DBC_VArrayTNode_hxx
#undef Handle_DBC_VArrayNode
#undef DBC_VArrayNode_Type_
#undef DBC_VArray
#undef DBC_VArray_hxx




#endif // _PColStd_VArrayTNodeOfFieldOfHArray1OfInteger_HeaderFile
