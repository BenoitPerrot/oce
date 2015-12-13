// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_DataMapIteratorOfDataMapOfSurfaceSampleBox_HeaderFile
#define _IntTools_DataMapIteratorOfDataMapOfSurfaceSampleBox_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Handle_IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox.hxx>
class Standard_NoSuchObject;
class IntTools_SurfaceRangeSample;
class Bnd_Box;
class IntTools_SurfaceRangeSampleMapHasher;
class IntTools_DataMapOfSurfaceSampleBox;
class IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox;



class IntTools_DataMapIteratorOfDataMapOfSurfaceSampleBox  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IntTools_DataMapIteratorOfDataMapOfSurfaceSampleBox();
  
  Standard_EXPORT IntTools_DataMapIteratorOfDataMapOfSurfaceSampleBox(const IntTools_DataMapOfSurfaceSampleBox& aMap);
  
  Standard_EXPORT   void Initialize (const IntTools_DataMapOfSurfaceSampleBox& aMap) ;
  
  Standard_EXPORT  const  IntTools_SurfaceRangeSample& Key()  const;
  
  Standard_EXPORT  const  Bnd_Box& Value()  const;




protected:





private:





};







#endif // _IntTools_DataMapIteratorOfDataMapOfSurfaceSampleBox_HeaderFile
