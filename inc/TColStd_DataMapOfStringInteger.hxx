// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_DataMapOfStringInteger_HeaderFile
#define _TColStd_DataMapOfStringInteger_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_TColStd_DataMapNodeOfDataMapOfStringInteger.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TCollection_ExtendedString;
class TColStd_DataMapNodeOfDataMapOfStringInteger;
class TColStd_DataMapIteratorOfDataMapOfStringInteger;



class TColStd_DataMapOfStringInteger  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TColStd_DataMapOfStringInteger(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TColStd_DataMapOfStringInteger& Assign (const TColStd_DataMapOfStringInteger& Other) ;
  TColStd_DataMapOfStringInteger& operator = (const TColStd_DataMapOfStringInteger& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TColStd_DataMapOfStringInteger()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TCollection_ExtendedString& K, const Standard_Integer& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TCollection_ExtendedString& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TCollection_ExtendedString& K) ;
  
  Standard_EXPORT  const  Standard_Integer& Find (const TCollection_ExtendedString& K)  const;
 const  Standard_Integer& operator() (const TCollection_ExtendedString& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Standard_Integer& ChangeFind (const TCollection_ExtendedString& K) ;
  Standard_Integer& operator() (const TCollection_ExtendedString& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TCollection_ExtendedString& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TCollection_ExtendedString& K) ;




protected:





private:

  
  Standard_EXPORT TColStd_DataMapOfStringInteger(const TColStd_DataMapOfStringInteger& Other);




};







#endif // _TColStd_DataMapOfStringInteger_HeaderFile
