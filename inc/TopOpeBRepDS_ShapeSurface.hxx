// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_ShapeSurface_HeaderFile
#define _TopOpeBRepDS_ShapeSurface_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Handle_Geom_Surface.hxx>
#include <Handle_TopOpeBRepDS_DataMapNodeOfShapeSurface.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class Geom_Surface;
class TopTools_ShapeMapHasher;
class TopOpeBRepDS_DataMapNodeOfShapeSurface;
class TopOpeBRepDS_DataMapIteratorOfShapeSurface;



class TopOpeBRepDS_ShapeSurface  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepDS_ShapeSurface(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TopOpeBRepDS_ShapeSurface& Assign (const TopOpeBRepDS_ShapeSurface& Other) ;
  TopOpeBRepDS_ShapeSurface& operator = (const TopOpeBRepDS_ShapeSurface& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TopOpeBRepDS_ShapeSurface()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TopoDS_Shape& K, const Handle(Geom_Surface)& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TopoDS_Shape& K) ;
  
  Standard_EXPORT  const  Handle(Geom_Surface)& Find (const TopoDS_Shape& K)  const;
 const  Handle(Geom_Surface)& operator() (const TopoDS_Shape& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Handle(Geom_Surface)& ChangeFind (const TopoDS_Shape& K) ;
  Handle(Geom_Surface)& operator() (const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TopoDS_Shape& K) ;




protected:





private:

  
  Standard_EXPORT TopOpeBRepDS_ShapeSurface(const TopOpeBRepDS_ShapeSurface& Other);




};







#endif // _TopOpeBRepDS_ShapeSurface_HeaderFile
