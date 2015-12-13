// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESBasic_HeaderFile
#define _IGESBasic_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_IGESBasic_Protocol.hxx>
class IGESBasic_Protocol;
class IGESBasic_SubfigureDef;
class IGESBasic_Group;
class IGESBasic_GroupWithoutBackP;
class IGESBasic_SingleParent;
class IGESBasic_ExternalRefFileIndex;
class IGESBasic_OrderedGroup;
class IGESBasic_OrderedGroupWithoutBackP;
class IGESBasic_Hierarchy;
class IGESBasic_ExternalReferenceFile;
class IGESBasic_Name;
class IGESBasic_AssocGroupType;
class IGESBasic_SingularSubfigure;
class IGESBasic_ExternalRefFileName;
class IGESBasic_ExternalRefFile;
class IGESBasic_ExternalRefName;
class IGESBasic_ExternalRefLibName;
class IGESBasic_ToolSubfigureDef;
class IGESBasic_ToolGroup;
class IGESBasic_ToolGroupWithoutBackP;
class IGESBasic_ToolSingleParent;
class IGESBasic_ToolExternalRefFileIndex;
class IGESBasic_ToolOrderedGroup;
class IGESBasic_ToolOrderedGroupWithoutBackP;
class IGESBasic_ToolHierarchy;
class IGESBasic_ToolExternalReferenceFile;
class IGESBasic_ToolName;
class IGESBasic_ToolAssocGroupType;
class IGESBasic_ToolSingularSubfigure;
class IGESBasic_ToolExternalRefFileName;
class IGESBasic_ToolExternalRefFile;
class IGESBasic_ToolExternalRefName;
class IGESBasic_ToolExternalRefLibName;
class IGESBasic_Protocol;
class IGESBasic_ReadWriteModule;
class IGESBasic_GeneralModule;
class IGESBasic_SpecificModule;
class IGESBasic_Array2OfHArray1OfReal;
class IGESBasic_Array1OfLineFontEntity;
class IGESBasic_HArray1OfHArray1OfInteger;
class IGESBasic_HArray1OfHArray1OfReal;
class IGESBasic_HArray1OfHArray1OfXY;
class IGESBasic_HArray1OfHArray1OfXYZ;
class IGESBasic_HArray2OfHArray1OfReal;
class IGESBasic_HArray1OfHArray1OfIGESEntity;
class IGESBasic_HArray1OfLineFontEntity;


//! This package represents basic entities from IGES
class IGESBasic 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Prepares dynqmic data (Protocol, Modules) for this package
  Standard_EXPORT static   void Init() ;
  
  //! Returns the Protocol for this Package
  Standard_EXPORT static   Handle(IGESBasic_Protocol) Protocol() ;




protected:





private:




friend class IGESBasic_SubfigureDef;
friend class IGESBasic_Group;
friend class IGESBasic_GroupWithoutBackP;
friend class IGESBasic_SingleParent;
friend class IGESBasic_ExternalRefFileIndex;
friend class IGESBasic_OrderedGroup;
friend class IGESBasic_OrderedGroupWithoutBackP;
friend class IGESBasic_Hierarchy;
friend class IGESBasic_ExternalReferenceFile;
friend class IGESBasic_Name;
friend class IGESBasic_AssocGroupType;
friend class IGESBasic_SingularSubfigure;
friend class IGESBasic_ExternalRefFileName;
friend class IGESBasic_ExternalRefFile;
friend class IGESBasic_ExternalRefName;
friend class IGESBasic_ExternalRefLibName;
friend class IGESBasic_ToolSubfigureDef;
friend class IGESBasic_ToolGroup;
friend class IGESBasic_ToolGroupWithoutBackP;
friend class IGESBasic_ToolSingleParent;
friend class IGESBasic_ToolExternalRefFileIndex;
friend class IGESBasic_ToolOrderedGroup;
friend class IGESBasic_ToolOrderedGroupWithoutBackP;
friend class IGESBasic_ToolHierarchy;
friend class IGESBasic_ToolExternalReferenceFile;
friend class IGESBasic_ToolName;
friend class IGESBasic_ToolAssocGroupType;
friend class IGESBasic_ToolSingularSubfigure;
friend class IGESBasic_ToolExternalRefFileName;
friend class IGESBasic_ToolExternalRefFile;
friend class IGESBasic_ToolExternalRefName;
friend class IGESBasic_ToolExternalRefLibName;
friend class IGESBasic_Protocol;
friend class IGESBasic_ReadWriteModule;
friend class IGESBasic_GeneralModule;
friend class IGESBasic_SpecificModule;
friend class IGESBasic_Array2OfHArray1OfReal;
friend class IGESBasic_Array1OfLineFontEntity;
friend class IGESBasic_HArray1OfHArray1OfInteger;
friend class IGESBasic_HArray1OfHArray1OfReal;
friend class IGESBasic_HArray1OfHArray1OfXY;
friend class IGESBasic_HArray1OfHArray1OfXYZ;
friend class IGESBasic_HArray2OfHArray1OfReal;
friend class IGESBasic_HArray1OfHArray1OfIGESEntity;
friend class IGESBasic_HArray1OfLineFontEntity;

};







#endif // _IGESBasic_HeaderFile
