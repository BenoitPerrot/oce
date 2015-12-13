// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XSDRAWSTLVRML_CoordsMap_HeaderFile
#define _XSDRAWSTLVRML_CoordsMap_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_XSDRAWSTLVRML_DataMapNodeOfCoordsMap.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TColStd_DataMapOfIntegerReal;
class TColStd_MapIntegerHasher;
class XSDRAWSTLVRML_DataMapNodeOfCoordsMap;
class XSDRAWSTLVRML_DataMapIteratorOfCoordsMap;



class XSDRAWSTLVRML_CoordsMap  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT XSDRAWSTLVRML_CoordsMap(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   XSDRAWSTLVRML_CoordsMap& Assign (const XSDRAWSTLVRML_CoordsMap& Other) ;
  XSDRAWSTLVRML_CoordsMap& operator = (const XSDRAWSTLVRML_CoordsMap& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~XSDRAWSTLVRML_CoordsMap()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Standard_Integer& K, const TColStd_DataMapOfIntegerReal& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Standard_Integer& K) ;
  
  Standard_EXPORT  const  TColStd_DataMapOfIntegerReal& Find (const Standard_Integer& K)  const;
 const  TColStd_DataMapOfIntegerReal& operator() (const Standard_Integer& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   TColStd_DataMapOfIntegerReal& ChangeFind (const Standard_Integer& K) ;
  TColStd_DataMapOfIntegerReal& operator() (const Standard_Integer& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Standard_Integer& K) ;




protected:





private:

  
  Standard_EXPORT XSDRAWSTLVRML_CoordsMap(const XSDRAWSTLVRML_CoordsMap& Other);




};







#endif // _XSDRAWSTLVRML_CoordsMap_HeaderFile
