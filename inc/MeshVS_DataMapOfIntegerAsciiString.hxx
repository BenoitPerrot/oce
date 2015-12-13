// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataMapOfIntegerAsciiString_HeaderFile
#define _MeshVS_DataMapOfIntegerAsciiString_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_MeshVS_DataMapNodeOfDataMapOfIntegerAsciiString.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TCollection_AsciiString;
class TColStd_MapIntegerHasher;
class MeshVS_DataMapNodeOfDataMapOfIntegerAsciiString;
class MeshVS_DataMapIteratorOfDataMapOfIntegerAsciiString;



class MeshVS_DataMapOfIntegerAsciiString  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MeshVS_DataMapOfIntegerAsciiString(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   MeshVS_DataMapOfIntegerAsciiString& Assign (const MeshVS_DataMapOfIntegerAsciiString& Other) ;
  MeshVS_DataMapOfIntegerAsciiString& operator = (const MeshVS_DataMapOfIntegerAsciiString& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~MeshVS_DataMapOfIntegerAsciiString()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Standard_Integer& K, const TCollection_AsciiString& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Standard_Integer& K) ;
  
  Standard_EXPORT  const  TCollection_AsciiString& Find (const Standard_Integer& K)  const;
 const  TCollection_AsciiString& operator() (const Standard_Integer& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   TCollection_AsciiString& ChangeFind (const Standard_Integer& K) ;
  TCollection_AsciiString& operator() (const Standard_Integer& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Standard_Integer& K) ;




protected:





private:

  
  Standard_EXPORT MeshVS_DataMapOfIntegerAsciiString(const MeshVS_DataMapOfIntegerAsciiString& Other);




};







#endif // _MeshVS_DataMapOfIntegerAsciiString_HeaderFile
