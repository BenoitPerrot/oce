// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColGeom_SequenceNodeOfSequenceOfCurve_HeaderFile
#define _TColGeom_SequenceNodeOfSequenceOfCurve_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TColGeom_SequenceNodeOfSequenceOfCurve.hxx>

#include <Handle_Geom_Curve.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class Geom_Curve;
class TColGeom_SequenceOfCurve;



class TColGeom_SequenceNodeOfSequenceOfCurve : public TCollection_SeqNode
{

public:

  
    TColGeom_SequenceNodeOfSequenceOfCurve(const Handle(Geom_Curve)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(Geom_Curve)& Value()  const;




  DEFINE_STANDARD_RTTI(TColGeom_SequenceNodeOfSequenceOfCurve)

protected:




private: 


  Handle(Geom_Curve) myValue;


};

#define SeqItem Handle(Geom_Curve)
#define SeqItem_hxx <Geom_Curve.hxx>
#define TCollection_SequenceNode TColGeom_SequenceNodeOfSequenceOfCurve
#define TCollection_SequenceNode_hxx <TColGeom_SequenceNodeOfSequenceOfCurve.hxx>
#define Handle_TCollection_SequenceNode Handle_TColGeom_SequenceNodeOfSequenceOfCurve
#define TCollection_SequenceNode_Type_() TColGeom_SequenceNodeOfSequenceOfCurve_Type_()
#define TCollection_Sequence TColGeom_SequenceOfCurve
#define TCollection_Sequence_hxx <TColGeom_SequenceOfCurve.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _TColGeom_SequenceNodeOfSequenceOfCurve_HeaderFile
