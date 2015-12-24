// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_AttributeIndexedMap_HeaderFile
#define _TDF_AttributeIndexedMap_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <OCAF/TDF/Handle_TDF_Attribute.hxx>
#include <OCAF/TDF/Handle_TDF_IndexedMapNodeOfAttributeIndexedMap.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_DomainError;
class Standard_OutOfRange;
class TDF_Attribute;
class TColStd_MapTransientHasher;
class TDF_IndexedMapNodeOfAttributeIndexedMap;



class TDF_AttributeIndexedMap  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TDF_AttributeIndexedMap(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT TDF_AttributeIndexedMap(const TDF_AttributeIndexedMap& Other);
  
  Standard_EXPORT   TDF_AttributeIndexedMap& Assign (const TDF_AttributeIndexedMap& Other) ;
  TDF_AttributeIndexedMap& operator = (const TDF_AttributeIndexedMap& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TDF_AttributeIndexedMap()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Integer Add (const Handle(TDF_Attribute)& K) ;
  
  Standard_EXPORT   void Substitute (const Standard_Integer I, const Handle(TDF_Attribute)& K) ;
  
  Standard_EXPORT   void RemoveLast() ;
  
  Standard_EXPORT   Standard_Boolean Contains (const Handle(TDF_Attribute)& K)  const;
  
  Standard_EXPORT  const  Handle(TDF_Attribute)& FindKey (const Standard_Integer I)  const;
 const  Handle(TDF_Attribute)& operator () (const Standard_Integer I)  const
{
  return FindKey(I);
}
  
  Standard_EXPORT   Standard_Integer FindIndex (const Handle(TDF_Attribute)& K)  const;




protected:





private:





};







#endif // _TDF_AttributeIndexedMap_HeaderFile
