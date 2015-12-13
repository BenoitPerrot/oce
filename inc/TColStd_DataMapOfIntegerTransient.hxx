// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_DataMapOfIntegerTransient_HeaderFile
#define _TColStd_DataMapOfIntegerTransient_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_TColStd_DataMapNodeOfDataMapOfIntegerTransient.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class Standard_Transient;
class TColStd_MapIntegerHasher;
class TColStd_DataMapNodeOfDataMapOfIntegerTransient;
class TColStd_DataMapIteratorOfDataMapOfIntegerTransient;



class TColStd_DataMapOfIntegerTransient  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TColStd_DataMapOfIntegerTransient(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TColStd_DataMapOfIntegerTransient& Assign (const TColStd_DataMapOfIntegerTransient& Other) ;
  TColStd_DataMapOfIntegerTransient& operator = (const TColStd_DataMapOfIntegerTransient& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TColStd_DataMapOfIntegerTransient()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Standard_Integer& K, const Handle(Standard_Transient)& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Standard_Integer& K) ;
  
  Standard_EXPORT  const  Handle(Standard_Transient)& Find (const Standard_Integer& K)  const;
 const  Handle(Standard_Transient)& operator() (const Standard_Integer& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Handle(Standard_Transient)& ChangeFind (const Standard_Integer& K) ;
  Handle(Standard_Transient)& operator() (const Standard_Integer& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Standard_Integer& K) ;




protected:





private:

  
  Standard_EXPORT TColStd_DataMapOfIntegerTransient(const TColStd_DataMapOfIntegerTransient& Other);




};







#endif // _TColStd_DataMapOfIntegerTransient_HeaderFile
