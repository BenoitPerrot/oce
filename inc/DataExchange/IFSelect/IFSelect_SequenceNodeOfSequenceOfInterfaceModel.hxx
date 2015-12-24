// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SequenceNodeOfSequenceOfInterfaceModel_HeaderFile
#define _IFSelect_SequenceNodeOfSequenceOfInterfaceModel_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IFSelect/Handle_IFSelect_SequenceNodeOfSequenceOfInterfaceModel.hxx>

#include <DataExchange/Interface/Handle_Interface_InterfaceModel.hxx>
#include <Foundation/TCollection/TCollection_SeqNode.hxx>
#include <Foundation/TCollection/TCollection_SeqNodePtr.hxx>
class Interface_InterfaceModel;
class IFSelect_SequenceOfInterfaceModel;



class IFSelect_SequenceNodeOfSequenceOfInterfaceModel : public TCollection_SeqNode
{

public:

  
    IFSelect_SequenceNodeOfSequenceOfInterfaceModel(const Handle(Interface_InterfaceModel)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(Interface_InterfaceModel)& Value()  const;




  DEFINE_STANDARD_RTTI(IFSelect_SequenceNodeOfSequenceOfInterfaceModel)

protected:




private: 


  Handle(Interface_InterfaceModel) myValue;


};

#define SeqItem Handle(Interface_InterfaceModel)
#define SeqItem_hxx <DataExchange/Interface/Interface_InterfaceModel.hxx>
#define TCollection_SequenceNode IFSelect_SequenceNodeOfSequenceOfInterfaceModel
#define TCollection_SequenceNode_hxx <DataExchange/IFSelect/IFSelect_SequenceNodeOfSequenceOfInterfaceModel.hxx>
#define Handle_TCollection_SequenceNode Handle_IFSelect_SequenceNodeOfSequenceOfInterfaceModel
#define TCollection_SequenceNode_Type_() IFSelect_SequenceNodeOfSequenceOfInterfaceModel_Type_()
#define TCollection_Sequence IFSelect_SequenceOfInterfaceModel
#define TCollection_Sequence_hxx <DataExchange/IFSelect/IFSelect_SequenceOfInterfaceModel.hxx>

#include <Foundation/TCollection/TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _IFSelect_SequenceNodeOfSequenceOfInterfaceModel_HeaderFile
