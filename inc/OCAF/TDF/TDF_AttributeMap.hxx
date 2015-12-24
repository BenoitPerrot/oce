// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_AttributeMap_HeaderFile
#define _TDF_AttributeMap_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <OCAF/TDF/Handle_TDF_Attribute.hxx>
#include <OCAF/TDF/Handle_TDF_StdMapNodeOfAttributeMap.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TDF_Attribute;
class TColStd_MapTransientHasher;
class TDF_StdMapNodeOfAttributeMap;
class TDF_MapIteratorOfAttributeMap;



class TDF_AttributeMap  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TDF_AttributeMap(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT TDF_AttributeMap(const TDF_AttributeMap& Other);
  
  Standard_EXPORT   TDF_AttributeMap& Assign (const TDF_AttributeMap& Other) ;
  TDF_AttributeMap& operator = (const TDF_AttributeMap& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TDF_AttributeMap()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Add (const Handle(TDF_Attribute)& aKey) ;
  
  Standard_EXPORT   Standard_Boolean Contains (const Handle(TDF_Attribute)& aKey)  const;
  
  Standard_EXPORT   Standard_Boolean Remove (const Handle(TDF_Attribute)& aKey) ;




protected:





private:





};







#endif // _TDF_AttributeMap_HeaderFile
