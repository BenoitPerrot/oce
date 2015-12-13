// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_DataMapOfShapeReal_HeaderFile
#define _TopTools_DataMapOfShapeReal_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_TopTools_DataMapNodeOfDataMapOfShapeReal.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class TopTools_DataMapNodeOfDataMapOfShapeReal;
class TopTools_DataMapIteratorOfDataMapOfShapeReal;



class TopTools_DataMapOfShapeReal  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopTools_DataMapOfShapeReal(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TopTools_DataMapOfShapeReal& Assign (const TopTools_DataMapOfShapeReal& Other) ;
  TopTools_DataMapOfShapeReal& operator = (const TopTools_DataMapOfShapeReal& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TopTools_DataMapOfShapeReal()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TopoDS_Shape& K, const Standard_Real& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TopoDS_Shape& K) ;
  
  Standard_EXPORT  const  Standard_Real& Find (const TopoDS_Shape& K)  const;
 const  Standard_Real& operator() (const TopoDS_Shape& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Standard_Real& ChangeFind (const TopoDS_Shape& K) ;
  Standard_Real& operator() (const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TopoDS_Shape& K) ;




protected:





private:

  
  Standard_EXPORT TopTools_DataMapOfShapeReal(const TopTools_DataMapOfShapeReal& Other);




};







#endif // _TopTools_DataMapOfShapeReal_HeaderFile
