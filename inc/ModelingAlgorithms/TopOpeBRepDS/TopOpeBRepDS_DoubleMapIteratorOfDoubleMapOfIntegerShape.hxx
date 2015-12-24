// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_DoubleMapIteratorOfDoubleMapOfIntegerShape_HeaderFile
#define _TopOpeBRepDS_DoubleMapIteratorOfDoubleMapOfIntegerShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/Handle_TopOpeBRepDS_DoubleMapNodeOfDoubleMapOfIntegerShape.hxx>
class Standard_NoSuchObject;
class TopoDS_Shape;
class TColStd_MapIntegerHasher;
class TopTools_ShapeMapHasher;
class TopOpeBRepDS_DoubleMapOfIntegerShape;
class TopOpeBRepDS_DoubleMapNodeOfDoubleMapOfIntegerShape;



class TopOpeBRepDS_DoubleMapIteratorOfDoubleMapOfIntegerShape  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepDS_DoubleMapIteratorOfDoubleMapOfIntegerShape();
  
  Standard_EXPORT TopOpeBRepDS_DoubleMapIteratorOfDoubleMapOfIntegerShape(const TopOpeBRepDS_DoubleMapOfIntegerShape& aMap);
  
  Standard_EXPORT   void Initialize (const TopOpeBRepDS_DoubleMapOfIntegerShape& aMap) ;
  
  Standard_EXPORT  const  Standard_Integer& Key1()  const;
  
  Standard_EXPORT  const  TopoDS_Shape& Key2()  const;




protected:





private:





};







#endif // _TopOpeBRepDS_DoubleMapIteratorOfDoubleMapOfIntegerShape_HeaderFile
