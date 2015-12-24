// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_SequenceNodeOfSequenceOfCheck_HeaderFile
#define _Interface_SequenceNodeOfSequenceOfCheck_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/Interface/Handle_Interface_SequenceNodeOfSequenceOfCheck.hxx>

#include <DataExchange/Interface/Handle_Interface_Check.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class Interface_Check;
class Interface_SequenceOfCheck;



class Interface_SequenceNodeOfSequenceOfCheck : public TCollection_SeqNode
{

public:

  
    Interface_SequenceNodeOfSequenceOfCheck(const Handle(Interface_Check)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(Interface_Check)& Value()  const;




  DEFINE_STANDARD_RTTI(Interface_SequenceNodeOfSequenceOfCheck)

protected:




private: 


  Handle(Interface_Check) myValue;


};

#define SeqItem Handle(Interface_Check)
#define SeqItem_hxx <DataExchange/Interface/Interface_Check.hxx>
#define TCollection_SequenceNode Interface_SequenceNodeOfSequenceOfCheck
#define TCollection_SequenceNode_hxx <DataExchange/Interface/Interface_SequenceNodeOfSequenceOfCheck.hxx>
#define Handle_TCollection_SequenceNode Handle_Interface_SequenceNodeOfSequenceOfCheck
#define TCollection_SequenceNode_Type_() Interface_SequenceNodeOfSequenceOfCheck_Type_()
#define TCollection_Sequence Interface_SequenceOfCheck
#define TCollection_Sequence_hxx <DataExchange/Interface/Interface_SequenceOfCheck.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Interface_SequenceNodeOfSequenceOfCheck_HeaderFile
