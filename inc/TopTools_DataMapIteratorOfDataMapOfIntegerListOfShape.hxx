// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_DataMapIteratorOfDataMapOfIntegerListOfShape_HeaderFile
#define _TopTools_DataMapIteratorOfDataMapOfIntegerListOfShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_TopTools_DataMapNodeOfDataMapOfIntegerListOfShape.hxx>
class Standard_NoSuchObject;
class TopTools_ListOfShape;
class TColStd_MapIntegerHasher;
class TopTools_DataMapOfIntegerListOfShape;
class TopTools_DataMapNodeOfDataMapOfIntegerListOfShape;



class TopTools_DataMapIteratorOfDataMapOfIntegerListOfShape  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopTools_DataMapIteratorOfDataMapOfIntegerListOfShape();
  
  Standard_EXPORT TopTools_DataMapIteratorOfDataMapOfIntegerListOfShape(const TopTools_DataMapOfIntegerListOfShape& aMap);
  
  Standard_EXPORT   void Initialize (const TopTools_DataMapOfIntegerListOfShape& aMap) ;
  
  Standard_EXPORT  const  Standard_Integer& Key()  const;
  
  Standard_EXPORT  const  TopTools_ListOfShape& Value()  const;




protected:





private:





};







#endif // _TopTools_DataMapIteratorOfDataMapOfIntegerListOfShape_HeaderFile
