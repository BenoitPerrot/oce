// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPolyh_SequenceNodeOfSeqOfStartPoints_HeaderFile
#define _IntPolyh_SequenceNodeOfSeqOfStartPoints_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/IntPolyh/Handle_IntPolyh_SequenceNodeOfSeqOfStartPoints.hxx>

#include <ModelingAlgorithms/IntPolyh/IntPolyh_StartPoint.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class IntPolyh_StartPoint;
class IntPolyh_SeqOfStartPoints;



class IntPolyh_SequenceNodeOfSeqOfStartPoints : public TCollection_SeqNode
{

public:

  
    IntPolyh_SequenceNodeOfSeqOfStartPoints(const IntPolyh_StartPoint& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      IntPolyh_StartPoint& Value()  const;




  DEFINE_STANDARD_RTTI(IntPolyh_SequenceNodeOfSeqOfStartPoints)

protected:




private: 


  IntPolyh_StartPoint myValue;


};

#define SeqItem IntPolyh_StartPoint
#define SeqItem_hxx <ModelingAlgorithms/IntPolyh/IntPolyh_StartPoint.hxx>
#define TCollection_SequenceNode IntPolyh_SequenceNodeOfSeqOfStartPoints
#define TCollection_SequenceNode_hxx <ModelingAlgorithms/IntPolyh/IntPolyh_SequenceNodeOfSeqOfStartPoints.hxx>
#define Handle_TCollection_SequenceNode Handle_IntPolyh_SequenceNodeOfSeqOfStartPoints
#define TCollection_SequenceNode_Type_() IntPolyh_SequenceNodeOfSeqOfStartPoints_Type_()
#define TCollection_Sequence IntPolyh_SeqOfStartPoints
#define TCollection_Sequence_hxx <ModelingAlgorithms/IntPolyh/IntPolyh_SeqOfStartPoints.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _IntPolyh_SequenceNodeOfSeqOfStartPoints_HeaderFile
