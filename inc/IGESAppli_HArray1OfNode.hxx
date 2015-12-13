// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_HArray1OfNode_HeaderFile
#define _IGESAppli_HArray1OfNode_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESAppli_HArray1OfNode.hxx>

#include <IGESAppli_Array1OfNode.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_IGESAppli_Node.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESAppli_Node;
class IGESAppli_Array1OfNode;



class IGESAppli_HArray1OfNode : public MMgt_TShared
{

public:

  
    IGESAppli_HArray1OfNode(const Standard_Integer Low, const Standard_Integer Up);
  
    IGESAppli_HArray1OfNode(const Standard_Integer Low, const Standard_Integer Up, const Handle(IGESAppli_Node)& V);
  
      void Init (const Handle(IGESAppli_Node)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(IGESAppli_Node)& Value) ;
  
     const  Handle(IGESAppli_Node)& Value (const Standard_Integer Index)  const;
  
      Handle(IGESAppli_Node)& ChangeValue (const Standard_Integer Index) ;
  
     const  IGESAppli_Array1OfNode& Array1()  const;
  
      IGESAppli_Array1OfNode& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(IGESAppli_HArray1OfNode)

protected:




private: 


  IGESAppli_Array1OfNode myArray;


};

#define ItemHArray1 Handle(IGESAppli_Node)
#define ItemHArray1_hxx <IGESAppli_Node.hxx>
#define TheArray1 IGESAppli_Array1OfNode
#define TheArray1_hxx <IGESAppli_Array1OfNode.hxx>
#define TCollection_HArray1 IGESAppli_HArray1OfNode
#define TCollection_HArray1_hxx <IGESAppli_HArray1OfNode.hxx>
#define Handle_TCollection_HArray1 Handle_IGESAppli_HArray1OfNode
#define TCollection_HArray1_Type_() IGESAppli_HArray1OfNode_Type_()

#include <Foundation/TCollection/TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _IGESAppli_HArray1OfNode_HeaderFile
