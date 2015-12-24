// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_GlobalNodeOfReaderLib_HeaderFile
#define _Interface_GlobalNodeOfReaderLib_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/Interface/Handle_Interface_GlobalNodeOfReaderLib.hxx>

#include <DataExchange/Interface/Handle_Interface_ReaderModule.hxx>
#include <DataExchange/Interface/Handle_Interface_Protocol.hxx>
#include <DataExchange/Interface/Handle_Interface_GlobalNodeOfReaderLib.hxx>
#include <Foundation/Standard/Standard_Transient.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
#include <DataExchange/Interface/Handle_Interface_NodeOfReaderLib.hxx>
class Interface_ReaderModule;
class Interface_Protocol;
class Standard_Transient;
class Interface_ReaderLib;
class Interface_NodeOfReaderLib;



class Interface_GlobalNodeOfReaderLib : public Standard_Transient
{

public:

  
  Standard_EXPORT Interface_GlobalNodeOfReaderLib();
  
  Standard_EXPORT   void Add (const Handle(Interface_ReaderModule)& amodule, const Handle(Interface_Protocol)& aprotocol) ;
  
  Standard_EXPORT  const  Handle(Interface_ReaderModule)& Module()  const;
  
  Standard_EXPORT  const  Handle(Interface_Protocol)& Protocol()  const;
  
  Standard_EXPORT  const  Handle(Interface_GlobalNodeOfReaderLib)& Next()  const;




  DEFINE_STANDARD_RTTI(Interface_GlobalNodeOfReaderLib)

protected:




private: 


  Handle(Interface_ReaderModule) themod;
  Handle(Interface_Protocol) theprot;
  Handle(Interface_GlobalNodeOfReaderLib) thenext;


};







#endif // _Interface_GlobalNodeOfReaderLib_HeaderFile
