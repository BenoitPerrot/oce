// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <ModelingAlgorithms/Law/Law_ListNodeOfLaws.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <ModelingAlgorithms/Law/Law_Function.hxx>
#include <ModelingAlgorithms/Law/Law_Laws.hxx>
#include <ModelingAlgorithms/Law/Law_ListIteratorOfLaws.hxx>

 


IMPLEMENT_STANDARD_TYPE(Law_ListNodeOfLaws)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Law_ListNodeOfLaws)


IMPLEMENT_DOWNCAST(Law_ListNodeOfLaws,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Law_ListNodeOfLaws)


#define Item Handle(Law_Function)
#define Item_hxx <ModelingAlgorithms/Law/Law_Function.hxx>
#define TCollection_ListNode Law_ListNodeOfLaws
#define TCollection_ListNode_hxx <ModelingAlgorithms/Law/Law_ListNodeOfLaws.hxx>
#define TCollection_ListIterator Law_ListIteratorOfLaws
#define TCollection_ListIterator_hxx <ModelingAlgorithms/Law/Law_ListIteratorOfLaws.hxx>
#define Handle_TCollection_ListNode Handle_Law_ListNodeOfLaws
#define TCollection_ListNode_Type_() Law_ListNodeOfLaws_Type_()
#define TCollection_List Law_Laws
#define TCollection_List_hxx <ModelingAlgorithms/Law/Law_Laws.hxx>
#include <Foundation/TCollection/TCollection_ListNode.gxx>

