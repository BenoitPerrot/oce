// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_DoubleMapOfIntegerShape_HeaderFile
#define _TopOpeBRepDS_DoubleMapOfIntegerShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_TopOpeBRepDS_DoubleMapNodeOfDoubleMapOfIntegerShape.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_DomainError;
class Standard_MultiplyDefined;
class Standard_NoSuchObject;
class TopoDS_Shape;
class TColStd_MapIntegerHasher;
class TopTools_ShapeMapHasher;
class TopOpeBRepDS_DoubleMapNodeOfDoubleMapOfIntegerShape;
class TopOpeBRepDS_DoubleMapIteratorOfDoubleMapOfIntegerShape;



class TopOpeBRepDS_DoubleMapOfIntegerShape  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepDS_DoubleMapOfIntegerShape(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TopOpeBRepDS_DoubleMapOfIntegerShape& Assign (const TopOpeBRepDS_DoubleMapOfIntegerShape& Other) ;
  TopOpeBRepDS_DoubleMapOfIntegerShape& operator = (const TopOpeBRepDS_DoubleMapOfIntegerShape& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TopOpeBRepDS_DoubleMapOfIntegerShape()
{
  Clear();
}
  
  Standard_EXPORT   void Bind (const Standard_Integer& K1, const TopoDS_Shape& K2) ;
  
  Standard_EXPORT   Standard_Boolean AreBound (const Standard_Integer& K1, const TopoDS_Shape& K2)  const;
  
  Standard_EXPORT   Standard_Boolean IsBound1 (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Boolean IsBound2 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT  const  TopoDS_Shape& Find1 (const Standard_Integer& K)  const;
  
  Standard_EXPORT  const  Standard_Integer& Find2 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind1 (const Standard_Integer& K) ;
  
  Standard_EXPORT   Standard_Boolean UnBind2 (const TopoDS_Shape& K) ;




protected:





private:

  
  Standard_EXPORT TopOpeBRepDS_DoubleMapOfIntegerShape(const TopOpeBRepDS_DoubleMapOfIntegerShape& Other);




};







#endif // _TopOpeBRepDS_DoubleMapOfIntegerShape_HeaderFile
