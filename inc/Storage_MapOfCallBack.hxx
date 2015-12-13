// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Storage_MapOfCallBack_HeaderFile
#define _Storage_MapOfCallBack_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_Storage_TypedCallBack.hxx>
#include <Handle_Storage_DataMapNodeOfMapOfCallBack.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TCollection_AsciiString;
class Storage_TypedCallBack;
class Storage_DataMapNodeOfMapOfCallBack;
class Storage_DataMapIteratorOfMapOfCallBack;



class Storage_MapOfCallBack  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Storage_MapOfCallBack(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   Storage_MapOfCallBack& Assign (const Storage_MapOfCallBack& Other) ;
  Storage_MapOfCallBack& operator = (const Storage_MapOfCallBack& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~Storage_MapOfCallBack()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TCollection_AsciiString& K, const Handle(Storage_TypedCallBack)& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TCollection_AsciiString& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TCollection_AsciiString& K) ;
  
  Standard_EXPORT  const  Handle(Storage_TypedCallBack)& Find (const TCollection_AsciiString& K)  const;
 const  Handle(Storage_TypedCallBack)& operator() (const TCollection_AsciiString& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Handle(Storage_TypedCallBack)& ChangeFind (const TCollection_AsciiString& K) ;
  Handle(Storage_TypedCallBack)& operator() (const TCollection_AsciiString& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TCollection_AsciiString& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TCollection_AsciiString& K) ;




protected:





private:

  
  Standard_EXPORT Storage_MapOfCallBack(const Storage_MapOfCallBack& Other);




};







#endif // _Storage_MapOfCallBack_HeaderFile
