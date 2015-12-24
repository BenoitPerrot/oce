// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_TypeARDriverMap_HeaderFile
#define _MDF_TypeARDriverMap_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Foundation/Standard/Handle_Standard_Type.hxx>
#include <OCAF/MDF/Handle_MDF_ARDriver.hxx>
#include <OCAF/MDF/Handle_MDF_DataMapNodeOfTypeARDriverMap.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class Standard_Type;
class MDF_ARDriver;
class TColStd_MapTransientHasher;
class MDF_DataMapNodeOfTypeARDriverMap;
class MDF_DataMapIteratorOfTypeARDriverMap;



class MDF_TypeARDriverMap  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MDF_TypeARDriverMap(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   MDF_TypeARDriverMap& Assign (const MDF_TypeARDriverMap& Other) ;
  MDF_TypeARDriverMap& operator = (const MDF_TypeARDriverMap& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~MDF_TypeARDriverMap()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Handle(Standard_Type)& K, const Handle(MDF_ARDriver)& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Handle(Standard_Type)& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Handle(Standard_Type)& K) ;
  
  Standard_EXPORT  const  Handle(MDF_ARDriver)& Find (const Handle(Standard_Type)& K)  const;
 const  Handle(MDF_ARDriver)& operator() (const Handle(Standard_Type)& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Handle(MDF_ARDriver)& ChangeFind (const Handle(Standard_Type)& K) ;
  Handle(MDF_ARDriver)& operator() (const Handle(Standard_Type)& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Handle(Standard_Type)& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Handle(Standard_Type)& K) ;




protected:





private:

  
  Standard_EXPORT MDF_TypeARDriverMap(const MDF_TypeARDriverMap& Other);




};







#endif // _MDF_TypeARDriverMap_HeaderFile
