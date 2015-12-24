// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_DataMapOfIntegerListOfInteger_HeaderFile
#define _TColStd_DataMapOfIntegerListOfInteger_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/TColStd/Handle_TColStd_DataMapNodeOfDataMapOfIntegerListOfInteger.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TColStd_ListOfInteger;
class TColStd_MapIntegerHasher;
class TColStd_DataMapNodeOfDataMapOfIntegerListOfInteger;
class TColStd_DataMapIteratorOfDataMapOfIntegerListOfInteger;



class TColStd_DataMapOfIntegerListOfInteger  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TColStd_DataMapOfIntegerListOfInteger(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TColStd_DataMapOfIntegerListOfInteger& Assign (const TColStd_DataMapOfIntegerListOfInteger& Other) ;
  TColStd_DataMapOfIntegerListOfInteger& operator = (const TColStd_DataMapOfIntegerListOfInteger& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TColStd_DataMapOfIntegerListOfInteger()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Standard_Integer& K, const TColStd_ListOfInteger& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Standard_Integer& K) ;
  
  Standard_EXPORT  const  TColStd_ListOfInteger& Find (const Standard_Integer& K)  const;
 const  TColStd_ListOfInteger& operator() (const Standard_Integer& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   TColStd_ListOfInteger& ChangeFind (const Standard_Integer& K) ;
  TColStd_ListOfInteger& operator() (const Standard_Integer& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Standard_Integer& K) ;




protected:





private:

  
  Standard_EXPORT TColStd_DataMapOfIntegerListOfInteger(const TColStd_DataMapOfIntegerListOfInteger& Other);




};







#endif // _TColStd_DataMapOfIntegerListOfInteger_HeaderFile
