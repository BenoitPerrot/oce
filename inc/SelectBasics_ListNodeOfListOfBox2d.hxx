// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectBasics_ListNodeOfListOfBox2d_HeaderFile
#define _SelectBasics_ListNodeOfListOfBox2d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_SelectBasics_ListNodeOfListOfBox2d.hxx>

#include <Bnd_Box2d.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class Bnd_Box2d;
class SelectBasics_ListOfBox2d;
class SelectBasics_ListIteratorOfListOfBox2d;



class SelectBasics_ListNodeOfListOfBox2d : public TCollection_MapNode
{

public:

  
    SelectBasics_ListNodeOfListOfBox2d(const Bnd_Box2d& I, const TCollection_MapNodePtr& n);
  
      Bnd_Box2d& Value()  const;




  DEFINE_STANDARD_RTTI(SelectBasics_ListNodeOfListOfBox2d)

protected:




private: 


  Bnd_Box2d myValue;


};

#define Item Bnd_Box2d
#define Item_hxx <Bnd_Box2d.hxx>
#define TCollection_ListNode SelectBasics_ListNodeOfListOfBox2d
#define TCollection_ListNode_hxx <SelectBasics_ListNodeOfListOfBox2d.hxx>
#define TCollection_ListIterator SelectBasics_ListIteratorOfListOfBox2d
#define TCollection_ListIterator_hxx <SelectBasics_ListIteratorOfListOfBox2d.hxx>
#define Handle_TCollection_ListNode Handle_SelectBasics_ListNodeOfListOfBox2d
#define TCollection_ListNode_Type_() SelectBasics_ListNodeOfListOfBox2d_Type_()
#define TCollection_List SelectBasics_ListOfBox2d
#define TCollection_List_hxx <SelectBasics_ListOfBox2d.hxx>

#include <Foundation/TCollection/TCollection_ListNode.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _SelectBasics_ListNodeOfListOfBox2d_HeaderFile
