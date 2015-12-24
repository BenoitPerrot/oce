// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_MapOfOrientedShape_HeaderFile
#define _TopTools_MapOfOrientedShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <ModelingData/TopTools/Handle_TopTools_StdMapNodeOfMapOfOrientedShape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TopoDS_Shape;
class TopTools_OrientedShapeMapHasher;
class TopTools_StdMapNodeOfMapOfOrientedShape;
class TopTools_MapIteratorOfMapOfOrientedShape;



class TopTools_MapOfOrientedShape  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopTools_MapOfOrientedShape(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT TopTools_MapOfOrientedShape(const TopTools_MapOfOrientedShape& Other);
  
  Standard_EXPORT   TopTools_MapOfOrientedShape& Assign (const TopTools_MapOfOrientedShape& Other) ;
  TopTools_MapOfOrientedShape& operator = (const TopTools_MapOfOrientedShape& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TopTools_MapOfOrientedShape()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Add (const TopoDS_Shape& aKey) ;
  
  Standard_EXPORT   Standard_Boolean Contains (const TopoDS_Shape& aKey)  const;
  
  Standard_EXPORT   Standard_Boolean Remove (const TopoDS_Shape& aKey) ;




protected:





private:





};







#endif // _TopTools_MapOfOrientedShape_HeaderFile
