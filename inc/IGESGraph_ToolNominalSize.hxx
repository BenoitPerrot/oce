// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGraph_ToolNominalSize_HeaderFile
#define _IGESGraph_ToolNominalSize_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_IGESGraph_NominalSize.hxx>
#include <Handle_IGESData_IGESReaderData.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Interface_Check.hxx>
#include <Handle_Message_Messenger.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_DomainError;
class IGESGraph_NominalSize;
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


//! Tool to work on a NominalSize. Called by various Modules
//! (ReadWriteModule, GeneralModule, SpecificModule)
class IGESGraph_ToolNominalSize 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a ToolNominalSize, ready to work
  Standard_EXPORT IGESGraph_ToolNominalSize();
  
  //! Reads own parameters from file. <PR> gives access to them,
  //! <IR> detains parameter types and values
  Standard_EXPORT   void ReadOwnParams (const Handle(IGESGraph_NominalSize)& ent, const Handle(IGESData_IGESReaderData)& IR, IGESData_ParamReader& PR)  const;
  
  //! Writes own parameters to IGESWriter
  Standard_EXPORT   void WriteOwnParams (const Handle(IGESGraph_NominalSize)& ent, IGESData_IGESWriter& IW)  const;
  
  //! Lists the Entities shared by a NominalSize <ent>, from
  //! its specific (own) parameters
  Standard_EXPORT   void OwnShared (const Handle(IGESGraph_NominalSize)& ent, Interface_EntityIterator& iter)  const;
  
  //! Sets automatic unambiguous Correction on a NominalSize
  //! (NbPropertyValues forced to 2 or 3 according HasStandardName)
  Standard_EXPORT   Standard_Boolean OwnCorrect (const Handle(IGESGraph_NominalSize)& ent)  const;
  
  //! Returns specific DirChecker
  Standard_EXPORT   IGESData_DirChecker DirChecker (const Handle(IGESGraph_NominalSize)& ent)  const;
  
  //! Performs Specific Semantic Check
  Standard_EXPORT   void OwnCheck (const Handle(IGESGraph_NominalSize)& ent, const Interface_ShareTool& shares, Handle(Interface_Check)& ach)  const;
  
  //! Copies Specific Parameters
  Standard_EXPORT   void OwnCopy (const Handle(IGESGraph_NominalSize)& entfrom, const Handle(IGESGraph_NominalSize)& entto, Interface_CopyTool& TC)  const;
  
  //! Dump of Specific Parameters
  Standard_EXPORT   void OwnDump (const Handle(IGESGraph_NominalSize)& ent, const IGESData_IGESDumper& dumper, const Handle(Message_Messenger)& S, const Standard_Integer own)  const;




protected:





private:





};







#endif // _IGESGraph_ToolNominalSize_HeaderFile
