// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_SequenceNodeOfSequenceOfSequenceOfCurve_HeaderFile
#define _MAT2d_SequenceNodeOfSequenceOfSequenceOfCurve_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_MAT2d_SequenceNodeOfSequenceOfSequenceOfCurve.hxx>

#include <TColGeom2d_SequenceOfCurve.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class TColGeom2d_SequenceOfCurve;
class MAT2d_SequenceOfSequenceOfCurve;



class MAT2d_SequenceNodeOfSequenceOfSequenceOfCurve : public TCollection_SeqNode
{

public:

  
    MAT2d_SequenceNodeOfSequenceOfSequenceOfCurve(const TColGeom2d_SequenceOfCurve& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      TColGeom2d_SequenceOfCurve& Value()  const;




  DEFINE_STANDARD_RTTI(MAT2d_SequenceNodeOfSequenceOfSequenceOfCurve)

protected:




private: 


  TColGeom2d_SequenceOfCurve myValue;


};

#define SeqItem TColGeom2d_SequenceOfCurve
#define SeqItem_hxx <TColGeom2d_SequenceOfCurve.hxx>
#define TCollection_SequenceNode MAT2d_SequenceNodeOfSequenceOfSequenceOfCurve
#define TCollection_SequenceNode_hxx <MAT2d_SequenceNodeOfSequenceOfSequenceOfCurve.hxx>
#define Handle_TCollection_SequenceNode Handle_MAT2d_SequenceNodeOfSequenceOfSequenceOfCurve
#define TCollection_SequenceNode_Type_() MAT2d_SequenceNodeOfSequenceOfSequenceOfCurve_Type_()
#define TCollection_Sequence MAT2d_SequenceOfSequenceOfCurve
#define TCollection_Sequence_hxx <MAT2d_SequenceOfSequenceOfCurve.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _MAT2d_SequenceNodeOfSequenceOfSequenceOfCurve_HeaderFile
