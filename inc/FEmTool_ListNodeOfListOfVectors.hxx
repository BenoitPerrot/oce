// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _FEmTool_ListNodeOfListOfVectors_HeaderFile
#define _FEmTool_ListNodeOfListOfVectors_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_FEmTool_ListNodeOfListOfVectors.hxx>

#include <Handle_TColStd_HArray1OfReal.hxx>
#include <Foundation/TCollection/TCollection_MapNode.hxx>
#include <Foundation/TCollection/TCollection_MapNodePtr.hxx>
class TColStd_HArray1OfReal;
class FEmTool_ListOfVectors;
class FEmTool_ListIteratorOfListOfVectors;



class FEmTool_ListNodeOfListOfVectors : public TCollection_MapNode
{

public:

  
    FEmTool_ListNodeOfListOfVectors(const Handle(TColStd_HArray1OfReal)& I, const TCollection_MapNodePtr& n);
  
      Handle(TColStd_HArray1OfReal)& Value()  const;




  DEFINE_STANDARD_RTTI(FEmTool_ListNodeOfListOfVectors)

protected:




private: 


  Handle(TColStd_HArray1OfReal) myValue;


};

#define Item Handle(TColStd_HArray1OfReal)
#define Item_hxx <Foundation/TColStd/TColStd_HArray1OfReal.hxx>
#define TCollection_ListNode FEmTool_ListNodeOfListOfVectors
#define TCollection_ListNode_hxx <FEmTool_ListNodeOfListOfVectors.hxx>
#define TCollection_ListIterator FEmTool_ListIteratorOfListOfVectors
#define TCollection_ListIterator_hxx <FEmTool_ListIteratorOfListOfVectors.hxx>
#define Handle_TCollection_ListNode Handle_FEmTool_ListNodeOfListOfVectors
#define TCollection_ListNode_Type_() FEmTool_ListNodeOfListOfVectors_Type_()
#define TCollection_List FEmTool_ListOfVectors
#define TCollection_List_hxx <FEmTool_ListOfVectors.hxx>

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




#endif // _FEmTool_ListNodeOfListOfVectors_HeaderFile
