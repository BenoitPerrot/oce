// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_ListIteratorOfListOfPave_HeaderFile
#define _TopOpeBRepBuild_ListIteratorOfListOfPave_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Handle_TopOpeBRepBuild_Pave.hxx>
#include <Handle_TopOpeBRepBuild_ListNodeOfListOfPave.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class TopOpeBRepBuild_ListOfPave;
class TopOpeBRepBuild_Pave;
class TopOpeBRepBuild_ListNodeOfListOfPave;



class TopOpeBRepBuild_ListIteratorOfListOfPave 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepBuild_ListIteratorOfListOfPave();
  
  Standard_EXPORT TopOpeBRepBuild_ListIteratorOfListOfPave(const TopOpeBRepBuild_ListOfPave& L);
  
  Standard_EXPORT   void Initialize (const TopOpeBRepBuild_ListOfPave& L) ;
  
      Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   Handle(TopOpeBRepBuild_Pave)& Value()  const;


friend class TopOpeBRepBuild_ListOfPave;


protected:





private:



  Standard_Address current;
  Standard_Address previous;


};

#define Item Handle(TopOpeBRepBuild_Pave)
#define Item_hxx <TopOpeBRepBuild_Pave.hxx>
#define TCollection_ListNode TopOpeBRepBuild_ListNodeOfListOfPave
#define TCollection_ListNode_hxx <TopOpeBRepBuild_ListNodeOfListOfPave.hxx>
#define TCollection_ListIterator TopOpeBRepBuild_ListIteratorOfListOfPave
#define TCollection_ListIterator_hxx <TopOpeBRepBuild_ListIteratorOfListOfPave.hxx>
#define Handle_TCollection_ListNode Handle_TopOpeBRepBuild_ListNodeOfListOfPave
#define TCollection_ListNode_Type_() TopOpeBRepBuild_ListNodeOfListOfPave_Type_()
#define TCollection_List TopOpeBRepBuild_ListOfPave
#define TCollection_List_hxx <TopOpeBRepBuild_ListOfPave.hxx>

#include <Foundation/TCollection/TCollection_ListIterator.lxx>

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




#endif // _TopOpeBRepBuild_ListIteratorOfListOfPave_HeaderFile
