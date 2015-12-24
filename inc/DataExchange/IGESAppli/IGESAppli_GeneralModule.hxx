// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_GeneralModule_HeaderFile
#define _IGESAppli_GeneralModule_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IGESAppli/Handle_IGESAppli_GeneralModule.hxx>

#include <DataExchange/IGESData/IGESData_GeneralModule.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <DataExchange/IGESData/Handle_IGESData_IGESEntity.hxx>
#include <DataExchange/Interface/Handle_Interface_Check.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
class IGESData_IGESEntity;
class Interface_EntityIterator;
class IGESData_DirChecker;
class Interface_ShareTool;
class Interface_Check;
class Standard_Transient;
class Interface_CopyTool;


//! Definition of General Services for IGESAppli (specific part)
//! This Services comprise : Shared & Implied Lists, Copy, Check
class IGESAppli_GeneralModule : public IGESData_GeneralModule
{

public:

  
  //! Creates a GeneralModule from IGESAppli and puts it into GeneralLib
  Standard_EXPORT IGESAppli_GeneralModule();
  
  //! Lists the Entities shared by a given IGESEntity <ent>, from
  //! its specific parameters : specific for each type
  Standard_EXPORT   void OwnSharedCase (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent, Interface_EntityIterator& iter)  const;
  
  //! Returns a DirChecker, specific for each type of Entity
  //! (identified by its Case Number) : this DirChecker defines
  //! constraints which must be respected by the DirectoryPart
  Standard_EXPORT   IGESData_DirChecker DirChecker (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent)  const;
  
  //! Performs Specific Semantic Check for each type of Entity
  Standard_EXPORT   void OwnCheckCase (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent, const Interface_ShareTool& shares, Handle(Interface_Check)& ach)  const;
  
  //! Specific creation of a new void entity
  Standard_EXPORT   Standard_Boolean NewVoid (const Standard_Integer CN, Handle(Standard_Transient)& entto)  const;
  
  //! Copies parameters which are specific of each Type of Entity
  Standard_EXPORT   void OwnCopyCase (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& entfrom, const Handle(IGESData_IGESEntity)& entto, Interface_CopyTool& TC)  const;
  
  //! Returns a category number which characterizes an entity
  //! FEA for : ElementResults,FiniteElement,Node&Co
  //! Piping for : Flow & Co
  //! Professional for : others (in fact Schematics)
  Standard_EXPORT virtual   Standard_Integer CategoryNumber (const Standard_Integer CN, const Handle(Standard_Transient)& ent, const Interface_ShareTool& shares)  const;




  DEFINE_STANDARD_RTTI(IGESAppli_GeneralModule)

protected:




private: 




};







#endif // _IGESAppli_GeneralModule_HeaderFile
