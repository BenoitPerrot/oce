// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_DataMapIteratorOfDataMapOfShapeShape_HeaderFile
#define _TopTools_DataMapIteratorOfDataMapOfShapeShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Handle_TopTools_DataMapNodeOfDataMapOfShapeShape.hxx>
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class TopTools_DataMapOfShapeShape;
class TopTools_DataMapNodeOfDataMapOfShapeShape;



class TopTools_DataMapIteratorOfDataMapOfShapeShape  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopTools_DataMapIteratorOfDataMapOfShapeShape();
  
  Standard_EXPORT TopTools_DataMapIteratorOfDataMapOfShapeShape(const TopTools_DataMapOfShapeShape& aMap);
  
  Standard_EXPORT   void Initialize (const TopTools_DataMapOfShapeShape& aMap) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Key()  const;
  
  Standard_EXPORT  const  TopoDS_Shape& Value()  const;




protected:





private:





};







#endif // _TopTools_DataMapIteratorOfDataMapOfShapeShape_HeaderFile
