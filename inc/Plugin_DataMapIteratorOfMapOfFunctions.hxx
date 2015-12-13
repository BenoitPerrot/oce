// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Plugin_DataMapIteratorOfMapOfFunctions_HeaderFile
#define _Plugin_DataMapIteratorOfMapOfFunctions_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Foundation/OSD/OSD_Function.hxx>
#include <Handle_Plugin_DataMapNodeOfMapOfFunctions.hxx>
class Standard_NoSuchObject;
class TCollection_AsciiString;
class Plugin_MapOfFunctions;
class Plugin_DataMapNodeOfMapOfFunctions;



class Plugin_DataMapIteratorOfMapOfFunctions  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Plugin_DataMapIteratorOfMapOfFunctions();
  
  Standard_EXPORT Plugin_DataMapIteratorOfMapOfFunctions(const Plugin_MapOfFunctions& aMap);
  
  Standard_EXPORT   void Initialize (const Plugin_MapOfFunctions& aMap) ;
  
  Standard_EXPORT  const  TCollection_AsciiString& Key()  const;
  
  Standard_EXPORT  const  OSD_Function& Value()  const;




protected:





private:





};







#endif // _Plugin_DataMapIteratorOfMapOfFunctions_HeaderFile
