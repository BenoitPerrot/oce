// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_DataMapIteratorOfDataMapOfOrientedShapeListOfShape_HeaderFile
#define _BRepFill_DataMapIteratorOfDataMapOfOrientedShapeListOfShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Handle_BRepFill_DataMapNodeOfDataMapOfOrientedShapeListOfShape.hxx>
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopTools_ListOfShape;
class TopTools_OrientedShapeMapHasher;
class BRepFill_DataMapOfOrientedShapeListOfShape;
class BRepFill_DataMapNodeOfDataMapOfOrientedShapeListOfShape;



class BRepFill_DataMapIteratorOfDataMapOfOrientedShapeListOfShape  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepFill_DataMapIteratorOfDataMapOfOrientedShapeListOfShape();
  
  Standard_EXPORT BRepFill_DataMapIteratorOfDataMapOfOrientedShapeListOfShape(const BRepFill_DataMapOfOrientedShapeListOfShape& aMap);
  
  Standard_EXPORT   void Initialize (const BRepFill_DataMapOfOrientedShapeListOfShape& aMap) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Key()  const;
  
  Standard_EXPORT  const  TopTools_ListOfShape& Value()  const;




protected:





private:





};







#endif // _BRepFill_DataMapIteratorOfDataMapOfOrientedShapeListOfShape_HeaderFile
