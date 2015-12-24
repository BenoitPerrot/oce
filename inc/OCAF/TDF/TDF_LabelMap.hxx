// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_LabelMap_HeaderFile
#define _TDF_LabelMap_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <OCAF/TDF/Handle_TDF_StdMapNodeOfLabelMap.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TDF_Label;
class TDF_LabelMapHasher;
class TDF_StdMapNodeOfLabelMap;
class TDF_MapIteratorOfLabelMap;



class TDF_LabelMap  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TDF_LabelMap(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT TDF_LabelMap(const TDF_LabelMap& Other);
  
  Standard_EXPORT   TDF_LabelMap& Assign (const TDF_LabelMap& Other) ;
  TDF_LabelMap& operator = (const TDF_LabelMap& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TDF_LabelMap()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Add (const TDF_Label& aKey) ;
  
  Standard_EXPORT   Standard_Boolean Contains (const TDF_Label& aKey)  const;
  
  Standard_EXPORT   Standard_Boolean Remove (const TDF_Label& aKey) ;




protected:





private:





};







#endif // _TDF_LabelMap_HeaderFile
