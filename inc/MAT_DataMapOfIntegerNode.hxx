// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT_DataMapOfIntegerNode_HeaderFile
#define _MAT_DataMapOfIntegerNode_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_MAT_Node.hxx>
#include <Handle_MAT_DataMapNodeOfDataMapOfIntegerNode.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class MAT_Node;
class TColStd_MapIntegerHasher;
class MAT_DataMapNodeOfDataMapOfIntegerNode;
class MAT_DataMapIteratorOfDataMapOfIntegerNode;



class MAT_DataMapOfIntegerNode  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MAT_DataMapOfIntegerNode(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   MAT_DataMapOfIntegerNode& Assign (const MAT_DataMapOfIntegerNode& Other) ;
  MAT_DataMapOfIntegerNode& operator = (const MAT_DataMapOfIntegerNode& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~MAT_DataMapOfIntegerNode()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Standard_Integer& K, const Handle(MAT_Node)& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Standard_Integer& K) ;
  
  Standard_EXPORT  const  Handle(MAT_Node)& Find (const Standard_Integer& K)  const;
 const  Handle(MAT_Node)& operator() (const Standard_Integer& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Handle(MAT_Node)& ChangeFind (const Standard_Integer& K) ;
  Handle(MAT_Node)& operator() (const Standard_Integer& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Standard_Integer& K) ;




protected:





private:

  
  Standard_EXPORT MAT_DataMapOfIntegerNode(const MAT_DataMapOfIntegerNode& Other);




};







#endif // _MAT_DataMapOfIntegerNode_HeaderFile
