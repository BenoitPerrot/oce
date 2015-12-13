// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Contap_SequenceNodeOfTheSequenceOfPoint_HeaderFile
#define _Contap_SequenceNodeOfTheSequenceOfPoint_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Contap_SequenceNodeOfTheSequenceOfPoint.hxx>

#include <Contap_Point.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class Contap_Point;
class Contap_TheSequenceOfPoint;



class Contap_SequenceNodeOfTheSequenceOfPoint : public TCollection_SeqNode
{

public:

  
    Contap_SequenceNodeOfTheSequenceOfPoint(const Contap_Point& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Contap_Point& Value()  const;




  DEFINE_STANDARD_RTTI(Contap_SequenceNodeOfTheSequenceOfPoint)

protected:




private: 


  Contap_Point myValue;


};

#define SeqItem Contap_Point
#define SeqItem_hxx <Contap_Point.hxx>
#define TCollection_SequenceNode Contap_SequenceNodeOfTheSequenceOfPoint
#define TCollection_SequenceNode_hxx <Contap_SequenceNodeOfTheSequenceOfPoint.hxx>
#define Handle_TCollection_SequenceNode Handle_Contap_SequenceNodeOfTheSequenceOfPoint
#define TCollection_SequenceNode_Type_() Contap_SequenceNodeOfTheSequenceOfPoint_Type_()
#define TCollection_Sequence Contap_TheSequenceOfPoint
#define TCollection_Sequence_hxx <Contap_TheSequenceOfPoint.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Contap_SequenceNodeOfTheSequenceOfPoint_HeaderFile
