// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_SequenceNodeOfSequenceOfAx2_HeaderFile
#define _GeomFill_SequenceNodeOfSequenceOfAx2_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_GeomFill_SequenceNodeOfSequenceOfAx2.hxx>

#include <gp_Ax2.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class gp_Ax2;
class GeomFill_SequenceOfAx2;



class GeomFill_SequenceNodeOfSequenceOfAx2 : public TCollection_SeqNode
{

public:

  
    GeomFill_SequenceNodeOfSequenceOfAx2(const gp_Ax2& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      gp_Ax2& Value()  const;




  DEFINE_STANDARD_RTTI(GeomFill_SequenceNodeOfSequenceOfAx2)

protected:




private: 


  gp_Ax2 myValue;


};

#define SeqItem gp_Ax2
#define SeqItem_hxx <gp_Ax2.hxx>
#define TCollection_SequenceNode GeomFill_SequenceNodeOfSequenceOfAx2
#define TCollection_SequenceNode_hxx <GeomFill_SequenceNodeOfSequenceOfAx2.hxx>
#define Handle_TCollection_SequenceNode Handle_GeomFill_SequenceNodeOfSequenceOfAx2
#define TCollection_SequenceNode_Type_() GeomFill_SequenceNodeOfSequenceOfAx2_Type_()
#define TCollection_Sequence GeomFill_SequenceOfAx2
#define TCollection_Sequence_hxx <GeomFill_SequenceOfAx2.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _GeomFill_SequenceNodeOfSequenceOfAx2_HeaderFile
