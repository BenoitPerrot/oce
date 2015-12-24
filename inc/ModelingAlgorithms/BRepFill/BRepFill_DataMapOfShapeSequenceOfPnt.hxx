// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_DataMapOfShapeSequenceOfPnt_HeaderFile
#define _BRepFill_DataMapOfShapeSequenceOfPnt_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <ModelingAlgorithms/BRepFill/Handle_BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class TColgp_SequenceOfPnt;
class TopTools_ShapeMapHasher;
class BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt;
class BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfPnt;



class BRepFill_DataMapOfShapeSequenceOfPnt  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepFill_DataMapOfShapeSequenceOfPnt(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   BRepFill_DataMapOfShapeSequenceOfPnt& Assign (const BRepFill_DataMapOfShapeSequenceOfPnt& Other) ;
  BRepFill_DataMapOfShapeSequenceOfPnt& operator = (const BRepFill_DataMapOfShapeSequenceOfPnt& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~BRepFill_DataMapOfShapeSequenceOfPnt()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TopoDS_Shape& K, const TColgp_SequenceOfPnt& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TopoDS_Shape& K) ;
  
  Standard_EXPORT  const  TColgp_SequenceOfPnt& Find (const TopoDS_Shape& K)  const;
 const  TColgp_SequenceOfPnt& operator() (const TopoDS_Shape& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   TColgp_SequenceOfPnt& ChangeFind (const TopoDS_Shape& K) ;
  TColgp_SequenceOfPnt& operator() (const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TopoDS_Shape& K) ;




protected:





private:

  
  Standard_EXPORT BRepFill_DataMapOfShapeSequenceOfPnt(const BRepFill_DataMapOfShapeSequenceOfPnt& Other);




};







#endif // _BRepFill_DataMapOfShapeSequenceOfPnt_HeaderFile
