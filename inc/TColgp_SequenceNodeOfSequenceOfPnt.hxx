// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_SequenceNodeOfSequenceOfPnt_HeaderFile
#define _TColgp_SequenceNodeOfSequenceOfPnt_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TColgp_SequenceNodeOfSequenceOfPnt.hxx>

#include <gp_Pnt.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class gp_Pnt;
class TColgp_SequenceOfPnt;



class TColgp_SequenceNodeOfSequenceOfPnt : public TCollection_SeqNode
{

public:

  
    TColgp_SequenceNodeOfSequenceOfPnt(const gp_Pnt& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      gp_Pnt& Value()  const;




  DEFINE_STANDARD_RTTI(TColgp_SequenceNodeOfSequenceOfPnt)

protected:




private: 


  gp_Pnt myValue;


};

#define SeqItem gp_Pnt
#define SeqItem_hxx <gp_Pnt.hxx>
#define TCollection_SequenceNode TColgp_SequenceNodeOfSequenceOfPnt
#define TCollection_SequenceNode_hxx <TColgp_SequenceNodeOfSequenceOfPnt.hxx>
#define Handle_TCollection_SequenceNode Handle_TColgp_SequenceNodeOfSequenceOfPnt
#define TCollection_SequenceNode_Type_() TColgp_SequenceNodeOfSequenceOfPnt_Type_()
#define TCollection_Sequence TColgp_SequenceOfPnt
#define TCollection_Sequence_hxx <TColgp_SequenceOfPnt.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _TColgp_SequenceNodeOfSequenceOfPnt_HeaderFile
