// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Contap_SequenceNodeOfTheSequenceOfLine_HeaderFile
#define _Contap_SequenceNodeOfTheSequenceOfLine_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Contap_SequenceNodeOfTheSequenceOfLine.hxx>

#include <Contap_Line.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class Contap_Line;
class Contap_TheSequenceOfLine;



class Contap_SequenceNodeOfTheSequenceOfLine : public TCollection_SeqNode
{

public:

  
    Contap_SequenceNodeOfTheSequenceOfLine(const Contap_Line& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Contap_Line& Value()  const;




  DEFINE_STANDARD_RTTI(Contap_SequenceNodeOfTheSequenceOfLine)

protected:




private: 


  Contap_Line myValue;


};

#define SeqItem Contap_Line
#define SeqItem_hxx <Contap_Line.hxx>
#define TCollection_SequenceNode Contap_SequenceNodeOfTheSequenceOfLine
#define TCollection_SequenceNode_hxx <Contap_SequenceNodeOfTheSequenceOfLine.hxx>
#define Handle_TCollection_SequenceNode Handle_Contap_SequenceNodeOfTheSequenceOfLine
#define TCollection_SequenceNode_Type_() Contap_SequenceNodeOfTheSequenceOfLine_Type_()
#define TCollection_Sequence Contap_TheSequenceOfLine
#define TCollection_Sequence_hxx <Contap_TheSequenceOfLine.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Contap_SequenceNodeOfTheSequenceOfLine_HeaderFile
