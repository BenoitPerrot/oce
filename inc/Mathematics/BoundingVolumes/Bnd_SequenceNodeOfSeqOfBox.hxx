// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Bnd_SequenceNodeOfSeqOfBox_HeaderFile
#define _Bnd_SequenceNodeOfSeqOfBox_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Mathematics/BoundingVolumes/Handle_Bnd_SequenceNodeOfSeqOfBox.hxx>

#include <Mathematics/BoundingVolumes/Bnd_Box.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class Bnd_Box;
class Bnd_SeqOfBox;



class Bnd_SequenceNodeOfSeqOfBox : public TCollection_SeqNode
{

public:

  
    Bnd_SequenceNodeOfSeqOfBox(const Bnd_Box& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Bnd_Box& Value()  const;




  DEFINE_STANDARD_RTTI(Bnd_SequenceNodeOfSeqOfBox)

protected:




private: 


  Bnd_Box myValue;


};

#define SeqItem Bnd_Box
#define SeqItem_hxx <Mathematics/BoundingVolumes/Bnd_Box.hxx>
#define TCollection_SequenceNode Bnd_SequenceNodeOfSeqOfBox
#define TCollection_SequenceNode_hxx <Mathematics/BoundingVolumes/Bnd_SequenceNodeOfSeqOfBox.hxx>
#define Handle_TCollection_SequenceNode Handle_Bnd_SequenceNodeOfSeqOfBox
#define TCollection_SequenceNode_Type_() Bnd_SequenceNodeOfSeqOfBox_Type_()
#define TCollection_Sequence Bnd_SeqOfBox
#define TCollection_Sequence_hxx <Mathematics/BoundingVolumes/Bnd_SeqOfBox.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Bnd_SequenceNodeOfSeqOfBox_HeaderFile
