// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESData_WriterLib_HeaderFile
#define _IGESData_WriterLib_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/IGESData/Handle_IGESData_NodeOfWriterLib.hxx>
#include <DataExchange/IGESData/Handle_IGESData_IGESEntity.hxx>
#include <DataExchange/IGESData/Handle_IGESData_ReadWriteModule.hxx>
#include <DataExchange/IGESData/Handle_IGESData_Protocol.hxx>
#include <DataExchange/IGESData/Handle_IGESData_GlobalNodeOfWriterLib.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class IGESData_NodeOfWriterLib;
class Standard_NoSuchObject;
class IGESData_IGESEntity;
class IGESData_ReadWriteModule;
class IGESData_Protocol;
class IGESData_GlobalNodeOfWriterLib;
class Standard_Transient;



class IGESData_WriterLib 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   void SetGlobal (const Handle(IGESData_ReadWriteModule)& amodule, const Handle(IGESData_Protocol)& aprotocol) ;
  
  Standard_EXPORT IGESData_WriterLib(const Handle(IGESData_Protocol)& aprotocol);
  
  Standard_EXPORT IGESData_WriterLib();
  
  Standard_EXPORT   void AddProtocol (const Handle(Standard_Transient)& aprotocol) ;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void SetComplete() ;
  
  Standard_EXPORT   Standard_Boolean Select (const Handle(IGESData_IGESEntity)& obj, Handle(IGESData_ReadWriteModule)& module, Standard_Integer& CN)  const;
  
  Standard_EXPORT   void Start() ;
  
  Standard_EXPORT   Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT  const  Handle(IGESData_ReadWriteModule)& Module()  const;
  
  Standard_EXPORT  const  Handle(IGESData_Protocol)& Protocol()  const;




protected:





private:



  Handle(IGESData_NodeOfWriterLib) thelist;
  Handle(IGESData_NodeOfWriterLib) thecurr;


};







#endif // _IGESData_WriterLib_HeaderFile
