// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_Array1OfNode_HeaderFile
#define _IGESAppli_Array1OfNode_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_IGESAppli_Node.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESAppli_Node;



class IGESAppli_Array1OfNode 
{
public:

  DEFINE_STANDARD_ALLOC

  
    IGESAppli_Array1OfNode(const Standard_Integer Low, const Standard_Integer Up);
  
    IGESAppli_Array1OfNode(const Handle(IGESAppli_Node)& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Handle(IGESAppli_Node)& V) ;
  
      void Destroy() ;
~IGESAppli_Array1OfNode()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  IGESAppli_Array1OfNode& Assign (const IGESAppli_Array1OfNode& Other) ;
 const  IGESAppli_Array1OfNode& operator = (const IGESAppli_Array1OfNode& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(IGESAppli_Node)& Value) ;
  
     const  Handle(IGESAppli_Node)& Value (const Standard_Integer Index)  const;
   const  Handle(IGESAppli_Node)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Handle(IGESAppli_Node)& ChangeValue (const Standard_Integer Index) ;
    Handle(IGESAppli_Node)& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT IGESAppli_Array1OfNode(const IGESAppli_Array1OfNode& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Handle(IGESAppli_Node)
#define Array1Item_hxx <IGESAppli_Node.hxx>
#define TCollection_Array1 IGESAppli_Array1OfNode
#define TCollection_Array1_hxx <IGESAppli_Array1OfNode.hxx>

#include <Foundation/TCollection/TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _IGESAppli_Array1OfNode_HeaderFile
