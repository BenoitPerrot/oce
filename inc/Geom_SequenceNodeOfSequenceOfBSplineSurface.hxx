// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom_SequenceNodeOfSequenceOfBSplineSurface_HeaderFile
#define _Geom_SequenceNodeOfSequenceOfBSplineSurface_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Geom_SequenceNodeOfSequenceOfBSplineSurface.hxx>

#include <Handle_Geom_BSplineSurface.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class Geom_BSplineSurface;
class Geom_SequenceOfBSplineSurface;



class Geom_SequenceNodeOfSequenceOfBSplineSurface : public TCollection_SeqNode
{

public:

  
    Geom_SequenceNodeOfSequenceOfBSplineSurface(const Handle(Geom_BSplineSurface)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(Geom_BSplineSurface)& Value()  const;




  DEFINE_STANDARD_RTTI(Geom_SequenceNodeOfSequenceOfBSplineSurface)

protected:




private: 


  Handle(Geom_BSplineSurface) myValue;


};

#define SeqItem Handle(Geom_BSplineSurface)
#define SeqItem_hxx <Geom_BSplineSurface.hxx>
#define TCollection_SequenceNode Geom_SequenceNodeOfSequenceOfBSplineSurface
#define TCollection_SequenceNode_hxx <Geom_SequenceNodeOfSequenceOfBSplineSurface.hxx>
#define Handle_TCollection_SequenceNode Handle_Geom_SequenceNodeOfSequenceOfBSplineSurface
#define TCollection_SequenceNode_Type_() Geom_SequenceNodeOfSequenceOfBSplineSurface_Type_()
#define TCollection_Sequence Geom_SequenceOfBSplineSurface
#define TCollection_Sequence_hxx <Geom_SequenceOfBSplineSurface.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Geom_SequenceNodeOfSequenceOfBSplineSurface_HeaderFile
