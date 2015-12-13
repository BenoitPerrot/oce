// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPCAFControl_DataMapOfLabelShape_HeaderFile
#define _STEPCAFControl_DataMapOfLabelShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_STEPCAFControl_DataMapNodeOfDataMapOfLabelShape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TDF_Label;
class TopoDS_Shape;
class TDF_LabelMapHasher;
class STEPCAFControl_DataMapNodeOfDataMapOfLabelShape;
class STEPCAFControl_DataMapIteratorOfDataMapOfLabelShape;



class STEPCAFControl_DataMapOfLabelShape  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT STEPCAFControl_DataMapOfLabelShape(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   STEPCAFControl_DataMapOfLabelShape& Assign (const STEPCAFControl_DataMapOfLabelShape& Other) ;
  STEPCAFControl_DataMapOfLabelShape& operator = (const STEPCAFControl_DataMapOfLabelShape& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~STEPCAFControl_DataMapOfLabelShape()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TDF_Label& K, const TopoDS_Shape& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TDF_Label& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TDF_Label& K) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Find (const TDF_Label& K)  const;
 const  TopoDS_Shape& operator() (const TDF_Label& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   TopoDS_Shape& ChangeFind (const TDF_Label& K) ;
  TopoDS_Shape& operator() (const TDF_Label& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TDF_Label& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TDF_Label& K) ;




protected:





private:

  
  Standard_EXPORT STEPCAFControl_DataMapOfLabelShape(const STEPCAFControl_DataMapOfLabelShape& Other);




};







#endif // _STEPCAFControl_DataMapOfLabelShape_HeaderFile
