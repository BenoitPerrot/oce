// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_VArrayTNodeOfFieldOfHArray1OfByte_HeaderFile
#define _PDataStd_VArrayTNodeOfFieldOfHArray1OfByte_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Byte.hxx>
#include <OCAF/PDataStd/Handle_PDataStd_VArrayNodeOfFieldOfHArray1OfByte.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class PDataStd_FieldOfHArray1OfByte;
class PDataStd_VArrayNodeOfFieldOfHArray1OfByte;



class PDataStd_VArrayTNodeOfFieldOfHArray1OfByte 
{
public:

  DEFINE_STANDARD_ALLOC

  
    PDataStd_VArrayTNodeOfFieldOfHArray1OfByte();
  
    PDataStd_VArrayTNodeOfFieldOfHArray1OfByte(const Standard_Byte& aValue);
  
      void SetValue (const Standard_Byte& aValue) ;
  
      Standard_Address Value()  const;




protected:





private:



  Standard_Byte myValue;


};

#define Item Standard_Byte
#define Item_hxx <Foundation/Standard/Standard_Byte.hxx>
#define DBC_VArrayNode PDataStd_VArrayNodeOfFieldOfHArray1OfByte
#define DBC_VArrayNode_hxx <OCAF/PDataStd/PDataStd_VArrayNodeOfFieldOfHArray1OfByte.hxx>
#define DBC_VArrayTNode PDataStd_VArrayTNodeOfFieldOfHArray1OfByte
#define DBC_VArrayTNode_hxx <OCAF/PDataStd/PDataStd_VArrayTNodeOfFieldOfHArray1OfByte.hxx>
#define Handle_DBC_VArrayNode Handle_PDataStd_VArrayNodeOfFieldOfHArray1OfByte
#define DBC_VArrayNode_Type_() PDataStd_VArrayNodeOfFieldOfHArray1OfByte_Type_()
#define DBC_VArray PDataStd_FieldOfHArray1OfByte
#define DBC_VArray_hxx <OCAF/PDataStd/PDataStd_FieldOfHArray1OfByte.hxx>

#include <OCAF/DBC/DBC_VArrayTNode.lxx>

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




#endif // _PDataStd_VArrayTNodeOfFieldOfHArray1OfByte_HeaderFile
