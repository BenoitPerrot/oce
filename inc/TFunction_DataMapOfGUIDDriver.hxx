// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TFunction_DataMapOfGUIDDriver_HeaderFile
#define _TFunction_DataMapOfGUIDDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Handle_TFunction_Driver.hxx>
#include <Handle_TFunction_DataMapNodeOfDataMapOfGUIDDriver.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class Standard_GUID;
class TFunction_Driver;
class TFunction_DataMapNodeOfDataMapOfGUIDDriver;
class TFunction_DataMapIteratorOfDataMapOfGUIDDriver;



class TFunction_DataMapOfGUIDDriver  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TFunction_DataMapOfGUIDDriver(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TFunction_DataMapOfGUIDDriver& Assign (const TFunction_DataMapOfGUIDDriver& Other) ;
  TFunction_DataMapOfGUIDDriver& operator = (const TFunction_DataMapOfGUIDDriver& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TFunction_DataMapOfGUIDDriver()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Standard_GUID& K, const Handle(TFunction_Driver)& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Standard_GUID& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Standard_GUID& K) ;
  
  Standard_EXPORT  const  Handle(TFunction_Driver)& Find (const Standard_GUID& K)  const;
 const  Handle(TFunction_Driver)& operator() (const Standard_GUID& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Handle(TFunction_Driver)& ChangeFind (const Standard_GUID& K) ;
  Handle(TFunction_Driver)& operator() (const Standard_GUID& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Standard_GUID& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Standard_GUID& K) ;




protected:





private:

  
  Standard_EXPORT TFunction_DataMapOfGUIDDriver(const TFunction_DataMapOfGUIDDriver& Other);




};







#endif // _TFunction_DataMapOfGUIDDriver_HeaderFile
