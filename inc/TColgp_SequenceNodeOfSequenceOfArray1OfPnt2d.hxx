// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_SequenceNodeOfSequenceOfArray1OfPnt2d_HeaderFile
#define _TColgp_SequenceNodeOfSequenceOfArray1OfPnt2d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TColgp_SequenceNodeOfSequenceOfArray1OfPnt2d.hxx>

#include <Handle_TColgp_HArray1OfPnt2d.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class TColgp_HArray1OfPnt2d;
class TColgp_SequenceOfArray1OfPnt2d;



class TColgp_SequenceNodeOfSequenceOfArray1OfPnt2d : public TCollection_SeqNode
{

public:

  
    TColgp_SequenceNodeOfSequenceOfArray1OfPnt2d(const Handle(TColgp_HArray1OfPnt2d)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(TColgp_HArray1OfPnt2d)& Value()  const;




  DEFINE_STANDARD_RTTI(TColgp_SequenceNodeOfSequenceOfArray1OfPnt2d)

protected:




private: 


  Handle(TColgp_HArray1OfPnt2d) myValue;


};

#define SeqItem Handle(TColgp_HArray1OfPnt2d)
#define SeqItem_hxx <TColgp_HArray1OfPnt2d.hxx>
#define TCollection_SequenceNode TColgp_SequenceNodeOfSequenceOfArray1OfPnt2d
#define TCollection_SequenceNode_hxx <TColgp_SequenceNodeOfSequenceOfArray1OfPnt2d.hxx>
#define Handle_TCollection_SequenceNode Handle_TColgp_SequenceNodeOfSequenceOfArray1OfPnt2d
#define TCollection_SequenceNode_Type_() TColgp_SequenceNodeOfSequenceOfArray1OfPnt2d_Type_()
#define TCollection_Sequence TColgp_SequenceOfArray1OfPnt2d
#define TCollection_Sequence_hxx <TColgp_SequenceOfArray1OfPnt2d.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _TColgp_SequenceNodeOfSequenceOfArray1OfPnt2d_HeaderFile
