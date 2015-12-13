// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_DataMapOfILC_HeaderFile
#define _AIS_DataMapOfILC_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_AIS_LocalContext.hxx>
#include <Handle_AIS_DataMapNodeOfDataMapOfILC.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class AIS_LocalContext;
class TColStd_MapIntegerHasher;
class AIS_DataMapNodeOfDataMapOfILC;
class AIS_DataMapIteratorOfDataMapOfILC;



class AIS_DataMapOfILC  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT AIS_DataMapOfILC(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   AIS_DataMapOfILC& Assign (const AIS_DataMapOfILC& Other) ;
  AIS_DataMapOfILC& operator = (const AIS_DataMapOfILC& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~AIS_DataMapOfILC()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Standard_Integer& K, const Handle(AIS_LocalContext)& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Standard_Integer& K) ;
  
  Standard_EXPORT  const  Handle(AIS_LocalContext)& Find (const Standard_Integer& K)  const;
 const  Handle(AIS_LocalContext)& operator() (const Standard_Integer& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Handle(AIS_LocalContext)& ChangeFind (const Standard_Integer& K) ;
  Handle(AIS_LocalContext)& operator() (const Standard_Integer& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Standard_Integer& K) ;




protected:





private:

  
  Standard_EXPORT AIS_DataMapOfILC(const AIS_DataMapOfILC& Other);




};







#endif // _AIS_DataMapOfILC_HeaderFile
