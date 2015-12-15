// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_SequenceNodeOfSequenceOfXY_HeaderFile
#define _TColgp_SequenceNodeOfSequenceOfXY_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TColgp_SequenceNodeOfSequenceOfXY.hxx>

#include <Mathematics/Primitives/gp_XY.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class gp_XY;
class TColgp_SequenceOfXY;



class TColgp_SequenceNodeOfSequenceOfXY : public TCollection_SeqNode
{

public:

  
    TColgp_SequenceNodeOfSequenceOfXY(const gp_XY& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      gp_XY& Value()  const;




  DEFINE_STANDARD_RTTI(TColgp_SequenceNodeOfSequenceOfXY)

protected:




private: 


  gp_XY myValue;


};

#define SeqItem gp_XY
#define SeqItem_hxx <Mathematics/Primitives/gp_XY.hxx>
#define TCollection_SequenceNode TColgp_SequenceNodeOfSequenceOfXY
#define TCollection_SequenceNode_hxx <Mathematics/Collections/TColgp_SequenceNodeOfSequenceOfXY.hxx>
#define Handle_TCollection_SequenceNode Handle_TColgp_SequenceNodeOfSequenceOfXY
#define TCollection_SequenceNode_Type_() TColgp_SequenceNodeOfSequenceOfXY_Type_()
#define TCollection_Sequence TColgp_SequenceOfXY
#define TCollection_Sequence_hxx <Mathematics/Collections/TColgp_SequenceOfXY.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _TColgp_SequenceNodeOfSequenceOfXY_HeaderFile
