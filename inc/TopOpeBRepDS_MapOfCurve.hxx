// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_MapOfCurve_HeaderFile
#define _TopOpeBRepDS_MapOfCurve_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_TopOpeBRepDS_DataMapNodeOfMapOfCurve.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TopOpeBRepDS_CurveData;
class TColStd_MapIntegerHasher;
class TopOpeBRepDS_DataMapNodeOfMapOfCurve;
class TopOpeBRepDS_DataMapIteratorOfMapOfCurve;



class TopOpeBRepDS_MapOfCurve  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepDS_MapOfCurve(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TopOpeBRepDS_MapOfCurve& Assign (const TopOpeBRepDS_MapOfCurve& Other) ;
  TopOpeBRepDS_MapOfCurve& operator = (const TopOpeBRepDS_MapOfCurve& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TopOpeBRepDS_MapOfCurve()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Standard_Integer& K, const TopOpeBRepDS_CurveData& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Standard_Integer& K) ;
  
  Standard_EXPORT  const  TopOpeBRepDS_CurveData& Find (const Standard_Integer& K)  const;
 const  TopOpeBRepDS_CurveData& operator() (const Standard_Integer& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   TopOpeBRepDS_CurveData& ChangeFind (const Standard_Integer& K) ;
  TopOpeBRepDS_CurveData& operator() (const Standard_Integer& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Standard_Integer& K) ;




protected:





private:

  
  Standard_EXPORT TopOpeBRepDS_MapOfCurve(const TopOpeBRepDS_MapOfCurve& Other);




};







#endif // _TopOpeBRepDS_MapOfCurve_HeaderFile
