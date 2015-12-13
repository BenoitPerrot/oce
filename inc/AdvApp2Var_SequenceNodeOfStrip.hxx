// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AdvApp2Var_SequenceNodeOfStrip_HeaderFile
#define _AdvApp2Var_SequenceNodeOfStrip_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_AdvApp2Var_SequenceNodeOfStrip.hxx>

#include <AdvApp2Var_Iso.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class AdvApp2Var_Iso;
class AdvApp2Var_Strip;



class AdvApp2Var_SequenceNodeOfStrip : public TCollection_SeqNode
{

public:

  
    AdvApp2Var_SequenceNodeOfStrip(const AdvApp2Var_Iso& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      AdvApp2Var_Iso& Value()  const;




  DEFINE_STANDARD_RTTI(AdvApp2Var_SequenceNodeOfStrip)

protected:




private: 


  AdvApp2Var_Iso myValue;


};

#define SeqItem AdvApp2Var_Iso
#define SeqItem_hxx <AdvApp2Var_Iso.hxx>
#define TCollection_SequenceNode AdvApp2Var_SequenceNodeOfStrip
#define TCollection_SequenceNode_hxx <AdvApp2Var_SequenceNodeOfStrip.hxx>
#define Handle_TCollection_SequenceNode Handle_AdvApp2Var_SequenceNodeOfStrip
#define TCollection_SequenceNode_Type_() AdvApp2Var_SequenceNodeOfStrip_Type_()
#define TCollection_Sequence AdvApp2Var_Strip
#define TCollection_Sequence_hxx <AdvApp2Var_Strip.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _AdvApp2Var_SequenceNodeOfStrip_HeaderFile
