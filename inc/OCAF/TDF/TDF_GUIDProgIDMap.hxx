// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_GUIDProgIDMap_HeaderFile
#define _TDF_GUIDProgIDMap_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <OCAF/TDF/Handle_TDF_DoubleMapNodeOfGUIDProgIDMap.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_DomainError;
class Standard_MultiplyDefined;
class Standard_NoSuchObject;
class Standard_GUID;
class TCollection_ExtendedString;
class TDF_DoubleMapNodeOfGUIDProgIDMap;
class TDF_DoubleMapIteratorOfGUIDProgIDMap;



class TDF_GUIDProgIDMap  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TDF_GUIDProgIDMap(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TDF_GUIDProgIDMap& Assign (const TDF_GUIDProgIDMap& Other) ;
  TDF_GUIDProgIDMap& operator = (const TDF_GUIDProgIDMap& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TDF_GUIDProgIDMap()
{
  Clear();
}
  
  Standard_EXPORT   void Bind (const Standard_GUID& K1, const TCollection_ExtendedString& K2) ;
  
  Standard_EXPORT   Standard_Boolean AreBound (const Standard_GUID& K1, const TCollection_ExtendedString& K2)  const;
  
  Standard_EXPORT   Standard_Boolean IsBound1 (const Standard_GUID& K)  const;
  
  Standard_EXPORT   Standard_Boolean IsBound2 (const TCollection_ExtendedString& K)  const;
  
  Standard_EXPORT  const  TCollection_ExtendedString& Find1 (const Standard_GUID& K)  const;
  
  Standard_EXPORT  const  Standard_GUID& Find2 (const TCollection_ExtendedString& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind1 (const Standard_GUID& K) ;
  
  Standard_EXPORT   Standard_Boolean UnBind2 (const TCollection_ExtendedString& K) ;




protected:





private:

  
  Standard_EXPORT TDF_GUIDProgIDMap(const TDF_GUIDProgIDMap& Other);




};







#endif // _TDF_GUIDProgIDMap_HeaderFile
