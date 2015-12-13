// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESData_DefaultSpecific_HeaderFile
#define _IGESData_DefaultSpecific_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESData_DefaultSpecific.hxx>

#include <IGESData_SpecificModule.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_IGESData_IGESEntity.hxx>
#include <Handle_Message_Messenger.hxx>
class IGESData_IGESEntity;
class IGESData_IGESDumper;
class Message_Messenger;


//! Specific IGES Services for UndefinedEntity, FreeFormatEntity
class IGESData_DefaultSpecific : public IGESData_SpecificModule
{

public:

  
  //! Creates a DefaultSpecific and puts it into SpecificLib
  Standard_EXPORT IGESData_DefaultSpecific();
  
  //! Specific Dump for UndefinedEntity : it concerns only
  //! own parameters, the general data (Directory Part, Lists) are
  //! taken into account by the IGESDumper
  Standard_EXPORT   void OwnDump (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent, const IGESData_IGESDumper& dumper, const Handle(Message_Messenger)& S, const Standard_Integer own)  const;




  DEFINE_STANDARD_RTTI(IGESData_DefaultSpecific)

protected:




private: 




};







#endif // _IGESData_DefaultSpecific_HeaderFile
