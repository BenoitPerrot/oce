// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_DataMapIteratorOfMapOfCurve_HeaderFile
#define _TopOpeBRepDS_DataMapIteratorOfMapOfCurve_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <ModelingAlgorithms/TopOpeBRepDS/Handle_TopOpeBRepDS_DataMapNodeOfMapOfCurve.hxx>
class Standard_NoSuchObject;
class TopOpeBRepDS_CurveData;
class TColStd_MapIntegerHasher;
class TopOpeBRepDS_MapOfCurve;
class TopOpeBRepDS_DataMapNodeOfMapOfCurve;



class TopOpeBRepDS_DataMapIteratorOfMapOfCurve  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepDS_DataMapIteratorOfMapOfCurve();
  
  Standard_EXPORT TopOpeBRepDS_DataMapIteratorOfMapOfCurve(const TopOpeBRepDS_MapOfCurve& aMap);
  
  Standard_EXPORT   void Initialize (const TopOpeBRepDS_MapOfCurve& aMap) ;
  
  Standard_EXPORT  const  Standard_Integer& Key()  const;
  
  Standard_EXPORT  const  TopOpeBRepDS_CurveData& Value()  const;




protected:





private:





};







#endif // _TopOpeBRepDS_DataMapIteratorOfMapOfCurve_HeaderFile
