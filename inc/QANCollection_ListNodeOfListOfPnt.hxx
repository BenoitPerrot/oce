// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _QANCollection_ListNodeOfListOfPnt_HeaderFile
#define _QANCollection_ListNodeOfListOfPnt_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_QANCollection_ListNodeOfListOfPnt.hxx>

#include <gp_Pnt.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class gp_Pnt;
class QANCollection_ListOfPnt;
class QANCollection_ListIteratorOfListOfPnt;



class QANCollection_ListNodeOfListOfPnt : public TCollection_MapNode
{

public:

  
    QANCollection_ListNodeOfListOfPnt(const gp_Pnt& I, const TCollection_MapNodePtr& n);
  
      gp_Pnt& Value()  const;




  DEFINE_STANDARD_RTTI(QANCollection_ListNodeOfListOfPnt)

protected:




private: 


  gp_Pnt myValue;


};

#define Item gp_Pnt
#define Item_hxx <gp_Pnt.hxx>
#define TCollection_ListNode QANCollection_ListNodeOfListOfPnt
#define TCollection_ListNode_hxx <QANCollection_ListNodeOfListOfPnt.hxx>
#define TCollection_ListIterator QANCollection_ListIteratorOfListOfPnt
#define TCollection_ListIterator_hxx <QANCollection_ListIteratorOfListOfPnt.hxx>
#define Handle_TCollection_ListNode Handle_QANCollection_ListNodeOfListOfPnt
#define TCollection_ListNode_Type_() QANCollection_ListNodeOfListOfPnt_Type_()
#define TCollection_List QANCollection_ListOfPnt
#define TCollection_List_hxx <QANCollection_ListOfPnt.hxx>

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




#endif // _QANCollection_ListNodeOfListOfPnt_HeaderFile
