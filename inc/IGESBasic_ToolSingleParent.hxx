// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESBasic_ToolSingleParent_HeaderFile
#define _IGESBasic_ToolSingleParent_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_IGESBasic_SingleParent.hxx>
#include <Handle_IGESData_IGESReaderData.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Interface_Check.hxx>
#include <Handle_Message_Messenger.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_DomainError;
class IGESBasic_SingleParent;
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


//! Tool to work on a SingleParent. Called by various Modules
//! (ReadWriteModule, GeneralModule, SpecificModule)
class IGESBasic_ToolSingleParent 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a ToolSingleParent, ready to work
  Standard_EXPORT IGESBasic_ToolSingleParent();
  
  //! Reads own parameters from file. <PR> gives access to them,
  //! <IR> detains parameter types and values
  Standard_EXPORT   void ReadOwnParams (const Handle(IGESBasic_SingleParent)& ent, const Handle(IGESData_IGESReaderData)& IR, IGESData_ParamReader& PR)  const;
  
  //! Writes own parameters to IGESWriter
  Standard_EXPORT   void WriteOwnParams (const Handle(IGESBasic_SingleParent)& ent, IGESData_IGESWriter& IW)  const;
  
  //! Lists the Entities shared by a SingleParent <ent>, from
  //! its specific (own) parameters
  Standard_EXPORT   void OwnShared (const Handle(IGESBasic_SingleParent)& ent, Interface_EntityIterator& iter)  const;
  
  //! Sets automatic unambiguous Correction on a SingleParent
  //! (NbParents forced to 1)
  Standard_EXPORT   Standard_Boolean OwnCorrect (const Handle(IGESBasic_SingleParent)& ent)  const;
  
  //! Returns specific DirChecker
  Standard_EXPORT   IGESData_DirChecker DirChecker (const Handle(IGESBasic_SingleParent)& ent)  const;
  
  //! Performs Specific Semantic Check
  Standard_EXPORT   void OwnCheck (const Handle(IGESBasic_SingleParent)& ent, const Interface_ShareTool& shares, Handle(Interface_Check)& ach)  const;
  
  //! Copies Specific Parameters
  Standard_EXPORT   void OwnCopy (const Handle(IGESBasic_SingleParent)& entfrom, const Handle(IGESBasic_SingleParent)& entto, Interface_CopyTool& TC)  const;
  
  //! Dump of Specific Parameters
  Standard_EXPORT   void OwnDump (const Handle(IGESBasic_SingleParent)& ent, const IGESData_IGESDumper& dumper, const Handle(Message_Messenger)& S, const Standard_Integer own)  const;




protected:





private:





};







#endif // _IGESBasic_ToolSingleParent_HeaderFile
