// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_DataMapOfSurfaceSampleBox_HeaderFile
#define _IntTools_DataMapOfSurfaceSampleBox_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <ModelingAlgorithms/IntTools/Handle_IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class IntTools_SurfaceRangeSample;
class Bnd_Box;
class IntTools_SurfaceRangeSampleMapHasher;
class IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox;
class IntTools_DataMapIteratorOfDataMapOfSurfaceSampleBox;



class IntTools_DataMapOfSurfaceSampleBox  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IntTools_DataMapOfSurfaceSampleBox(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   IntTools_DataMapOfSurfaceSampleBox& Assign (const IntTools_DataMapOfSurfaceSampleBox& Other) ;
  IntTools_DataMapOfSurfaceSampleBox& operator = (const IntTools_DataMapOfSurfaceSampleBox& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~IntTools_DataMapOfSurfaceSampleBox()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const IntTools_SurfaceRangeSample& K, const Bnd_Box& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const IntTools_SurfaceRangeSample& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const IntTools_SurfaceRangeSample& K) ;
  
  Standard_EXPORT  const  Bnd_Box& Find (const IntTools_SurfaceRangeSample& K)  const;
 const  Bnd_Box& operator() (const IntTools_SurfaceRangeSample& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Bnd_Box& ChangeFind (const IntTools_SurfaceRangeSample& K) ;
  Bnd_Box& operator() (const IntTools_SurfaceRangeSample& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const IntTools_SurfaceRangeSample& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const IntTools_SurfaceRangeSample& K) ;




protected:





private:

  
  Standard_EXPORT IntTools_DataMapOfSurfaceSampleBox(const IntTools_DataMapOfSurfaceSampleBox& Other);




};







#endif // _IntTools_DataMapOfSurfaceSampleBox_HeaderFile
