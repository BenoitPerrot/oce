// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TNaming_DataMapIteratorOfDataMapOfShapePtrRefShape_HeaderFile
#define _TNaming_DataMapIteratorOfDataMapOfShapePtrRefShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <OCAF/TNaming/TNaming_PtrRefShape.hxx>
#include <OCAF/TNaming/Handle_TNaming_DataMapNodeOfDataMapOfShapePtrRefShape.hxx>
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class TNaming_DataMapOfShapePtrRefShape;
class TNaming_DataMapNodeOfDataMapOfShapePtrRefShape;



class TNaming_DataMapIteratorOfDataMapOfShapePtrRefShape  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TNaming_DataMapIteratorOfDataMapOfShapePtrRefShape();
  
  Standard_EXPORT TNaming_DataMapIteratorOfDataMapOfShapePtrRefShape(const TNaming_DataMapOfShapePtrRefShape& aMap);
  
  Standard_EXPORT   void Initialize (const TNaming_DataMapOfShapePtrRefShape& aMap) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Key()  const;
  
  Standard_EXPORT  const  TNaming_PtrRefShape& Value()  const;




protected:





private:





};







#endif // _TNaming_DataMapIteratorOfDataMapOfShapePtrRefShape_HeaderFile
