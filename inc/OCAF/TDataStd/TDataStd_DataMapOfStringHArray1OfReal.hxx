// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_DataMapOfStringHArray1OfReal_HeaderFile
#define _TDataStd_DataMapOfStringHArray1OfReal_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Foundation/TColStd/Handle_TColStd_HArray1OfReal.hxx>
#include <OCAF/TDataStd/Handle_TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TCollection_ExtendedString;
class TColStd_HArray1OfReal;
class TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal;
class TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfReal;



class TDataStd_DataMapOfStringHArray1OfReal  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TDataStd_DataMapOfStringHArray1OfReal(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TDataStd_DataMapOfStringHArray1OfReal& Assign (const TDataStd_DataMapOfStringHArray1OfReal& Other) ;
  TDataStd_DataMapOfStringHArray1OfReal& operator = (const TDataStd_DataMapOfStringHArray1OfReal& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TDataStd_DataMapOfStringHArray1OfReal()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TCollection_ExtendedString& K, const Handle(TColStd_HArray1OfReal)& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TCollection_ExtendedString& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TCollection_ExtendedString& K) ;
  
  Standard_EXPORT  const  Handle(TColStd_HArray1OfReal)& Find (const TCollection_ExtendedString& K)  const;
 const  Handle(TColStd_HArray1OfReal)& operator() (const TCollection_ExtendedString& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Handle(TColStd_HArray1OfReal)& ChangeFind (const TCollection_ExtendedString& K) ;
  Handle(TColStd_HArray1OfReal)& operator() (const TCollection_ExtendedString& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TCollection_ExtendedString& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TCollection_ExtendedString& K) ;




protected:





private:

  
  Standard_EXPORT TDataStd_DataMapOfStringHArray1OfReal(const TDataStd_DataMapOfStringHArray1OfReal& Other);




};







#endif // _TDataStd_DataMapOfStringHArray1OfReal_HeaderFile
