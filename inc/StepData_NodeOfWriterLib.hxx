// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepData_NodeOfWriterLib_HeaderFile
#define _StepData_NodeOfWriterLib_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepData_NodeOfWriterLib.hxx>

#include <Handle_StepData_GlobalNodeOfWriterLib.hxx>
#include <Handle_StepData_NodeOfWriterLib.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepData_ReadWriteModule.hxx>
#include <Handle_StepData_Protocol.hxx>
class StepData_GlobalNodeOfWriterLib;
class Standard_Transient;
class StepData_ReadWriteModule;
class StepData_Protocol;
class StepData_WriterLib;



class StepData_NodeOfWriterLib : public MMgt_TShared
{

public:

  
  Standard_EXPORT StepData_NodeOfWriterLib();
  
  Standard_EXPORT   void AddNode (const Handle(StepData_GlobalNodeOfWriterLib)& anode) ;
  
  Standard_EXPORT  const  Handle(StepData_ReadWriteModule)& Module()  const;
  
  Standard_EXPORT  const  Handle(StepData_Protocol)& Protocol()  const;
  
  Standard_EXPORT  const  Handle(StepData_NodeOfWriterLib)& Next()  const;




  DEFINE_STANDARD_RTTI(StepData_NodeOfWriterLib)

protected:




private: 


  Handle(StepData_GlobalNodeOfWriterLib) thenode;
  Handle(StepData_NodeOfWriterLib) thenext;


};







#endif // _StepData_NodeOfWriterLib_HeaderFile
