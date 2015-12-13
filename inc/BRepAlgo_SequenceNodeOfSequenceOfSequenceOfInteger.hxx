// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAlgo_SequenceNodeOfSequenceOfSequenceOfInteger_HeaderFile
#define _BRepAlgo_SequenceNodeOfSequenceOfSequenceOfInteger_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_BRepAlgo_SequenceNodeOfSequenceOfSequenceOfInteger.hxx>

#include <Foundation/TColStd/TColStd_SequenceOfInteger.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class TColStd_SequenceOfInteger;
class BRepAlgo_SequenceOfSequenceOfInteger;



class BRepAlgo_SequenceNodeOfSequenceOfSequenceOfInteger : public TCollection_SeqNode
{

public:

  
    BRepAlgo_SequenceNodeOfSequenceOfSequenceOfInteger(const TColStd_SequenceOfInteger& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      TColStd_SequenceOfInteger& Value()  const;




  DEFINE_STANDARD_RTTI(BRepAlgo_SequenceNodeOfSequenceOfSequenceOfInteger)

protected:




private: 


  TColStd_SequenceOfInteger myValue;


};

#define SeqItem TColStd_SequenceOfInteger
#define SeqItem_hxx <Foundation/TColStd/TColStd_SequenceOfInteger.hxx>
#define TCollection_SequenceNode BRepAlgo_SequenceNodeOfSequenceOfSequenceOfInteger
#define TCollection_SequenceNode_hxx <BRepAlgo_SequenceNodeOfSequenceOfSequenceOfInteger.hxx>
#define Handle_TCollection_SequenceNode Handle_BRepAlgo_SequenceNodeOfSequenceOfSequenceOfInteger
#define TCollection_SequenceNode_Type_() BRepAlgo_SequenceNodeOfSequenceOfSequenceOfInteger_Type_()
#define TCollection_Sequence BRepAlgo_SequenceOfSequenceOfInteger
#define TCollection_Sequence_hxx <BRepAlgo_SequenceOfSequenceOfInteger.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _BRepAlgo_SequenceNodeOfSequenceOfSequenceOfInteger_HeaderFile
