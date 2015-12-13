// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Convert_SequenceNodeOfSequenceOfArray1OfPoles_HeaderFile
#define _Convert_SequenceNodeOfSequenceOfArray1OfPoles_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Convert_SequenceNodeOfSequenceOfArray1OfPoles.hxx>

#include <Handle_TColgp_HArray1OfPnt.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class TColgp_HArray1OfPnt;
class Convert_SequenceOfArray1OfPoles;



class Convert_SequenceNodeOfSequenceOfArray1OfPoles : public TCollection_SeqNode
{

public:

  
    Convert_SequenceNodeOfSequenceOfArray1OfPoles(const Handle(TColgp_HArray1OfPnt)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(TColgp_HArray1OfPnt)& Value()  const;




  DEFINE_STANDARD_RTTI(Convert_SequenceNodeOfSequenceOfArray1OfPoles)

protected:




private: 


  Handle(TColgp_HArray1OfPnt) myValue;


};

#define SeqItem Handle(TColgp_HArray1OfPnt)
#define SeqItem_hxx <TColgp_HArray1OfPnt.hxx>
#define TCollection_SequenceNode Convert_SequenceNodeOfSequenceOfArray1OfPoles
#define TCollection_SequenceNode_hxx <Convert_SequenceNodeOfSequenceOfArray1OfPoles.hxx>
#define Handle_TCollection_SequenceNode Handle_Convert_SequenceNodeOfSequenceOfArray1OfPoles
#define TCollection_SequenceNode_Type_() Convert_SequenceNodeOfSequenceOfArray1OfPoles_Type_()
#define TCollection_Sequence Convert_SequenceOfArray1OfPoles
#define TCollection_Sequence_hxx <Convert_SequenceOfArray1OfPoles.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Convert_SequenceNodeOfSequenceOfArray1OfPoles_HeaderFile
