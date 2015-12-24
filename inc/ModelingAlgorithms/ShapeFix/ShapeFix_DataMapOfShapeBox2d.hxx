// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeFix_DataMapOfShapeBox2d_HeaderFile
#define _ShapeFix_DataMapOfShapeBox2d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <ModelingAlgorithms/ShapeFix/Handle_ShapeFix_DataMapNodeOfDataMapOfShapeBox2d.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class Bnd_Box2d;
class TopTools_ShapeMapHasher;
class ShapeFix_DataMapNodeOfDataMapOfShapeBox2d;
class ShapeFix_DataMapIteratorOfDataMapOfShapeBox2d;



class ShapeFix_DataMapOfShapeBox2d  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT ShapeFix_DataMapOfShapeBox2d(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   ShapeFix_DataMapOfShapeBox2d& Assign (const ShapeFix_DataMapOfShapeBox2d& Other) ;
  ShapeFix_DataMapOfShapeBox2d& operator = (const ShapeFix_DataMapOfShapeBox2d& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~ShapeFix_DataMapOfShapeBox2d()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TopoDS_Shape& K, const Bnd_Box2d& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TopoDS_Shape& K) ;
  
  Standard_EXPORT  const  Bnd_Box2d& Find (const TopoDS_Shape& K)  const;
 const  Bnd_Box2d& operator() (const TopoDS_Shape& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Bnd_Box2d& ChangeFind (const TopoDS_Shape& K) ;
  Bnd_Box2d& operator() (const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TopoDS_Shape& K) ;




protected:





private:

  
  Standard_EXPORT ShapeFix_DataMapOfShapeBox2d(const ShapeFix_DataMapOfShapeBox2d& Other);




};







#endif // _ShapeFix_DataMapOfShapeBox2d_HeaderFile
