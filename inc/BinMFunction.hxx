// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinMFunction_HeaderFile
#define _BinMFunction_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_BinMDF_ADriverTable.hxx>
#include <Handle_CDM_MessageDriver.hxx>
class BinMDF_ADriverTable;
class CDM_MessageDriver;
class BinMFunction_FunctionDriver;
class BinMFunction_GraphNodeDriver;
class BinMFunction_ScopeDriver;


//! Storage and Retrieval drivers for TFunction modelling attributes.
class BinMFunction 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Adds the attribute drivers to <theDriverTable>.
  Standard_EXPORT static   void AddDrivers (const Handle(BinMDF_ADriverTable)& theDriverTable, const Handle(CDM_MessageDriver)& aMsgDrv) ;




protected:





private:




friend class BinMFunction_FunctionDriver;
friend class BinMFunction_GraphNodeDriver;
friend class BinMFunction_ScopeDriver;

};







#endif // _BinMFunction_HeaderFile
