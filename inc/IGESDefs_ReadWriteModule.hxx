// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDefs_ReadWriteModule_HeaderFile
#define _IGESDefs_ReadWriteModule_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESDefs_ReadWriteModule.hxx>

#include <DataExchange/IGESData/IGESData_ReadWriteModule.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_IGESData_IGESEntity.hxx>
#include <Handle_IGESData_IGESReaderData.hxx>
class Standard_DomainError;
class IGESData_IGESEntity;
class IGESData_IGESReaderData;
class IGESData_ParamReader;
class IGESData_IGESWriter;


//! Defines Defs File Access Module for IGESDefs (specific parts)
//! Specific actions concern : Read and Write Own Parameters of
//! an IGESEntity.
class IGESDefs_ReadWriteModule : public IGESData_ReadWriteModule
{

public:

  
  //! Creates a ReadWriteModule & puts it into ReaderLib & WriterLib
  Standard_EXPORT IGESDefs_ReadWriteModule();
  
  //! Defines Case Numbers for Entities of IGESDefs
  Standard_EXPORT   Standard_Integer CaseIGES (const Standard_Integer typenum, const Standard_Integer formnum)  const;
  
  //! Reads own parameters from file for an Entity of IGESDefs
  Standard_EXPORT   void ReadOwnParams (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent, const Handle(IGESData_IGESReaderData)& IR, IGESData_ParamReader& PR)  const;
  
  //! Writes own parameters to IGESWriter
  Standard_EXPORT   void WriteOwnParams (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent, IGESData_IGESWriter& IW)  const;




  DEFINE_STANDARD_RTTI(IGESDefs_ReadWriteModule)

protected:




private: 




};







#endif // _IGESDefs_ReadWriteModule_HeaderFile
