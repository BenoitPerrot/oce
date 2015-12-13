// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffset_DataMapIteratorOfDataMapOfShapeMapOfShape_HeaderFile
#define _BRepOffset_DataMapIteratorOfDataMapOfShapeMapOfShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Handle_BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape.hxx>
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopTools_MapOfShape;
class TopTools_ShapeMapHasher;
class BRepOffset_DataMapOfShapeMapOfShape;
class BRepOffset_DataMapNodeOfDataMapOfShapeMapOfShape;



class BRepOffset_DataMapIteratorOfDataMapOfShapeMapOfShape  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepOffset_DataMapIteratorOfDataMapOfShapeMapOfShape();
  
  Standard_EXPORT BRepOffset_DataMapIteratorOfDataMapOfShapeMapOfShape(const BRepOffset_DataMapOfShapeMapOfShape& aMap);
  
  Standard_EXPORT   void Initialize (const BRepOffset_DataMapOfShapeMapOfShape& aMap) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Key()  const;
  
  Standard_EXPORT  const  TopTools_MapOfShape& Value()  const;




protected:





private:





};







#endif // _BRepOffset_DataMapIteratorOfDataMapOfShapeMapOfShape_HeaderFile
