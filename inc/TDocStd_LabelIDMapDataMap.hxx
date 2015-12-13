// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDocStd_LabelIDMapDataMap_HeaderFile
#define _TDocStd_LabelIDMapDataMap_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_TDocStd_DataMapNodeOfLabelIDMapDataMap.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TDF_Label;
class TDF_IDMap;
class TDF_LabelMapHasher;
class TDocStd_DataMapNodeOfLabelIDMapDataMap;
class TDocStd_DataMapIteratorOfLabelIDMapDataMap;



class TDocStd_LabelIDMapDataMap  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TDocStd_LabelIDMapDataMap(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TDocStd_LabelIDMapDataMap& Assign (const TDocStd_LabelIDMapDataMap& Other) ;
  TDocStd_LabelIDMapDataMap& operator = (const TDocStd_LabelIDMapDataMap& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TDocStd_LabelIDMapDataMap()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TDF_Label& K, const TDF_IDMap& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TDF_Label& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TDF_Label& K) ;
  
  Standard_EXPORT  const  TDF_IDMap& Find (const TDF_Label& K)  const;
 const  TDF_IDMap& operator() (const TDF_Label& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   TDF_IDMap& ChangeFind (const TDF_Label& K) ;
  TDF_IDMap& operator() (const TDF_Label& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TDF_Label& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TDF_Label& K) ;




protected:





private:

  
  Standard_EXPORT TDocStd_LabelIDMapDataMap(const TDocStd_LabelIDMapDataMap& Other);




};







#endif // _TDocStd_LabelIDMapDataMap_HeaderFile
