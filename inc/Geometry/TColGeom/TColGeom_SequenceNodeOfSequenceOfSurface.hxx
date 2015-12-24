// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColGeom_SequenceNodeOfSequenceOfSurface_HeaderFile
#define _TColGeom_SequenceNodeOfSequenceOfSurface_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Geometry/TColGeom/Handle_TColGeom_SequenceNodeOfSequenceOfSurface.hxx>

#include <Geometry/Geom/Handle_Geom_Surface.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class Geom_Surface;
class TColGeom_SequenceOfSurface;



class TColGeom_SequenceNodeOfSequenceOfSurface : public TCollection_SeqNode
{

public:

  
    TColGeom_SequenceNodeOfSequenceOfSurface(const Handle(Geom_Surface)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(Geom_Surface)& Value()  const;




  DEFINE_STANDARD_RTTI(TColGeom_SequenceNodeOfSequenceOfSurface)

protected:




private: 


  Handle(Geom_Surface) myValue;


};

#define SeqItem Handle(Geom_Surface)
#define SeqItem_hxx <Geometry/Geom/Geom_Surface.hxx>
#define TCollection_SequenceNode TColGeom_SequenceNodeOfSequenceOfSurface
#define TCollection_SequenceNode_hxx <Geometry/TColGeom/TColGeom_SequenceNodeOfSequenceOfSurface.hxx>
#define Handle_TCollection_SequenceNode Handle_TColGeom_SequenceNodeOfSequenceOfSurface
#define TCollection_SequenceNode_Type_() TColGeom_SequenceNodeOfSequenceOfSurface_Type_()
#define TCollection_Sequence TColGeom_SequenceOfSurface
#define TCollection_Sequence_hxx <Geometry/TColGeom/TColGeom_SequenceOfSurface.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _TColGeom_SequenceNodeOfSequenceOfSurface_HeaderFile
