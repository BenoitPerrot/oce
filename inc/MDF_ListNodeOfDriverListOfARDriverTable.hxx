// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_ListNodeOfDriverListOfARDriverTable_HeaderFile
#define _MDF_ListNodeOfDriverListOfARDriverTable_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_MDF_ListNodeOfDriverListOfARDriverTable.hxx>

#include <Handle_MDF_ARDriver.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class MDF_ARDriver;
class MDF_DriverListOfARDriverTable;
class MDF_ListIteratorOfDriverListOfARDriverTable;



class MDF_ListNodeOfDriverListOfARDriverTable : public TCollection_MapNode
{

public:

  
    MDF_ListNodeOfDriverListOfARDriverTable(const Handle(MDF_ARDriver)& I, const TCollection_MapNodePtr& n);
  
      Handle(MDF_ARDriver)& Value()  const;




  DEFINE_STANDARD_RTTI(MDF_ListNodeOfDriverListOfARDriverTable)

protected:




private: 


  Handle(MDF_ARDriver) myValue;


};

#define Item Handle(MDF_ARDriver)
#define Item_hxx <MDF_ARDriver.hxx>
#define TCollection_ListNode MDF_ListNodeOfDriverListOfARDriverTable
#define TCollection_ListNode_hxx <MDF_ListNodeOfDriverListOfARDriverTable.hxx>
#define TCollection_ListIterator MDF_ListIteratorOfDriverListOfARDriverTable
#define TCollection_ListIterator_hxx <MDF_ListIteratorOfDriverListOfARDriverTable.hxx>
#define Handle_TCollection_ListNode Handle_MDF_ListNodeOfDriverListOfARDriverTable
#define TCollection_ListNode_Type_() MDF_ListNodeOfDriverListOfARDriverTable_Type_()
#define TCollection_List MDF_DriverListOfARDriverTable
#define TCollection_List_hxx <MDF_DriverListOfARDriverTable.hxx>

#include <TCollection_ListNode.lxx>

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




#endif // _MDF_ListNodeOfDriverListOfARDriverTable_HeaderFile
