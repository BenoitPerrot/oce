// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TFunction_DataMapOfLabelListOfLabel_HeaderFile
#define _TFunction_DataMapOfLabelListOfLabel_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_TFunction_DataMapNodeOfDataMapOfLabelListOfLabel.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TDF_Label;
class TDF_LabelList;
class TDF_LabelMapHasher;
class TFunction_DataMapNodeOfDataMapOfLabelListOfLabel;
class TFunction_DataMapIteratorOfDataMapOfLabelListOfLabel;



class TFunction_DataMapOfLabelListOfLabel  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TFunction_DataMapOfLabelListOfLabel(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TFunction_DataMapOfLabelListOfLabel& Assign (const TFunction_DataMapOfLabelListOfLabel& Other) ;
  TFunction_DataMapOfLabelListOfLabel& operator = (const TFunction_DataMapOfLabelListOfLabel& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TFunction_DataMapOfLabelListOfLabel()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TDF_Label& K, const TDF_LabelList& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TDF_Label& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TDF_Label& K) ;
  
  Standard_EXPORT  const  TDF_LabelList& Find (const TDF_Label& K)  const;
 const  TDF_LabelList& operator() (const TDF_Label& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   TDF_LabelList& ChangeFind (const TDF_Label& K) ;
  TDF_LabelList& operator() (const TDF_Label& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TDF_Label& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TDF_Label& K) ;




protected:





private:

  
  Standard_EXPORT TFunction_DataMapOfLabelListOfLabel(const TFunction_DataMapOfLabelListOfLabel& Other);




};







#endif // _TFunction_DataMapOfLabelListOfLabel_HeaderFile
