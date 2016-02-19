// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepMAT2d_DataMapOfBasicEltShape_HeaderFile
#define _BRepMAT2d_DataMapOfBasicEltShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <ModelingAlgorithms/MAT/Handle_MAT_BasicElt.hxx>
#include <ModelingAlgorithms/BRepMAT2d/Handle_BRepMAT2d_DataMapNodeOfDataMapOfBasicEltShape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class MAT_BasicElt;
class TopoDS_Shape;
class TColStd_MapTransientHasher;
class BRepMAT2d_DataMapNodeOfDataMapOfBasicEltShape;
class BRepMAT2d_DataMapIteratorOfDataMapOfBasicEltShape;



class BRepMAT2d_DataMapOfBasicEltShape  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepMAT2d_DataMapOfBasicEltShape(const Standard_Integer NbBuckets = 1);

  Standard_EXPORT BRepMAT2d_DataMapOfBasicEltShape(const BRepMAT2d_DataMapOfBasicEltShape& Other);

  Standard_EXPORT   BRepMAT2d_DataMapOfBasicEltShape& Assign (const BRepMAT2d_DataMapOfBasicEltShape& Other) ;
  BRepMAT2d_DataMapOfBasicEltShape& operator = (const BRepMAT2d_DataMapOfBasicEltShape& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~BRepMAT2d_DataMapOfBasicEltShape()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Handle(MAT_BasicElt)& K, const TopoDS_Shape& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Handle(MAT_BasicElt)& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Handle(MAT_BasicElt)& K) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Find (const Handle(MAT_BasicElt)& K)  const;
 const  TopoDS_Shape& operator() (const Handle(MAT_BasicElt)& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   TopoDS_Shape& ChangeFind (const Handle(MAT_BasicElt)& K) ;
  TopoDS_Shape& operator() (const Handle(MAT_BasicElt)& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Handle(MAT_BasicElt)& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Handle(MAT_BasicElt)& K) ;




protected:





private:

  




};







#endif // _BRepMAT2d_DataMapOfBasicEltShape_HeaderFile
