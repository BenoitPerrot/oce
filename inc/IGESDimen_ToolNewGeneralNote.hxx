// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_ToolNewGeneralNote_HeaderFile
#define _IGESDimen_ToolNewGeneralNote_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_IGESDimen_NewGeneralNote.hxx>
#include <Handle_IGESData_IGESReaderData.hxx>
#include <Handle_Interface_Check.hxx>
#include <Handle_Message_Messenger.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_DomainError;
class IGESDimen_NewGeneralNote;
class IGESData_IGESReaderData;
class IGESData_ParamReader;
class IGESData_IGESWriter;
class Interface_EntityIterator;
class IGESData_DirChecker;
class Interface_ShareTool;
class Interface_Check;
class Interface_CopyTool;
class IGESData_IGESDumper;
class Message_Messenger;


//! Tool to work on a NewGeneralNote. Called by various Modules
//! (ReadWriteModule, GeneralModule, SpecificModule)
class IGESDimen_ToolNewGeneralNote 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a ToolNewGeneralNote, ready to work
  Standard_EXPORT IGESDimen_ToolNewGeneralNote();
  
  //! Reads own parameters from file. <PR> gives access to them,
  //! <IR> detains parameter types and values
  Standard_EXPORT   void ReadOwnParams (const Handle(IGESDimen_NewGeneralNote)& ent, const Handle(IGESData_IGESReaderData)& IR, IGESData_ParamReader& PR)  const;
  
  //! Writes own parameters to IGESWriter
  Standard_EXPORT   void WriteOwnParams (const Handle(IGESDimen_NewGeneralNote)& ent, IGESData_IGESWriter& IW)  const;
  
  //! Lists the Entities shared by a NewGeneralNote <ent>, from
  //! its specific (own) parameters
  Standard_EXPORT   void OwnShared (const Handle(IGESDimen_NewGeneralNote)& ent, Interface_EntityIterator& iter)  const;
  
  //! Returns specific DirChecker
  Standard_EXPORT   IGESData_DirChecker DirChecker (const Handle(IGESDimen_NewGeneralNote)& ent)  const;
  
  //! Performs Specific Semantic Check
  Standard_EXPORT   void OwnCheck (const Handle(IGESDimen_NewGeneralNote)& ent, const Interface_ShareTool& shares, Handle(Interface_Check)& ach)  const;
  
  //! Copies Specific Parameters
  Standard_EXPORT   void OwnCopy (const Handle(IGESDimen_NewGeneralNote)& entfrom, const Handle(IGESDimen_NewGeneralNote)& entto, Interface_CopyTool& TC)  const;
  
  //! Dump of Specific Parameters
  Standard_EXPORT   void OwnDump (const Handle(IGESDimen_NewGeneralNote)& ent, const IGESData_IGESDumper& dumper, const Handle(Message_Messenger)& S, const Standard_Integer own)  const;




protected:





private:





};







#endif // _IGESDimen_ToolNewGeneralNote_HeaderFile
