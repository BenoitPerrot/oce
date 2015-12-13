// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Intf_SequenceNodeOfSeqOfSectionLine_HeaderFile
#define _Intf_SequenceNodeOfSeqOfSectionLine_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Intf_SequenceNodeOfSeqOfSectionLine.hxx>

#include <Intf_SectionLine.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class Intf_SectionLine;
class Intf_SeqOfSectionLine;



class Intf_SequenceNodeOfSeqOfSectionLine : public TCollection_SeqNode
{

public:

  
    Intf_SequenceNodeOfSeqOfSectionLine(const Intf_SectionLine& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Intf_SectionLine& Value()  const;




  DEFINE_STANDARD_RTTI(Intf_SequenceNodeOfSeqOfSectionLine)

protected:




private: 


  Intf_SectionLine myValue;


};

#define SeqItem Intf_SectionLine
#define SeqItem_hxx <Intf_SectionLine.hxx>
#define TCollection_SequenceNode Intf_SequenceNodeOfSeqOfSectionLine
#define TCollection_SequenceNode_hxx <Intf_SequenceNodeOfSeqOfSectionLine.hxx>
#define Handle_TCollection_SequenceNode Handle_Intf_SequenceNodeOfSeqOfSectionLine
#define TCollection_SequenceNode_Type_() Intf_SequenceNodeOfSeqOfSectionLine_Type_()
#define TCollection_Sequence Intf_SeqOfSectionLine
#define TCollection_Sequence_hxx <Intf_SeqOfSectionLine.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Intf_SequenceNodeOfSeqOfSectionLine_HeaderFile
