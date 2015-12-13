// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPCAFControl_DataMapOfShapePD_HeaderFile
#define _STEPCAFControl_DataMapOfShapePD_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_StepBasic_ProductDefinition.hxx>
#include <Handle_STEPCAFControl_DataMapNodeOfDataMapOfShapePD.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class StepBasic_ProductDefinition;
class TopTools_ShapeMapHasher;
class STEPCAFControl_DataMapNodeOfDataMapOfShapePD;
class STEPCAFControl_DataMapIteratorOfDataMapOfShapePD;



class STEPCAFControl_DataMapOfShapePD  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT STEPCAFControl_DataMapOfShapePD(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   STEPCAFControl_DataMapOfShapePD& Assign (const STEPCAFControl_DataMapOfShapePD& Other) ;
  STEPCAFControl_DataMapOfShapePD& operator = (const STEPCAFControl_DataMapOfShapePD& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~STEPCAFControl_DataMapOfShapePD()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TopoDS_Shape& K, const Handle(StepBasic_ProductDefinition)& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TopoDS_Shape& K) ;
  
  Standard_EXPORT  const  Handle(StepBasic_ProductDefinition)& Find (const TopoDS_Shape& K)  const;
 const  Handle(StepBasic_ProductDefinition)& operator() (const TopoDS_Shape& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Handle(StepBasic_ProductDefinition)& ChangeFind (const TopoDS_Shape& K) ;
  Handle(StepBasic_ProductDefinition)& operator() (const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TopoDS_Shape& K) ;




protected:





private:

  
  Standard_EXPORT STEPCAFControl_DataMapOfShapePD(const STEPCAFControl_DataMapOfShapePD& Other);




};







#endif // _STEPCAFControl_DataMapOfShapePD_HeaderFile
