// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopBas_ListIteratorOfListOfTestInterference_HeaderFile
#define _TopBas_ListIteratorOfListOfTestInterference_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <ModelingAlgorithms/TopBas/Handle_TopBas_ListNodeOfListOfTestInterference.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class TopBas_ListOfTestInterference;
class TopBas_TestInterference;
class TopBas_ListNodeOfListOfTestInterference;



class TopBas_ListIteratorOfListOfTestInterference 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopBas_ListIteratorOfListOfTestInterference();
  
  Standard_EXPORT TopBas_ListIteratorOfListOfTestInterference(const TopBas_ListOfTestInterference& L);
  
  Standard_EXPORT   void Initialize (const TopBas_ListOfTestInterference& L) ;
  
      Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   TopBas_TestInterference& Value()  const;


friend class TopBas_ListOfTestInterference;


protected:





private:



  Standard_Address current;
  Standard_Address previous;


};

#define Item TopBas_TestInterference
#define Item_hxx <ModelingAlgorithms/TopBas/TopBas_TestInterference.hxx>
#define TCollection_ListNode TopBas_ListNodeOfListOfTestInterference
#define TCollection_ListNode_hxx <ModelingAlgorithms/TopBas/TopBas_ListNodeOfListOfTestInterference.hxx>
#define TCollection_ListIterator TopBas_ListIteratorOfListOfTestInterference
#define TCollection_ListIterator_hxx <ModelingAlgorithms/TopBas/TopBas_ListIteratorOfListOfTestInterference.hxx>
#define Handle_TCollection_ListNode Handle_TopBas_ListNodeOfListOfTestInterference
#define TCollection_ListNode_Type_() TopBas_ListNodeOfListOfTestInterference_Type_()
#define TCollection_List TopBas_ListOfTestInterference
#define TCollection_List_hxx <ModelingAlgorithms/TopBas/TopBas_ListOfTestInterference.hxx>

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




#endif // _TopBas_ListIteratorOfListOfTestInterference_HeaderFile
