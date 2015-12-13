// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlLDrivers_NamespaceDef_HeaderFile
#define _XmlLDrivers_NamespaceDef_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_AsciiString.hxx>
class TCollection_AsciiString;



class XmlLDrivers_NamespaceDef 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT XmlLDrivers_NamespaceDef();
  
  Standard_EXPORT XmlLDrivers_NamespaceDef(const TCollection_AsciiString& thePrefix, const TCollection_AsciiString& theURI);
  
  Standard_EXPORT  const  TCollection_AsciiString& Prefix()  const;
  
  Standard_EXPORT  const  TCollection_AsciiString& URI()  const;




protected:





private:



  TCollection_AsciiString myPrefix;
  TCollection_AsciiString myURI;


};







#endif // _XmlLDrivers_NamespaceDef_HeaderFile
