// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepMAT2d_DataMapOfShapeSequenceOfBasicElt_HeaderFile
#define _BRepMAT2d_DataMapOfShapeSequenceOfBasicElt_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Handle_BRepMAT2d_DataMapNodeOfDataMapOfShapeSequenceOfBasicElt.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class MAT_SequenceOfBasicElt;
class TopTools_ShapeMapHasher;
class BRepMAT2d_DataMapNodeOfDataMapOfShapeSequenceOfBasicElt;
class BRepMAT2d_DataMapIteratorOfDataMapOfShapeSequenceOfBasicElt;



class BRepMAT2d_DataMapOfShapeSequenceOfBasicElt  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepMAT2d_DataMapOfShapeSequenceOfBasicElt(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   BRepMAT2d_DataMapOfShapeSequenceOfBasicElt& Assign (const BRepMAT2d_DataMapOfShapeSequenceOfBasicElt& Other) ;
  BRepMAT2d_DataMapOfShapeSequenceOfBasicElt& operator = (const BRepMAT2d_DataMapOfShapeSequenceOfBasicElt& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~BRepMAT2d_DataMapOfShapeSequenceOfBasicElt()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TopoDS_Shape& K, const MAT_SequenceOfBasicElt& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TopoDS_Shape& K) ;
  
  Standard_EXPORT  const  MAT_SequenceOfBasicElt& Find (const TopoDS_Shape& K)  const;
 const  MAT_SequenceOfBasicElt& operator() (const TopoDS_Shape& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   MAT_SequenceOfBasicElt& ChangeFind (const TopoDS_Shape& K) ;
  MAT_SequenceOfBasicElt& operator() (const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TopoDS_Shape& K) ;




protected:





private:

  
  Standard_EXPORT BRepMAT2d_DataMapOfShapeSequenceOfBasicElt(const BRepMAT2d_DataMapOfShapeSequenceOfBasicElt& Other);




};







#endif // _BRepMAT2d_DataMapOfShapeSequenceOfBasicElt_HeaderFile
