// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSolid_SpecificModule_HeaderFile
#define _IGESSolid_SpecificModule_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESSolid_SpecificModule.hxx>

#include <DataExchange/IGESData/IGESData_SpecificModule.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_IGESData_IGESEntity.hxx>
#include <Handle_Message_Messenger.hxx>
class IGESData_IGESEntity;
class IGESData_IGESDumper;
class Message_Messenger;


//! Defines Services attached to IGES Entities : Dump, for IGESSolid
class IGESSolid_SpecificModule : public IGESData_SpecificModule
{

public:

  
  //! Creates a SpecificModule from IGESSolid & puts it into SpecificLib
  Standard_EXPORT IGESSolid_SpecificModule();
  
  //! Specific Dump (own parameters) for IGESSolid
  Standard_EXPORT   void OwnDump (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent, const IGESData_IGESDumper& dumper, const Handle(Message_Messenger)& S, const Standard_Integer own)  const;




  DEFINE_STANDARD_RTTI(IGESSolid_SpecificModule)

protected:




private: 




};







#endif // _IGESSolid_SpecificModule_HeaderFile
