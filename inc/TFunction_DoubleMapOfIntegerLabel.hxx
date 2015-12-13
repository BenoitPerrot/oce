// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TFunction_DoubleMapOfIntegerLabel_HeaderFile
#define _TFunction_DoubleMapOfIntegerLabel_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_TFunction_DoubleMapNodeOfDoubleMapOfIntegerLabel.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_DomainError;
class Standard_MultiplyDefined;
class Standard_NoSuchObject;
class TDF_Label;
class TColStd_MapIntegerHasher;
class TDF_LabelMapHasher;
class TFunction_DoubleMapNodeOfDoubleMapOfIntegerLabel;
class TFunction_DoubleMapIteratorOfDoubleMapOfIntegerLabel;



class TFunction_DoubleMapOfIntegerLabel  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TFunction_DoubleMapOfIntegerLabel(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TFunction_DoubleMapOfIntegerLabel& Assign (const TFunction_DoubleMapOfIntegerLabel& Other) ;
  TFunction_DoubleMapOfIntegerLabel& operator = (const TFunction_DoubleMapOfIntegerLabel& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TFunction_DoubleMapOfIntegerLabel()
{
  Clear();
}
  
  Standard_EXPORT   void Bind (const Standard_Integer& K1, const TDF_Label& K2) ;
  
  Standard_EXPORT   Standard_Boolean AreBound (const Standard_Integer& K1, const TDF_Label& K2)  const;
  
  Standard_EXPORT   Standard_Boolean IsBound1 (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Boolean IsBound2 (const TDF_Label& K)  const;
  
  Standard_EXPORT  const  TDF_Label& Find1 (const Standard_Integer& K)  const;
  
  Standard_EXPORT  const  Standard_Integer& Find2 (const TDF_Label& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind1 (const Standard_Integer& K) ;
  
  Standard_EXPORT   Standard_Boolean UnBind2 (const TDF_Label& K) ;




protected:





private:

  
  Standard_EXPORT TFunction_DoubleMapOfIntegerLabel(const TFunction_DoubleMapOfIntegerLabel& Other);




};







#endif // _TFunction_DoubleMapOfIntegerLabel_HeaderFile
