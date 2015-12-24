// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESData_GlobalNodeOfSpecificLib_HeaderFile
#define _IGESData_GlobalNodeOfSpecificLib_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IGESData/Handle_IGESData_GlobalNodeOfSpecificLib.hxx>

#include <DataExchange/IGESData/Handle_IGESData_SpecificModule.hxx>
#include <DataExchange/IGESData/Handle_IGESData_Protocol.hxx>
#include <DataExchange/IGESData/Handle_IGESData_GlobalNodeOfSpecificLib.hxx>
#include <Foundation/Standard/Standard_Transient.hxx>
#include <DataExchange/IGESData/Handle_IGESData_IGESEntity.hxx>
#include <DataExchange/IGESData/Handle_IGESData_NodeOfSpecificLib.hxx>
class IGESData_SpecificModule;
class IGESData_Protocol;
class IGESData_IGESEntity;
class IGESData_SpecificLib;
class IGESData_NodeOfSpecificLib;



class IGESData_GlobalNodeOfSpecificLib : public Standard_Transient
{

public:

  
  Standard_EXPORT IGESData_GlobalNodeOfSpecificLib();
  
  Standard_EXPORT   void Add (const Handle(IGESData_SpecificModule)& amodule, const Handle(IGESData_Protocol)& aprotocol) ;
  
  Standard_EXPORT  const  Handle(IGESData_SpecificModule)& Module()  const;
  
  Standard_EXPORT  const  Handle(IGESData_Protocol)& Protocol()  const;
  
  Standard_EXPORT  const  Handle(IGESData_GlobalNodeOfSpecificLib)& Next()  const;




  DEFINE_STANDARD_RTTI(IGESData_GlobalNodeOfSpecificLib)

protected:




private: 


  Handle(IGESData_SpecificModule) themod;
  Handle(IGESData_Protocol) theprot;
  Handle(IGESData_GlobalNodeOfSpecificLib) thenext;


};







#endif // _IGESData_GlobalNodeOfSpecificLib_HeaderFile
