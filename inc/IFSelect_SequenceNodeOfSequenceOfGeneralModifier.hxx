// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SequenceNodeOfSequenceOfGeneralModifier_HeaderFile
#define _IFSelect_SequenceNodeOfSequenceOfGeneralModifier_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IFSelect_SequenceNodeOfSequenceOfGeneralModifier.hxx>

#include <Handle_IFSelect_GeneralModifier.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class IFSelect_GeneralModifier;
class IFSelect_SequenceOfGeneralModifier;



class IFSelect_SequenceNodeOfSequenceOfGeneralModifier : public TCollection_SeqNode
{

public:

  
    IFSelect_SequenceNodeOfSequenceOfGeneralModifier(const Handle(IFSelect_GeneralModifier)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(IFSelect_GeneralModifier)& Value()  const;




  DEFINE_STANDARD_RTTI(IFSelect_SequenceNodeOfSequenceOfGeneralModifier)

protected:




private: 


  Handle(IFSelect_GeneralModifier) myValue;


};

#define SeqItem Handle(IFSelect_GeneralModifier)
#define SeqItem_hxx <IFSelect_GeneralModifier.hxx>
#define TCollection_SequenceNode IFSelect_SequenceNodeOfSequenceOfGeneralModifier
#define TCollection_SequenceNode_hxx <IFSelect_SequenceNodeOfSequenceOfGeneralModifier.hxx>
#define Handle_TCollection_SequenceNode Handle_IFSelect_SequenceNodeOfSequenceOfGeneralModifier
#define TCollection_SequenceNode_Type_() IFSelect_SequenceNodeOfSequenceOfGeneralModifier_Type_()
#define TCollection_Sequence IFSelect_SequenceOfGeneralModifier
#define TCollection_Sequence_hxx <IFSelect_SequenceOfGeneralModifier.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _IFSelect_SequenceNodeOfSequenceOfGeneralModifier_HeaderFile
