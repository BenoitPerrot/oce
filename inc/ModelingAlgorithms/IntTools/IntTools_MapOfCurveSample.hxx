// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_MapOfCurveSample_HeaderFile
#define _IntTools_MapOfCurveSample_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <ModelingAlgorithms/IntTools/Handle_IntTools_StdMapNodeOfMapOfCurveSample.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class IntTools_CurveRangeSample;
class IntTools_CurveRangeSampleMapHasher;
class IntTools_StdMapNodeOfMapOfCurveSample;
class IntTools_MapIteratorOfMapOfCurveSample;



class IntTools_MapOfCurveSample  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IntTools_MapOfCurveSample(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT IntTools_MapOfCurveSample(const IntTools_MapOfCurveSample& Other);
  
  Standard_EXPORT   IntTools_MapOfCurveSample& Assign (const IntTools_MapOfCurveSample& Other) ;
  IntTools_MapOfCurveSample& operator = (const IntTools_MapOfCurveSample& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~IntTools_MapOfCurveSample()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Add (const IntTools_CurveRangeSample& aKey) ;
  
  Standard_EXPORT   Standard_Boolean Contains (const IntTools_CurveRangeSample& aKey)  const;
  
  Standard_EXPORT   Standard_Boolean Remove (const IntTools_CurveRangeSample& aKey) ;




protected:





private:





};







#endif // _IntTools_MapOfCurveSample_HeaderFile
