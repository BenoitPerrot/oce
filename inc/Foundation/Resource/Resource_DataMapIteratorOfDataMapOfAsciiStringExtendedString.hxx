// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Resource_DataMapIteratorOfDataMapOfAsciiStringExtendedString_HeaderFile
#define _Resource_DataMapIteratorOfDataMapOfAsciiStringExtendedString_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Handle_Resource_DataMapNodeOfDataMapOfAsciiStringExtendedString.hxx>
class Standard_NoSuchObject;
class TCollection_AsciiString;
class TCollection_ExtendedString;
class Resource_DataMapOfAsciiStringExtendedString;
class Resource_DataMapNodeOfDataMapOfAsciiStringExtendedString;



class Resource_DataMapIteratorOfDataMapOfAsciiStringExtendedString  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Resource_DataMapIteratorOfDataMapOfAsciiStringExtendedString();
  
  Standard_EXPORT Resource_DataMapIteratorOfDataMapOfAsciiStringExtendedString(const Resource_DataMapOfAsciiStringExtendedString& aMap);
  
  Standard_EXPORT   void Initialize (const Resource_DataMapOfAsciiStringExtendedString& aMap) ;
  
  Standard_EXPORT  const  TCollection_AsciiString& Key()  const;
  
  Standard_EXPORT  const  TCollection_ExtendedString& Value()  const;




protected:





private:





};







#endif // _Resource_DataMapIteratorOfDataMapOfAsciiStringExtendedString_HeaderFile
