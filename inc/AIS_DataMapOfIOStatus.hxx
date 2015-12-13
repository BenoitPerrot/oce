// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_DataMapOfIOStatus_HeaderFile
#define _AIS_DataMapOfIOStatus_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Handle_AIS_InteractiveObject.hxx>
#include <Handle_AIS_GlobalStatus.hxx>
#include <Handle_AIS_DataMapNodeOfDataMapOfIOStatus.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class AIS_InteractiveObject;
class AIS_GlobalStatus;
class TColStd_MapTransientHasher;
class AIS_DataMapNodeOfDataMapOfIOStatus;
class AIS_DataMapIteratorOfDataMapOfIOStatus;



class AIS_DataMapOfIOStatus  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT AIS_DataMapOfIOStatus(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   AIS_DataMapOfIOStatus& Assign (const AIS_DataMapOfIOStatus& Other) ;
  AIS_DataMapOfIOStatus& operator = (const AIS_DataMapOfIOStatus& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~AIS_DataMapOfIOStatus()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Handle(AIS_InteractiveObject)& K, const Handle(AIS_GlobalStatus)& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Handle(AIS_InteractiveObject)& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Handle(AIS_InteractiveObject)& K) ;
  
  Standard_EXPORT  const  Handle(AIS_GlobalStatus)& Find (const Handle(AIS_InteractiveObject)& K)  const;
 const  Handle(AIS_GlobalStatus)& operator() (const Handle(AIS_InteractiveObject)& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Handle(AIS_GlobalStatus)& ChangeFind (const Handle(AIS_InteractiveObject)& K) ;
  Handle(AIS_GlobalStatus)& operator() (const Handle(AIS_InteractiveObject)& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Handle(AIS_InteractiveObject)& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Handle(AIS_InteractiveObject)& K) ;




protected:





private:

  
  Standard_EXPORT AIS_DataMapOfIOStatus(const AIS_DataMapOfIOStatus& Other);




};







#endif // _AIS_DataMapOfIOStatus_HeaderFile
