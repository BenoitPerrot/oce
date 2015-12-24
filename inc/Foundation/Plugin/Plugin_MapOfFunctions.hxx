// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Plugin_MapOfFunctions_HeaderFile
#define _Plugin_MapOfFunctions_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Foundation/OSD/OSD_Function.hxx>
#include <Foundation/Plugin/Handle_Plugin_DataMapNodeOfMapOfFunctions.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TCollection_AsciiString;
class Plugin_DataMapNodeOfMapOfFunctions;
class Plugin_DataMapIteratorOfMapOfFunctions;



class Plugin_MapOfFunctions  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Plugin_MapOfFunctions(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   Plugin_MapOfFunctions& Assign (const Plugin_MapOfFunctions& Other) ;
  Plugin_MapOfFunctions& operator = (const Plugin_MapOfFunctions& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~Plugin_MapOfFunctions()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TCollection_AsciiString& K, const OSD_Function& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TCollection_AsciiString& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TCollection_AsciiString& K) ;
  
  Standard_EXPORT  const  OSD_Function& Find (const TCollection_AsciiString& K)  const;
 const  OSD_Function& operator() (const TCollection_AsciiString& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   OSD_Function& ChangeFind (const TCollection_AsciiString& K) ;
  OSD_Function& operator() (const TCollection_AsciiString& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TCollection_AsciiString& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TCollection_AsciiString& K) ;




protected:





private:

  
  Standard_EXPORT Plugin_MapOfFunctions(const Plugin_MapOfFunctions& Other);




};







#endif // _Plugin_MapOfFunctions_HeaderFile
