// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColGeom2d_SequenceNodeOfSequenceOfBoundedCurve_HeaderFile
#define _TColGeom2d_SequenceNodeOfSequenceOfBoundedCurve_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TColGeom2d_SequenceNodeOfSequenceOfBoundedCurve.hxx>

#include <Handle_Geom2d_BoundedCurve.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class Geom2d_BoundedCurve;
class TColGeom2d_SequenceOfBoundedCurve;



class TColGeom2d_SequenceNodeOfSequenceOfBoundedCurve : public TCollection_SeqNode
{

public:

  
    TColGeom2d_SequenceNodeOfSequenceOfBoundedCurve(const Handle(Geom2d_BoundedCurve)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(Geom2d_BoundedCurve)& Value()  const;




  DEFINE_STANDARD_RTTI(TColGeom2d_SequenceNodeOfSequenceOfBoundedCurve)

protected:




private: 


  Handle(Geom2d_BoundedCurve) myValue;


};

#define SeqItem Handle(Geom2d_BoundedCurve)
#define SeqItem_hxx <Geometry/Geom2d/Geom2d_BoundedCurve.hxx>
#define TCollection_SequenceNode TColGeom2d_SequenceNodeOfSequenceOfBoundedCurve
#define TCollection_SequenceNode_hxx <TColGeom2d_SequenceNodeOfSequenceOfBoundedCurve.hxx>
#define Handle_TCollection_SequenceNode Handle_TColGeom2d_SequenceNodeOfSequenceOfBoundedCurve
#define TCollection_SequenceNode_Type_() TColGeom2d_SequenceNodeOfSequenceOfBoundedCurve_Type_()
#define TCollection_Sequence TColGeom2d_SequenceOfBoundedCurve
#define TCollection_Sequence_hxx <TColGeom2d_SequenceOfBoundedCurve.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _TColGeom2d_SequenceNodeOfSequenceOfBoundedCurve_HeaderFile
