// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_DataMapOfTransientInteger_HeaderFile
#define _Interface_DataMapOfTransientInteger_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <DataExchange/Interface/Handle_Interface_DataMapNodeOfDataMapOfTransientInteger.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class Standard_Transient;
class TColStd_MapTransientHasher;
class Interface_DataMapNodeOfDataMapOfTransientInteger;
class Interface_DataMapIteratorOfDataMapOfTransientInteger;



class Interface_DataMapOfTransientInteger  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Interface_DataMapOfTransientInteger(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   Interface_DataMapOfTransientInteger& Assign (const Interface_DataMapOfTransientInteger& Other) ;
  Interface_DataMapOfTransientInteger& operator = (const Interface_DataMapOfTransientInteger& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~Interface_DataMapOfTransientInteger()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Handle(Standard_Transient)& K, const Standard_Integer& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Handle(Standard_Transient)& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Handle(Standard_Transient)& K) ;
  
  Standard_EXPORT  const  Standard_Integer& Find (const Handle(Standard_Transient)& K)  const;
 const  Standard_Integer& operator() (const Handle(Standard_Transient)& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Standard_Integer& ChangeFind (const Handle(Standard_Transient)& K) ;
  Standard_Integer& operator() (const Handle(Standard_Transient)& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Handle(Standard_Transient)& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Handle(Standard_Transient)& K) ;




protected:





private:

  
  Standard_EXPORT Interface_DataMapOfTransientInteger(const Interface_DataMapOfTransientInteger& Other);




};







#endif // _Interface_DataMapOfTransientInteger_HeaderFile
