// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMDF_DataMapIteratorOfMapOfDriver_HeaderFile
#define _XmlMDF_DataMapIteratorOfMapOfDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <Handle_XmlMDF_ADriver.hxx>
#include <Handle_XmlMDF_DataMapNodeOfMapOfDriver.hxx>
class Standard_NoSuchObject;
class TCollection_AsciiString;
class XmlMDF_ADriver;
class XmlMDF_MapOfDriver;
class XmlMDF_DataMapNodeOfMapOfDriver;



class XmlMDF_DataMapIteratorOfMapOfDriver  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT XmlMDF_DataMapIteratorOfMapOfDriver();
  
  Standard_EXPORT XmlMDF_DataMapIteratorOfMapOfDriver(const XmlMDF_MapOfDriver& aMap);
  
  Standard_EXPORT   void Initialize (const XmlMDF_MapOfDriver& aMap) ;
  
  Standard_EXPORT  const  TCollection_AsciiString& Key()  const;
  
  Standard_EXPORT  const  Handle(XmlMDF_ADriver)& Value()  const;




protected:





private:





};







#endif // _XmlMDF_DataMapIteratorOfMapOfDriver_HeaderFile
