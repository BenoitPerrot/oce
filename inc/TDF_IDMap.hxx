// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_IDMap_HeaderFile
#define _TDF_IDMap_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_TDF_StdMapNodeOfIDMap.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_GUID;
class TDF_StdMapNodeOfIDMap;
class TDF_MapIteratorOfIDMap;



class TDF_IDMap  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TDF_IDMap(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT TDF_IDMap(const TDF_IDMap& Other);
  
  Standard_EXPORT   TDF_IDMap& Assign (const TDF_IDMap& Other) ;
  TDF_IDMap& operator = (const TDF_IDMap& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TDF_IDMap()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Add (const Standard_GUID& aKey) ;
  
  Standard_EXPORT   Standard_Boolean Contains (const Standard_GUID& aKey)  const;
  
  Standard_EXPORT   Standard_Boolean Remove (const Standard_GUID& aKey) ;




protected:





private:





};







#endif // _TDF_IDMap_HeaderFile
