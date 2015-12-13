// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_DataMapIteratorOfDataMapOfShapeInteger_HeaderFile
#define _TopTools_DataMapIteratorOfDataMapOfShapeInteger_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_TopTools_DataMapNodeOfDataMapOfShapeInteger.hxx>
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class TopTools_DataMapOfShapeInteger;
class TopTools_DataMapNodeOfDataMapOfShapeInteger;



class TopTools_DataMapIteratorOfDataMapOfShapeInteger  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopTools_DataMapIteratorOfDataMapOfShapeInteger();
  
  Standard_EXPORT TopTools_DataMapIteratorOfDataMapOfShapeInteger(const TopTools_DataMapOfShapeInteger& aMap);
  
  Standard_EXPORT   void Initialize (const TopTools_DataMapOfShapeInteger& aMap) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Key()  const;
  
  Standard_EXPORT  const  Standard_Integer& Value()  const;




protected:





private:





};







#endif // _TopTools_DataMapIteratorOfDataMapOfShapeInteger_HeaderFile
