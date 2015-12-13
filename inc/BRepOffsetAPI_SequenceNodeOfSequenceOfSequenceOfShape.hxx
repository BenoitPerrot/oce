// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfShape_HeaderFile
#define _BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfShape.hxx>

#include <TopTools_SequenceOfShape.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class TopTools_SequenceOfShape;
class BRepOffsetAPI_SequenceOfSequenceOfShape;



class BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfShape : public TCollection_SeqNode
{

public:

  
    BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfShape(const TopTools_SequenceOfShape& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      TopTools_SequenceOfShape& Value()  const;




  DEFINE_STANDARD_RTTI(BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfShape)

protected:




private: 


  TopTools_SequenceOfShape myValue;


};

#define SeqItem TopTools_SequenceOfShape
#define SeqItem_hxx <TopTools_SequenceOfShape.hxx>
#define TCollection_SequenceNode BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfShape
#define TCollection_SequenceNode_hxx <BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfShape.hxx>
#define Handle_TCollection_SequenceNode Handle_BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfShape
#define TCollection_SequenceNode_Type_() BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfShape_Type_()
#define TCollection_Sequence BRepOffsetAPI_SequenceOfSequenceOfShape
#define TCollection_Sequence_hxx <BRepOffsetAPI_SequenceOfSequenceOfShape.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfShape_HeaderFile
