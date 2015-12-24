// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESBasic_ReadWriteModule_HeaderFile
#define _IGESBasic_ReadWriteModule_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IGESBasic/Handle_IGESBasic_ReadWriteModule.hxx>

#include <DataExchange/IGESData/IGESData_ReadWriteModule.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <DataExchange/IGESData/Handle_IGESData_IGESEntity.hxx>
#include <DataExchange/IGESData/Handle_IGESData_IGESReaderData.hxx>
class Standard_DomainError;
class IGESData_IGESEntity;
class IGESData_IGESReaderData;
class IGESData_ParamReader;
class IGESData_IGESWriter;


//! Defines basic File Access Module for IGESBasic (specific parts)
//! Specific actions concern : Read and Write Own Parameters of
//! an IGESEntity.
class IGESBasic_ReadWriteModule : public IGESData_ReadWriteModule
{

public:

  
  //! Creates a ReadWriteModule & puts it into ReaderLib & WriterLib
  Standard_EXPORT IGESBasic_ReadWriteModule();
  
  //! Defines Case Numbers for Entities of IGESBasic
  Standard_EXPORT   Standard_Integer CaseIGES (const Standard_Integer typenum, const Standard_Integer formnum)  const;
  
  //! Reads own parameters from file for an Entity of IGESBasic
  Standard_EXPORT   void ReadOwnParams (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent, const Handle(IGESData_IGESReaderData)& IR, IGESData_ParamReader& PR)  const;
  
  //! Writes own parameters to IGESWriter
  Standard_EXPORT   void WriteOwnParams (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent, IGESData_IGESWriter& IW)  const;




  DEFINE_STANDARD_RTTI(IGESBasic_ReadWriteModule)

protected:




private: 




};







#endif // _IGESBasic_ReadWriteModule_HeaderFile
