// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTopoDS_VArrayTNodeOfFieldOfHArray1OfShape1_HeaderFile
#define _PTopoDS_VArrayTNodeOfFieldOfHArray1OfShape1_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <OCAF/PTopoDS/PTopoDS_Shape1.hxx>
#include <OCAF/PTopoDS/Handle_PTopoDS_VArrayNodeOfFieldOfHArray1OfShape1.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class PTopoDS_Shape1;
class PTopoDS_FieldOfHArray1OfShape1;
class PTopoDS_VArrayNodeOfFieldOfHArray1OfShape1;



class PTopoDS_VArrayTNodeOfFieldOfHArray1OfShape1 
{
public:

  DEFINE_STANDARD_ALLOC

  
    PTopoDS_VArrayTNodeOfFieldOfHArray1OfShape1();
  
    PTopoDS_VArrayTNodeOfFieldOfHArray1OfShape1(const PTopoDS_Shape1& aValue);
  
      void SetValue (const PTopoDS_Shape1& aValue) ;
  
      Standard_Address Value()  const;




protected:





private:



  PTopoDS_Shape1 myValue;


};

#define Item PTopoDS_Shape1
#define Item_hxx <OCAF/PTopoDS/PTopoDS_Shape1.hxx>
#define DBC_VArrayNode PTopoDS_VArrayNodeOfFieldOfHArray1OfShape1
#define DBC_VArrayNode_hxx <OCAF/PTopoDS/PTopoDS_VArrayNodeOfFieldOfHArray1OfShape1.hxx>
#define DBC_VArrayTNode PTopoDS_VArrayTNodeOfFieldOfHArray1OfShape1
#define DBC_VArrayTNode_hxx <OCAF/PTopoDS/PTopoDS_VArrayTNodeOfFieldOfHArray1OfShape1.hxx>
#define Handle_DBC_VArrayNode Handle_PTopoDS_VArrayNodeOfFieldOfHArray1OfShape1
#define DBC_VArrayNode_Type_() PTopoDS_VArrayNodeOfFieldOfHArray1OfShape1_Type_()
#define DBC_VArray PTopoDS_FieldOfHArray1OfShape1
#define DBC_VArray_hxx <OCAF/PTopoDS/PTopoDS_FieldOfHArray1OfShape1.hxx>

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




#endif // _PTopoDS_VArrayTNodeOfFieldOfHArray1OfShape1_HeaderFile
