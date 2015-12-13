// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SequenceNodeOfSequenceOfAppliedModifiers_HeaderFile
#define _IFSelect_SequenceNodeOfSequenceOfAppliedModifiers_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IFSelect_SequenceNodeOfSequenceOfAppliedModifiers.hxx>

#include <Handle_IFSelect_AppliedModifiers.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class IFSelect_AppliedModifiers;
class IFSelect_SequenceOfAppliedModifiers;



class IFSelect_SequenceNodeOfSequenceOfAppliedModifiers : public TCollection_SeqNode
{

public:

  
    IFSelect_SequenceNodeOfSequenceOfAppliedModifiers(const Handle(IFSelect_AppliedModifiers)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(IFSelect_AppliedModifiers)& Value()  const;




  DEFINE_STANDARD_RTTI(IFSelect_SequenceNodeOfSequenceOfAppliedModifiers)

protected:




private: 


  Handle(IFSelect_AppliedModifiers) myValue;


};

#define SeqItem Handle(IFSelect_AppliedModifiers)
#define SeqItem_hxx <IFSelect_AppliedModifiers.hxx>
#define TCollection_SequenceNode IFSelect_SequenceNodeOfSequenceOfAppliedModifiers
#define TCollection_SequenceNode_hxx <IFSelect_SequenceNodeOfSequenceOfAppliedModifiers.hxx>
#define Handle_TCollection_SequenceNode Handle_IFSelect_SequenceNodeOfSequenceOfAppliedModifiers
#define TCollection_SequenceNode_Type_() IFSelect_SequenceNodeOfSequenceOfAppliedModifiers_Type_()
#define TCollection_Sequence IFSelect_SequenceOfAppliedModifiers
#define TCollection_Sequence_hxx <IFSelect_SequenceOfAppliedModifiers.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _IFSelect_SequenceNodeOfSequenceOfAppliedModifiers_HeaderFile
