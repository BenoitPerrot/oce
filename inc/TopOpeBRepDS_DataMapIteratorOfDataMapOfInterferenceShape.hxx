// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_DataMapIteratorOfDataMapOfInterferenceShape_HeaderFile
#define _TopOpeBRepDS_DataMapIteratorOfDataMapOfInterferenceShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Handle_TopOpeBRepDS_Interference.hxx>
#include <Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfInterferenceShape.hxx>
class Standard_NoSuchObject;
class TopOpeBRepDS_Interference;
class TopoDS_Shape;
class TColStd_MapTransientHasher;
class TopOpeBRepDS_DataMapOfInterferenceShape;
class TopOpeBRepDS_DataMapNodeOfDataMapOfInterferenceShape;



class TopOpeBRepDS_DataMapIteratorOfDataMapOfInterferenceShape  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepDS_DataMapIteratorOfDataMapOfInterferenceShape();
  
  Standard_EXPORT TopOpeBRepDS_DataMapIteratorOfDataMapOfInterferenceShape(const TopOpeBRepDS_DataMapOfInterferenceShape& aMap);
  
  Standard_EXPORT   void Initialize (const TopOpeBRepDS_DataMapOfInterferenceShape& aMap) ;
  
  Standard_EXPORT  const  Handle(TopOpeBRepDS_Interference)& Key()  const;
  
  Standard_EXPORT  const  TopoDS_Shape& Value()  const;




protected:





private:





};







#endif // _TopOpeBRepDS_DataMapIteratorOfDataMapOfInterferenceShape_HeaderFile
