// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRep_ListIteratorOfListOfBipoint_HeaderFile
#define _TopOpeBRep_ListIteratorOfListOfBipoint_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Handle_TopOpeBRep_ListNodeOfListOfBipoint.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class TopOpeBRep_ListOfBipoint;
class TopOpeBRep_Bipoint;
class TopOpeBRep_ListNodeOfListOfBipoint;



class TopOpeBRep_ListIteratorOfListOfBipoint 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRep_ListIteratorOfListOfBipoint();
  
  Standard_EXPORT TopOpeBRep_ListIteratorOfListOfBipoint(const TopOpeBRep_ListOfBipoint& L);
  
  Standard_EXPORT   void Initialize (const TopOpeBRep_ListOfBipoint& L) ;
  
      Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   TopOpeBRep_Bipoint& Value()  const;


friend class TopOpeBRep_ListOfBipoint;


protected:





private:



  Standard_Address current;
  Standard_Address previous;


};

#define Item TopOpeBRep_Bipoint
#define Item_hxx <TopOpeBRep_Bipoint.hxx>
#define TCollection_ListNode TopOpeBRep_ListNodeOfListOfBipoint
#define TCollection_ListNode_hxx <TopOpeBRep_ListNodeOfListOfBipoint.hxx>
#define TCollection_ListIterator TopOpeBRep_ListIteratorOfListOfBipoint
#define TCollection_ListIterator_hxx <TopOpeBRep_ListIteratorOfListOfBipoint.hxx>
#define Handle_TCollection_ListNode Handle_TopOpeBRep_ListNodeOfListOfBipoint
#define TCollection_ListNode_Type_() TopOpeBRep_ListNodeOfListOfBipoint_Type_()
#define TCollection_List TopOpeBRep_ListOfBipoint
#define TCollection_List_hxx <TopOpeBRep_ListOfBipoint.hxx>

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




#endif // _TopOpeBRep_ListIteratorOfListOfBipoint_HeaderFile
