// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSolid_ToolBooleanTree_HeaderFile
#define _IGESSolid_ToolBooleanTree_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/IGESSolid/Handle_IGESSolid_BooleanTree.hxx>
#include <DataExchange/IGESData/Handle_IGESData_IGESReaderData.hxx>
#include <DataExchange/Interface/Handle_Interface_Check.hxx>
#include <Foundation/Message/Handle_Message_Messenger.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_DomainError;
class IGESSolid_BooleanTree;
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


//! Tool to work on a BooleanTree. Called by various Modules
//! (ReadWriteModule, GeneralModule, SpecificModule)
class IGESSolid_ToolBooleanTree 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a ToolBooleanTree, ready to work
  Standard_EXPORT IGESSolid_ToolBooleanTree();
  
  //! Reads own parameters from file. <PR> gives access to them,
  //! <IR> detains parameter types and values
  Standard_EXPORT   void ReadOwnParams (const Handle(IGESSolid_BooleanTree)& ent, const Handle(IGESData_IGESReaderData)& IR, IGESData_ParamReader& PR)  const;
  
  //! Writes own parameters to IGESWriter
  Standard_EXPORT   void WriteOwnParams (const Handle(IGESSolid_BooleanTree)& ent, IGESData_IGESWriter& IW)  const;
  
  //! Lists the Entities shared by a BooleanTree <ent>, from
  //! its specific (own) parameters
  Standard_EXPORT   void OwnShared (const Handle(IGESSolid_BooleanTree)& ent, Interface_EntityIterator& iter)  const;
  
  //! Returns specific DirChecker
  Standard_EXPORT   IGESData_DirChecker DirChecker (const Handle(IGESSolid_BooleanTree)& ent)  const;
  
  //! Performs Specific Semantic Check
  Standard_EXPORT   void OwnCheck (const Handle(IGESSolid_BooleanTree)& ent, const Interface_ShareTool& shares, Handle(Interface_Check)& ach)  const;
  
  //! Copies Specific Parameters
  Standard_EXPORT   void OwnCopy (const Handle(IGESSolid_BooleanTree)& entfrom, const Handle(IGESSolid_BooleanTree)& entto, Interface_CopyTool& TC)  const;
  
  //! Dump of Specific Parameters
  Standard_EXPORT   void OwnDump (const Handle(IGESSolid_BooleanTree)& ent, const IGESData_IGESDumper& dumper, const Handle(Message_Messenger)& S, const Standard_Integer own)  const;




protected:





private:





};







#endif // _IGESSolid_ToolBooleanTree_HeaderFile
