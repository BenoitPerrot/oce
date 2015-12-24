// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMDF_TypeADriverMap_HeaderFile
#define _XmlMDF_TypeADriverMap_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Foundation/Standard/Handle_Standard_Type.hxx>
#include <OCAF/XmlMDF/Handle_XmlMDF_ADriver.hxx>
#include <OCAF/XmlMDF/Handle_XmlMDF_DataMapNodeOfTypeADriverMap.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class Standard_Type;
class XmlMDF_ADriver;
class TColStd_MapTransientHasher;
class XmlMDF_DataMapNodeOfTypeADriverMap;
class XmlMDF_DataMapIteratorOfTypeADriverMap;



class XmlMDF_TypeADriverMap  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT XmlMDF_TypeADriverMap(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   XmlMDF_TypeADriverMap& Assign (const XmlMDF_TypeADriverMap& Other) ;
  XmlMDF_TypeADriverMap& operator = (const XmlMDF_TypeADriverMap& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~XmlMDF_TypeADriverMap()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Handle(Standard_Type)& K, const Handle(XmlMDF_ADriver)& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Handle(Standard_Type)& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Handle(Standard_Type)& K) ;
  
  Standard_EXPORT  const  Handle(XmlMDF_ADriver)& Find (const Handle(Standard_Type)& K)  const;
 const  Handle(XmlMDF_ADriver)& operator() (const Handle(Standard_Type)& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Handle(XmlMDF_ADriver)& ChangeFind (const Handle(Standard_Type)& K) ;
  Handle(XmlMDF_ADriver)& operator() (const Handle(Standard_Type)& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Handle(Standard_Type)& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Handle(Standard_Type)& K) ;




protected:





private:

  
  Standard_EXPORT XmlMDF_TypeADriverMap(const XmlMDF_TypeADriverMap& Other);




};







#endif // _XmlMDF_TypeADriverMap_HeaderFile
