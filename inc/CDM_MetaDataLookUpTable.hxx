// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _CDM_MetaDataLookUpTable_HeaderFile
#define _CDM_MetaDataLookUpTable_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Handle_CDM_MetaData.hxx>
#include <Handle_CDM_DataMapNodeOfMetaDataLookUpTable.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TCollection_ExtendedString;
class CDM_MetaData;
class CDM_DataMapNodeOfMetaDataLookUpTable;
class CDM_DataMapIteratorOfMetaDataLookUpTable;



class CDM_MetaDataLookUpTable  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT CDM_MetaDataLookUpTable(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   CDM_MetaDataLookUpTable& Assign (const CDM_MetaDataLookUpTable& Other) ;
  CDM_MetaDataLookUpTable& operator = (const CDM_MetaDataLookUpTable& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~CDM_MetaDataLookUpTable()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TCollection_ExtendedString& K, const Handle(CDM_MetaData)& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TCollection_ExtendedString& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TCollection_ExtendedString& K) ;
  
  Standard_EXPORT  const  Handle(CDM_MetaData)& Find (const TCollection_ExtendedString& K)  const;
 const  Handle(CDM_MetaData)& operator() (const TCollection_ExtendedString& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Handle(CDM_MetaData)& ChangeFind (const TCollection_ExtendedString& K) ;
  Handle(CDM_MetaData)& operator() (const TCollection_ExtendedString& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TCollection_ExtendedString& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TCollection_ExtendedString& K) ;




protected:





private:

  
  Standard_EXPORT CDM_MetaDataLookUpTable(const CDM_MetaDataLookUpTable& Other);




};







#endif // _CDM_MetaDataLookUpTable_HeaderFile
