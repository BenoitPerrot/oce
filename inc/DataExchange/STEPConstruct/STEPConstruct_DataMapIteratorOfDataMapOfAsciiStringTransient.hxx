// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient_HeaderFile
#define _STEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
#include <DataExchange/STEPConstruct/Handle_STEPConstruct_DataMapNodeOfDataMapOfAsciiStringTransient.hxx>
class Standard_NoSuchObject;
class TCollection_AsciiString;
class Standard_Transient;
class STEPConstruct_DataMapOfAsciiStringTransient;
class STEPConstruct_DataMapNodeOfDataMapOfAsciiStringTransient;



class STEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT STEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient();
  
  Standard_EXPORT STEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient(const STEPConstruct_DataMapOfAsciiStringTransient& aMap);
  
  Standard_EXPORT   void Initialize (const STEPConstruct_DataMapOfAsciiStringTransient& aMap) ;
  
  Standard_EXPORT  const  TCollection_AsciiString& Key()  const;
  
  Standard_EXPORT  const  Handle(Standard_Transient)& Value()  const;




protected:





private:





};







#endif // _STEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient_HeaderFile
