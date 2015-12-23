// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <ModelingAlgorithms/MAT/MAT_ListOfBisector.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <ModelingAlgorithms/MAT/MAT_TListNodeOfListOfBisector.hxx>
#include <ModelingAlgorithms/MAT/MAT_Bisector.hxx>

 


IMPLEMENT_STANDARD_TYPE(MAT_ListOfBisector)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(MAT_ListOfBisector)


IMPLEMENT_DOWNCAST(MAT_ListOfBisector,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(MAT_ListOfBisector)


#define Item Handle(MAT_Bisector)
#define Item_hxx <ModelingAlgorithms/MAT/MAT_Bisector.hxx>
#define MAT_TListNode MAT_TListNodeOfListOfBisector
#define MAT_TListNode_hxx <ModelingAlgorithms/MAT/MAT_TListNodeOfListOfBisector.hxx>
#define Handle_MAT_TListNode Handle_MAT_TListNodeOfListOfBisector
#define MAT_TListNode_Type_() MAT_TListNodeOfListOfBisector_Type_()
#define MAT_TList MAT_ListOfBisector
#define MAT_TList_hxx <ModelingAlgorithms/MAT/MAT_ListOfBisector.hxx>
#define Handle_MAT_TList Handle_MAT_ListOfBisector
#define MAT_TList_Type_() MAT_ListOfBisector_Type_()
#include <ModelingAlgorithms/MAT/MAT_TList.gxx>

