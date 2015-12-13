// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataMapOfIntegerBoolean_HeaderFile
#define _MeshVS_DataMapOfIntegerBoolean_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_MeshVS_DataMapNodeOfDataMapOfIntegerBoolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TColStd_MapIntegerHasher;
class MeshVS_DataMapNodeOfDataMapOfIntegerBoolean;
class MeshVS_DataMapIteratorOfDataMapOfIntegerBoolean;



class MeshVS_DataMapOfIntegerBoolean  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MeshVS_DataMapOfIntegerBoolean(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   MeshVS_DataMapOfIntegerBoolean& Assign (const MeshVS_DataMapOfIntegerBoolean& Other) ;
  MeshVS_DataMapOfIntegerBoolean& operator = (const MeshVS_DataMapOfIntegerBoolean& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~MeshVS_DataMapOfIntegerBoolean()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Standard_Integer& K, const Standard_Boolean& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Standard_Integer& K) ;
  
  Standard_EXPORT  const  Standard_Boolean& Find (const Standard_Integer& K)  const;
 const  Standard_Boolean& operator() (const Standard_Integer& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Standard_Boolean& ChangeFind (const Standard_Integer& K) ;
  Standard_Boolean& operator() (const Standard_Integer& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Standard_Integer& K) ;




protected:





private:

  
  Standard_EXPORT MeshVS_DataMapOfIntegerBoolean(const MeshVS_DataMapOfIntegerBoolean& Other);




};







#endif // _MeshVS_DataMapOfIntegerBoolean_HeaderFile
