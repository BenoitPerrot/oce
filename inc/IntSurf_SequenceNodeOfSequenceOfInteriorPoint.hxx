// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntSurf_SequenceNodeOfSequenceOfInteriorPoint_HeaderFile
#define _IntSurf_SequenceNodeOfSequenceOfInteriorPoint_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IntSurf_SequenceNodeOfSequenceOfInteriorPoint.hxx>

#include <IntSurf_InteriorPoint.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class IntSurf_InteriorPoint;
class IntSurf_SequenceOfInteriorPoint;



class IntSurf_SequenceNodeOfSequenceOfInteriorPoint : public TCollection_SeqNode
{

public:

  
    IntSurf_SequenceNodeOfSequenceOfInteriorPoint(const IntSurf_InteriorPoint& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      IntSurf_InteriorPoint& Value()  const;




  DEFINE_STANDARD_RTTI(IntSurf_SequenceNodeOfSequenceOfInteriorPoint)

protected:




private: 


  IntSurf_InteriorPoint myValue;


};

#define SeqItem IntSurf_InteriorPoint
#define SeqItem_hxx <IntSurf_InteriorPoint.hxx>
#define TCollection_SequenceNode IntSurf_SequenceNodeOfSequenceOfInteriorPoint
#define TCollection_SequenceNode_hxx <IntSurf_SequenceNodeOfSequenceOfInteriorPoint.hxx>
#define Handle_TCollection_SequenceNode Handle_IntSurf_SequenceNodeOfSequenceOfInteriorPoint
#define TCollection_SequenceNode_Type_() IntSurf_SequenceNodeOfSequenceOfInteriorPoint_Type_()
#define TCollection_Sequence IntSurf_SequenceOfInteriorPoint
#define TCollection_Sequence_hxx <IntSurf_SequenceOfInteriorPoint.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _IntSurf_SequenceNodeOfSequenceOfInteriorPoint_HeaderFile
