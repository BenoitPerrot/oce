// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMDF_DataMapIteratorOfTypeADriverMap_HeaderFile
#define _XmlMDF_DataMapIteratorOfTypeADriverMap_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <Handle_Standard_Type.hxx>
#include <Handle_XmlMDF_ADriver.hxx>
#include <Handle_XmlMDF_DataMapNodeOfTypeADriverMap.hxx>
class Standard_NoSuchObject;
class Standard_Type;
class XmlMDF_ADriver;
class TColStd_MapTransientHasher;
class XmlMDF_TypeADriverMap;
class XmlMDF_DataMapNodeOfTypeADriverMap;



class XmlMDF_DataMapIteratorOfTypeADriverMap  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT XmlMDF_DataMapIteratorOfTypeADriverMap();
  
  Standard_EXPORT XmlMDF_DataMapIteratorOfTypeADriverMap(const XmlMDF_TypeADriverMap& aMap);
  
  Standard_EXPORT   void Initialize (const XmlMDF_TypeADriverMap& aMap) ;
  
  Standard_EXPORT  const  Handle(Standard_Type)& Key()  const;
  
  Standard_EXPORT  const  Handle(XmlMDF_ADriver)& Value()  const;




protected:





private:





};







#endif // _XmlMDF_DataMapIteratorOfTypeADriverMap_HeaderFile
