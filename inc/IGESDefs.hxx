// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDefs_HeaderFile
#define _IGESDefs_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_IGESDefs_Protocol.hxx>
class IGESDefs_Protocol;
class IGESDefs_AssociativityDef;
class IGESDefs_MacroDef;
class IGESDefs_UnitsData;
class IGESDefs_AttributeDef;
class IGESDefs_TabularData;
class IGESDefs_GenericData;
class IGESDefs_AttributeTable;
class IGESDefs_ToolAssociativityDef;
class IGESDefs_ToolMacroDef;
class IGESDefs_ToolUnitsData;
class IGESDefs_ToolAttributeDef;
class IGESDefs_ToolTabularData;
class IGESDefs_ToolGenericData;
class IGESDefs_ToolAttributeTable;
class IGESDefs_Protocol;
class IGESDefs_ReadWriteModule;
class IGESDefs_GeneralModule;
class IGESDefs_SpecificModule;
class IGESDefs_Array1OfTabularData;
class IGESDefs_HArray1OfTabularData;
class IGESDefs_HArray1OfHArray1OfTextDisplayTemplate;


//! To embody general definitions of Entities
//! (Parameters, Tables ...)
class IGESDefs 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Prepares dynamic data (Protocol, Modules) for this package
  Standard_EXPORT static   void Init() ;
  
  //! Returns the Protocol for this Package
  Standard_EXPORT static   Handle(IGESDefs_Protocol) Protocol() ;




protected:





private:




friend class IGESDefs_AssociativityDef;
friend class IGESDefs_MacroDef;
friend class IGESDefs_UnitsData;
friend class IGESDefs_AttributeDef;
friend class IGESDefs_TabularData;
friend class IGESDefs_GenericData;
friend class IGESDefs_AttributeTable;
friend class IGESDefs_ToolAssociativityDef;
friend class IGESDefs_ToolMacroDef;
friend class IGESDefs_ToolUnitsData;
friend class IGESDefs_ToolAttributeDef;
friend class IGESDefs_ToolTabularData;
friend class IGESDefs_ToolGenericData;
friend class IGESDefs_ToolAttributeTable;
friend class IGESDefs_Protocol;
friend class IGESDefs_ReadWriteModule;
friend class IGESDefs_GeneralModule;
friend class IGESDefs_SpecificModule;
friend class IGESDefs_Array1OfTabularData;
friend class IGESDefs_HArray1OfTabularData;
friend class IGESDefs_HArray1OfHArray1OfTextDisplayTemplate;

};







#endif // _IGESDefs_HeaderFile
