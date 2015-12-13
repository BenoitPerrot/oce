// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BiTgte_DataMapOfShapeBox_HeaderFile
#define _BiTgte_DataMapOfShapeBox_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class Bnd_Box;
class TopTools_ShapeMapHasher;
class BiTgte_DataMapNodeOfDataMapOfShapeBox;
class BiTgte_DataMapIteratorOfDataMapOfShapeBox;



class BiTgte_DataMapOfShapeBox  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BiTgte_DataMapOfShapeBox(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   BiTgte_DataMapOfShapeBox& Assign (const BiTgte_DataMapOfShapeBox& Other) ;
  BiTgte_DataMapOfShapeBox& operator = (const BiTgte_DataMapOfShapeBox& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~BiTgte_DataMapOfShapeBox()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TopoDS_Shape& K, const Bnd_Box& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TopoDS_Shape& K) ;
  
  Standard_EXPORT  const  Bnd_Box& Find (const TopoDS_Shape& K)  const;
 const  Bnd_Box& operator() (const TopoDS_Shape& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Bnd_Box& ChangeFind (const TopoDS_Shape& K) ;
  Bnd_Box& operator() (const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TopoDS_Shape& K) ;




protected:





private:

  
  Standard_EXPORT BiTgte_DataMapOfShapeBox(const BiTgte_DataMapOfShapeBox& Other);




};







#endif // _BiTgte_DataMapOfShapeBox_HeaderFile
