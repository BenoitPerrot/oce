// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking_HeaderFile
#define _Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking.hxx>

#include <Handle_Contap_TheIWLineOfTheIWalking.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class Contap_TheIWLineOfTheIWalking;
class Contap_SequenceOfIWLineOfTheIWalking;



class Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking : public TCollection_SeqNode
{

public:

  
    Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking(const Handle(Contap_TheIWLineOfTheIWalking)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(Contap_TheIWLineOfTheIWalking)& Value()  const;




  DEFINE_STANDARD_RTTI(Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking)

protected:




private: 


  Handle(Contap_TheIWLineOfTheIWalking) myValue;


};

#define SeqItem Handle(Contap_TheIWLineOfTheIWalking)
#define SeqItem_hxx <Contap_TheIWLineOfTheIWalking.hxx>
#define TCollection_SequenceNode Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking
#define TCollection_SequenceNode_hxx <Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking.hxx>
#define Handle_TCollection_SequenceNode Handle_Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking
#define TCollection_SequenceNode_Type_() Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking_Type_()
#define TCollection_Sequence Contap_SequenceOfIWLineOfTheIWalking
#define TCollection_Sequence_hxx <Contap_SequenceOfIWLineOfTheIWalking.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking_HeaderFile
